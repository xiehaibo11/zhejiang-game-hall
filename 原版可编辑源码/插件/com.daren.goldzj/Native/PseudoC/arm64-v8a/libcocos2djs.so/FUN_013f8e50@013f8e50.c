
long FUN_013f8e50(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5
                 )

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x26;
  
  *(int *)(param_5 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x208);
  *(undefined4 *)(param_5 + 3) = 0x22;
  if ((long)((ulong)*(uint *)(param_5 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x13f9028);
    (*pcVar2)();
  }
  *(undefined4 *)(param_5 + 7) = 0;
  if ((ulong)((long)((ulong)*(uint *)(param_5 + 3) << 0x20) >> 0x21) < 2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x13f9030);
    (*pcVar2)();
  }
  *(undefined4 *)(param_5 + 0xb) = 0;
  if ((ulong)((long)((ulong)*(uint *)(param_5 + 3) << 0x20) >> 0x21) < 3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x13f9038);
    (*pcVar2)();
  }
  *(undefined4 *)(param_5 + 0xf) = 8;
  if ((ulong)((long)((ulong)*(uint *)(param_5 + 3) << 0x20) >> 0x21) < 4) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x13f9040);
    (*pcVar2)();
  }
  *(undefined4 *)(param_5 + 0x13) = 2;
  if ((ulong)((long)((ulong)*(uint *)(param_5 + 3) << 0x20) >> 0x21) < 5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x13f9048);
    (*pcVar2)();
  }
  *(undefined4 *)(param_5 + 0x17) = 0;
  puVar5 = (undefined4 *)(param_5 + 0x1b);
  if (puVar5 != (undefined4 *)(param_5 + 0x4b)) {
    uVar6 = *(undefined8 *)(unaff_x26 + 0xa0);
    do {
      *puVar5 = (int)uVar6;
      puVar5 = puVar5 + 1;
    } while (puVar5 != (undefined4 *)(param_5 + 0x4b));
  }
  uVar7 = **(ulong **)(unaff_x26 + 0x1428);
  lVar4 = (ulong)*(byte *)(param_3 + 3) * 4;
  uVar1 = uVar7 + lVar4;
  if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar3 = uVar7 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar1;
  }
  else {
    lVar3 = FUN_01348560();
  }
  *(int *)(lVar3 + -1) = (int)param_3;
  lVar4 = lVar4 + -1;
  *(int *)(lVar3 + 3) = (int)param_5;
  *(int *)(lVar3 + 7) = (int)*(undefined8 *)(unaff_x26 + 0x168);
  if (lVar4 != 0xb) {
    uVar6 = *(undefined8 *)(unaff_x26 + 0xa0);
    do {
      lVar4 = lVar4 + -4;
      *(int *)(lVar3 + lVar4) = (int)uVar6;
    } while (lVar4 != 0xb);
  }
  return lVar3;
}

