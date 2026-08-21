
/* std::__ndk1::__bit_iterator<std::__ndk1::__bitset<2ul, 128ul>, false, 0>
   std::__ndk1::__copy_aligned<std::__ndk1::__bitset<2ul, 128ul>,
   false>(std::__ndk1::__bit_iterator<std::__ndk1::__bitset<2ul, 128ul>, false, 0>,
   std::__ndk1::__bit_iterator<std::__ndk1::__bitset<2ul, 128ul>, false, 0>,
   std::__ndk1::__bit_iterator<std::__ndk1::__bitset<2ul, 128ul>, false, 0>) */

void __thiscall
std::__ndk1::__copy_aligned<std::__ndk1::__bitset<2ul,128ul>,false>
          (long *param_1,__ndk1 *this,long *param_3,long *param_4)

{
  uint uVar1;
  ulong *__src;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  size_t __n;
  ulong uVar7;
  
  __src = *(ulong **)this;
  uVar1 = *(uint *)(this + 8);
  uVar7 = ((ulong)*(uint *)(param_3 + 1) + (*param_3 - (long)__src) * 8) - (ulong)uVar1;
  if (0 < (long)uVar7) {
    if (uVar1 != 0) {
      uVar2 = (ulong)(0x40 - uVar1);
      uVar6 = uVar7;
      if ((long)uVar2 <= (long)uVar7) {
        uVar6 = uVar2;
      }
      uVar2 = 0xffffffffffffffffU >> (uVar2 - uVar6 & 0x3f) & -1L << ((ulong)uVar1 & 0x3f);
      uVar4 = *__src;
      *(ulong *)*param_4 = *(ulong *)*param_4 & (uVar2 ^ 0xffffffffffffffff);
      uVar7 = uVar7 - uVar6;
      *(ulong *)*param_4 = *(ulong *)*param_4 | uVar4 & uVar2;
      lVar3 = uVar6 + *(uint *)(param_4 + 1);
      lVar5 = lVar3 + 0x3f;
      if (-1 < lVar3) {
        lVar5 = lVar3;
      }
      *param_4 = *param_4 + (lVar5 >> 6) * 8;
      *(int *)(param_4 + 1) = (int)lVar3 + (int)(lVar5 >> 6) * -0x40;
      __src = (ulong *)(*(long *)this + 8);
      *(ulong **)this = __src;
    }
    uVar6 = uVar7 + 0x3f;
    if (-1 < (long)uVar7) {
      uVar6 = uVar7;
    }
    __n = ((long)uVar6 >> 6) * 8;
    memmove((void *)*param_4,__src,__n);
    lVar3 = (long)uVar7 % 0x40;
    *param_4 = *param_4 + __n;
    if (0 < lVar3) {
      lVar5 = *(long *)this;
      uVar6 = 0xffffffffffffffff >> (-lVar3 & 0x3fU);
      *(size_t *)this = lVar5 + __n;
      uVar7 = *(ulong *)(lVar5 + __n);
      *(ulong *)*param_4 = *(ulong *)*param_4 & (uVar6 ^ 0xffffffffffffffff);
      *(ulong *)*param_4 = *(ulong *)*param_4 | uVar7 & uVar6;
      *(int *)(param_4 + 1) = (int)lVar3;
    }
  }
  *param_1 = *param_4;
  *(int *)(param_1 + 1) = (int)param_4[1];
  return;
}

