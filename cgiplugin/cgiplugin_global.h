#ifndef CGIPLUGIN_GLOBAL_H
#define CGIPLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CGIPLUGIN_LIBRARY)
#  define CGIPLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define CGIPLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // CGIPLUGIN_GLOBAL_H
