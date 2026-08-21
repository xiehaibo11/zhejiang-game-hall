
/* std::__ndk1::vector<int, std::__ndk1::allocator<int> >::__append(unsigned long, int const&) */

void __thiscall
std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
          (vector<int,std::__ndk1::allocator<int>> *this,ulong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  void *__dest;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *__src;
  size_t __n;
  ulong uVar8;
  long lVar9;
  
  piVar1 = *(int **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)piVar1 >> 2)) {
    piVar5 = piVar1;
    uVar8 = param_1;
    if ((7 < param_1) && (((int *)((long)param_2 + 1U) <= piVar1 || (piVar1 + param_1 <= param_2))))
    {
      iVar2 = *param_2;
      uVar6 = param_1 & 0xfffffffffffffff8;
      uVar8 = param_1 - uVar6;
      piVar5 = piVar1 + 4;
      uVar4 = uVar6;
      do {
        *(ulong *)(piVar5 + -2) = CONCAT44(iVar2,iVar2);
        *(ulong *)(piVar5 + -4) = CONCAT44(iVar2,iVar2);
        *(ulong *)(piVar5 + 2) = CONCAT44(iVar2,iVar2);
        *(ulong *)piVar5 = CONCAT44(iVar2,iVar2);
        uVar4 = uVar4 - 8;
        piVar5 = piVar5 + 8;
      } while (uVar4 != 0);
      piVar5 = piVar1 + uVar6;
      if (uVar6 == param_1) goto LAB_00d34a54;
    }
    do {
      uVar8 = uVar8 - 1;
      *piVar5 = *param_2;
      piVar5 = piVar5 + 1;
    } while (uVar8 != 0);
LAB_00d34a54:
    *(int **)(this + 8) = piVar1 + param_1;
    return;
  }
  __src = *(void **)this;
  __n = (long)piVar1 - (long)__src;
  lVar9 = (long)__n >> 2;
  uVar8 = lVar9 + param_1;
  if (uVar8 >> 0x3e != 0) {
LAB_00d349e0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = *(long *)(this + 0x10) - (long)__src;
  if ((ulong)(lVar3 >> 2) < 0x1fffffffffffffff) {
    uVar4 = lVar3 >> 1;
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    if (uVar8 != 0) {
      if (uVar8 >> 0x3e != 0) goto LAB_00d349e0;
      goto LAB_00d34a64;
    }
    __dest = (void *)0x0;
  }
  else {
    uVar8 = 0x3fffffffffffffff;
LAB_00d34a64:
    __dest = operator_new(uVar8 << 2);
  }
  piVar1 = (int *)((long)__dest + lVar9 * 4);
  piVar5 = piVar1;
  uVar4 = param_1;
  if ((7 < param_1) &&
     (((int *)((long)param_2 + 1U) <= piVar1 ||
      ((int *)((long)__dest + (lVar9 + param_1) * 4) <= param_2)))) {
    iVar2 = *param_2;
    uVar6 = param_1 & 0xfffffffffffffff8;
    puVar7 = (undefined8 *)((long)__dest + lVar9 * 4 + 0x10);
    uVar4 = uVar6;
    do {
      puVar7[-1] = CONCAT44(iVar2,iVar2);
      puVar7[-2] = CONCAT44(iVar2,iVar2);
      puVar7[1] = CONCAT44(iVar2,iVar2);
      *puVar7 = CONCAT44(iVar2,iVar2);
      uVar4 = uVar4 - 8;
      puVar7 = puVar7 + 4;
    } while (uVar4 != 0);
    piVar5 = piVar1 + uVar6;
    uVar4 = param_1 - uVar6;
    if (uVar6 == param_1) goto LAB_00d34af0;
  }
  do {
    uVar4 = uVar4 - 1;
    *piVar5 = *param_2;
    piVar5 = piVar5 + 1;
  } while (uVar4 != 0);
LAB_00d34af0:
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(int **)(this + 8) = piVar1 + param_1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar8 * 4);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

