
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf0e28(int param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  ssize_t sVar7;
  long lVar8;
  long local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  piVar5 = (int *)__errno();
  local_18 = 0;
  local_10 = 0;
  iVar1 = *piVar5;
  iVar4 = FUN_00bf0ba0();
  if (iVar4 == 0) {
    lVar6 = FUN_00bf0d78(param_1);
    if (lVar6 != 0) {
      iVar4 = *(int *)(lVar6 + 0x68);
      while (iVar4 == param_1) {
        uVar2 = (ulong)local_10 >> 0x20;
        local_10 = CONCAT44((int)uVar2,iVar4);
        local_18 = lVar6;
        do {
          sVar7 = write(*(int *)(*(long *)(lVar6 + 8) + 0x22c),&local_18,0x10);
          if ((int)sVar7 != -1) {
            *(int *)(lVar6 + 0x90) = *(int *)(lVar6 + 0x90) + 1;
            break;
          }
        } while (*piVar5 == 4);
        lVar3 = *(long *)(lVar6 + 0x78);
        if (*(long *)(lVar6 + 0x78) == 0) {
          lVar8 = *(long *)(lVar6 + 0x80);
          if ((lVar8 == 0) || (lVar6 != *(long *)(lVar8 + 0x70))) {
            while( true ) {
              if (lVar8 == 0) goto LAB_00bf0f20;
              if (lVar6 != *(long *)(lVar8 + 0x78)) break;
              lVar6 = lVar8;
              lVar8 = *(long *)(lVar8 + 0x80);
            }
          }
        }
        else {
          do {
            lVar8 = lVar3;
            lVar3 = *(long *)(lVar8 + 0x70);
          } while (*(long *)(lVar8 + 0x70) != 0);
        }
        lVar6 = lVar8;
        param_1 = *(int *)(lVar8 + 0x68);
      }
    }
LAB_00bf0f20:
    FUN_00bf0adc();
  }
  *piVar5 = iVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

