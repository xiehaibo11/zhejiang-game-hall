
/* std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >, false, 0>
   std::__ndk1::__copy_aligned<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >,
   false>(std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >,
   false, 0>, std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >,
   false, 0>, std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >,
   false, 0>) */

void __thiscall
std::__ndk1::__copy_aligned<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,false>
          (long *param_1,__ndk1 *this,long *param_3,long *param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  size_t __n;
  ulong uVar8;
  
  puVar3 = *(ulong **)this;
  uVar2 = *(uint *)(this + 8);
                    /* try { // try from 00da25ac to 00ea25b3 has its CatchHandler @ 00da26a4 */
  uVar8 = ((ulong)*(uint *)(param_3 + 1) + (*param_3 - (long)puVar3) * 8) - (ulong)uVar2;
                    /* try { // try from 00da25b4 to 00ea2603 has its CatchHandler @ 00da2474 */
  if ((long)uVar8 < 1) {
    puVar3 = (ulong *)*param_4;
  }
  else {
    if (uVar2 != 0) {
      puVar7 = (ulong *)*param_4;
      uVar4 = (ulong)(0x40 - uVar2);
      uVar1 = uVar8;
      if ((long)uVar4 <= (long)uVar8) {
        uVar1 = uVar4;
      }
      uVar4 = 0xffffffffffffffffU >> (uVar4 - uVar1 & 0x3f) & -1L << ((ulong)uVar2 & 0x3f);
      *puVar7 = *puVar7 & (uVar4 ^ 0xffffffffffffffff) | *puVar3 & uVar4;
                    /* try { // try from 00da2604 to 00ea2607 has its CatchHandler @ 00da2674 */
                    /* try { // try from 00da2608 to 00ea2657 has its CatchHandler @ 00da2474 */
      uVar8 = uVar8 - uVar1;
      lVar5 = uVar1 + *(uint *)(param_4 + 1);
      lVar6 = lVar5 + 0x3f;
      if (-1 < lVar5) {
        lVar6 = lVar5;
      }
      *param_4 = (long)(puVar7 + (lVar6 >> 6));
      *(int *)(param_4 + 1) = (int)lVar5 + (int)(lVar6 >> 6) * -0x40;
      puVar3 = (ulong *)(*(long *)this + 8);
      *(ulong **)this = puVar3;
    }
    uVar1 = uVar8 + 0x3f;
    if (-1 < (long)uVar8) {
      uVar1 = uVar8;
    }
    __n = ((long)uVar1 >> 6) * 8;
                    /* try { // try from 00da2658 to 00ea265f has its CatchHandler @ 00da26a4 */
    memmove((void *)*param_4,puVar3,__n);
                    /* catch() { ... } // from try @ 00da24f0 with catch @ 00da2660
                       try { // try from 00da2660 to 00ea26bf has its CatchHandler @ 00da2474 */
    lVar5 = (long)uVar8 % 0x40;
    puVar3 = (ulong *)(*param_4 + __n);
    *param_4 = (long)puVar3;
                    /* catch() { ... } // from try @ 00da2604 with catch @ 00da2674 */
    if (0 < lVar5) {
      lVar6 = *(long *)this;
      uVar8 = 0xffffffffffffffff >> (-lVar5 & 0x3fU);
      *(size_t *)this = lVar6 + __n;
      puVar3 = (ulong *)*param_4;
                    /* catch() { ... } // from try @ 00da24e0 with catch @ 00da2694 */
                    /* catch() { ... } // from try @ 00da24d0 with catch @ 00da26a4
                       catch() { ... } // from try @ 00da25ac with catch @ 00da26a4
                       catch() { ... } // from try @ 00da2658 with catch @ 00da26a4 */
      *puVar3 = *puVar3 & (uVar8 ^ 0xffffffffffffffff) | *(ulong *)(lVar6 + __n) & uVar8;
      *(int *)(param_4 + 1) = (int)lVar5;
    }
  }
  *param_1 = (long)puVar3;
                    /* try { // try from 00da26c0 to 00ea273f has its CatchHandler @ 00da26c0
                       catch() { ... } // from try @ 00da26c0 with catch @ 00da26c0
                       catch() { ... } // from try @ 00da2744 with catch @ 00da26c0 */
  *(int *)(param_1 + 1) = (int)param_4[1];
  return;
}

