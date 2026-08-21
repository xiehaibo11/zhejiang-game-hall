
undefined8 speex_preprocess_ctl(long param_1,undefined4 param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  uVar3 = 0;
  switch(param_2) {
  case 0:
    uVar3 = 0;
    *(uint *)(param_1 + 0x18) = *param_3;
    break;
  case 1:
    uVar5 = *(uint *)(param_1 + 0x18);
    goto LAB_00124468;
  default:
    fprintf((FILE *)0x14d168,"warning: %s %d\n","Unknown speex_preprocess_ctl request: ");
    uVar3 = 0xffffffff;
    break;
  case 4:
    fprintf((FILE *)0x14d168,"warning: %s\n",
            "The VAD has been replaced by a hack pending a complete rewrite");
    uVar3 = 0;
    *(uint *)(param_1 + 0x1c) = *param_3;
    break;
  case 5:
    uVar5 = *(uint *)(param_1 + 0x1c);
    goto LAB_00124468;
  case 8:
    *(uint *)(param_1 + 0x20) = *param_3;
    if (0 < *(int *)(param_1 + 4)) {
      lVar6 = *(long *)(param_1 + 0x80);
      lVar7 = 0;
      do {
        *(undefined4 *)(lVar6 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_1 + 4));
      return 0;
    }
    goto LAB_0012444c;
  case 9:
    uVar5 = *(uint *)(param_1 + 0x20);
    goto LAB_00124468;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    break;
  case 0xe:
    uVar3 = 0;
    uVar5 = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
    if (99 < (int)uVar5) {
      uVar5 = 100;
    }
    *param_3 = uVar5;
    *(short *)(param_1 + 0x28) = (short)((uVar5 * 0x7fff) / 100);
    break;
  case 0xf:
    iVar4 = (int)*(short *)(param_1 + 0x28);
    goto LAB_00124458;
  case 0x10:
    uVar3 = 0;
    uVar5 = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
    if (99 < (int)uVar5) {
      uVar5 = 100;
    }
    *param_3 = uVar5;
    *(short *)(param_1 + 0x2a) = (short)((uVar5 * 0x7fff) / 100);
    break;
  case 0x11:
    iVar4 = (int)*(short *)(param_1 + 0x2a);
    goto LAB_00124458;
  case 0x12:
    uVar2 = *param_3;
    uVar3 = 0;
    uVar5 = -uVar2;
    if ((int)uVar2 < 0) {
      uVar5 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar5;
    break;
  case 0x13:
    uVar5 = *(uint *)(param_1 + 0x2c);
    goto LAB_00124468;
  case 0x14:
    uVar2 = *param_3;
    uVar3 = 0;
    uVar5 = -uVar2;
    if ((int)uVar2 < 0) {
      uVar5 = uVar2;
    }
    *(uint *)(param_1 + 0x30) = uVar5;
    break;
  case 0x15:
    uVar5 = *(uint *)(param_1 + 0x30);
    goto LAB_00124468;
  case 0x16:
    uVar2 = *param_3;
    uVar3 = 0;
    uVar5 = -uVar2;
    if ((int)uVar2 < 0) {
      uVar5 = uVar2;
    }
    *(uint *)(param_1 + 0x34) = uVar5;
    break;
  case 0x17:
    uVar5 = *(uint *)(param_1 + 0x34);
    goto LAB_00124468;
  case 0x18:
    uVar3 = 0;
    *(uint **)(param_1 + 0x38) = param_3;
    break;
  case 0x19:
    uVar3 = 0;
    *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x38);
    break;
  case 0x25:
  case 0x29:
    uVar5 = *(uint *)(param_1 + 4);
    goto LAB_00124468;
  case 0x27:
    if (0 < *(int *)(param_1 + 4)) {
      lVar6 = *(long *)(param_1 + 0x58);
      lVar7 = 0;
      do {
        lVar1 = lVar7 + 1;
        param_3[lVar7] = *(uint *)(lVar6 + lVar7 * 4);
        lVar7 = lVar1;
      } while (lVar1 < *(int *)(param_1 + 4));
      return 0;
    }
    goto LAB_0012444c;
  case 0x2b:
    if (0 < *(int *)(param_1 + 4)) {
      lVar6 = *(long *)(param_1 + 0x78);
      lVar7 = 0;
      do {
        lVar1 = lVar7 + 1;
        param_3[lVar7] = *(int *)(lVar6 + lVar7 * 4) + 0x40 >> 7;
        lVar7 = lVar1;
      } while (lVar1 < *(int *)(param_1 + 4));
      return 0;
    }
LAB_0012444c:
    uVar3 = 0;
    break;
  case 0x2d:
    iVar4 = (int)*(short *)(param_1 + 0x40);
LAB_00124458:
    uVar5 = iVar4 * 100 >> 0xf;
LAB_00124468:
    uVar3 = 0;
    *param_3 = uVar5;
  }
  return uVar3;
}

