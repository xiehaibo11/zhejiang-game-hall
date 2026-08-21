
undefined4 FUN_00e787ec(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  
  pbVar4 = (byte *)*param_1;
  if (pbVar4 < param_2) {
    iVar2 = 0;
    do {
      while( true ) {
        pbVar5 = pbVar4 + 1;
        bVar1 = *pbVar4;
        if (bVar1 != 0x28) break;
        iVar2 = iVar2 + 1;
joined_r0x00e78868:
        pbVar4 = pbVar5;
        if (param_2 <= pbVar4) goto LAB_00e788d8;
      }
      if (bVar1 != 0x29) {
        if (bVar1 == 0x5c) {
          if (pbVar5 == param_2) {
            *param_1 = param_2;
            return 3;
          }
          switch(*pbVar5) {
          case 0x28:
          case 0x29:
          case 0x5c:
          case 0x62:
          case 0x66:
          case 0x6e:
          case 0x72:
          case 0x74:
            pbVar5 = pbVar4 + 2;
            break;
          default:
            if ((pbVar5 < param_2) && ((*pbVar5 & 0xf8) == 0x30)) {
              lVar6 = 2;
              do {
                pbVar5 = pbVar4 + lVar6;
                if ((2 < (int)lVar6 - 1U) || (param_2 <= pbVar5)) break;
                lVar6 = lVar6 + 1;
              } while ((*pbVar5 & 0xf8) == 0x30);
              goto joined_r0x00e78880;
            }
          }
        }
        goto joined_r0x00e78868;
      }
      iVar2 = iVar2 + -1;
      uVar3 = 0;
      if (iVar2 == 0) goto LAB_00e788dc;
joined_r0x00e78880:
      pbVar4 = pbVar5;
    } while (pbVar4 < param_2);
  }
LAB_00e788d8:
  uVar3 = 3;
  pbVar5 = pbVar4;
LAB_00e788dc:
  *param_1 = pbVar5;
  return uVar3;
}

