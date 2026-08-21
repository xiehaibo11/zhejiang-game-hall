
/* universe::network::GuoPengFei::onRead(char*, unsigned long) */

void __thiscall universe::network::GuoPengFei::onRead(GuoPengFei *this,char *param_1,ulong param_2)

{
  char *pcVar1;
  
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,"GuoPengFei: delete 6");
  }
  if (param_1 != (char *)0x0) {
    *(ulong *)(this + 0x380) = *(long *)(this + 0x380) + param_2;
    translateMessage(this);
    dispatchMessage(this);
    return;
  }
  close(this);
  return;
}

