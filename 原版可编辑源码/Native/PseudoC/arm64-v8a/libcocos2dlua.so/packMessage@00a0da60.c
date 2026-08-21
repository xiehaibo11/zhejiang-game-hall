
/* universe::network::Packer32::packMessage(universe::network::ZhouLuJun*) */

undefined1  [16] __thiscall
universe::network::Packer32::packMessage(Packer32 *this,ZhouLuJun *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  AUpdates aAStack_70 [24];
  undefined **local_58;
  undefined2 local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = &PTR__Background_016a2478;
  local_50 = (undefined2)*(long *)(param_1 + 0x20);
  local_4e = (undefined2)*(undefined4 *)(param_1 + 0x18);
  local_4c = *(undefined4 *)(param_1 + 0x14);
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar2 = (**(code **)(*(long *)this + 0x10))(this,param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a0db48 with catch @ 00a0dad8
                       catch(type#1 @ 00000000) { ... } // from try @ 00a0db78 with catch @ 00a0dad8
                       catch(type#1 @ 00000000) { ... } // from try @ 00a0dba8 with catch @ 00a0dad8
                       catch(type#1 @ 00000000) { ... } // from try @ 00a0dbd0 with catch @ 00a0dad8
                       catch(type#1 @ 00000000) { ... } // from try @ 00a0dbfc with catch @ 00a0dad8
                        */
    iVar3 = (**(code **)(*(long *)this + 0x10))(this,param_1);
    Encryption::encrypt((Encryption *)(this + 8),(uchar *)(param_1 + (long)iVar2 + 0x30),
                        (uchar *)(param_1 + (long)iVar3 + 0x30),*(ulong *)(param_1 + 0x20),
                        (uchar *)0x0,(int *)0x0);
  }
  AUpdates::AUpdates(aAStack_70,(char *)(param_1 + 0x30),8);
  (*(code *)local_58[2])(&local_58,aAStack_70);
  AUpdates::fastSet(aAStack_70,(char *)0x0,0);
  iVar2 = *(int *)(param_1 + 0x20);
                    /* try { // try from 00a0db40 to 00b0db47 has its CatchHandler @ 00a0dc3c */
  AUpdates::~AUpdates(aAStack_70);
                    /* try { // try from 00a0db48 to 00b0db6b has its CatchHandler @ 00a0dad8 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    auVar4._8_4_ = iVar2 + 8;
    auVar4._0_8_ = param_1 + 0x30;
    auVar4._12_4_ = 0;
                    /* try { // try from 00a0db6c to 00b0db77 has its CatchHandler @ 00a0dc3c */
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a0db78 to 00b0db9f has its CatchHandler @ 00a0dad8 */
  __stack_chk_fail();
}

