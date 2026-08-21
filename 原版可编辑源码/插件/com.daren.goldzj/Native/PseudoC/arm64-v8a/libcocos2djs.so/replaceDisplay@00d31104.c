
/* dragonBones::BaseFactory::replaceDisplay(dragonBones::Slot*, dragonBones::DisplayData*, int)
   const */

void __thiscall
dragonBones::BaseFactory::replaceDisplay
          (BaseFactory *this,Slot *param_1,DisplayData *param_2,int param_3)

{
  uint uVar1;
  void *__src;
  long lVar2;
  void *__dest;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [12];
  void *local_90;
  void *local_88;
  void *local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_3 < 0) {
    param_3 = *(int *)(param_1 + 0x100);
  }
  uVar1 = param_3 & (param_3 >> 0x1f ^ 0xffffffffU);
  Slot::replaceDisplayData(param_1,param_2,uVar1);
  local_88 = (void *)0x0;
  local_80 = (void *)0x0;
  local_90 = (void *)0x0;
  __src = *(void **)(param_1 + 0x140);
  uVar5 = *(long *)(param_1 + 0x148) - (long)__src;
  if (uVar5 == 0) {
    __dest = (void *)0x0;
  }
  else {
    if ((ulong)((long)uVar5 >> 4) >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __dest = operator_new(uVar5);
    local_80 = (void *)((long)__dest + ((long)uVar5 >> 4) * 0x10);
    local_90 = __dest;
    local_88 = __dest;
    if (0 < (long)uVar5) {
      memcpy(__dest,__src,uVar5);
      local_88 = (void *)((long)__dest + uVar5);
    }
  }
  uVar5 = (long)local_88 - (long)__dest >> 4;
  uVar8 = (ulong)uVar1;
  if (uVar5 <= uVar8) {
    uVar7 = (ulong)(uVar1 + 1);
    local_78 = 0;
    local_70 = 0;
    if (uVar5 < uVar7) {
      std::__ndk1::
      vector<std::__ndk1::pair<void*,dragonBones::DisplayType>,std::__ndk1::allocator<std::__ndk1::pair<void*,dragonBones::DisplayType>>>
      ::__append((vector<std::__ndk1::pair<void*,dragonBones::DisplayType>,std::__ndk1::allocator<std::__ndk1::pair<void*,dragonBones::DisplayType>>>
                  *)&local_90,uVar7 - uVar5,(pair *)&local_78);
    }
    else if (uVar5 != uVar7) {
      local_88 = (void *)((long)__dest + uVar7 * 0x10);
    }
  }
  if (param_2 == (DisplayData *)0x0) {
    uVar3 = 0;
    *(undefined8 *)((long)local_90 + uVar8 * 0x10) = 0;
  }
  else {
    plVar6 = *(long **)(param_1 + 0x158);
    if ((plVar6 == (long *)0x0) || ((ulong)(plVar6[1] - *plVar6 >> 3) <= uVar8)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*plVar6 + uVar8 * 8);
    }
    auVar9 = (**(code **)(*(long *)this + 0x40))(this,0,param_2,uVar4,param_1);
    uVar3 = auVar9._8_4_;
    *(long *)((long)local_90 + uVar8 * 0x10) = auVar9._0_8_;
  }
  *(undefined4 *)((long)local_90 + uVar8 * 0x10 + 8) = uVar3;
  Slot::setDisplayList(param_1,(vector *)&local_90);
  if (local_90 != (void *)0x0) {
    local_88 = local_90;
    operator_delete(local_90);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

