
int ogg_page_packets(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  param_1 = (undefined8 *)*param_1;
  puVar4 = param_1;
  if ((param_1 == (undefined8 *)0x0) || (lVar5 = param_1[2], lVar5 < 0x1b)) {
    lVar8 = param_1[2];
    lVar3 = 0;
    do {
      puVar4 = (undefined8 *)puVar4[3];
      lVar3 = lVar3 + lVar8;
      lVar8 = puVar4[2];
      lVar5 = lVar8 + lVar3;
    } while (lVar5 < 0x1b);
    lVar8 = *(long *)*puVar4 + puVar4[1];
  }
  else {
    lVar3 = 0;
    lVar8 = *(long *)*param_1 + param_1[1];
  }
  uVar6 = (ulong)*(byte *)(lVar8 + (0x1a - lVar3));
  if (uVar6 != 0) {
    uVar7 = 0;
    iVar2 = 0;
    do {
      lVar1 = uVar7 + 0x1b;
      if (lVar1 < lVar3) {
        lVar5 = param_1[2];
        lVar3 = 0;
        lVar8 = *(long *)*param_1 + param_1[1];
        puVar4 = param_1;
      }
      if (lVar5 <= lVar1) {
        lVar8 = puVar4[2];
        do {
          puVar4 = (undefined8 *)puVar4[3];
          lVar3 = lVar3 + lVar8;
          lVar8 = puVar4[2];
          lVar5 = lVar8 + lVar3;
        } while (lVar5 <= lVar1);
        lVar8 = *(long *)*puVar4 + puVar4[1];
      }
      uVar7 = uVar7 + 1;
      if (*(char *)(lVar8 + (lVar1 - lVar3)) != -1) {
        iVar2 = iVar2 + 1;
      }
    } while (uVar7 != uVar6);
    return iVar2;
  }
  return 0;
}

