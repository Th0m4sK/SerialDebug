    
    /*
    This file is part of SerialDebug Libary  
    SerialDebug Libary is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    SerialDebug Libary is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with SerialDebug Libary.  If not, see <http://www.gnu.org/licenses/>.

    Diese Datei ist Teil von Fubar.

    Fubar ist Freie Software: Sie können es unter den Bedingungen
    der GNU General Public License, wie von der Free Software Foundation,
    Version 3 der Lizenz oder (nach Ihrer Wahl) jeder neueren
    veröffentlichten Version, weiter verteilen und/oder modifizieren.

    Fubar wird in der Hoffnung, dass es nützlich sein wird, aber
    OHNE JEDE GEWÄHRLEISTUNG, bereitgestellt; sogar ohne die implizite
    Gewährleistung der MARKTFÄHIGKEIT oder EIGNUNG FÜR EINEN BESTIMMTEN ZWECK.
    Siehe die GNU General Public License für weitere Details.

    Sie sollten eine Kopie der GNU General Public License zusammen mit diesem
    Programm erhalten haben. Wenn nicht, siehe <https://www.gnu.org/licenses/>.*/




#ifndef SERIALDEBUG_h
#define SERIALDEBUG_h
#include "Arduino.h"

enum LEVEL
{
  ALL = 0,
  DEBUG = 1,
  WARN = 2,
  ERROR = 3,
  OFF = 4,
};

class SerialDebug
{
private:
  int debug_level;

public:
  SerialDebug(LEVEL level);
  void print(String Header, String Message, byte lvl);
  void setDebugLevel(LEVEL Lvl);
  ~SerialDebug();


};

#endif