
/* v8::internal::MarkCompactCollector::ClearFullMapTransitions() */

void __thiscall
v8::internal::MarkCompactCollector::ClearFullMapTransitions(MarkCompactCollector *this)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  ulong local_48;
  ulong local_28;
  
  local_48 = 0;
  auVar6 = Worklist<v8::internal::TransitionArray,64>::Pop
                     ((Worklist<v8::internal::TransitionArray,64> *)(this + 0x880),0,
                      (TransitionArray *)&local_48);
  while ((auVar6._0_8_ & 1) != 0) {
    if ((3 < *(int *)(local_48 + 3)) && (1 < *(int *)(local_48 + 0xb))) {
      uVar1 = *(uint *)(local_48 + 0x13);
      if ((((ulong)uVar1 & 3) != 1) || (uVar1 != *(uint *)(*(long *)(this + 8) + -0x87b0))) {
        uVar2 = local_48 & 0xffffffff00000000;
        uVar3 = (ulong)*(uint *)(((ulong)uVar1 & 0xfffffffffffffffd | uVar2) + 0x13);
        uVar5 = uVar2 | uVar3;
        uVar3 = uVar2 | uVar3 & 0xfffffffffffc0000;
        uVar4 = uVar5 - uVar3;
        if ((*(uint *)(*(long *)(uVar3 + 0x10) + (uVar4 >> 7 & 0x1ffffff) * 4) >>
             (ulong)((uint)(uVar4 >> 2) & 0x1f) & 1) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 | *(uint *)(uVar5 + 0x17);
        }
        uVar3 = CompactTransitionArray(this,auVar6._8_8_,local_48,uVar2);
        if (((uVar3 & 1) != 0) &&
           (uVar1 = *(uint *)(uVar5 + 0xb) >> 10 & 0x3ff, local_28 = uVar2, uVar1 != 0)) {
          if (0 < (int)((int)*(short *)(uVar2 + 3) - uVar1)) {
            *(short *)(uVar2 + 5) = (short)uVar1;
            RightTrimDescriptorArray(this,uVar2);
            TrimEnumCache(this,uVar5,uVar2);
            DescriptorArray::Sort((DescriptorArray *)&local_28);
          }
          *(uint *)(uVar5 + 0xb) = *(uint *)(uVar5 + 0xb) | 0x400000;
        }
      }
    }
    auVar6 = Worklist<v8::internal::TransitionArray,64>::Pop
                       ((Worklist<v8::internal::TransitionArray,64> *)(this + 0x880),0,
                        (TransitionArray *)&local_48);
  }
  return;
}

