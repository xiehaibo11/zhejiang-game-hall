
undefined8 FUN_0014dd04(long *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  undefined1 auVar10 [16];
  long local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pbVar1 = (byte *)*param_1;
  if ((byte *)param_1[1] == pbVar1) {
LAB_0014dd6c:
    if ((((ulong)(param_1[1] - (long)pbVar1) < 2) || (*pbVar1 != 0x44)) || (pbVar1[1] != 0x43)) {
      puVar4 = (undefined8 *)FUN_001578fc(param_1);
      goto LAB_0014de84;
    }
    lVar7 = param_1[2];
    lVar8 = param_1[3];
    *param_1 = (long)(pbVar1 + 2);
    local_50 = FUN_00157570(param_1);
    if (local_50 != 0) {
      do {
        FUN_0014c270(param_1 + 2,&local_50);
        pcVar2 = (char *)*param_1;
        if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'E')) {
          lVar7 = (lVar8 - lVar7 >> 3) * 8;
          *param_1 = (long)(pcVar2 + 1);
          auVar10 = FUN_00156e64(param_1,param_1[2] + lVar7,param_1[3]);
          pvVar9 = (void *)param_1[0x266];
          param_1[3] = param_1[2] + lVar7;
          lVar7 = *(long *)((long)pvVar9 + 8);
          puVar5 = pvVar9;
          if (0xfef < lVar7 + 0x20U) {
            puVar5 = malloc(0x1000);
            if (puVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            lVar7 = 0;
            *puVar5 = pvVar9;
            puVar5[1] = 0;
            param_1[0x266] = (long)puVar5;
          }
          *(long *)((long)puVar5 + 8) = lVar7 + 0x20;
          puVar4 = (undefined8 *)((long)puVar5 + lVar7 + 0x10);
          *puVar4 = &PTR_FUN_001686f0;
          *(undefined4 *)((long)puVar5 + lVar7 + 0x18) = 0x101012e;
          *(undefined1 (*) [16])((long)puVar5 + lVar7 + 0x20) = auVar10;
          goto LAB_0014de8c;
        }
        local_50 = FUN_00157570(param_1);
      } while (local_50 != 0);
    }
  }
  else {
    if (*pbVar1 == 0x55) {
      puVar4 = (undefined8 *)FUN_001534c4(param_1);
    }
    else {
      if (8 < *pbVar1 - 0x31) goto LAB_0014dd6c;
      puVar4 = (undefined8 *)FUN_00157570(param_1);
    }
LAB_0014de84:
    if (puVar4 != (undefined8 *)0x0) {
LAB_0014de8c:
      uVar6 = FUN_0014dbf8(param_1,puVar4);
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar6;
      }
      goto LAB_0014dedc;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return 0;
  }
LAB_0014dedc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

