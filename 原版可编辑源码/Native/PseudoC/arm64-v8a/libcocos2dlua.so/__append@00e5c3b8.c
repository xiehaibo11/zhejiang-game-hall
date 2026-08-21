
/* std::__ndk1::vector<unsigned short, std::__ndk1::allocator<unsigned short> >::__append(unsigned
   long, unsigned short const&) */

void __thiscall
std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::__append
          (vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *this,ulong param_1,
          ushort *param_2)

{
  ulong uVar1;
  ushort uVar2;
  void *__dest;
  ulong uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  void *__src;
  size_t __n;
  long lVar10;
  
  puVar6 = *(ushort **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar6 >> 1)) {
    puVar4 = puVar6;
    if (param_1 != 0) {
      uVar1 = (param_1 * 2 - 2 >> 1) + 1;
      puVar4 = puVar6 + param_1;
      if ((0xf < uVar1) &&
         (((ushort *)((long)param_2 + 1U) <= puVar6 || (puVar6 + param_1 <= param_2)))) {
        uVar2 = *param_2;
        uVar7 = uVar1 & 0xfffffffffffffff0;
        puVar5 = puVar6 + 8;
        uVar3 = uVar7;
        do {
          *(ulong *)(puVar5 + -4) = CONCAT26(uVar2,CONCAT24(uVar2,CONCAT22(uVar2,uVar2)));
          *(ulong *)(puVar5 + -8) = CONCAT26(uVar2,CONCAT24(uVar2,CONCAT22(uVar2,uVar2)));
          *(ulong *)(puVar5 + 4) = CONCAT26(uVar2,CONCAT24(uVar2,CONCAT22(uVar2,uVar2)));
          *(ulong *)puVar5 = CONCAT26(uVar2,CONCAT24(uVar2,CONCAT22(uVar2,uVar2)));
          uVar3 = uVar3 - 0x10;
          puVar5 = puVar5 + 0x10;
        } while (uVar3 != 0);
        puVar6 = puVar6 + uVar7;
        if (uVar1 == uVar7) goto LAB_00e5c4b4;
      }
      do {
        puVar5 = puVar6 + 1;
        *puVar6 = *param_2;
        puVar6 = puVar5;
      } while (puVar4 != puVar5);
    }
LAB_00e5c4b4:
    *(ushort **)(this + 8) = puVar4;
    return;
  }
  __src = *(void **)this;
  __n = (long)puVar6 - (long)__src;
  lVar10 = (long)__n >> 1;
  uVar1 = lVar10 + param_1;
  if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  uVar3 = *(long *)(this + 0x10) - (long)__src;
  if (uVar1 <= uVar3) {
    uVar1 = uVar3;
  }
  if (0x3ffffffffffffffe < (ulong)((long)uVar3 >> 1)) {
    uVar1 = 0x7fffffffffffffff;
  }
  if (uVar1 == 0) {
    __dest = (void *)0x0;
  }
  else {
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar1 << 1);
  }
  uVar7 = param_1 * 2 - 2;
  puVar6 = (ushort *)((long)__dest + lVar10 * 2);
  uVar3 = (uVar7 >> 1) + 1;
  puVar4 = puVar6;
  if ((0xf < uVar3) &&
     (((ushort *)((long)param_2 + 1U) <= puVar6 ||
      ((ushort *)((long)__dest + (lVar10 + (uVar7 >> 1)) * 2 + 2) <= param_2)))) {
    uVar2 = *param_2;
    uVar8 = uVar3 & 0xfffffffffffffff0;
    puVar9 = (undefined8 *)((long)__dest + lVar10 * 2 + 0x10);
    uVar7 = uVar8;
    do {
      puVar9[-1] = CONCAT26(uVar2,CONCAT24(uVar2,CONCAT22(uVar2,uVar2)));
      puVar9[-2] = CONCAT26(uVar2,CONCAT24(uVar2,CONCAT22(uVar2,uVar2)));
      puVar9[1] = CONCAT26(uVar2,CONCAT24(uVar2,CONCAT22(uVar2,uVar2)));
      *puVar9 = CONCAT26(uVar2,CONCAT24(uVar2,CONCAT22(uVar2,uVar2)));
      uVar7 = uVar7 - 0x10;
      puVar9 = puVar9 + 4;
    } while (uVar7 != 0);
    puVar4 = puVar6 + uVar8;
    if (uVar3 == uVar8) goto LAB_00e5c540;
  }
  do {
    puVar5 = puVar4 + 1;
    *puVar4 = *param_2;
    puVar4 = puVar5;
  } while (puVar6 + param_1 != puVar5);
LAB_00e5c540:
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(ushort **)(this + 8) = puVar6 + param_1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 2);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

