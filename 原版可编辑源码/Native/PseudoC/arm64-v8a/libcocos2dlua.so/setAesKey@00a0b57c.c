
/* universe::network::GuoPengFei::setAesKey(char const*, unsigned long) */

void __thiscall
universe::network::GuoPengFei::setAesKey(GuoPengFei *this,char *param_1,ulong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)Translated::getInstance();
  Translated::log(pcVar1,"GuoPengFei: delete 31");
  BaseProxy::setAesKey(*(BaseProxy **)(this + 0x3b0),(uchar *)param_1,param_2);
  return;
}

