// Create 5-way switches
std::vector<const char*> modelOptions = {"Model 1", "Model 2", "Model 3", "Model 4", "Model 5"};
std::vector<const char*> irOptions = {"IR 1", "IR 2", "IR 3", "IR 4", "IR 5"};
auto modelSwitch = new IVTabSwitchControl(modelSwitchArea, kModelSelector, modelOptions, "", style);
auto irSwitch = new IVTabSwitchControl(irSwitchArea, kIRSelector, irOptions, "", style);