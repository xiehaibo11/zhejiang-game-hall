
undefined8 nb_decoder_ctl(long param_1,undefined4 param_2,int *param_3)

{
  long lVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  
  switch(param_2) {
  case 0:
    uVar4 = 0;
    *(int *)(param_1 + 0xa4) = *param_3;
    break;
  case 1:
    iVar5 = *(int *)(param_1 + 0xa4);
    goto LAB_00120114;
  default:
    fprintf((FILE *)0x14d168,"warning: %s %d\n","Unknown nb_ctl request: ");
    uVar4 = 0xffffffff;
    break;
  case 3:
    iVar5 = *(int *)(param_1 + 0x10);
    goto LAB_00120114;
  case 6:
  case 8:
    uVar4 = 0;
    *(int *)(param_1 + 0xa0) = *param_3;
    break;
  case 7:
  case 9:
    iVar5 = *(int *)(param_1 + 0xa0);
    goto LAB_00120114;
  case 0x13:
    lVar7 = *(long *)(*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0xa0) * 8);
    if (lVar7 == 0) {
      iVar5 = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        iVar5 = (*(int *)(param_1 + 0x28) * 5) / *(int *)(param_1 + 0x10);
      }
    }
    else {
      iVar5 = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        iVar5 = (*(int *)(lVar7 + 0x54) * *(int *)(param_1 + 0x28)) / *(int *)(param_1 + 0x10);
      }
    }
    goto LAB_00120114;
  case 0x14:
    iVar5 = *param_3;
    uVar9 = *(undefined8 *)(param_3 + 2);
    uVar4 = 0;
    param_1 = param_1 + (long)iVar5 * 0x28;
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_1 + 0xb0) = uVar9;
    *(int *)(param_1 + 0xa8) = iVar5;
    break;
  case 0x16:
    uVar9 = *(undefined8 *)(param_3 + 2);
    uVar4 = 0;
    *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_1 + 0x330) = uVar9;
    *(int *)(param_1 + 0x328) = *param_3;
    break;
  case 0x18:
    uVar4 = 0;
    *(int *)(param_1 + 0x28) = *param_3;
    break;
  case 0x19:
    iVar5 = *(int *)(param_1 + 0x28);
    goto LAB_00120114;
  case 0x1a:
    if (0 < *(int *)(param_1 + 0x1c)) {
      lVar6 = *(long *)(param_1 + 0x58);
      lVar7 = 0;
      do {
        *(undefined4 *)(lVar6 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_1 + 0x1c));
    }
    uVar2 = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x10);
    if (-1 < (int)uVar2) {
      memset(*(void **)(param_1 + 0x38),0,(ulong)uVar2 * 2 + 2);
    }
    goto LAB_00120104;
  case 0x24:
    uVar4 = 0;
    *(int *)(param_1 + 0x94) = *param_3;
    break;
  case 0x25:
    iVar5 = *(int *)(param_1 + 0x94);
    goto LAB_00120114;
  case 0x27:
    iVar5 = *(int *)(param_1 + 0x14);
    goto LAB_00120114;
  case 0x2c:
    uVar4 = 0;
    *(int *)(param_1 + 0x368) = *param_3;
    break;
  case 0x2d:
    iVar5 = *(int *)(param_1 + 0x368);
    goto LAB_00120114;
  case 0x2f:
    iVar5 = 0;
    if (*(short *)(param_1 + 0x7c) != 0) {
      iVar5 = (int)*(short *)(param_1 + 0x78) / (int)*(short *)(param_1 + 0x7c);
    }
    dVar10 = log((double)iVar5);
    iVar5 = 0;
    if (*(short *)(param_1 + 0x7c) != 0) {
      iVar5 = (int)*(short *)(param_1 + 0x7a) / (int)*(short *)(param_1 + 0x7c);
    }
    dVar11 = log((double)iVar5);
    fVar8 = (float)(dVar10 / dVar11);
    if (1.0 < fVar8) {
      fVar8 = 1.0;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    iVar5 = (int)(fVar8 * 100.0);
    goto LAB_00120114;
  case 100:
    if (0 < *(int *)(param_1 + 0x18)) {
      lVar6 = *(long *)(param_1 + 0x68);
      lVar7 = 0;
      do {
        lVar1 = lVar7 + 1;
        param_3[lVar7] = *(int *)(lVar6 + lVar7 * 4);
        lVar7 = lVar1;
      } while (lVar1 < *(int *)(param_1 + 0x18));
      return 0;
    }
    goto LAB_00120104;
  case 0x65:
    if (0 < *(int *)(param_1 + 0x18)) {
      lVar7 = 0;
      do {
        uVar3 = compute_rms16(*(long *)(param_1 + 0x40) +
                              (long)(*(int *)(param_1 + 0x14) * (int)lVar7) * 2);
        *(undefined2 *)((long)param_3 + lVar7 * 2) = uVar3;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_1 + 0x18));
      return 0;
    }
LAB_00120104:
    uVar4 = 0;
    break;
  case 0x67:
    iVar5 = *(int *)(param_1 + 0x360);
LAB_00120114:
    uVar4 = 0;
    *param_3 = iVar5;
    break;
  case 0x68:
    uVar4 = 0;
    *(int **)(param_1 + 0x70) = param_3;
    break;
  case 0x69:
    uVar4 = 0;
    *(int *)(param_1 + 0x364) = *param_3;
    break;
  case 0x6a:
    uVar4 = 0;
    *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x30);
  }
  return uVar4;
}

