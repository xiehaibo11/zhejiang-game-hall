
/* cocostudio::ArmatureAnimation::updateMovementList() */

void __thiscall cocostudio::ArmatureAnimation::updateMovementList(ArmatureAnimation *this)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (this[0x130] != (ArmatureAnimation)0x0) {
    if (this[0x131] == (ArmatureAnimation)0x0) {
      uVar2 = (ulong)*(uint *)(this + 0x134);
      uVar3 = (*(long *)(this + 0x120) - *(long *)(this + 0x118) >> 3) * -0x5555555555555555;
      if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
        this[0x130] = (ArmatureAnimation)0x0;
      }
      else {
        (**(code **)(*(long *)this + 0xd0))
                  (this,*(long *)(this + 0x118) + uVar2 * 0x18,*(undefined4 *)(this + 0x138),0);
        *(int *)(this + 0x134) = *(int *)(this + 0x134) + 1;
      }
    }
    else {
      uVar2 = (ulong)*(uint *)(this + 0x134);
      uVar3 = (*(long *)(this + 0x120) - *(long *)(this + 0x118) >> 3) * -0x5555555555555555;
      if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
      }
      (**(code **)(*(long *)this + 0xd0))
                (this,*(long *)(this + 0x118) + uVar2 * 0x18,*(undefined4 *)(this + 0x138),0);
      uVar3 = (ulong)(*(int *)(this + 0x134) + 1);
      uVar2 = (*(long *)(this + 0x120) - *(long *)(this + 0x118) >> 3) * -0x5555555555555555;
      iVar1 = 0;
      if (uVar3 <= uVar2 && uVar2 - uVar3 != 0) {
        iVar1 = *(int *)(this + 0x134) + 1;
      }
      *(int *)(this + 0x134) = iVar1;
    }
    this[0x130] = (ArmatureAnimation)0x1;
  }
  return;
}

