
/* std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, v8::internal::ZoneAllocator<bool> >, false,
   0> std::__ndk1::__copy_unaligned<std::__ndk1::vector<bool, v8::internal::ZoneAllocator<bool> >,
   false>(std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, v8::internal::ZoneAllocator<bool> >,
   false, 0>, std::__ndk1::__bit_iterator<std::__ndk1::vector<bool,
   v8::internal::ZoneAllocator<bool> >, false, 0>,
   std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, v8::internal::ZoneAllocator<bool> >, false,
   0>) */

void __thiscall
std::__ndk1::__copy_unaligned<std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>,false>
          (long *param_1,__ndk1 *this,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  puVar6 = *(ulong **)this;
  uVar1 = *(uint *)(this + 8);
  uVar5 = ((ulong)*(uint *)(param_3 + 1) + (*param_3 - (long)puVar6) * 8) - (ulong)uVar1;
  if (0 < (long)uVar5) {
    if (uVar1 != 0) {
      uVar11 = (ulong)(0x40 - uVar1);
      uVar10 = uVar5;
      if ((long)uVar11 <= (long)uVar5) {
        uVar10 = uVar11;
      }
      uVar4 = (ulong)(0x40 - *(uint *)(param_4 + 1));
      uVar8 = uVar4;
      if (uVar10 <= uVar4) {
        uVar8 = uVar10;
      }
      uVar7 = *puVar6;
      *(ulong *)*param_4 =
           *(ulong *)*param_4 &
           (0xffffffffffffffffU >> (uVar4 - uVar8 & 0x3f) &
            -1L << ((ulong)*(uint *)(param_4 + 1) & 0x3f) ^ 0xffffffffffffffff);
      uVar2 = *(uint *)(param_4 + 1);
      uVar3 = *(uint *)(this + 8);
      uVar7 = 0xffffffffffffffffU >> (uVar11 - uVar10 & 0x3f) & -1L << ((ulong)uVar1 & 0x3f) & uVar7
      ;
      uVar11 = uVar7 << ((ulong)(uVar2 - uVar3) & 0x3f);
      if (uVar2 < uVar3 || uVar2 - uVar3 == 0) {
        uVar11 = uVar7 >> ((ulong)(uVar3 - uVar2) & 0x3f);
      }
      *(ulong *)*param_4 = *(ulong *)*param_4 | uVar11;
      uVar5 = uVar5 - uVar10;
      lVar9 = uVar10 - uVar8;
      puVar6 = (ulong *)(*param_4 + (uVar8 + *(uint *)(param_4 + 1) >> 3 & 0x1ffffffffffffff8));
      *param_4 = (long)puVar6;
      *(uint *)(param_4 + 1) = *(uint *)(param_4 + 1) + (int)uVar8 & 0x3f;
      if (0 < lVar9) {
        *puVar6 = *puVar6 & (0xffffffffffffffffU >> (-lVar9 & 0x3fU) ^ 0xffffffffffffffff);
        *(ulong *)*param_4 = uVar7 >> (uVar8 + *(uint *)(this + 8) & 0x3f) | *(ulong *)*param_4;
        *(int *)(param_4 + 1) = (int)lVar9;
      }
      puVar6 = (ulong *)(*(long *)this + 8);
      *(ulong **)this = puVar6;
    }
    uVar1 = 0x40 - *(uint *)(param_4 + 1);
    if (0x3f < (long)uVar5) {
      uVar11 = -1L << ((ulong)*(uint *)(param_4 + 1) & 0x3f);
      uVar10 = uVar5;
      do {
        uVar8 = *puVar6;
        uVar10 = uVar10 - 0x40;
        *(ulong *)*param_4 = *(ulong *)*param_4 & ~uVar11;
        *(ulong *)*param_4 = *(ulong *)*param_4 | uVar8 << ((ulong)*(uint *)(param_4 + 1) & 0x3f);
        lVar9 = *param_4;
        *param_4 = lVar9 + 8;
        *(ulong *)(lVar9 + 8) = *(ulong *)(lVar9 + 8) & uVar11;
        *(ulong *)*param_4 = *(ulong *)*param_4 | uVar8 >> ((ulong)uVar1 & 0x3f);
        puVar6 = (ulong *)(*(long *)this + 8);
        *(ulong **)this = puVar6;
      } while (0x3f < (long)uVar10);
      uVar5 = uVar5 & 0x3f;
    }
    if (0 < (long)uVar5) {
      uVar11 = (ulong)uVar1;
      uVar8 = *puVar6;
      uVar10 = uVar11;
      if ((long)uVar5 <= (long)uVar11) {
        uVar10 = uVar5;
      }
      *(ulong *)*param_4 =
           *(ulong *)*param_4 &
           (-1L << ((ulong)*(uint *)(param_4 + 1) & 0x3f) &
            0xffffffffffffffffU >> (uVar11 - uVar10 & 0x3f) ^ 0xffffffffffffffff);
      uVar8 = uVar8 & 0xffffffffffffffffU >> (-uVar5 & 0x3f);
      lVar9 = uVar5 - uVar10;
      *(ulong *)*param_4 = *(ulong *)*param_4 | uVar8 << ((ulong)*(uint *)(param_4 + 1) & 0x3f);
      puVar6 = (ulong *)(*param_4 + (uVar10 + *(uint *)(param_4 + 1) >> 3 & 0x1ffffffffffffff8));
      *param_4 = (long)puVar6;
      *(uint *)(param_4 + 1) = *(uint *)(param_4 + 1) + (int)uVar10 & 0x3f;
      if (0 < lVar9) {
        *puVar6 = *puVar6 & (0xffffffffffffffffU >> (-lVar9 & 0x3fU) ^ 0xffffffffffffffff);
        *(ulong *)*param_4 = *(ulong *)*param_4 | uVar8 >> (uVar10 & 0x3f);
        *(int *)(param_4 + 1) = (int)lVar9;
      }
    }
  }
  *param_1 = *param_4;
  *(int *)(param_1 + 1) = (int)param_4[1];
  return;
}

