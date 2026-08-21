
/* WARNING: Removing unreachable block (ram,0x00e42a4c) */
/* WARNING: Removing unreachable block (ram,0x00e42a84) */

undefined8 FUN_00e428e8(long *param_1,uint param_2,long *param_3,long *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte abStack_44 [4];
  
  if ((param_1 == (long *)0x0) || (*(uint *)((long)param_1 + 0x14) <= param_2)) {
    return 6;
  }
  lVar5 = param_1[6];
  lVar7 = *param_1;
  if (lVar5 == 0) {
    uVar1 = FUN_00e1bb5c(lVar7,param_1[1] + (ulong)*(uint *)(param_1 + 2) +
                               (ulong)(*(byte *)(param_1 + 3) * param_2));
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_00e1bbd0(*param_1,abStack_44,(char)param_1[3]);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar2 = (ulong)*(byte *)(param_1 + 3);
    if (uVar2 == 0) {
      uVar8 = 0;
      goto LAB_00e42948;
    }
    uVar8 = 0;
    pbVar3 = abStack_44;
    do {
      uVar2 = uVar2 - 1;
      uVar8 = (ulong)*pbVar3 | uVar8 << 8;
      pbVar3 = pbVar3 + 1;
    } while (uVar2 != 0);
    if (uVar8 == 0) goto LAB_00e42948;
    uVar1 = FUN_00e1bbd0(*param_1,abStack_44);
    if ((int)uVar1 != 0) goto LAB_00e42a20;
    uVar4 = (ulong)*(byte *)(param_1 + 3);
    if (uVar4 == 0) goto LAB_00e42a20;
    uVar2 = 0;
    pbVar3 = abStack_44;
    do {
      uVar4 = uVar4 - 1;
      uVar2 = (ulong)*pbVar3 | uVar2 << 8;
      pbVar3 = pbVar3 + 1;
    } while (uVar4 != 0);
    while (uVar2 == 0) {
LAB_00e42a20:
      do {
        param_2 = param_2 + 1;
        if (*(uint *)((long)param_1 + 0x14) <= param_2) goto LAB_00e4294c;
        uVar1 = FUN_00e1bbd0(*param_1,abStack_44,(char)param_1[3]);
      } while (((int)uVar1 != 0) || (uVar4 = (ulong)*(byte *)(param_1 + 3), uVar4 == 0));
      uVar2 = 0;
      pbVar3 = abStack_44;
      do {
        uVar4 = uVar4 - 1;
        uVar2 = (ulong)*pbVar3 | uVar2 << 8;
        pbVar3 = pbVar3 + 1;
      } while (uVar4 != 0);
    }
LAB_00e42a8c:
    lVar5 = *(long *)(lVar7 + 8);
    uVar4 = lVar5 + 1;
    if (uVar2 <= uVar4) goto LAB_00e42954;
    uVar6 = param_1[4];
  }
  else {
    uVar8 = *(ulong *)(lVar5 + (ulong)param_2 * 8);
    if (uVar8 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar2 = *(ulong *)(lVar5 + (ulong)param_2 * 8);
        if (uVar2 != 0) {
          uVar1 = 0;
          goto LAB_00e42a8c;
        }
      } while (param_2 < *(uint *)((long)param_1 + 0x14));
    }
LAB_00e42948:
    uVar1 = 0;
LAB_00e4294c:
    lVar5 = *(long *)(lVar7 + 8);
    uVar2 = 0;
LAB_00e42954:
    uVar6 = param_1[4];
    uVar4 = lVar5 + 1;
    if (uVar6 <= uVar4 - uVar2) goto joined_r0x00e42968;
  }
  uVar2 = uVar4 - uVar6;
joined_r0x00e42968:
  if ((uVar8 == 0) || (lVar5 = uVar2 - uVar8, uVar2 < uVar8 || lVar5 == 0)) {
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    *param_4 = lVar5;
    if (param_1[7] == 0) {
      uVar1 = FUN_00e1bb5c(lVar7,uVar8 + param_1[4] + -1);
      if ((int)uVar1 == 0) {
        uVar1 = FUN_00e1d5c4(lVar7,lVar5,param_3);
      }
    }
    else {
      *param_3 = param_1[7] + uVar8 + -1;
    }
  }
  return uVar1;
}

