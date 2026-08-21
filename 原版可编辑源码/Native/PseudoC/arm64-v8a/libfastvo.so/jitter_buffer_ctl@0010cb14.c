
undefined8 jitter_buffer_ctl(uint *param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint in_w14;
  int in_w15;
  int in_w16;
  
  switch(param_2) {
  case 0:
    param_1[0x711] = *param_3;
    return 0;
  case 1:
    *param_3 = param_1[0x711];
    return 0;
  default:
    fprintf((FILE *)0x14d168,"warning: %s %d\n","Unknown jitter_buffer_ctl request: ");
    return 0xffffffff;
  case 3:
    iVar5 = 0;
    iVar6 = 0;
    lVar4 = -0x1900;
    break;
  case 4:
    *(uint **)(param_1 + 0x70c) = param_3;
    return 0;
  case 5:
    *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x70c);
    return 0;
  case 6:
    param_1[0x70e] = *param_3;
    return 0;
  case 7:
    *param_3 = param_1[0x70e];
    return 0;
  case 8:
    param_1[0x70f] = *param_3;
    return 0;
  case 9:
    *param_3 = param_1[0x70f];
    return 0;
  case 10:
    uVar1 = *param_3;
    param_1[0x7d8] = uVar1;
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = 4000 / (int)uVar1;
    }
    param_1[0x7d6] = uVar2;
    param_1[0x7d7] = (int)uVar2 / 3;
    return 0;
  case 0xb:
    *param_3 = param_1[0x7d8];
    return 0;
  case 0xc:
    param_1[0x7d9] = *param_3;
    return 0;
  case 0xd:
    *param_3 = param_1[0x7d9];
    return 0;
  }
  do {
    uVar8 = (long)param_1 + lVar4;
    lVar7 = *(long *)(uVar8 + 0x1910);
    lVar9 = *(long *)(uVar8 + 0x1930);
    if (lVar7 != 0) {
      uVar8 = (ulong)*param_1;
    }
    if (lVar9 != 0) {
      in_w14 = *param_1;
    }
    if (lVar7 != 0) {
      in_w15 = *(int *)((long)param_1 + lVar4 + 0x191c);
    }
    if (lVar9 != 0) {
      in_w16 = *(int *)((long)param_1 + lVar4 + 0x193c);
    }
    iVar3 = in_w14 - in_w16;
    in_w14 = (uint)(lVar9 != 0);
    iVar5 = iVar5 + (uint)(lVar7 != 0 && (int)uVar8 - in_w15 < 1);
    lVar4 = lVar4 + 0x40;
    iVar6 = iVar6 + (uint)(lVar9 != 0 && iVar3 < 1);
  } while (lVar4 != 0);
  *param_3 = iVar6 + iVar5;
  return 0;
}

