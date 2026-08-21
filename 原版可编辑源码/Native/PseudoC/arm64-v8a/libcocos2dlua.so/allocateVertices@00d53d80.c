
/* spine::SkeletonTwoColorBatch::allocateVertices(unsigned int) */

long __thiscall
spine::SkeletonTwoColorBatch::allocateVertices(SkeletonTwoColorBatch *this,uint param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  vector<spine::V3F_C4B_C4B_T2F,std::__ndk1::allocator<spine::V3F_C4B_C4B_T2F>> *this_00;
  long lVar8;
  
  this_00 = (vector<spine::V3F_C4B_C4B_T2F,std::__ndk1::allocator<spine::V3F_C4B_C4B_T2F>> *)
            (this + 0x28);
  lVar8 = *(long *)this_00;
  lVar4 = *(long *)(this + 0x30) - lVar8 >> 2;
  uVar6 = lVar4 * 0x6db6db6db6db6db7;
  lVar5 = lVar8;
  if (uVar6 - *(uint *)(this + 0x40) < (ulong)param_1) {
    uVar1 = (uVar6 + param_1) * 2 | 1;
    uVar3 = uVar1 + lVar4 * -0x6db6db6db6db6db7;
    if (uVar1 < uVar6 || uVar3 == 0) {
      if (uVar1 < uVar6) {
        *(ulong *)(this + 0x30) = lVar8 + uVar1 * 0x1c;
      }
      uVar2 = *(uint *)(this + 0x20);
    }
    else {
      std::__ndk1::vector<spine::V3F_C4B_C4B_T2F,std::__ndk1::allocator<spine::V3F_C4B_C4B_T2F>>::
      __append(this_00,uVar3);
      lVar5 = *(long *)this_00;
      uVar2 = *(uint *)(this + 0x20);
    }
    if (uVar2 != 0) {
      lVar4 = *(long *)(this + 8);
      uVar6 = 0;
      do {
        lVar7 = *(long *)(lVar4 + uVar6 * 8);
        uVar6 = uVar6 + 1;
        *(long *)(lVar7 + 0x70) = lVar5 + (*(long *)(lVar7 + 0x70) - lVar8);
      } while (uVar6 < uVar2);
    }
  }
  uVar2 = *(uint *)(this + 0x40);
  *(uint *)(this + 0x40) = uVar2 + param_1;
  return lVar5 + (ulong)uVar2 * 0x1c;
}

