
void FUN_0012c81c(uint *param_1,long param_2,undefined1 *param_3,long *param_4,int param_5,
                 int *param_6)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  ulong local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar12 = *param_4;
  *param_4 = 0;
  *param_6 = 0;
LAB_0012c870:
  do {
    uVar5 = *param_1;
    if (uVar5 == 9) goto LAB_0012cab4;
    if (uVar5 == 8) {
      iVar6 = 1;
LAB_0012ca94:
      uVar7 = 0;
      *param_6 = iVar6;
      goto LAB_0012cac4;
    }
    lVar11 = *(long *)(param_1 + 0xe);
    if ((lVar11 == param_2) && (param_5 == 0)) {
      iVar6 = 2;
      goto LAB_0012ca94;
    }
    if ((uVar5 & 0xfffffffe) == 6) {
      uVar8 = (ulong)param_1[3];
      bVar2 = (byte)param_1[1];
      uVar9 = param_2 - lVar11;
      local_70 = lVar12 - *param_4;
      uVar1 = uVar9;
      if (uVar8 <= uVar9) {
        uVar1 = uVar8;
      }
      if ((char)bVar2 < '\0') {
        if (uVar5 == 6) {
          FUN_0012b8c4(param_1 + 4,0xdf < bVar2,0x9f < bVar2);
          *param_1 = 7;
        }
        if (param_1[2] < local_70) {
          local_70 = (ulong)param_1[2];
        }
        iVar6 = FUN_0012b908(param_1 + 4,uVar1 + lVar11,param_3,&local_70,uVar8 <= uVar9,param_6);
        *param_4 = *param_4 + local_70;
        uVar5 = param_1[2] - (int)local_70;
        uVar3 = param_1[3] - (int)(*(long *)(param_1 + 0xe) - lVar11);
        param_1[2] = uVar5;
        param_1[3] = uVar3;
        if (iVar6 != 0) goto LAB_0012cab4;
        if (*param_6 == 3) {
          if (uVar5 != 0) goto LAB_0012caac;
          goto LAB_0012cab4;
        }
        if (local_70 == 0 && *(long *)(param_1 + 0xe) - lVar11 == 0) {
          if (((*param_6 != 4) || (uVar3 != 0)) || (uVar5 != 0)) goto LAB_0012cab4;
          *param_1 = 0;
        }
        *param_6 = 0;
      }
      else {
        if (local_70 == 0) {
          *param_6 = 3;
LAB_0012caac:
          uVar7 = 0;
          goto LAB_0012cac4;
        }
        if (uVar5 == 6) {
          FUN_0012b8c4(param_1 + 4,bVar2 == 1,0);
        }
        if (uVar1 < local_70) {
          local_70 = uVar1;
        }
        uVar1 = local_70;
        if (local_70 == 0) goto LAB_0012cab4;
        memcpy((void *)(*(long *)(param_1 + 10) + *(long *)(param_1 + 0xe)),param_3,local_70);
        *(ulong *)(param_1 + 0xe) = *(long *)(param_1 + 0xe) + uVar1;
        if (param_1[0x15] == 0) {
          uVar5 = param_1[0x14];
          if (param_1[5] - uVar5 <= uVar1) {
            param_1[0x15] = param_1[5];
          }
        }
        else {
          uVar5 = param_1[0x14];
        }
        param_1[0x14] = uVar5 + (int)uVar1;
        *param_4 = *param_4 + local_70;
        uVar3 = param_1[3] - (int)local_70;
        param_1[3] = uVar3;
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = 7;
        }
        *param_1 = uVar5;
      }
      param_3 = param_3 + local_70;
      goto LAB_0012c870;
    }
    if (*param_4 == lVar12) {
      iVar6 = 3;
      goto LAB_0012ca94;
    }
    *param_4 = *param_4 + 1;
    puVar10 = param_3 + 1;
    uVar5 = FUN_0012cafc(param_1,*param_3);
    *param_1 = uVar5;
    param_3 = puVar10;
    if ((lVar11 == param_2) && (uVar5 != 8)) {
LAB_0012cab4:
      *param_6 = 0;
      *param_1 = 9;
      uVar7 = 1;
LAB_0012cac4:
      if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar7);
      }
      return;
    }
  } while( true );
}

