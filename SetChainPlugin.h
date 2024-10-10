#ifndef SETCHAINPLUGIN_H
#define SETCHAINPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class SetChainPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "SetChain";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
