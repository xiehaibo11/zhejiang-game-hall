
/* std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >, false, 0>
   std::__ndk1::__copy_aligned<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >,
   true>(std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >, true,
   0>, std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >, true,
   0>, std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >, false,
   0>) */

void std::__ndk1::__copy_aligned<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,true>
               (long *param_1,ulong *param_2,uint param_3,long param_4,ulong param_5,long *param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  size_t __n;
  ulong uVar6;
  
                    /* catch() { ... } // from try @ 00da288c with catch @ 00da2934 */
                    /* catch() { ... } // from try @ 00da2830 with catch @ 00da2938 */
  uVar6 = ((param_5 & 0xffffffff) - (ulong)param_3) + (param_4 - (long)param_2) * 8;
  if ((long)uVar6 < 1) {
    puVar5 = (ulong *)*param_6;
  }
  else {
    if (param_3 == 0) {
      puVar5 = (ulong *)*param_6;
    }
    else {
                    /* catch() { ... } // from try @ 00da2848 with catch @ 00da2954 */
      puVar5 = (ulong *)*param_6;
      uVar3 = (ulong)(0x40 - param_3);
      uVar2 = uVar6;
      if ((long)uVar3 <= (long)uVar6) {
        uVar2 = uVar3;
      }
                    /* catch() { ... } // from try @ 00da28a4 with catch @ 00da2978 */
      uVar3 = 0xffffffffffffffffU >> (uVar3 - uVar2 & 0x3f) & -1L << ((ulong)param_3 & 0x3f);
      *puVar5 = *puVar5 & (uVar3 ^ 0xffffffffffffffff) | *param_2 & uVar3;
      uVar6 = uVar6 - uVar2;
      lVar4 = uVar2 + *(uint *)(param_6 + 1);
      lVar1 = lVar4 + 0x3f;
      if (-1 < lVar4) {
        lVar1 = lVar4;
      }
      puVar5 = puVar5 + (lVar1 >> 6);
      *param_6 = (long)puVar5;
      *(int *)(param_6 + 1) = (int)lVar4 + (int)(lVar1 >> 6) * -0x40;
      param_2 = param_2 + 1;
    }
    uVar2 = uVar6 + 0x3f;
    if (-1 < (long)uVar6) {
      uVar2 = uVar6;
    }
    __n = ((long)uVar2 >> 6) * 8;
                    /* try { // try from 00da29ec to 00ea2a43 has its CatchHandler @ 00da29ec
                       catch() { ... } // from try @ 00da29ec with catch @ 00da29ec
                       catch() { ... } // from try @ 00da2ad8 with catch @ 00da29ec */
    memmove(puVar5,param_2,__n);
    lVar4 = (long)uVar6 % 0x40;
    puVar5 = (ulong *)(*param_6 + __n);
    *param_6 = (long)puVar5;
    if (0 < lVar4) {
      uVar6 = 0xffffffffffffffff >> (-lVar4 & 0x3fU);
      *puVar5 = *puVar5 & (uVar6 ^ 0xffffffffffffffff) | param_2[(long)uVar2 >> 6] & uVar6;
      *(int *)(param_6 + 1) = (int)lVar4;
    }
  }
  *param_1 = (long)puVar5;
                    /* try { // try from 00da2a44 to 00ea2a5b has its CatchHandler @ 00da2b28 */
  *(int *)(param_1 + 1) = (int)param_6[1];
  return;
}

