
void FUN_0143ef40(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long in_x3;
  undefined4 in_w4;
  long lVar4;
  long in_x5;
  int in_w6;
  undefined8 uVar5;
  long in_x7;
  undefined4 *puVar6;
  long in_x9;
  int in_w10;
  long lVar7;
  undefined4 in_w11;
  undefined4 in_w12;
  long in_x14;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  *(undefined4 *)(in_x14 + -1) = in_w12;
  lVar1 = in_x14 + 0x14;
  *(int *)(in_x14 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
  *(undefined4 *)(in_x14 + 0xb) = in_w11;
  *(undefined4 *)(in_x14 + 0x17) = in_w11;
  lVar2 = lVar1 + param_1 * 4 + 8;
  *(int *)(in_x14 + 0x13) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
  *(int *)(in_x14 + 7) = (int)lVar2;
  *(int *)(lVar2 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x270);
  *(int *)(lVar2 + 3) = in_w10 * 2;
  *(undefined4 *)(in_x14 + 0xf) = in_w4;
  if ((long)((ulong)*(uint *)(lVar2 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0,0x143f204);
    (*pcVar3)();
  }
  *(int *)(lVar2 + 7) = (int)in_x5;
  if ((ulong)((long)((ulong)*(uint *)(lVar2 + 3) << 0x20) >> 0x21) < 2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0,0x143f20c);
    (*pcVar3)();
  }
  *(int *)(lVar2 + 0xb) = (int)lVar1;
  lVar7 = param_1 * 4 + 7;
  lVar4 = in_x9 * 4 + 7;
  if (lVar7 != lVar4) {
    puVar6 = (undefined4 *)(in_x7 + 8);
    do {
      puVar6 = puVar6 + 2;
      lVar7 = lVar7 + -4;
      *(undefined4 *)(lVar1 + lVar7) = *puVar6;
    } while (lVar7 != lVar4);
  }
  if (lVar7 != 7) {
    lVar4 = (((ulong)((long)((ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(in_x5 + 7) + 7) << 0x20)
                     >> 0x21) >> 0x1a & 1) + 2 + (long)in_w6) - in_x9;
    uVar5 = *(undefined8 *)(unaff_x26 + 0xa8);
    while( true ) {
      lVar7 = lVar7 + -4;
      *(int *)(lVar1 + lVar7) = (int)uVar5;
      *(int *)(lVar2 + 8 + lVar7) = (int)lVar4 * 2;
      if (lVar7 == 7) break;
      lVar4 = lVar4 + 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0143f174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(in_x3 + -0x18) + unaff_x19 + 1) * 8))();
  return;
}

