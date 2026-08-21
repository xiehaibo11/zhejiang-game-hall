
void FUN_00a0ced4(long param_1)

{
  Service *this;
  char *pcVar1;
  GuoPengFei *this_00;
  
  this_00 = *(GuoPengFei **)(param_1 + 8);
  if (0 < *(int *)(this_00 + 0x460)) {
    *(int *)(this_00 + 0x460) = *(int *)(this_00 + 0x460) + -1;
    this = (Service *)universe::core::Service::getInstance();
    universe::core::Service::performInNextLoop(this,this_00 + 0x470);
    return;
  }
  pcVar1 = (char *)universe::Translated::getInstance();
  universe::Translated::log(pcVar1,&DAT_012f9068,(ulong)*(uint *)(this_00 + 0x45c));
  if (this_00 != (GuoPengFei *)0x0) {
    universe::network::GuoPengFei::~GuoPengFei(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}

