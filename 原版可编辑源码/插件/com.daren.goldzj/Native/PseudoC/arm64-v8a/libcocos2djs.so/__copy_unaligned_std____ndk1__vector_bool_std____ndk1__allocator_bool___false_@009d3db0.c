
/* std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >, false, 0>
   std::__ndk1::__copy_unaligned<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >,
   false>(std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >,
   false, 0>, std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >,
   false, 0>, std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >,
   false, 0>) */

void __thiscall
std::__ndk1::__copy_unaligned<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,false>
          (long *param_1,__ndk1 *this,long *param_3,long *param_4)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  puVar7 = *(ulong **)this;
  uVar4 = *(uint *)(this + 8);
  uVar5 = ((ulong)*(uint *)(param_3 + 1) + (*param_3 - (long)puVar7) * 8) - (ulong)uVar4;
  if ((long)uVar5 < 1) {
    uVar4 = *(uint *)(param_4 + 1);
  }
  else {
    if (uVar4 == 0) {
      uVar4 = *(uint *)(param_4 + 1);
    }
    else {
      uVar10 = (ulong)(0x40 - uVar4);
      puVar6 = (uint *)(param_4 + 1);
      uVar1 = *puVar6;
      uVar9 = uVar5;
      if ((long)uVar10 <= (long)uVar5) {
        uVar9 = uVar10;
      }
      puVar2 = (ulong *)*param_4;
      uVar3 = (ulong)(0x40 - uVar1);
      uVar8 = 0xffffffffffffffffU >> (uVar10 - uVar9 & 0x3f) & -1L << ((ulong)uVar4 & 0x3f) &
              *puVar7;
      uVar10 = uVar3;
      if (uVar9 <= uVar3) {
        uVar10 = uVar9;
      }
      uVar12 = uVar8 << ((ulong)(uVar1 - uVar4) & 0x3f);
      if (uVar1 < uVar4 || uVar1 - uVar4 == 0) {
        uVar12 = uVar8 >> ((ulong)(uVar4 - uVar1) & 0x3f);
      }
      lVar11 = uVar9 - uVar10;
      uVar4 = uVar1 + (int)uVar10 & 0x3f;
      uVar5 = uVar5 - uVar9;
      puVar7 = (ulong *)((long)puVar2 + (uVar10 + uVar1 >> 3 & 0x1ffffffffffffff8));
      *puVar2 = *puVar2 & (0xffffffffffffffffU >> (uVar3 - uVar10 & 0x3f) &
                           -1L << ((ulong)uVar1 & 0x3f) ^ 0xffffffffffffffff) | uVar12;
      *param_4 = (long)puVar7;
      *puVar6 = uVar4;
      if (0 < lVar11) {
        *puVar7 = uVar8 >> (uVar10 + *(uint *)(this + 8) & 0x3f) |
                  *puVar7 & (0xffffffffffffffffU >> (-lVar11 & 0x3fU) ^ 0xffffffffffffffff);
        uVar4 = (uint)lVar11;
        *puVar6 = uVar4;
      }
      puVar7 = (ulong *)(*(long *)this + 8);
      *(ulong **)this = puVar7;
    }
    uVar9 = (ulong)uVar4;
    uVar10 = -1L << (uVar9 & 0x3f);
    if (0x3f < (long)uVar5) {
      uVar3 = uVar5;
      do {
        puVar2 = (ulong *)*param_4;
        uVar8 = *puVar7;
        uVar3 = uVar3 - 0x40;
        puVar7 = puVar2 + 1;
        *puVar2 = *puVar2 & ~uVar10 | uVar8 << (uVar9 & 0x3f);
        *param_4 = (long)puVar7;
        *puVar7 = *puVar7 & uVar10 | uVar8 >> ((ulong)(0x40 - uVar4) & 0x3f);
        puVar7 = (ulong *)(*(long *)this + 8);
        *(ulong **)this = puVar7;
      } while (0x3f < (long)uVar3);
      uVar5 = uVar5 & 0x3f;
    }
    if (0 < (long)uVar5) {
      puVar2 = (ulong *)*param_4;
      uVar8 = (ulong)(0x40 - uVar4);
      uVar3 = uVar8;
      if ((long)uVar5 <= (long)uVar8) {
        uVar3 = uVar5;
      }
      uVar12 = *puVar7 & 0xffffffffffffffffU >> (-uVar5 & 0x3f);
      lVar11 = uVar5 - uVar3;
                    /* try { // try from 009d3f94 to 00ad4013 has its CatchHandler @ 009d3f94
                       catch() { ... } // from try @ 009d3f94 with catch @ 009d3f94
                       catch() { ... } // from try @ 009d4030 with catch @ 009d3f94 */
      uVar4 = uVar4 + (int)uVar3 & 0x3f;
      puVar7 = (ulong *)((long)puVar2 + (uVar3 + uVar9 >> 3 & 0x1ffffffffffffff8));
      *puVar2 = *puVar2 & (0xffffffffffffffffU >> (uVar8 - uVar3 & 0x3f) & uVar10 ^
                          0xffffffffffffffff) | uVar12 << (uVar9 & 0x3f);
      *param_4 = (long)puVar7;
      *(uint *)(param_4 + 1) = uVar4;
      if (0 < lVar11) {
        *puVar7 = *puVar7 & (0xffffffffffffffffU >> (-lVar11 & 0x3fU) ^ 0xffffffffffffffff) |
                  uVar12 >> (uVar3 & 0x3f);
        uVar4 = (uint)lVar11;
        *(uint *)(param_4 + 1) = uVar4;
      }
    }
  }
  lVar11 = *param_4;
  *(uint *)(param_1 + 1) = uVar4;
  *param_1 = lVar11;
  return;
}

