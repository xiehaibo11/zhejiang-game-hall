
void FUN_01843810(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((long)param_2 + 0x1c);
  param_2[3] = 0xffffffffffffffff;
  plVar8 = *(long **)(param_1 + 0x10);
  uVar10 = param_2[1];
  (**(code **)(*plVar8 + 0x20))(plVar8);
  if (*(char *)((long)plVar8 + 9) != '\x01') {
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  }
  uVar4 = *(uint *)((long)param_2 + 0x1c);
  if (uVar4 == 0xffffffff) {
    lVar7 = param_2[1];
    uVar1 = lVar7 + 3;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar5 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar1 <= uVar6) {
        uVar1 = uVar6;
      }
      param_2[2] = uVar1;
      pvVar5 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
LAB_018439ac:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar7 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar5 + lVar7) + 1) = 0x2e;
    *(undefined2 *)((long)pvVar5 + lVar7) = 0x2e2e;
    param_2[1] = param_2[1] + 3;
  }
  else if (uVar4 == 0) {
    param_2[1] = uVar10;
  }
  else if (1 < uVar4) {
    uVar9 = 1;
    do {
      lVar7 = param_2[1];
      uVar1 = lVar7 + 2;
      if (uVar1 < (ulong)param_2[2]) {
        pvVar5 = (void *)*param_2;
      }
      else {
        uVar6 = param_2[2] << 1;
        if (uVar1 <= uVar6) {
          uVar1 = uVar6;
        }
        param_2[2] = uVar1;
        pvVar5 = realloc((void *)*param_2,uVar1);
        *param_2 = pvVar5;
        if (pvVar5 == (void *)0x0) goto LAB_018439ac;
        lVar7 = param_2[1];
      }
      *(undefined2 *)((long)pvVar5 + lVar7) = 0x202c;
      *(uint *)(param_2 + 3) = uVar9;
      param_2[1] = param_2[1] + 2;
      plVar8 = *(long **)(param_1 + 0x10);
      (**(code **)(*plVar8 + 0x20))(plVar8,param_2);
      if (*(char *)((long)plVar8 + 9) != '\x01') {
        (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar4);
  }
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((long)param_2 + 0x1c) = uVar3;
  return;
}

