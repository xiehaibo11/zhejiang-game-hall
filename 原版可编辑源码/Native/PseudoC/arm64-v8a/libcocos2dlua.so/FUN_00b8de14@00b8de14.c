
undefined8 FUN_00b8de14(char *param_1,int param_2,ulong *param_3)

{
  undefined **ppuVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  uint uVar5;
  undefined **ppuVar6;
  
  if (param_1 != (char *)0x0) {
    if (param_2 == -1) {
      sVar3 = strlen(param_1);
      param_2 = (int)sVar3;
    }
    else if (param_2 == 3) {
      param_2 = 3;
      iVar2 = strncmp(param_1,"DIR",3);
      if (iVar2 == 0) {
        uVar4 = *param_3 | 0x2906;
LAB_00b8def8:
        *param_3 = uVar4;
        return 1;
      }
    }
    uVar5 = 0;
    DAT_017850d8 = &PTR_DAT_016c3570;
    ppuVar1 = &PTR_s_BOOLEAN_013d92b0_5_016c3580;
    do {
      ppuVar6 = ppuVar1;
      if ((param_2 == *(int *)(ppuVar6 + -1)) &&
         (iVar2 = strncmp(ppuVar6[-2],param_1,(long)param_2), iVar2 == 0)) {
        uVar5 = *(uint *)((long)ppuVar6 + -4);
        if (uVar5 == 0) {
          return 0;
        }
        if ((uVar5 >> 0x10 & 1) != 0) {
          return 0;
        }
        uVar4 = ASN1_tag2bit(uVar5);
        if (uVar4 == 0) {
          return 0;
        }
        uVar4 = *param_3 | uVar4;
        goto LAB_00b8def8;
      }
      uVar5 = uVar5 + 1;
      ppuVar1 = ppuVar6 + 2;
      DAT_017850d8 = ppuVar6;
    } while (uVar5 < 0x31);
  }
  return 0;
}

