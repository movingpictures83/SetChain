#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "SetChainPlugin.h"

void SetChainPlugin::input(std::string file) {
 inputfile = file;
readParameterFile(file);
}

void SetChainPlugin::run() {}

void SetChainPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "pdb_setchain";
myCommand += " -v CHAIN=";
addRequiredParameterNoFlag("chain");
addRequiredParameterNoFlag("pdbfile");
myCommand += " >& "+outputfile;
 system(myCommand.c_str());
}

PluginProxy<SetChainPlugin> SetChainPluginProxy = PluginProxy<SetChainPlugin>("SetChain", PluginManager::getInstance());
