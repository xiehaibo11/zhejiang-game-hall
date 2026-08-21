
void FUN_00df38fc(uint *param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  uVar10 = (ulong)param_2;
  switch(param_3) {
  case 0:
    UNRECOVERED_JUMPTABLE = DAT_01d546f8;
    break;
  case 1:
    UNRECOVERED_JUMPTABLE = DAT_01d54650;
    break;
  case 2:
    UNRECOVERED_JUMPTABLE = DAT_01d54638;
    break;
  case 3:
    memcpy(param_4,param_1,-(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2);
    return;
  case 4:
    if ((int)param_2 < 1) {
      return;
    }
    puVar2 = param_1 + (int)param_2;
    puVar6 = puVar2;
    if (puVar2 <= param_1 + 1) {
      puVar6 = param_1 + 1;
    }
    uVar10 = ((long)puVar6 + ~(ulong)param_1 >> 2) + 1;
    if ((3 < uVar10) && (uVar7 = uVar10 & 0x7ffffffffffffffc, uVar7 != 0)) {
      puVar6 = puVar2;
      if (puVar2 <= param_1 + 1) {
        puVar6 = param_1 + 1;
      }
      if (((uint *)((long)param_1 + ((long)puVar6 + ~(ulong)param_1 & 0xfffffffffffffffc) + 4) <=
           param_4) ||
         ((uint *)((long)param_4 + ((long)puVar6 + ~(ulong)param_1 + 4 & 0xfffffffffffffffc)) <=
          param_1)) {
        puVar6 = param_4 + 2;
        param_4 = param_4 + uVar7;
        puVar5 = param_1 + 2;
        uVar8 = uVar7;
        do {
          puVar1 = puVar5 + -2;
          uVar11 = *(undefined8 *)puVar5;
          uVar8 = uVar8 - 4;
          puVar5 = puVar5 + 4;
          uVar4 = NEON_rev32(*(undefined8 *)puVar1,1);
          uVar11 = NEON_rev32(uVar11,1);
          *(undefined8 *)(puVar6 + -2) = uVar4;
          *(undefined8 *)puVar6 = uVar11;
          puVar6 = puVar6 + 4;
        } while (uVar8 != 0);
        param_1 = param_1 + uVar7;
        if (uVar10 == uVar7) {
          return;
        }
      }
    }
    do {
      puVar6 = param_1 + 1;
      uVar3 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
      *param_4 = uVar3 >> 0x10 | uVar3 << 0x10;
      param_1 = puVar6;
      param_4 = param_4 + 1;
    } while (puVar6 < puVar2);
    return;
  case 5:
    UNRECOVERED_JUMPTABLE = DAT_01d546f0;
    break;
  case 6:
    UNRECOVERED_JUMPTABLE = DAT_01d54640;
    break;
  case 7:
    (*DAT_01d54650)(param_1,uVar10,param_4);
    goto LAB_00df3a00;
  case 8:
    memcpy(param_4,param_1,-(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2);
LAB_00df3a00:
    uVar4 = 0;
LAB_00df3abc:
                    /* WARNING: Could not recover jumptable at 0x00df3ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_01d544c8)(param_4,uVar4,uVar10,1,0);
    return;
  case 9:
    if (0 < (int)param_2) {
      puVar2 = param_1 + (int)param_2;
      puVar6 = puVar2;
      if (puVar2 <= param_1 + 1) {
        puVar6 = param_1 + 1;
      }
      uVar7 = ((long)puVar6 + ~(ulong)param_1 >> 2) + 1;
      puVar6 = param_4;
      if ((3 < uVar7) && (uVar8 = uVar7 & 0x7ffffffffffffffc, uVar8 != 0)) {
        puVar5 = puVar2;
        if (puVar2 <= param_1 + 1) {
          puVar5 = param_1 + 1;
        }
        if (((uint *)((long)param_1 + ((long)puVar5 + ~(ulong)param_1 & 0xfffffffffffffffc) + 4) <=
             param_4) ||
           ((uint *)((long)param_4 + ((long)puVar5 + ~(ulong)param_1 + 4 & 0xfffffffffffffffc)) <=
            param_1)) {
          puVar6 = param_4 + 2;
          puVar5 = param_1 + 2;
          uVar9 = uVar8;
          do {
            puVar1 = puVar5 + -2;
            uVar11 = *(undefined8 *)puVar5;
            uVar9 = uVar9 - 4;
            puVar5 = puVar5 + 4;
            uVar4 = NEON_rev32(*(undefined8 *)puVar1,1);
            uVar11 = NEON_rev32(uVar11,1);
            *(undefined8 *)(puVar6 + -2) = uVar4;
            *(undefined8 *)puVar6 = uVar11;
            puVar6 = puVar6 + 4;
          } while (uVar9 != 0);
          param_1 = param_1 + uVar8;
          puVar6 = param_4 + uVar8;
          if (uVar7 == uVar8) goto LAB_00df3aa8;
        }
      }
      do {
        puVar5 = param_1 + 1;
        uVar3 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
        *puVar6 = uVar3 >> 0x10 | uVar3 << 0x10;
        param_1 = puVar5;
        puVar6 = puVar6 + 1;
      } while (puVar5 < puVar2);
    }
LAB_00df3aa8:
    uVar4 = 1;
    goto LAB_00df3abc;
  case 10:
    (*DAT_01d546f0)(param_1,uVar10,param_4);
                    /* WARNING: Could not recover jumptable at 0x00df3b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_01d544e0)(param_4,uVar10,1,0);
    return;
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00df39d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar10,param_4);
  return;
}

