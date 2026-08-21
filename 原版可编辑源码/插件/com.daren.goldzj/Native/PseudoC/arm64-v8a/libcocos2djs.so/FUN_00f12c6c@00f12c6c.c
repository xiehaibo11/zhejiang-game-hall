
void FUN_00f12c6c(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long *local_68;
  undefined4 *local_60;
  int local_58;
  int local_54;
  
  local_68 = param_1;
  iVar4 = (**(code **)*param_1)();
  local_58 = iVar4;
  local_54 = (**(code **)(*param_1 + 8))(param_1);
  uVar1 = iVar4 * local_54;
  uVar6 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  if ((ulong)(long)(int)uVar1 >> 0x3e != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  local_60 = operator_new__(uVar6,(nothrow_t *)&std::nothrow);
  if (local_60 == (undefined4 *)0x0) {
    plVar5 = (long *)v8::internal::V8::GetCurrentPlatform();
    (**(code **)(*plVar5 + 0x18))();
    local_60 = operator_new__(uVar6,(nothrow_t *)&std::nothrow);
    if (local_60 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      v8::internal::FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  if ((0 < (int)uVar1) && (*local_60 = 0xfffffffc, uVar1 != 1)) {
    uVar6 = 1;
    do {
      local_60[uVar6] = 0xfffffffc;
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  FUN_00f16f00(&local_68,0,0);
  iVar4 = local_54;
  if (local_58 < 1) {
    iVar12 = 0;
    iVar7 = 0;
    iVar11 = 0;
    iVar14 = 0;
    bVar2 = false;
    bVar3 = false;
    iVar13 = 0;
    iVar10 = -1;
    iVar8 = -1;
    if (local_54 == 0) {
LAB_00f12e38:
      iVar14 = iVar11;
      iVar9 = iVar8;
      if (!bVar2) goto joined_r0x00f12e44;
    }
    else {
LAB_00f12e88:
      iVar9 = iVar14;
      iVar12 = iVar7;
      if (bVar3) {
        iVar9 = iVar8;
        iVar12 = iVar10;
      }
      iVar10 = iVar12;
      iVar12 = (iVar7 - iVar13) + iVar4;
    }
  }
  else {
    iVar14 = 0;
    iVar13 = 0;
    bVar2 = false;
    iVar11 = 0;
    iVar12 = 0;
    iVar8 = -1;
    iVar10 = -1;
    iVar7 = local_58;
    if (0 < local_54) {
      do {
        if ((local_60[iVar14 + iVar13 * iVar7] & 3) - 2 < 2) {
          if (!bVar2) {
            bVar2 = true;
            iVar10 = iVar12;
            iVar8 = iVar11;
          }
LAB_00f12d98:
          iVar12 = iVar12 + 1;
          iVar13 = iVar13 + 1;
          if (iVar7 <= iVar14) {
LAB_00f12e30:
            iVar14 = iVar11;
            iVar7 = iVar12;
            bVar3 = bVar2;
            if (iVar4 != iVar13) goto LAB_00f12e88;
            goto LAB_00f12e38;
          }
        }
        else {
          if ((local_60[iVar14 + iVar13 * iVar7] & 3) != 1) {
            if (bVar2) {
              (**(code **)*param_2)(param_2,iVar8,iVar10,iVar11 - iVar8,iVar12 - iVar10);
              iVar7 = local_58;
              iVar4 = local_54;
            }
            bVar2 = false;
            iVar11 = iVar11 + 1;
            iVar14 = iVar14 + 1;
            goto LAB_00f12d98;
          }
          if (!bVar2) {
            bVar2 = true;
            iVar8 = iVar11;
            iVar10 = iVar12;
          }
          iVar11 = iVar11 + 1;
          iVar14 = iVar14 + 1;
          if (iVar7 <= iVar14) goto LAB_00f12e30;
        }
      } while (iVar13 < iVar4);
    }
    iVar9 = iVar11;
    iVar4 = iVar12;
    if (bVar2) {
      iVar9 = iVar8;
      iVar4 = iVar10;
    }
    iVar10 = iVar4;
    iVar14 = (iVar7 - iVar14) + iVar11;
  }
  (**(code **)*param_2)(param_2,iVar9,iVar10,iVar14 - iVar9,iVar12 - iVar10);
joined_r0x00f12e44:
  if (local_60 != (undefined4 *)0x0) {
    operator_delete__(local_60);
  }
  return;
}

