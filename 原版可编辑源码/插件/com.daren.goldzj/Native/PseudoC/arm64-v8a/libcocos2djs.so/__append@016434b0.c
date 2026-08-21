
/* std::__ndk1::vector<int, v8::internal::ZoneAllocator<int> >::__append(unsigned long, int const&)
    */

void __thiscall
std::__ndk1::vector<int,v8::internal::ZoneAllocator<int>>::__append
          (vector<int,v8::internal::ZoneAllocator<int>> *this,ulong param_1,int *param_2)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  Zone *this_00;
  int *piVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *puVar11;
  long lVar12;
  
  piVar4 = *(int **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)piVar4 >> 2)) {
    do {
      param_1 = param_1 - 1;
      *piVar4 = *param_2;
      piVar4 = (int *)(*(long *)(this + 8) + 4);
      *(int **)(this + 8) = piVar4;
    } while (param_1 != 0);
    return;
  }
  lVar12 = (long)piVar4 - *(long *)this >> 2;
  uVar1 = lVar12 + param_1;
  if (uVar1 >> 0x1d != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = *(long *)(this + 0x10) - *(long *)this;
  uVar8 = lVar5 >> 1;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0xffffffe < (ulong)(lVar5 >> 2)) {
    uVar1 = 0x1fffffff;
  }
  if (uVar1 == 0) {
    lVar5 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar8 = uVar1 * 4 + 7 & 0xfffffffffffffff8;
    lVar5 = *(long *)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - lVar5) < uVar8) {
      lVar5 = v8::internal::Zone::NewExpand(this_00,uVar8);
    }
    else {
      *(ulong *)(this_00 + 0x10) = lVar5 + uVar8;
    }
  }
  piVar4 = (int *)(lVar5 + lVar12 * 4);
  piVar6 = piVar4;
  if ((7 < param_1) &&
     (((int *)((long)param_2 + 1U) <= piVar4 || ((int *)(lVar5 + (lVar12 + param_1) * 4) <= param_2)
      ))) {
    iVar2 = *param_2;
    uVar9 = param_1 & 0xfffffffffffffff8;
    piVar7 = piVar4 + uVar9;
    puVar11 = (undefined8 *)(lVar5 + lVar12 * 4 + 0x10);
    uVar8 = uVar9;
    do {
      puVar11[-1] = CONCAT44(iVar2,iVar2);
      puVar11[-2] = CONCAT44(iVar2,iVar2);
      puVar11[1] = CONCAT44(iVar2,iVar2);
      *puVar11 = CONCAT44(iVar2,iVar2);
      uVar8 = uVar8 - 8;
      puVar11 = puVar11 + 4;
    } while (uVar8 != 0);
    bVar3 = uVar9 == param_1;
    piVar6 = piVar7;
    param_1 = param_1 - uVar9;
    if (bVar3) goto LAB_016435ac;
  }
  do {
    param_1 = param_1 - 1;
    piVar7 = piVar6 + 1;
    *piVar6 = *param_2;
    piVar6 = piVar7;
  } while (param_1 != 0);
LAB_016435ac:
  piVar6 = *(int **)this;
  piVar10 = *(int **)(this + 8);
  while (piVar10 != piVar6) {
    piVar10 = piVar10 + -1;
    piVar4 = piVar4 + -1;
    *piVar4 = *piVar10;
  }
  *(int **)this = piVar4;
  *(int **)(this + 8) = piVar7;
  *(ulong *)(this + 0x10) = lVar5 + uVar1 * 4;
  return;
}

