
void FUN_00a08e3c(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  GuoPengFei *this;
  
  if (param_2 == -0x7d) {
    return;
  }
  this = (GuoPengFei *)*param_1;
  if (this == (GuoPengFei *)0x0) {
    pcVar1 = (char *)universe::Translated::getInstance();
    universe::Translated::log(pcVar1,&LAB_012f8fec);
    free(param_1);
    return;
  }
  if (param_2 != 0) {
    pcVar1 = (char *)universe::Translated::getInstance();
    uVar2 = uv_err_name(param_2);
    universe::Translated::log(pcVar1,"connect server error. %s",uVar2);
  }
  universe::network::GuoPengFei::onConnect(this,param_2 == 0);
  return;
}

