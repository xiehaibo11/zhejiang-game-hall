
/* std::__ndk1::vector<int, v8::internal::ZoneAllocator<int> >::assign(unsigned long, int const&) */

void __thiscall
std::__ndk1::vector<int,v8::internal::ZoneAllocator<int>>::assign
          (vector<int,v8::internal::ZoneAllocator<int>> *this,ulong param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  Zone *this_00;
  ulong uVar5;
  int *piVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar4 = *(long *)(this + 0x10);
  piVar6 = *(int **)this;
  if ((ulong)(lVar4 - (long)piVar6 >> 2) < param_1) {
    if (piVar6 != (int *)0x0) {
      lVar4 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (param_1 >> 0x1d == 0) {
      uVar5 = param_1;
      if (param_1 <= (ulong)(lVar4 >> 1)) {
        uVar5 = lVar4 >> 1;
      }
      if (0xffffffe < (ulong)(lVar4 >> 2)) {
        uVar5 = 0x1fffffff;
      }
      if (uVar5 >> 0x1d == 0) {
        this_00 = *(Zone **)(this + 0x18);
        uVar3 = uVar5 * 4 + 7 & 0xfffffffffffffff8;
        piVar6 = *(int **)(this_00 + 0x10);
        if ((ulong)(*(long *)(this_00 + 0x18) - (long)piVar6) < uVar3) {
          piVar6 = (int *)v8::internal::Zone::NewExpand(this_00,uVar3);
        }
        else {
          *(ulong *)(this_00 + 0x10) = (long)piVar6 + uVar3;
        }
        *(int **)this = piVar6;
        *(int **)(this + 8) = piVar6;
        *(int **)(this + 0x10) = piVar6 + uVar5;
        do {
          param_1 = param_1 - 1;
          *piVar6 = *param_2;
          piVar6 = (int *)(*(long *)(this + 8) + 4);
          *(int **)(this + 8) = piVar6;
        } while (param_1 != 0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar3 = *(long *)(this + 8) - (long)piVar6 >> 2;
  uVar5 = uVar3;
  if (param_1 <= uVar3) {
    uVar5 = param_1;
  }
  if (uVar5 != 0) {
    if ((7 < uVar5) && (((int *)((long)param_2 + 1U) <= piVar6 || (piVar6 + uVar5 <= param_2)))) {
      iVar1 = *param_2;
      uVar8 = uVar5 & 0xfffffffffffffff8;
      piVar7 = piVar6 + 4;
      uVar9 = uVar8;
      do {
        *(ulong *)(piVar7 + -2) = CONCAT44(iVar1,iVar1);
        *(ulong *)(piVar7 + -4) = CONCAT44(iVar1,iVar1);
        *(ulong *)(piVar7 + 2) = CONCAT44(iVar1,iVar1);
        *(ulong *)piVar7 = CONCAT44(iVar1,iVar1);
        uVar9 = uVar9 - 8;
        piVar7 = piVar7 + 8;
      } while (uVar9 != 0);
      bVar2 = uVar5 == uVar8;
      uVar5 = uVar5 - uVar8;
      piVar6 = piVar6 + uVar8;
      if (bVar2) goto LAB_0162cfcc;
    }
    do {
      uVar5 = uVar5 - 1;
      *piVar6 = *param_2;
      piVar6 = piVar6 + 1;
    } while (uVar5 != 0);
  }
LAB_0162cfcc:
  lVar4 = uVar3 - param_1;
  if (uVar3 < param_1) {
    piVar6 = *(int **)(this + 8);
    do {
      bVar2 = lVar4 != -1;
      lVar4 = lVar4 + 1;
      *piVar6 = *param_2;
      piVar6 = (int *)(*(long *)(this + 8) + 4);
      *(int **)(this + 8) = piVar6;
    } while (bVar2);
  }
  else {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 4;
  }
  return;
}

