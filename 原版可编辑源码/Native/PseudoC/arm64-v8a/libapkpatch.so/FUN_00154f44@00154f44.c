
void FUN_00154f44(long param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  size_t __size;
  long lVar11;
  byte local_3c [4];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 2) {
    lVar6 = param_2[1];
    uVar7 = lVar6 + 3;
    if (uVar7 < (ulong)param_2[2]) {
      pvVar5 = (void *)*param_2;
    }
    else {
      uVar9 = param_2[2] << 1;
      if (uVar7 <= uVar9) {
        uVar7 = uVar9;
      }
      param_2[2] = uVar7;
      pvVar5 = realloc((void *)*param_2,uVar7);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) goto LAB_001551b4;
      lVar6 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar5 + lVar6) + 1) = 0x54;
    *(undefined2 *)((long)pvVar5 + lVar6) = 0x5424;
    lVar6 = 3;
LAB_0015507c:
    param_2[1] = param_2[1] + lVar6;
  }
  else {
    if (iVar2 == 1) {
      lVar6 = param_2[1];
      uVar7 = lVar6 + 2;
      if (uVar7 < (ulong)param_2[2]) {
        pvVar5 = (void *)*param_2;
        uVar10 = 0x4e24;
      }
      else {
        uVar9 = param_2[2] << 1;
        if (uVar7 <= uVar9) {
          uVar7 = uVar9;
        }
        param_2[2] = uVar7;
        pvVar5 = realloc((void *)*param_2,uVar7);
        *param_2 = pvVar5;
        if (pvVar5 == (void *)0x0) goto LAB_001551b4;
        lVar6 = param_2[1];
        uVar10 = 0x4e24;
      }
LAB_00155034:
      *(undefined2 *)((long)pvVar5 + lVar6) = uVar10;
      lVar6 = 2;
      goto LAB_0015507c;
    }
    if (iVar2 == 0) {
      lVar6 = param_2[1];
      uVar7 = lVar6 + 2;
      if (uVar7 < (ulong)param_2[2]) {
        pvVar5 = (void *)*param_2;
      }
      else {
        uVar9 = param_2[2] << 1;
        if (uVar7 <= uVar9) {
          uVar7 = uVar9;
        }
        param_2[2] = uVar7;
        pvVar5 = realloc((void *)*param_2,uVar7);
        *param_2 = pvVar5;
        if (pvVar5 == (void *)0x0) goto LAB_001551b4;
        lVar6 = param_2[1];
      }
      uVar10 = 0x5424;
      goto LAB_00155034;
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar3 = *(int *)(param_1 + 0x10) - 1;
    if (uVar3 == 0) {
      lVar6 = param_2[1];
      uVar7 = lVar6 + 1;
      if (uVar7 < (ulong)param_2[2]) {
        pvVar5 = (void *)*param_2;
      }
      else {
        uVar9 = param_2[2] << 1;
        if (uVar7 <= uVar9) {
          uVar7 = uVar9;
        }
        param_2[2] = uVar7;
        pvVar5 = realloc((void *)*param_2,uVar7);
        *param_2 = pvVar5;
        if (pvVar5 == (void *)0x0) {
LAB_001551b4:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar6 = param_2[1];
        uVar7 = lVar6 + 1;
      }
      param_2[1] = uVar7;
      *(undefined1 *)((long)pvVar5 + lVar6) = 0x30;
    }
    else {
      uVar7 = (ulong)uVar3;
      lVar6 = 0;
      do {
        lVar11 = lVar6;
        local_3c[lVar11] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        lVar6 = lVar11 + -1;
        bVar1 = 9 < uVar7;
        uVar7 = uVar7 / 10;
      } while (bVar1);
      if (lVar6 != 0) {
        lVar8 = param_2[1];
        __size = lVar8 - lVar6;
        if (__size < (ulong)param_2[2]) {
          pvVar5 = (void *)*param_2;
        }
        else {
          uVar7 = param_2[2] << 1;
          if (__size <= uVar7) {
            __size = uVar7;
          }
          param_2[2] = __size;
          pvVar5 = realloc((void *)*param_2,__size);
          *param_2 = pvVar5;
          if (pvVar5 == (void *)0x0) goto LAB_001551b4;
          lVar8 = param_2[1];
        }
        memmove((void *)((long)pvVar5 + lVar8),local_3c + lVar11,-lVar6);
        param_2[1] = param_2[1] - lVar6;
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

