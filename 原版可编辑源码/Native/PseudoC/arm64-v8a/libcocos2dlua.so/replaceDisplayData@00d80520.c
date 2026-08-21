
/* dragonBones::Slot::replaceDisplayData(dragonBones::DisplayData*, int) */

void __thiscall dragonBones::Slot::replaceDisplayData(Slot *this,DisplayData *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  DisplayData *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_2 < 0) {
    param_2 = *(uint *)(this + 0x100) & ((int)*(uint *)(this + 0x100) >> 0x1f ^ 0xffffffffU);
  }
  lVar3 = *(long *)(this + 0x128);
  uVar4 = *(long *)(this + 0x130) - lVar3 >> 3;
  if (uVar4 <= (uint)param_2) {
    uVar1 = (long)param_2 + 1;
    local_40 = (DisplayData *)0x0;
    if (uVar4 < uVar1) {
      std::__ndk1::
      vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>::__append
                ((vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>
                  *)(this + 0x128),uVar1 - uVar4,&local_40);
      lVar3 = *(long *)(this + 0x128);
    }
    else if (uVar4 != uVar1) {
      *(ulong *)(this + 0x130) = lVar3 + uVar1 * 8;
    }
  }
  *(DisplayData **)(lVar3 + (long)param_2 * 8) = param_1;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

