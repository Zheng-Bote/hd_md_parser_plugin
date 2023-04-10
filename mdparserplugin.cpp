#include "mdparserplugin.h"

MdParserPlugin::MdParserPlugin(QObject *parent)
{
    Q_UNUSED(parent);
    qInfo() << "Plugin Constructor";
}

MdParserPlugin::~MdParserPlugin()
{
    qInfo() << "Plugin Deconstructed";
}

void MdParserPlugin::test(QString name)
{
    qInfo() << "Test from Plugin: " << name;
}

QString MdParserPlugin::getName()
{
    return "markdown";
}

void MdParserPlugin::parseFile(QString pathToFile)
{
    qInfo() << "MdParserPlugin::parseFile: " << pathToFile;
}

void MdParserPlugin::writeFile(QString pathToFile)
{
    qInfo() << "MdParserPlugin::writeFile: " << pathToFile;
}

