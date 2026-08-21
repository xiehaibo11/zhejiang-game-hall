
void FUN_01084718(long param_1,long param_2,undefined8 param_3,int *param_4,char *param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 local_78 [4];
  int local_74;
  int local_70;
  undefined8 local_6c;
  
  lVar4 = *(long *)(param_2 + 400);
  piVar1 = (int *)(param_2 + 0x10);
  uVar8 = (ulong)(lVar4 - (long)piVar1) >> 3;
  uVar7 = (uint)uVar8;
  if (((uVar8 & 1) != 0) && (*param_5 == '\0')) {
    if (uVar7 == 0) {
      piVar6 = *(int **)(param_2 + 8);
      if ((piVar6 == (int *)0x0) || (*piVar6 != 0)) {
        iVar5 = 0;
      }
      else {
        *piVar6 = 0x82;
        iVar5 = 0;
      }
    }
    else if (*(int *)(param_2 + 0x14) == 1) {
      iVar5 = *piVar1;
      if (iVar5 < 0) {
        iVar5 = -(0x2000 - iVar5 >> 0xe);
      }
      else {
        iVar5 = iVar5 + 0x2000 >> 0xe;
      }
    }
    else if (*(int *)(param_2 + 0x14) == 2) {
      iVar5 = *piVar1 << 0x10;
    }
    else {
      iVar5 = *piVar1;
    }
    *param_4 = iVar5 + *(int *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x718) + 0x3f8) * 0x10000;
  }
  if (*(char *)(*(long *)(param_1 + 0xa8) + 0x5d9) == '\0') {
    uVar9 = (uint)((ulong)(lVar4 - (long)piVar1) >> 3) & 1;
    if (uVar9 < uVar7) {
      iVar5 = 0;
      uVar9 = uVar9 + 1;
      while( true ) {
        uVar3 = (uint)((ulong)(lVar4 - (long)piVar1) >> 3);
        if (uVar9 - 1 < uVar3) {
          lVar4 = param_2 + (ulong)(uVar9 - 1) * 8;
          iVar2 = *(int *)(lVar4 + 0x14);
          piVar6 = (int *)(lVar4 + 0x10);
          if (iVar2 == 1) {
            iVar2 = *piVar6;
            if (iVar2 < 0) {
              local_74 = -(0x2000 - iVar2 >> 0xe);
            }
            else {
              local_74 = iVar2 + 0x2000 >> 0xe;
            }
          }
          else if (iVar2 == 2) {
            local_74 = *piVar6 << 0x10;
          }
          else {
            local_74 = *piVar6;
          }
        }
        else {
          piVar6 = *(int **)(param_2 + 8);
          if ((piVar6 == (int *)0x0) || (*piVar6 != 0)) {
            local_74 = 0;
          }
          else {
            *piVar6 = 0x82;
            local_74 = 0;
          }
        }
        local_74 = local_74 + iVar5;
        if (uVar9 < uVar3) {
          lVar4 = param_2 + (ulong)uVar9 * 8;
          iVar5 = *(int *)(lVar4 + 0x14);
          piVar6 = (int *)(lVar4 + 0x10);
          if (iVar5 == 1) {
            iVar5 = *piVar6;
            if (iVar5 < 0) {
              iVar5 = -(0x2000 - iVar5 >> 0xe);
            }
            else {
              iVar5 = iVar5 + 0x2000 >> 0xe;
            }
          }
          else if (iVar5 == 2) {
            iVar5 = *piVar6 << 0x10;
          }
          else {
            iVar5 = *piVar6;
          }
        }
        else {
          piVar6 = *(int **)(param_2 + 8);
          if ((piVar6 == (int *)0x0) || (*piVar6 != 0)) {
            iVar5 = 0;
          }
          else {
            *piVar6 = 0x82;
            iVar5 = 0;
          }
        }
        iVar5 = iVar5 + local_74;
        local_78[0] = 0;
        local_6c = 0;
        local_70 = iVar5;
        FUN_01085c80(param_3,local_78);
        if (uVar7 <= uVar9 + 1) break;
        lVar4 = *(long *)(param_2 + 400);
        uVar9 = uVar9 + 2;
      }
    }
    *(int **)(param_2 + 400) = piVar1;
  }
  *param_5 = '\x01';
                    /* try { // try from 01084954 to 0118495b has its CatchHandler @ 0108499c */
                    /* try { // try from 0108495c to 0118499f has its CatchHandler @ 010845f4 */
  return;
}

