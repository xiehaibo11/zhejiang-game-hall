
/* bool 
   universe::network::GuoPengFei::sendMessage<universe::network::SRS::CheckAct>(universe::network::SRS::CheckAct&,
   int, int) */

bool __thiscall
universe::network::GuoPengFei::sendMessage<universe::network::SRS::CheckAct>
          (GuoPengFei *this,CheckAct *param_1,int param_2,int param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  ZhouLuJun *pZVar5;
  undefined8 uVar6;
  AUpdates aAStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar4 = (char *)Translated::getInstance();
    Translated::log(pcVar4,&DAT_012f902b,(ulong)*(uint *)(this + 0x45c));
  }
  pcVar4 = (char *)Translated::getInstance();
  Translated::log(pcVar4,"GuoPengFei: sendMessage %d",(ulong)*(uint *)(this + 0x45c));
  if (IncludeSymbols::getInstance()::s_MessagePool == (IncludeSymbols *)0x0) {
    IncludeSymbols::getInstance()::s_MessagePool = operator_new(0x30);
    *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 8) = 0;
    *(undefined8 *)IncludeSymbols::getInstance()::s_MessagePool = 0;
    *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x18) = 0;
    *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x10) = 0;
    *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x28) = 0;
    *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x20) = 0;
  }
  pZVar5 = (ZhouLuJun *)IncludeSymbols::obtain(IncludeSymbols::getInstance()::s_MessagePool);
  *(undefined8 *)(pZVar5 + 8) = 0;
  *(int *)(pZVar5 + 0x10) = param_2;
  *(int *)(pZVar5 + 0x14) = param_3;
  *(undefined4 *)pZVar5 = 1;
  *(undefined4 *)(pZVar5 + 0x18) = 2;
  iVar3 = (**(code **)(**(long **)(this + 0x3b0) + 0x10))(*(long **)(this + 0x3b0),pZVar5);
  AUpdates::AUpdates(aAStack_60,(char *)(pZVar5 + (long)iVar3 + 0x30),0x1000);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,aAStack_60);
  uVar6 = AUpdates::getLength(aAStack_60);
  *(undefined8 *)(pZVar5 + 0x20) = uVar6;
  AUpdates::fastSet(aAStack_60,(char *)0x0,0);
                    /* try { // try from 00a0b118 to 00b0b14f has its CatchHandler @ 00a0b118
                       catch() { ... } // from try @ 00a0b118 with catch @ 00a0b118
                       catch() { ... } // from try @ 00a0b160 with catch @ 00a0b118 */
  bVar2 = sendMessage(this,pZVar5);
  AUpdates::~AUpdates(aAStack_60);
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00a0b150 to 00b0b15f has its CatchHandler @ 00a0b1c4 */
    return (bool)(bVar2 & 1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

