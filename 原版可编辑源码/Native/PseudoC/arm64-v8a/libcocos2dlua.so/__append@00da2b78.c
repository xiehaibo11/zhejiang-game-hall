
/* std::__ndk1::vector<int, std::__ndk1::allocator<int> >::__append(unsigned long, int const&) */

void __thiscall
std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
          (vector<int,std::__ndk1::allocator<int>> *this,ulong param_1,int *param_2)

{
  int iVar1;
  void *__dest;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  void *__src;
  size_t __n;
  ulong uVar10;
  long lVar11;
  
  piVar6 = *(int **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)piVar6 >> 2)) {
    piVar4 = piVar6;
    if (param_1 != 0) {
      uVar10 = (param_1 * 4 - 4 >> 2) + 1;
      piVar4 = piVar6 + param_1;
      if ((7 < uVar10) && (((int *)((long)param_2 + 1U) <= piVar6 || (piVar6 + param_1 <= param_2)))
         ) {
        iVar1 = *param_2;
        uVar7 = uVar10 & 0x7ffffffffffffff8;
        piVar5 = piVar6 + 4;
        uVar3 = uVar7;
        do {
          *(ulong *)(piVar5 + -2) = CONCAT44(iVar1,iVar1);
          *(ulong *)(piVar5 + -4) = CONCAT44(iVar1,iVar1);
          *(ulong *)(piVar5 + 2) = CONCAT44(iVar1,iVar1);
          *(ulong *)piVar5 = CONCAT44(iVar1,iVar1);
          uVar3 = uVar3 - 8;
          piVar5 = piVar5 + 8;
        } while (uVar3 != 0);
        piVar6 = piVar6 + uVar7;
        if (uVar10 == uVar7) goto LAB_00da2c70;
      }
      do {
        piVar5 = piVar6 + 1;
        *piVar6 = *param_2;
        piVar6 = piVar5;
      } while (piVar4 != piVar5);
    }
LAB_00da2c70:
    *(int **)(this + 8) = piVar4;
    return;
  }
  __src = *(void **)this;
  __n = (long)piVar6 - (long)__src;
  lVar11 = (long)__n >> 2;
  uVar10 = lVar11 + param_1;
  if (uVar10 >> 0x3e != 0) {
LAB_00da2bec:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = *(long *)(this + 0x10) - (long)__src;
  if ((ulong)(lVar2 >> 2) < 0x1fffffffffffffff) {
    uVar3 = lVar2 >> 1;
    if (uVar10 <= uVar3) {
      uVar10 = uVar3;
    }
    if (uVar10 != 0) {
      if (uVar10 >> 0x3e != 0) goto LAB_00da2bec;
      goto LAB_00da2c7c;
    }
    __dest = (void *)0x0;
  }
  else {
    uVar10 = 0x3fffffffffffffff;
LAB_00da2c7c:
    __dest = operator_new(uVar10 << 2);
  }
  uVar7 = param_1 * 4 - 4;
  piVar6 = (int *)((long)__dest + lVar11 * 4);
  uVar3 = (uVar7 >> 2) + 1;
  piVar4 = piVar6;
  if ((7 < uVar3) &&
     (((int *)((long)param_2 + 1U) <= piVar6 ||
      ((int *)((long)__dest + (lVar11 + (uVar7 >> 2)) * 4 + 4) <= param_2)))) {
    iVar1 = *param_2;
    uVar8 = uVar3 & 0x7ffffffffffffff8;
    puVar9 = (undefined8 *)((long)__dest + lVar11 * 4 + 0x10);
    uVar7 = uVar8;
    do {
      puVar9[-1] = CONCAT44(iVar1,iVar1);
      puVar9[-2] = CONCAT44(iVar1,iVar1);
      puVar9[1] = CONCAT44(iVar1,iVar1);
      *puVar9 = CONCAT44(iVar1,iVar1);
      uVar7 = uVar7 - 8;
      puVar9 = puVar9 + 4;
    } while (uVar7 != 0);
    piVar4 = piVar6 + uVar8;
    if (uVar3 == uVar8) goto LAB_00da2d08;
  }
  do {
    piVar5 = piVar4 + 1;
    *piVar4 = *param_2;
    piVar4 = piVar5;
  } while (piVar6 + param_1 != piVar5);
LAB_00da2d08:
                    /* try { // try from 00da2d10 to 00ea2d9f has its CatchHandler @ 00da2f6c */
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(int **)(this + 8) = piVar6 + param_1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar10 * 4);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

