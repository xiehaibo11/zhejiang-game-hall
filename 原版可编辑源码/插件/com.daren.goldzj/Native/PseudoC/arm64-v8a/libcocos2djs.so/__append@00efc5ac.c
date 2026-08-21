
/* std::__ndk1::vector<v8::internal::CoverageBlock,
   std::__ndk1::allocator<v8::internal::CoverageBlock> >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
::__append(vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
           *this,ulong param_1)

{
  ulong uVar1;
  bool bVar2;
  void *pvVar3;
  void *__src;
  size_t __n;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar10 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)puVar10 >> 2) * -0x5555555555555555)) {
    do {
      *puVar10 = 0xffffffffffffffff;
      *(undefined4 *)(puVar10 + 1) = 0;
      param_1 = param_1 - 1;
      puVar10 = (undefined8 *)(*(long *)(this + 8) + 0xc);
      *(undefined8 **)(this + 8) = puVar10;
    } while (param_1 != 0);
    return;
  }
  lVar4 = (long)puVar10 - *(long *)this >> 2;
  uVar1 = lVar4 * -0x5555555555555555 + param_1;
  if (0x1555555555555555 < uVar1) {
LAB_00efc758:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = *(long *)(this + 0x10) - *(long *)this >> 2;
  uVar7 = lVar6 * 0x5555555555555556;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
    uVar1 = 0x1555555555555555;
  }
  if (uVar1 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (0x1555555555555555 < uVar1) goto LAB_00efc758;
    pvVar3 = operator_new(uVar1 * 0xc);
  }
  puVar5 = (undefined8 *)((long)pvVar3 + lVar4 * 4);
  puVar10 = puVar5;
  if (7 < param_1) {
    uVar8 = param_1 & 0xfffffffffffffff8;
    puVar10 = (undefined8 *)((long)puVar5 + uVar8 * 0xc);
    uVar7 = uVar8;
    puVar9 = puVar5;
    do {
      puVar9[1] = 0xffffffff00000000;
      *puVar9 = 0xffffffffffffffff;
      puVar9[3] = 0xffffffffffffffff;
      puVar9[2] = 0xffffffff;
      puVar9[9] = 0xffffffffffffffff;
      puVar9[8] = 0xffffffff;
      puVar9[0xb] = 0xffffffff;
      puVar9[10] = 0xffffffff00000000;
      puVar9[5] = 0xffffffff;
      puVar9[4] = 0xffffffff00000000;
      puVar9[7] = 0xffffffff00000000;
      puVar9[6] = 0xffffffffffffffff;
      uVar7 = uVar7 - 8;
      puVar9 = puVar9 + 0xc;
    } while (uVar7 != 0);
    bVar2 = uVar8 == param_1;
    param_1 = param_1 - uVar8;
    if (bVar2) goto LAB_00efc700;
  }
  do {
    *puVar10 = 0xffffffffffffffff;
    *(undefined4 *)(puVar10 + 1) = 0;
    param_1 = param_1 - 1;
    puVar10 = (undefined8 *)((long)puVar10 + 0xc);
  } while (param_1 != 0);
LAB_00efc700:
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar5 - __n),__src,__n);
    __src = *(void **)this;
  }
  *(void **)this = (void *)((long)puVar5 - __n);
  *(undefined8 **)(this + 8) = puVar10;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0xc);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

