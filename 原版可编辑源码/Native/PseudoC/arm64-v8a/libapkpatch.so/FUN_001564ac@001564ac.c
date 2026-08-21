
void FUN_001564ac(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  size_t sVar5;
  void *pvVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  
  plVar8 = *(long **)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((long)param_2 + 0x1c);
  param_2[3] = 0xffffffffffffffff;
  lVar9 = param_2[1];
  (**(code **)(*plVar8 + 0x20))(plVar8);
  if (*(char *)((long)plVar8 + 9) != '\x01') {
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  }
  uVar4 = *(uint *)((long)param_2 + 0x1c);
  if (uVar4 == 0xffffffff) {
    sVar5 = __strlen_chk(&DAT_0011904f,4);
    if (sVar5 == 0) goto LAB_00156668;
    lVar9 = param_2[1];
    uVar1 = lVar9 + sVar5;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar6 = (void *)*param_2;
    }
    else {
      uVar7 = param_2[2] << 1;
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      param_2[2] = uVar1;
      pvVar6 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar6;
      if (pvVar6 == (void *)0x0) {
LAB_00156688:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar9 = param_2[1];
    }
    memcpy((void *)((long)pvVar6 + lVar9),&DAT_0011904f,sVar5);
    lVar9 = param_2[1] + sVar5;
  }
  else if (uVar4 != 0) {
    if (1 < uVar4) {
      uVar10 = 1;
      do {
        sVar5 = __strlen_chk(&DAT_0011a4ac,3);
        if (sVar5 != 0) {
          lVar9 = param_2[1];
          uVar1 = lVar9 + sVar5;
          if (uVar1 < (ulong)param_2[2]) {
            pvVar6 = (void *)*param_2;
          }
          else {
            uVar7 = param_2[2] << 1;
            if (uVar1 <= uVar7) {
              uVar1 = uVar7;
            }
            param_2[2] = uVar1;
            pvVar6 = realloc((void *)*param_2,uVar1);
            *param_2 = pvVar6;
            if (pvVar6 == (void *)0x0) goto LAB_00156688;
            lVar9 = param_2[1];
          }
          memcpy((void *)((long)pvVar6 + lVar9),&DAT_0011a4ac,sVar5);
          param_2[1] = param_2[1] + sVar5;
        }
        plVar8 = *(long **)(param_1 + 0x10);
        *(uint *)(param_2 + 3) = uVar10;
        (**(code **)(*plVar8 + 0x20))(plVar8,param_2);
        if (*(char *)((long)plVar8 + 9) != '\x01') {
          (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
        }
        uVar10 = uVar10 + 1;
      } while (uVar4 != uVar10);
    }
    goto LAB_00156668;
  }
  param_2[1] = lVar9;
LAB_00156668:
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((long)param_2 + 0x1c) = uVar3;
  return;
}

