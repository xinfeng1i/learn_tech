/****************************************************************************
** Resource object code
**
** Created: Sat Jun 8 20:41:08 2013
**      by: The Resource Compiler for Qt version 4.8.3
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtCore/qglobal.h>

static const unsigned char qt_resource_data[] = {
  // /home/python27/Documents/learn_tech/learn_qt/FindCrap/ReadMe.txt
  0x0,0x0,0x0,0x33,
  0x52,
  0x65,0x61,0x64,0x20,0x4d,0x65,0x20,0x3a,0xa,0x48,0x65,0x6c,0x6c,0x6f,0x2c,0x20,
  0x77,0x6f,0x72,0x6c,0x64,0x20,0x21,0xa,0x70,0x79,0x74,0x68,0x6f,0x6e,0x32,0x37,
  0x2e,0xa,0x68,0x65,0x6c,0x6c,0x6f,0x2c,0x20,0x77,0x6f,0x72,0x6c,0x64,0x20,0x21,
  0xa,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // ReadMe.txt
  0x0,0xa,
  0x9,0x3f,0x4d,0x14,
  0x0,0x52,
  0x0,0x65,0x0,0x61,0x0,0x64,0x0,0x4d,0x0,0x65,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
  // :/ReadMe.txt
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,

};

QT_BEGIN_NAMESPACE

extern Q_CORE_EXPORT bool qRegisterResourceData
    (int, const unsigned char *, const unsigned char *, const unsigned char *);

extern Q_CORE_EXPORT bool qUnregisterResourceData
    (int, const unsigned char *, const unsigned char *, const unsigned char *);

QT_END_NAMESPACE


int QT_MANGLE_NAMESPACE(qInitResources_findcrap)()
{
    QT_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_findcrap))

int QT_MANGLE_NAMESPACE(qCleanupResources_findcrap)()
{
    QT_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

Q_DESTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qCleanupResources_findcrap))

