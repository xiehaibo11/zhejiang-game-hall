
undefined8 * FUN_0011be3c(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 uVar7;
  byte *pbVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *local_38;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar1 == pbVar2) || (*pbVar1 != 0x53)) {
    return (undefined8 *)0x0;
  }
  pbVar8 = pbVar1 + 1;
  *param_1 = (long)pbVar8;
  if (pbVar2 == pbVar8) {
    iVar4 = islower(0);
  }
  else {
    iVar4 = islower((uint)*pbVar8);
  }
  if (iVar4 == 0) {
    if ((pbVar8 != pbVar2) && (*pbVar8 == 0x5f)) {
      *param_1 = (long)(pbVar1 + 2);
      if ((undefined8 *)param_1[0x25] == (undefined8 *)param_1[0x26]) {
        return (undefined8 *)0x0;
      }
      return *(undefined8 **)param_1[0x25];
    }
    if (pbVar2 == pbVar8) {
      return (undefined8 *)0x0;
    }
    bVar3 = *pbVar8;
    if (bVar3 < 0x30) {
      return (undefined8 *)0x0;
    }
    if ((0x39 < bVar3) && (0x19 < (byte)(bVar3 + 0xbf))) {
      return (undefined8 *)0x0;
    }
    lVar6 = 0;
    pbVar1 = pbVar1 + 2;
    do {
      pbVar8 = pbVar1;
      if (bVar3 < 0x3a) {
        lVar9 = -0x30;
      }
      else {
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          pbVar8 = pbVar8 + -1;
          break;
        }
        lVar9 = -0x37;
      }
      lVar6 = lVar9 + (ulong)bVar3 + lVar6 * 0x24;
      *param_1 = (long)pbVar8;
      if (pbVar2 == pbVar8) break;
      bVar3 = *pbVar8;
      pbVar1 = pbVar8 + 1;
    } while (0x2f < bVar3);
    if (pbVar8 == pbVar2) {
      return (undefined8 *)0x0;
    }
    if (*pbVar8 != 0x5f) {
      return (undefined8 *)0x0;
    }
    *param_1 = (long)(pbVar8 + 1);
    if ((ulong)(param_1[0x26] - param_1[0x25] >> 3) <= lVar6 + 1U) {
      return (undefined8 *)0x0;
    }
    return *(undefined8 **)(param_1[0x25] + (lVar6 + 1U) * 8);
  }
  if (pbVar2 == pbVar8) {
    return (undefined8 *)0x0;
  }
  switch(*pbVar8) {
  case 0x61:
    puVar10 = (undefined8 *)param_1[0x25c];
    *param_1 = (long)(pbVar1 + 2);
    lVar6 = puVar10[1];
    if (lVar6 + 0x10U < 0xff0) {
      uVar7 = 0;
      goto LAB_0011c0e4;
    }
    puVar5 = malloc(0x1000);
    if (puVar5 == (void *)0x0) {
LAB_0011c1c0:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    uVar7 = 0;
    goto LAB_0011bfe8;
  case 0x62:
    puVar10 = (undefined8 *)param_1[0x25c];
    *param_1 = (long)(pbVar1 + 2);
    lVar6 = puVar10[1];
    if (lVar6 + 0x10U < 0xff0) {
      uVar7 = 1;
      goto LAB_0011c0e4;
    }
    puVar5 = malloc(0x1000);
    if (puVar5 == (undefined8 *)0x0) goto LAB_0011c1c0;
    *puVar5 = puVar10;
    puVar5[1] = 0;
    param_1[0x25c] = (long)puVar5;
    uVar7 = 1;
    break;
  default:
    return (undefined8 *)0x0;
  case 100:
    puVar10 = (undefined8 *)param_1[0x25c];
    *param_1 = (long)(pbVar1 + 2);
    lVar6 = puVar10[1];
    if (lVar6 + 0x10U < 0xff0) {
      uVar7 = 5;
      goto LAB_0011c0e4;
    }
    puVar5 = malloc(0x1000);
    if (puVar5 == (undefined8 *)0x0) goto LAB_0011c1c0;
    uVar7 = 5;
LAB_0011bfe8:
    *puVar5 = puVar10;
    puVar5[1] = 0;
    param_1[0x25c] = (long)puVar5;
    break;
  case 0x69:
    puVar10 = (undefined8 *)param_1[0x25c];
    *param_1 = (long)(pbVar1 + 2);
    lVar6 = puVar10[1];
    if (lVar6 + 0x10U < 0xff0) {
      uVar7 = 3;
      goto LAB_0011c0e4;
    }
    puVar5 = malloc(0x1000);
    if (puVar5 == (undefined8 *)0x0) goto LAB_0011c1c0;
    *puVar5 = puVar10;
    puVar5[1] = 0;
    param_1[0x25c] = (long)puVar5;
    uVar7 = 3;
    break;
  case 0x6f:
    puVar10 = (undefined8 *)param_1[0x25c];
    *param_1 = (long)(pbVar1 + 2);
    lVar6 = puVar10[1];
    if (lVar6 + 0x10U < 0xff0) {
      uVar7 = 4;
      goto LAB_0011c0e4;
    }
    puVar5 = malloc(0x1000);
    if (puVar5 == (undefined8 *)0x0) goto LAB_0011c1c0;
    *puVar5 = puVar10;
    puVar5[1] = 0;
    param_1[0x25c] = (long)puVar5;
    uVar7 = 4;
    break;
  case 0x73:
    puVar10 = (undefined8 *)param_1[0x25c];
    *param_1 = (long)(pbVar1 + 2);
    lVar6 = puVar10[1];
    if (lVar6 + 0x10U < 0xff0) {
      uVar7 = 2;
      goto LAB_0011c0e4;
    }
    puVar5 = malloc(0x1000);
    if (puVar5 == (undefined8 *)0x0) goto LAB_0011c1c0;
    *puVar5 = puVar10;
    puVar5[1] = 0;
    param_1[0x25c] = (long)puVar5;
    uVar7 = 2;
  }
  lVar6 = 0;
  puVar10 = puVar5;
LAB_0011c0e4:
  puVar10[1] = lVar6 + 0x10;
  puVar5 = (undefined8 *)((long)puVar10 + lVar6 + 0x10);
  *puVar5 = &PTR_FUN_00138288;
  *(undefined4 *)((long)puVar10 + lVar6 + 0x18) = 0x1010124;
  *(undefined4 *)((long)puVar10 + lVar6 + 0x1c) = uVar7;
  puVar10 = (undefined8 *)FUN_0011cc40(param_1,puVar5);
  if (puVar10 != puVar5) {
    local_38 = puVar10;
    FUN_0011b8dc(param_1 + 0x25,&local_38);
    return puVar10;
  }
  return puVar5;
}

