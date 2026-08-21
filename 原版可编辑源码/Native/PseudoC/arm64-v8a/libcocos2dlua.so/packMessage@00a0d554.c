
/* universe::network::Proxy33::packMessage(universe::network::ZhouLuJun*) */

undefined1  [16] __thiscall
universe::network::Proxy33::packMessage(Proxy33 *this,ZhouLuJun *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  AUpdates aAStack_78 [24];
  undefined **local_60;
  ushort local_58;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = &PTR__Background_016a2428;
  local_58 = 0x4001;
  if (param_1[0x28] != (ZhouLuJun)0x0) {
    local_58 = 0x8001;
  }
  local_56 = (undefined2)*(long *)(param_1 + 0x20);
  local_54 = (undefined2)*(undefined4 *)(param_1 + 0x18);
  local_52 = (undefined2)*(undefined4 *)(param_1 + 0x10);
  local_50 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x2c) != 0) {
    local_58 = local_58 | 0x10;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar2 = (**(code **)(*(long *)this + 0x10))(this,param_1);
    iVar3 = (**(code **)(*(long *)this + 0x10))(this,param_1);
    Encryption::encrypt((Encryption *)(this + 8),(uchar *)(param_1 + (long)iVar2 + 0x30),
                        (uchar *)(param_1 + (long)iVar3 + 0x30),*(ulong *)(param_1 + 0x20),
                        (uchar *)0x0,(int *)0x0);
  }
  iVar2 = (**(code **)(*(long *)this + 0x10))(this,param_1);
  AUpdates::AUpdates(aAStack_78,(char *)(param_1 + 0x30),(long)iVar2);
  (*(code *)local_60[2])(&local_60,aAStack_78);
  if (*(uint *)(param_1 + 0x2c) != 0) {
    AUpdates::operator<<(aAStack_78,*(uint *)(param_1 + 0x2c));
  }
  AUpdates::fastSet(aAStack_78,(char *)0x0,0);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  iVar2 = (**(code **)(*(long *)this + 0x10))(this,param_1);
  AUpdates::~AUpdates(aAStack_78);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    auVar5._8_4_ = iVar2 + (int)uVar4;
    auVar5._0_8_ = param_1 + 0x30;
    auVar5._12_4_ = 0;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

