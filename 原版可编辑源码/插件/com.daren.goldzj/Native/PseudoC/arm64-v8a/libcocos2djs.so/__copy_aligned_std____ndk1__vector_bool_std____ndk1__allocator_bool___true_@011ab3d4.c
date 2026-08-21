
/* std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >, false, 0>
   std::__ndk1::__copy_aligned<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >,
   true>(std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >, true,
   0>, std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >, true,
   0>, std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >, false,
   0>) */

void std::__ndk1::__copy_aligned<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,true>
               (long *param_1,ulong *param_2,uint param_3,long param_4,ulong param_5,long *param_6)

{
  ulong *puVar1;
  long lVar2;
  void *__dest;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  size_t __n;
  ulong uVar7;
  
  uVar7 = ((param_5 & 0xffffffff) - (ulong)param_3) + (param_4 - (long)param_2) * 8;
  if (0 < (long)uVar7) {
    if (param_3 == 0) {
      __dest = (void *)*param_6;
    }
    else {
      uVar5 = *param_2;
      uVar3 = (ulong)(0x40 - param_3);
      uVar6 = uVar7;
      if ((long)uVar3 <= (long)uVar7) {
        uVar6 = uVar3;
      }
      uVar3 = 0xffffffffffffffffU >> (uVar3 - uVar6 & 0x3f) & -1L << ((ulong)param_3 & 0x3f);
      *(ulong *)*param_6 = *(ulong *)*param_6 & (uVar3 ^ 0xffffffffffffffff);
      uVar7 = uVar7 - uVar6;
      *(ulong *)*param_6 = *(ulong *)*param_6 | uVar5 & uVar3;
      lVar4 = uVar6 + *(uint *)(param_6 + 1);
      lVar2 = lVar4 + 0x3f;
      if (-1 < lVar4) {
        lVar2 = lVar4;
      }
      __dest = (void *)(*param_6 + (lVar2 >> 6) * 8);
      *param_6 = (long)__dest;
      *(int *)(param_6 + 1) = (int)lVar4 + (int)(lVar2 >> 6) * -0x40;
      param_2 = param_2 + 1;
    }
    uVar6 = uVar7 + 0x3f;
    if (-1 < (long)uVar7) {
      uVar6 = uVar7;
    }
    __n = ((long)uVar6 >> 6) * 8;
    memmove(__dest,param_2,__n);
    lVar4 = (long)uVar7 % 0x40;
    puVar1 = (ulong *)(*param_6 + __n);
    *param_6 = (long)puVar1;
    if (0 < lVar4) {
      uVar7 = 0xffffffffffffffff >> (-lVar4 & 0x3fU);
      uVar6 = param_2[(long)uVar6 >> 6];
      *puVar1 = *puVar1 & (uVar7 ^ 0xffffffffffffffff);
      *(ulong *)*param_6 = *(ulong *)*param_6 | uVar6 & uVar7;
      *(int *)(param_6 + 1) = (int)lVar4;
    }
  }
  *param_1 = *param_6;
  *(int *)(param_1 + 1) = (int)param_6[1];
  return;
}

