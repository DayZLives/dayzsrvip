/*
 * DayZ Server IP - TeamSpeak 3 plugin
 *
 * https://github.com/dehesselle/dayzsrvip
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <QString>
#include <QStringList>
#include "IniFile.h"

class Player
{
public:
   Player();

   static const IniFile::KeyValue INI_DAYZ_PROFILE;

   bool importFromFile(QString filename);
   QString toMessage();
   QStringList toLocalInfo();

   QString m_dayzName;
   QString m_ts3Name;
   QString m_serverName;
   QString m_serverIp;
   QString m_timestamp;

   bool m_isChanged;

private:
   void updateTimestamp();
   void updateChanged();

   QString m_dayzNameOld;
   QString m_serverNameOld;
   QString m_serverIpOld;

   QString m_filename;
};

#endif // PLAYER_H
