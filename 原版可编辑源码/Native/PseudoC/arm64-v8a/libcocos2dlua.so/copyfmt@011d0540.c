
/* WARNING: Removing unreachable block (ram,0x011d07ac) */
/* std::__ndk1::ios_base::copyfmt(std::__ndk1::ios_base const&) */

void __thiscall std::__ndk1::ios_base::copyfmt(ios_base *this,ios_base *param_1)

{
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x48);
  if (*(ulong *)(this + 0x50) < uVar4) {
    __ptr = malloc(uVar4 << 3);
    if (__ptr == (void *)0x0) {
      uVar1 = __throw_bad_alloc();
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar1);
    }
    __ptr_00 = malloc(uVar4 << 2);
    if (__ptr_00 == (void *)0x0) {
      __throw_bad_alloc();
      goto LAB_011d0590;
    }
  }
  else {
LAB_011d0590:
    __ptr_00 = (void *)0x0;
    __ptr = (void *)0x0;
  }
  if (*(ulong *)(this + 0x68) < *(ulong *)(param_1 + 0x60)) {
    __ptr_01 = malloc(*(ulong *)(param_1 + 0x60) << 3);
    if (__ptr_01 == (void *)0x0) {
      __throw_bad_alloc();
      goto LAB_011d05bc;
    }
  }
  else {
LAB_011d05bc:
    __ptr_01 = (void *)0x0;
  }
  if (*(ulong *)(this + 0x80) < *(ulong *)(param_1 + 0x78)) {
    __ptr_02 = malloc(*(ulong *)(param_1 + 0x78) << 3);
    if (__ptr_02 != (void *)0x0) goto LAB_011d05e8;
    __throw_bad_alloc();
  }
  __ptr_02 = (void *)0x0;
LAB_011d05e8:
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = uVar1;
  locale::operator=((locale *)(this + 0x30),(locale *)(param_1 + 0x30));
  if (*(ulong *)(this + 0x50) < *(ulong *)(param_1 + 0x48)) {
    free(*(void **)(this + 0x38));
    *(void **)(this + 0x38) = __ptr;
    free(*(void **)(this + 0x40));
    *(void **)(this + 0x40) = __ptr_00;
    __ptr = (void *)0x0;
    __ptr_00 = (void *)0x0;
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x48);
  }
  *(undefined8 *)(this + 0x48) = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar4 = 0;
    do {
      *(undefined8 *)(*(long *)(this + 0x38) + uVar4 * 8) =
           *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar4 * 8);
      lVar3 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(*(long *)(this + 0x40) + lVar3) =
           *(undefined4 *)(*(long *)(param_1 + 0x40) + lVar3);
      *(ulong *)(this + 0x48) = uVar4;
    } while (uVar4 < *(ulong *)(param_1 + 0x48));
  }
  if (*(ulong *)(this + 0x68) < *(ulong *)(param_1 + 0x60)) {
    free(*(void **)(this + 0x58));
    *(void **)(this + 0x58) = __ptr_01;
    __ptr_01 = (void *)0x0;
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x60);
  }
  *(undefined8 *)(this + 0x60) = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar3 = *(long *)(param_1 + 0x58);
    lVar2 = *(long *)(this + 0x58);
    uVar4 = 0;
    do {
      *(undefined8 *)(lVar2 + uVar4 * 8) = *(undefined8 *)(lVar3 + uVar4 * 8);
      uVar4 = *(long *)(this + 0x60) + 1;
      *(ulong *)(this + 0x60) = uVar4;
    } while (uVar4 < *(ulong *)(param_1 + 0x60));
  }
  if (*(ulong *)(this + 0x80) < *(ulong *)(param_1 + 0x78)) {
    free(*(void **)(this + 0x70));
    *(void **)(this + 0x70) = __ptr_02;
    __ptr_02 = (void *)0x0;
    *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x78);
  }
  *(undefined8 *)(this + 0x78) = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar4 = 0;
    do {
      lVar3 = uVar4 * 8;
      uVar4 = uVar4 + 1;
      *(undefined8 *)(*(long *)(this + 0x70) + lVar3) =
           *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar3);
      *(ulong *)(this + 0x78) = uVar4;
    } while (uVar4 < *(ulong *)(param_1 + 0x78));
  }
  if (__ptr_02 != (void *)0x0) {
    free(__ptr_02);
  }
  if (__ptr_01 != (void *)0x0) {
    free(__ptr_01);
  }
  if (__ptr_00 != (void *)0x0) {
    free(__ptr_00);
  }
  if (__ptr == (void *)0x0) {
    return;
  }
  free(__ptr);
  return;
}

