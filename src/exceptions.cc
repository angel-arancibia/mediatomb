/*MT*
    
    MediaTomb - http://www.mediatomb.cc/
    
    exceptions.cc - this file is part of MediaTomb.
    
    Copyright (C) 2005 Gena Batyan <bgeradz@mediatomb.cc>,
                       Sergey 'Jin' Bostandzhyan <jin@mediatomb.cc>
    
    Copyright (C) 2006-2010 Gena Batyan <bgeradz@mediatomb.cc>,
                            Sergey 'Jin' Bostandzhyan <jin@mediatomb.cc>,
                            Leonhard Wimmer <leo@mediatomb.cc>
    
    MediaTomb is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License version 2
    as published by the Free Software Foundation.
    
    MediaTomb is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    version 2 along with MediaTomb; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.
    
    $Id: exceptions.cc 2081 2010-03-23 20:18:00Z lww $
*/

/// \file exceptions.cc

#ifdef HAVE_CONFIG_H
    #include "autoconfig.h"
#endif

#include "exceptions.h"

using namespace zmm;

UpnpException::UpnpException(int errCode, String message) : Exception(message)
{
    this->errCode = errCode;
}
UpnpException::UpnpException(int errCode, String message, const char *file, int line, const char *function) : 
    Exception(message, file, line, function)
{
    this->errCode = errCode;
}
