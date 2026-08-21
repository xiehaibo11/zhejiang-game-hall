
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
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  
  puVar7 = *(ulong **)this;
  uVar6 = *(uint *)(this + 8);
  uVar4 = ((ulong)*(uint *)(param_3 + 1) + (*param_3 - (long)puVar7) * 8) - (ulong)uVar6;
  if ((long)uVar4 < 1) {
                    /* try { // try from 00da27e0 to 00ea282f has its CatchHandler @ 00da27e0
                       catch() { ... } // from try @ 00da27e0 with catch @ 00da27e0
                       catch() { ... } // from try @ 00da28dc with catch @ 00da27e0 */
    uVar6 = *(uint *)(param_4 + 1);
  }
  else {
    if (uVar6 == 0) {
      uVar10 = (ulong)*(uint *)(param_4 + 1);
    }
    else {
      uVar2 = *(uint *)(param_4 + 1);
      uVar10 = (ulong)(0x40 - uVar6);
      puVar11 = (ulong *)*param_4;
      uVar9 = uVar4;
      if ((long)uVar10 <= (long)uVar4) {
        uVar9 = uVar10;
      }
      uVar3 = (ulong)(0x40 - uVar2);
      uVar8 = 0xffffffffffffffffU >> (uVar10 - uVar9 & 0x3f) & -1L << ((ulong)uVar6 & 0x3f) &
              *puVar7;
                    /* try { // try from 00da2740 to 00ea2743 has its CatchHandler @ 00da2780 */
      uVar12 = uVar3;
      if (uVar9 <= uVar3) {
        uVar12 = uVar9;
      }
                    /* try { // try from 00da2744 to 00ea279b has its CatchHandler @ 00da26c0 */
      uVar1 = uVar8 << ((ulong)(uVar2 - uVar6) & 0x3f);
      if (uVar2 < uVar6 || uVar2 - uVar6 == 0) {
        uVar1 = uVar8 >> ((ulong)(uVar6 - uVar2) & 0x3f);
      }
      uVar4 = uVar4 - uVar9;
      uVar9 = uVar9 - uVar12;
                    /* catch() { ... } // from try @ 00da2740 with catch @ 00da2780 */
      uVar6 = uVar2 + (int)uVar12 & 0x3f;
      uVar10 = (ulong)uVar6;
      puVar7 = (ulong *)((long)puVar11 + (uVar12 + uVar2 >> 3 & 0x1ffffffffffffff8));
      *puVar11 = *puVar11 &
                 (0xffffffffffffffffU >> (uVar3 - uVar12 & 0x3f) & -1L << ((ulong)uVar2 & 0x3f) ^
                 0xffffffffffffffff) | uVar1;
      *param_4 = (long)puVar7;
      *(uint *)(param_4 + 1) = uVar6;
      if (0 < (long)uVar9) {
        *puVar7 = uVar8 >> (uVar12 + *(uint *)(this + 8) & 0x3f) |
                  *puVar7 & (0xffffffffffffffffU >> (-uVar9 & 0x3f) ^ 0xffffffffffffffff);
        uVar10 = uVar9 & 0xffffffff;
        *(int *)(param_4 + 1) = (int)uVar9;
      }
      puVar7 = (ulong *)(*(long *)this + 8);
      *(ulong **)this = puVar7;
    }
    uVar6 = (uint)uVar10;
    uVar9 = -1L << (uVar10 & 0x3f);
    if (0x3f < (long)uVar4) {
      uVar12 = uVar4;
      do {
        puVar11 = (ulong *)*param_4;
        uVar3 = *puVar7;
        uVar12 = uVar12 - 0x40;
                    /* try { // try from 00da2830 to 00ea2847 has its CatchHandler @ 00da2938 */
        puVar7 = puVar11 + 1;
        *puVar11 = *puVar11 & ~uVar9 | uVar3 << (uVar10 & 0x3f);
        *param_4 = (long)puVar7;
                    /* try { // try from 00da2848 to 00ea288b has its CatchHandler @ 00da2954 */
        *puVar7 = *puVar7 & uVar9 | uVar3 >> ((ulong)(0x40 - uVar6) & 0x3f);
        puVar7 = (ulong *)(*(long *)this + 8);
        *(ulong **)this = puVar7;
      } while (0x3f < (long)uVar12);
      uVar4 = uVar4 & 0x3f;
    }
    if (0 < (long)uVar4) {
      puVar11 = (ulong *)*param_4;
      uVar3 = (ulong)(0x40 - uVar6);
      uVar12 = uVar3;
      if ((long)uVar4 <= (long)uVar3) {
        uVar12 = uVar4;
      }
                    /* try { // try from 00da288c to 00ea28a3 has its CatchHandler @ 00da2934 */
      uVar8 = *puVar7 & 0xffffffffffffffffU >> (-uVar4 & 0x3f);
                    /* try { // try from 00da28a4 to 00ea28db has its CatchHandler @ 00da2978 */
      lVar5 = uVar4 - uVar12;
      uVar6 = uVar6 + (int)uVar12 & 0x3f;
      puVar7 = (ulong *)((long)puVar11 + (uVar12 + uVar10 >> 3 & 0x1ffffffffffffff8));
      *puVar11 = *puVar11 &
                 (0xffffffffffffffffU >> (uVar3 - uVar12 & 0x3f) & uVar9 ^ 0xffffffffffffffff) |
                 uVar8 << (uVar10 & 0x3f);
      *param_4 = (long)puVar7;
      *(uint *)(param_4 + 1) = uVar6;
      if (0 < lVar5) {
                    /* try { // try from 00da28dc to 00ea298f has its CatchHandler @ 00da27e0 */
        *puVar7 = *puVar7 & (0xffffffffffffffffU >> (-lVar5 & 0x3fU) ^ 0xffffffffffffffff) |
                  uVar8 >> (uVar12 & 0x3f);
        uVar6 = (uint)lVar5;
        *(uint *)(param_4 + 1) = uVar6;
      }
    }
  }
  lVar5 = *param_4;
  *(uint *)(param_1 + 1) = uVar6;
  *param_1 = lVar5;
  return;
}

