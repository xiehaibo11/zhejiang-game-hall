
/* dragonBones::BaseFactory::_buildChildArmature(dragonBones::BuildArmaturePackage const*,
   dragonBones::Slot*, dragonBones::DisplayData*) const */

undefined8 __thiscall
dragonBones::BaseFactory::_buildChildArmature
          (BaseFactory *this,BuildArmaturePackage *param_1,Slot *param_2,DisplayData *param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
                    /* catch() { ... } // from try @ 00d8381c with catch @ 00d8385c */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00d838b0 with catch @ 00d83878 */
  uStack_68 = 0;
  local_60 = (void *)0x0;
  local_70 = 0;
  if (param_1 == (BuildArmaturePackage *)0x0) {
                    /* try { // try from 00d838a8 to 00e838af has its CatchHandler @ 00d838e8 */
    local_70 = 0;
    local_80 = 0;
    local_78 = (void *)0x0;
                    /* try { // try from 00d838b0 to 00e83903 has its CatchHandler @ 00d83878 */
    local_90 = (void *)0x0;
    local_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    goto LAB_00d839b0;
  }
  if (((byte)*param_1 & 1) == 0) {
    local_60 = *(void **)(param_1 + 0x10);
    uStack_68 = *(ulong *)(param_1 + 8);
    local_70 = *(ulong *)param_1;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8);
    if (0xffffffffffffffef < uVar4) goto LAB_00d83a4c;
    pvVar3 = *(void **)(param_1 + 0x10);
    if (uVar4 < 0x17) {
      pvVar5 = (void *)((ulong)&local_70 | 1);
      local_70 = (ulong)(byte)((int)uVar4 << 1);
      if (uVar4 != 0) goto LAB_00d8390c;
    }
    else {
      uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = operator_new(uVar6);
      local_70 = uVar6 | 1;
      uStack_68 = uVar4;
      local_60 = pvVar5;
LAB_00d8390c:
      memcpy(pvVar5,pvVar3,uVar4);
    }
    *(undefined1 *)((long)pvVar5 + uVar4) = 0;
  }
  local_80 = 0;
  local_78 = (void *)0x0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  if (((byte)param_1[0x18] & 1) == 0) {
    local_90 = *(void **)(param_1 + 0x28);
    uStack_98 = *(ulong *)(param_1 + 0x20);
    local_a0 = *(ulong *)(param_1 + 0x18);
    goto LAB_00d839b0;
  }
  uVar4 = *(ulong *)(param_1 + 0x20);
  if (0xffffffffffffffef < uVar4) {
LAB_00d83a4c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pvVar3 = *(void **)(param_1 + 0x28);
  if (uVar4 < 0x17) {
    pvVar5 = (void *)((ulong)&local_a0 | 1);
    local_a0 = (ulong)(byte)((int)uVar4 << 1);
    if (uVar4 != 0) goto LAB_00d8399c;
  }
  else {
    uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_a0 = uVar6 | 1;
    uStack_98 = uVar4;
    local_90 = pvVar5;
LAB_00d8399c:
    memcpy(pvVar5,pvVar3,uVar4);
  }
  *(undefined1 *)((long)pvVar5 + uVar4) = 0;
LAB_00d839b0:
  uVar2 = (**(code **)(*(long *)this + 0xa0))(this,param_3 + 0x30,&local_70,&local_88,&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00d83a04 to 00e83aa7 has its CatchHandler @ 00d83a04
                       catch(type#1 @ 00000000) { ... } // from try @ 00d83a04 with catch @ 00d83a04
                       catch(type#1 @ 00000000) { ... } // from try @ 00d83c4c with catch @ 00d83a04
                        */
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

