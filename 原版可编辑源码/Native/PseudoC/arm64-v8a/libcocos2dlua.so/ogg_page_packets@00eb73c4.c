
int ogg_page_packets(undefined8 *param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  param_1 = (undefined8 *)*param_1;
  puVar5 = param_1;
  if ((param_1 == (undefined8 *)0x0) || (lVar6 = param_1[2], lVar6 < 0x1b)) {
    lVar7 = param_1[2];
    lVar4 = 0;
    do {
      puVar5 = (undefined8 *)puVar5[3];
      lVar4 = lVar4 + lVar7;
      lVar7 = puVar5[2];
      lVar6 = lVar7 + lVar4;
    } while (lVar6 < 0x1b);
    lVar7 = *(long *)*puVar5 + puVar5[1];
    bVar2 = *(byte *)(lVar7 + (0x1a - lVar4));
  }
  else {
    lVar4 = 0;
    lVar7 = *(long *)*param_1 + param_1[1];
    bVar2 = *(byte *)(lVar7 + 0x1a);
  }
  if ((ulong)bVar2 == 0) {
    return 0;
  }
  uVar8 = 0;
  iVar3 = 0;
  do {
    lVar1 = uVar8 + 0x1b;
    if (lVar1 < lVar4) {
      lVar6 = param_1[2];
      lVar4 = 0;
      lVar7 = *(long *)*param_1 + param_1[1];
      puVar5 = param_1;
    }
    if (lVar6 <= lVar1) {
      lVar7 = puVar5[2];
      do {
        puVar5 = (undefined8 *)puVar5[3];
        lVar4 = lVar4 + lVar7;
        lVar7 = puVar5[2];
        lVar6 = lVar7 + lVar4;
      } while (lVar6 <= lVar1);
      lVar7 = *(long *)*puVar5 + puVar5[1];
    }
    uVar8 = uVar8 + 1;
    if (*(char *)(lVar7 + (lVar1 - lVar4)) != -1) {
      iVar3 = iVar3 + 1;
    }
  } while (uVar8 != bVar2);
  return iVar3;
}

