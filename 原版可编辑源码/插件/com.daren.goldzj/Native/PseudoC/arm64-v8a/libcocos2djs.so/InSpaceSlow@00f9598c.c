
/* v8::internal::Heap::InSpaceSlow(unsigned long, v8::internal::AllocationSpace) */

undefined8 __thiscall v8::internal::Heap::InSpaceSlow(Heap *this,ulong param_1,undefined4 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (((*(ulong *)(*(long *)(this + 0x820) + 0x60) <= param_1) &&
      (param_1 < *(ulong *)(*(long *)(this + 0x820) + 0x68))) && (*(long *)(this + 0xe8) != 0)) {
    switch(param_3) {
    case 0:
      uVar1 = PagedSpace::ContainsSlow(*(PagedSpace **)(this + 0x120),param_1);
      return uVar1;
    case 1:
      goto switchD_00f959e0_caseD_1;
    case 2:
      uVar1 = PagedSpace::ContainsSlow(*(PagedSpace **)(this + 0xf0),param_1);
      return uVar1;
    case 3:
      uVar1 = PagedSpace::ContainsSlow(*(PagedSpace **)(this + 0xf8),param_1);
      return uVar1;
    case 4:
      uVar1 = PagedSpace::ContainsSlow(*(PagedSpace **)(this + 0x100),param_1);
      return uVar1;
    case 5:
      uVar1 = LargeObjectSpace::ContainsSlow(*(LargeObjectSpace **)(this + 0x108),param_1);
      return uVar1;
    case 6:
      uVar1 = LargeObjectSpace::ContainsSlow(*(LargeObjectSpace **)(this + 0x110),param_1);
      return uVar1;
    case 7:
      uVar1 = LargeObjectSpace::ContainsSlow(*(LargeObjectSpace **)(this + 0x118),param_1);
      return uVar1;
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  return 0;
switchD_00f959e0_caseD_1:
  uVar2 = *(ulong *)(*(long *)(this + 0xe8) + 0xf0);
  if (uVar2 == 0) {
    return 0;
  }
  do {
    if (uVar2 == (param_1 & 0xfffffffffffc0000)) {
      return 1;
    }
    uVar2 = *(ulong *)(uVar2 + 0xe0);
  } while (uVar2 != 0);
  return 0;
}

