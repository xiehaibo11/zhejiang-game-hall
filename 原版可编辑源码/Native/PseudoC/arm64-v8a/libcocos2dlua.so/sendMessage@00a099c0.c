
/* universe::network::GuoPengFei::sendMessage(int, int, int, char const*, unsigned long) */

void __thiscall
universe::network::GuoPengFei::sendMessage
          (GuoPengFei *this,int param_1,int param_2,int param_3,char *param_4,ulong param_5)

{
  int iVar1;
  char *pcVar2;
  ZhouLuJun *pZVar3;
  
                    /* catch() { ... } // from try @ 00a09954 with catch @ 00a099d8 */
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar2 = (char *)Translated::getInstance();
    Translated::log(pcVar2,"GuoPengFei: delete 11");
  }
  if (IncludeSymbols::getInstance()::s_MessagePool == (IncludeSymbols *)0x0) {
    IncludeSymbols::getInstance()::s_MessagePool = operator_new(0x30);
    *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 8) = 0;
    *(undefined8 *)IncludeSymbols::getInstance()::s_MessagePool = 0;
    *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x18) = 0;
    *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x10) = 0;
    *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x28) = 0;
    *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x20) = 0;
    pZVar3 = (ZhouLuJun *)IncludeSymbols::obtain(IncludeSymbols::getInstance()::s_MessagePool);
  }
  else {
    pZVar3 = (ZhouLuJun *)IncludeSymbols::obtain(IncludeSymbols::getInstance()::s_MessagePool);
  }
  if (pZVar3 != (ZhouLuJun *)0x0) {
    *(int *)(pZVar3 + 0x10) = param_1;
    *(int *)(pZVar3 + 0x14) = param_2;
    *(int *)(pZVar3 + 0x18) = param_3;
    *(undefined8 *)(pZVar3 + 8) = 0;
    *(undefined8 *)pZVar3 = 1;
    iVar1 = (**(code **)(**(long **)(this + 0x3b0) + 0x10))(*(long **)(this + 0x3b0),pZVar3);
    memcpy(pZVar3 + (long)iVar1 + 0x30,param_4,param_5);
    *(ulong *)(pZVar3 + 0x20) = param_5;
                    /* try { // try from 00a09a78 to 00b09ac3 has its CatchHandler @ 00a09a78
                       catch() { ... } // from try @ 00a09a78 with catch @ 00a09a78
                       catch() { ... } // from try @ 00a09ad8 with catch @ 00a09a78 */
    sendMessage(this,pZVar3);
    return;
  }
  return;
}

