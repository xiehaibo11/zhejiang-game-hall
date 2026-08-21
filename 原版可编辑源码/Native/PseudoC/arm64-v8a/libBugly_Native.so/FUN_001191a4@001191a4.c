
void FUN_001191a4(char *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  int local_d0 [2];
  long local_c8;
  undefined8 local_c0 [9];
  long local_78 [3];
  ushort local_60 [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*param_1 != '\0') {
    if (param_1[2] == '\0') {
      lVar5 = _Uelf64_memory_read(param_1,**(long **)(param_1 + 0x18) + 0x38,local_60,2,0);
      uVar2 = 0;
      if (lVar5 != 2) goto LAB_00119230;
      lVar5 = _Uelf64_memory_read(param_1,**(long **)(param_1 + 0x18) + 0x20,local_78,8,0);
      uVar2 = 0;
      if ((lVar5 != 8) || (local_60[0] == 0)) goto LAB_00119230;
      uVar7 = 0;
      lVar5 = local_78[0];
      do {
        lVar3 = _Uelf64_memory_read(param_1,lVar5 + **(long **)(param_1 + 0x18),local_d0,4,0);
        if ((lVar3 != 4) ||
           (lVar3 = _Uelf64_memory_read(param_1,lVar5 + **(long **)(param_1 + 0x18) + 8,&local_c8,8,
                                        0), lVar3 != 8)) break;
        if ((local_d0[0] == 1) && (local_c8 == param_2)) {
          lVar5 = _Uelf64_memory_read(param_1,**(long **)(param_1 + 0x18) + lVar5 + 0x10,local_c0,8,
                                      0);
          uVar2 = 0;
          if (lVar5 == 8) goto LAB_00119358;
          goto LAB_00119230;
        }
        uVar7 = uVar7 + 1;
        lVar5 = lVar5 + 0x38;
      } while (uVar7 < local_60[0]);
    }
    else {
      lVar5 = *(long *)(param_1 + 8);
      if ((ulong)*(ushort *)(lVar5 + 0x38) != 0) {
        uVar4 = 0;
        puVar6 = (undefined8 *)(lVar5 + *(long *)(lVar5 + 0x20) + 0x10);
        do {
          if ((*(int *)(puVar6 + -2) == 1) && (puVar6[-1] == param_2)) {
            local_c0[0] = *puVar6;
LAB_00119358:
            *param_3 = local_c0[0];
            uVar2 = 1;
            goto LAB_00119230;
          }
          uVar4 = uVar4 + 1;
          puVar6 = puVar6 + 7;
        } while (uVar4 < *(ushort *)(lVar5 + 0x38));
      }
    }
  }
  uVar2 = 0;
LAB_00119230:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

