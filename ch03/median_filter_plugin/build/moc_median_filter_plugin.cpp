/****************************************************************************
** Meta object code from reading C++ file 'median_filter_plugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../median_filter_plugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'median_filter_plugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MedianFilterPlugin_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MedianFilterPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MedianFilterPlugin_t qt_meta_stringdata_MedianFilterPlugin = {
    {
QT_MOC_LITERAL(0, 0, 18) // "MedianFilterPlugin"

    },
    "MedianFilterPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MedianFilterPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MedianFilterPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MedianFilterPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MedianFilterPlugin.data,
      qt_meta_data_MedianFilterPlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MedianFilterPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MedianFilterPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MedianFilterPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "CvPluginInterface"))
        return static_cast< CvPluginInterface*>(this);
    if (!strcmp(_clname, "com.amin.cvplugininterface"))
        return static_cast< CvPluginInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int MedianFilterPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xd4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xc0, 0x00, 0x00, 0x00, 0x13, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x1a, 0x00, 0x00, 0x00, 'c',  0x00, 'o',  0x00,
    'm',  0x00, '.',  0x00, 'a',  0x00, 'm',  0x00,
    'i',  0x00, 'n',  0x00, '.',  0x00, 'c',  0x00,
    'v',  0x00, 'p',  0x00, 'l',  0x00, 'u',  0x00,
    'g',  0x00, 'i',  0x00, 'n',  0x00, 'i',  0x00,
    'n',  0x00, 't',  0x00, 'e',  0x00, 'r',  0x00,
    'f',  0x00, 'a',  0x00, 'c',  0x00, 'e',  0x00,
    0x13, 0x0c, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x12, 0x00, 0x00, 0x00, 'M',  0x00, 'e',  0x00,
    'd',  0x00, 'i',  0x00, 'a',  0x00, 'n',  0x00,
    'F',  0x00, 'i',  0x00, 'l',  0x00, 't',  0x00,
    'e',  0x00, 'r',  0x00, 'P',  0x00, 'l',  0x00,
    'u',  0x00, 'g',  0x00, 'i',  0x00, 'n',  0x00,
    ':',  '`',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x16, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00,
    'P',  0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00,
    0x88, 0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xd4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xc0, 0x00, 0x00, 0x00, 0x13, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x1a, 0x00, 0x00, 0x00, 'c',  0x00, 'o',  0x00,
    'm',  0x00, '.',  0x00, 'a',  0x00, 'm',  0x00,
    'i',  0x00, 'n',  0x00, '.',  0x00, 'c',  0x00,
    'v',  0x00, 'p',  0x00, 'l',  0x00, 'u',  0x00,
    'g',  0x00, 'i',  0x00, 'n',  0x00, 'i',  0x00,
    'n',  0x00, 't',  0x00, 'e',  0x00, 'r',  0x00,
    'f',  0x00, 'a',  0x00, 'c',  0x00, 'e',  0x00,
    0x15, 0x0c, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x93, 0x0f, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x12, 0x00, 0x00, 0x00,
    'M',  0x00, 'e',  0x00, 'd',  0x00, 'i',  0x00,
    'a',  0x00, 'n',  0x00, 'F',  0x00, 'i',  0x00,
    'l',  0x00, 't',  0x00, 'e',  0x00, 'r',  0x00,
    'P',  0x00, 'l',  0x00, 'u',  0x00, 'g',  0x00,
    'i',  0x00, 'n',  0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    ':',  '`',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 'P',  0x00, 0x00, 0x00,
    'l',  0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00,
    0xb0, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(MedianFilterPlugin, MedianFilterPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
