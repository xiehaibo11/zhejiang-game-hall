
void FUN_00a30984(long param_1,int param_2,byte *param_3,ulong param_4)

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
LAB_00a30a34:
    if (uVar10 == 0) {
      pcVar4 = "(Empty suboption?)";
      goto LAB_00a30cd0;
    }
    uVar8 = 0;
  }
  else {
    pcVar4 = "RCVD";
    if (param_2 != 0x3c) {
      pcVar4 = "SENT";
    }
    FUN_00a22d58(param_1,"%s IAC SB ",pcVar4);
    uVar10 = param_4 - 2;
    if (param_4 < 3) goto LAB_00a30a34;
    bVar2 = param_3[uVar10];
    uVar8 = (ulong)bVar2;
                    /* catch() { ... } // from try @ 00a308b0 with catch @ 00a309f4 */
    bVar3 = param_3[param_4 - 1];
                    /* catch() { ... } // from try @ 00a308a4 with catch @ 00a309f8 */
    uVar9 = (uint)bVar3;
                    /* catch() { ... } // from try @ 00a3093c with catch @ 00a309fc */
    if ((bVar2 != 0xff) || (uVar9 != 0xf0)) {
                    /* catch() { ... } // from try @ 00a30884 with catch @ 00a30a0c */
      FUN_00a22d58(param_1,"(terminated by ");
      uVar7 = (uint)bVar2;
                    /* catch() { ... } // from try @ 00a308bc with catch @ 00a30a1c
                       catch() { ... } // from try @ 00a30970 with catch @ 00a30a1c */
      if (bVar2 < 0x28) {
        puVar5 = (&PTR_s_BINARY_01c6d5f8)[uVar8];
LAB_00a30a60:
        FUN_00a22d58(param_1,"%s ",puVar5);
                    /* catch() { ... } // from try @ 00a30ac8 with catch @ 00a30a74 */
        if (uVar9 < 0x28) goto LAB_00a30a78;
LAB_00a30aa4:
        if (0xeb < uVar9) {
          puVar5 = *(undefined **)(&DAT_01c6d558 + (long)(int)(uVar9 - 0xec) * 8);
          goto LAB_00a30ab8;
        }
        FUN_00a22d58(param_1,"%d",(ulong)bVar3);
      }
      else {
        if (0xeb < uVar7) {
          puVar5 = *(undefined **)(&DAT_01c6d558 + (ulong)(uVar7 - 0xec) * 8);
          goto LAB_00a30a60;
        }
        FUN_00a22d58(param_1,&DAT_018937f3,uVar7);
        if (0x27 < uVar9) goto LAB_00a30aa4;
LAB_00a30a78:
        puVar5 = (&PTR_s_BINARY_01c6d5f8)[bVar3];
LAB_00a30ab8:
                    /* try { // try from 00a30ab8 to 00b30ac7 has its CatchHandler @ 00a30e18 */
        FUN_00a22d58(param_1,"%s",puVar5);
                    /* try { // try from 00a30ac8 to 00b30e33 has its CatchHandler @ 00a30a74 */
      }
      FUN_00a22d58(param_1,", not IAC SE!) ");
    }
  }
  uVar6 = (ulong)*param_3;
  if (uVar6 < 0x28) {
    if ((*param_3 < 0x28) && ((1L << (uVar6 & 0x3f) & 0x8881000000U) != 0)) {
      puVar5 = (&PTR_s_BINARY_01c6d5f8)[uVar6];
      pcVar4 = "%s";
    }
    else {
      puVar5 = (&PTR_s_BINARY_01c6d5f8)[uVar6];
      pcVar4 = "%s (unsupported)";
    }
    FUN_00a22d58(param_1,pcVar4,puVar5);
  }
  else {
    FUN_00a22d58(param_1,"%d (unknown)",param_3[uVar8]);
  }
  bVar2 = *param_3;
  if (bVar2 == 0x1f) {
    if (4 < uVar10) {
      FUN_00a22d58(param_1,"Width: %hu ; Height: %hu",CONCAT11(param_3[1],param_3[2]),
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
      goto switchD_00a30bc8_default;
    }
    FUN_00a22d58(param_1,pcVar4);
    bVar2 = *param_3;
switchD_00a30bc8_default:
    if ((bVar2 == 0x18) || (bVar2 == 0x23)) {
      param_3[uVar10] = 0;
      FUN_00a22d58(param_1," \"%s\"",param_3 + 2);
    }
    else if (bVar2 == 0x27) {
      if ((param_3[1] == 0) && (FUN_00a22d58(param_1,&DAT_019afa78), 3 < uVar10)) {
        uVar8 = 3;
        uVar6 = 4;
        do {
          if (param_3[uVar8] == 1) {
            FUN_00a22d58(param_1,&DAT_01a59d50);
          }
          else if (param_3[uVar8] == 0) {
            FUN_00a22d58(param_1,", ");
          }
          else {
            FUN_00a22d58(param_1,"%c");
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
        FUN_00a22d58(param_1," %.2x",param_3[uVar8]);
        uVar8 = (ulong)uVar9;
        uVar9 = uVar9 + 1;
      } while (uVar8 < uVar10);
    }
  }
  if (param_2 == 0) {
    return;
  }
  pcVar4 = "\n";
LAB_00a30cd0:
  FUN_00a22d58(param_1,pcVar4);
  return;
}

