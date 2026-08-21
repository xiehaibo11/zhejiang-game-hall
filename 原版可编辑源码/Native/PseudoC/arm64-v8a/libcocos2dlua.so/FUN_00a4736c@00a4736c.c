
void FUN_00a4736c(long param_1,int param_2,byte *param_3,ulong param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  
  if (*(char *)(param_1 + 0x628) == '\0') {
    return;
  }
  uVar10 = param_4;
  if (param_2 == 0) {
LAB_00a4741c:
    if (uVar10 == 0) {
      pcVar4 = "(Empty suboption?)";
      goto LAB_00a476b8;
    }
    uVar8 = 0;
  }
  else {
                    /* try { // try from 00a473a0 to 00b473a7 has its CatchHandler @ 00a473fc */
                    /* catch() { ... } // from try @ 00a471f4 with catch @ 00a473a8
                       catch() { ... } // from try @ 00a472c4 with catch @ 00a473a8
                       try { // try from 00a473a8 to 00b47453 has its CatchHandler @ 00a47140 */
    pcVar4 = "RCVD";
                    /* catch() { ... } // from try @ 00a472d4 with catch @ 00a473b8 */
    if (param_2 != 0x3c) {
      pcVar4 = "SENT";
    }
    FUN_00a38740(param_1,"%s IAC SB ",pcVar4);
    uVar10 = param_4 - 2;
    if (param_4 < 3) goto LAB_00a4741c;
    bVar2 = param_3[uVar10];
    uVar8 = (ulong)bVar2;
    bVar3 = param_3[param_4 - 1];
    uVar9 = (uint)bVar3;
    if ((bVar2 != 0xff) || (uVar9 != 0xf0)) {
                    /* catch() { ... } // from try @ 00a4719c with catch @ 00a473fc
                       catch() { ... } // from try @ 00a47224 with catch @ 00a473fc
                       catch() { ... } // from try @ 00a47324 with catch @ 00a473fc
                       catch() { ... } // from try @ 00a473a0 with catch @ 00a473fc */
      FUN_00a38740(param_1,"(terminated by ");
      uVar7 = (uint)bVar2;
      if (bVar2 < 0x28) {
        puVar5 = (&PTR_s_BINARY_016a3dc8)[uVar8];
LAB_00a47448:
        FUN_00a38740(param_1,"%s ",puVar5);
        if (uVar9 < 0x28) goto LAB_00a47460;
LAB_00a4748c:
        if (0xeb < uVar9) {
          puVar5 = (&PTR_s_EOF_0145b715_0x13_016a3d28)[(int)(uVar9 - 0xec)];
          goto LAB_00a474a0;
        }
        FUN_00a38740(param_1,"%d",(ulong)bVar3);
      }
      else {
        if (0xeb < uVar7) {
          puVar5 = (&PTR_s_EOF_0145b715_0x13_016a3d28)[uVar7 - 0xec];
          goto LAB_00a47448;
        }
        FUN_00a38740(param_1,&DAT_014a13ae,uVar7);
        if (0x27 < uVar9) goto LAB_00a4748c;
LAB_00a47460:
        puVar5 = (&PTR_s_BINARY_016a3dc8)[bVar3];
LAB_00a474a0:
        FUN_00a38740(param_1,"%s",puVar5);
      }
      FUN_00a38740(param_1,", not IAC SE!) ");
    }
  }
  uVar6 = (ulong)*param_3;
  if (uVar6 < 0x28) {
    if ((*param_3 < 0x28) && ((1L << (uVar6 & 0x3f) & 0x8881000000U) != 0)) {
      puVar5 = (&PTR_s_BINARY_016a3dc8)[uVar6];
      pcVar4 = "%s";
    }
    else {
      puVar5 = (&PTR_s_BINARY_016a3dc8)[uVar6];
      pcVar4 = "%s (unsupported)";
    }
    FUN_00a38740(param_1,pcVar4,puVar5);
  }
  else {
    FUN_00a38740(param_1,"%d (unknown)",param_3[uVar8]);
  }
  bVar2 = *param_3;
  if (bVar2 == 0x1f) {
    if (4 < uVar10) {
      FUN_00a38740(param_1,"Width: %hu ; Height: %hu",CONCAT11(param_3[1],param_3[2]),
                   CONCAT11(param_3[3],param_3[4]));
    }
  }
  else {
    switch(param_3[1]) {
    case 0:
      pcVar4 = " IS";
      break;
    case 1:
      pcVar4 = " SEND";
      break;
    case 2:
      pcVar4 = " INFO/REPLY";
      break;
    case 3:
      pcVar4 = " NAME";
      break;
    default:
      goto switchD_00a475b0_default;
    }
    FUN_00a38740(param_1,pcVar4);
    bVar2 = *param_3;
switchD_00a475b0_default:
    if ((bVar2 == 0x18) || (bVar2 == 0x23)) {
      param_3[uVar10] = 0;
      FUN_00a38740(param_1," \"%s\"",param_3 + 2);
    }
    else if (bVar2 == 0x27) {
      if ((param_3[1] == 0) && (FUN_00a38740(param_1," "), 3 < uVar10)) {
        uVar8 = 3;
        uVar6 = 4;
        do {
          if (param_3[uVar8] == 1) {
            FUN_00a38740(param_1,&DAT_013c61a7);
          }
          else if (param_3[uVar8] == 0) {
            FUN_00a38740(param_1,&DAT_01458dec);
          }
          else {
            FUN_00a38740(param_1,"%c");
          }
          bVar1 = uVar6 < uVar10;
          uVar8 = uVar6;
          uVar6 = (ulong)((int)uVar6 + 1);
        } while (bVar1);
      }
    }
    else if (2 < uVar10) {
      uVar9 = 3;
      uVar8 = 2;
      do {
        FUN_00a38740(param_1," %.2x",param_3[uVar8]);
        uVar8 = (ulong)uVar9;
        uVar9 = uVar9 + 1;
      } while (uVar8 < uVar10);
    }
  }
  if (param_2 == 0) {
    return;
  }
  pcVar4 = "\n";
LAB_00a476b8:
  FUN_00a38740(param_1,pcVar4);
  return;
}

