
/* universe::network::GuoPengFei::sendMessage(int, int, int, universe::network::AUpdates*) */

uint __thiscall
universe::network::GuoPengFei::sendMessage
          (GuoPengFei *this,int param_1,int param_2,int param_3,AUpdates *param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  ZhouLuJun *pZVar4;
  void *__src;
  size_t __n;
  undefined8 uVar5;
  Everywhere *this_00;
  
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar3 = (char *)Translated::getInstance();
    Translated::log(pcVar3,"GuoPengFei: delete 13 %d",(ulong)*(uint *)(this + 0x45c));
  }
  if (IncludeSymbols::getInstance()::s_MessagePool == (IncludeSymbols *)0x0) {
    IncludeSymbols::getInstance()::s_MessagePool = operator_new(0x30);
    *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 8) = 0;
    *(undefined8 *)IncludeSymbols::getInstance()::s_MessagePool = 0;
    *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x18) = 0;
    *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x10) = 0;
    *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x28) = 0;
    *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x20) = 0;
    pZVar4 = (ZhouLuJun *)IncludeSymbols::obtain(IncludeSymbols::getInstance()::s_MessagePool);
  }
  else {
    pZVar4 = (ZhouLuJun *)IncludeSymbols::obtain(IncludeSymbols::getInstance()::s_MessagePool);
  }
  if (pZVar4 == (ZhouLuJun *)0x0) {
    uVar2 = 0;
  }
  else {
    *(int *)(pZVar4 + 0x10) = param_1;
    *(int *)(pZVar4 + 0x14) = param_2;
    *(int *)(pZVar4 + 0x18) = param_3;
    *(undefined8 *)(pZVar4 + 8) = 0;
    *(undefined8 *)pZVar4 = 1;
    iVar1 = (**(code **)(**(long **)(this + 0x3b0) + 0x10))(*(long **)(this + 0x3b0),pZVar4);
    __src = (void *)AUpdates::getBytes(param_4);
    __n = AUpdates::getLength(param_4);
    memcpy(pZVar4 + (long)iVar1 + 0x30,__src,__n);
    uVar5 = AUpdates::getLength(param_4);
    *(undefined8 *)(pZVar4 + 0x20) = uVar5;
    uVar2 = sendMessage(this,pZVar4);
  }
  this_00 = (Everywhere *)Everywhere::getInstance();
  Everywhere::release(this_00,param_4);
                    /* try { // try from 00a0a05c to 00b0a08f has its CatchHandler @ 00a0a15c */
  return uVar2 & 1;
}

