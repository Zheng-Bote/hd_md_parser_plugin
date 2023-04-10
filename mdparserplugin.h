#ifndef MDPARSERPLUGIN_H
#define MDPARSERPLUGIN_H

#include <QObject>
#include <QtPlugin>
#include <QDebug>
#include <QString>
#include "rz_header_docu_plugins.h"

class MdParserPlugin: public QObject, public Plugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "net.hase-zheng.header_docu_plugin");
    Q_INTERFACES(Plugin);

public:
    explicit MdParserPlugin(QObject *parent = nullptr);
    ~MdParserPlugin();

signals:
public slots:


    // Plugin interface
public:
    void test(QString name) Q_DECL_OVERRIDE;
    QString getName() Q_DECL_OVERRIDE;
    void parseFile(QString pathToFile) Q_DECL_OVERRIDE;
    void writeFile(QString pathToFile) Q_DECL_OVERRIDE;
};

#endif // MDPARSERPLUGIN_H
