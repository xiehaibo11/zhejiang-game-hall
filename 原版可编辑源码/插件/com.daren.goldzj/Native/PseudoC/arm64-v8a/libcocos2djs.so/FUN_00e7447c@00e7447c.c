
undefined8 FUN_00e7447c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  short sVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  short *psVar6;
  long lVar7;
  long lVar8;
  
  if (*(int *)(param_1 + 0x80) == 3) {
    uVar3 = 0;
  }
  else {
    psVar6 = *(short **)(param_1 + 0x28);
    uVar3 = 3;
    *(undefined4 *)(param_1 + 0x80) = 3;
    if (psVar6 != (short *)0x0) {
      if (*(char *)(param_1 + 0x84) == '\0') {
        sVar2 = *psVar6;
      }
      else {
        lVar4 = *(long *)(param_1 + 0x18);
        if ((*(uint *)(lVar4 + 0xc) <
             (int)*(short *)(lVar4 + 0x18) + (int)*(short *)(lVar4 + 0x60) + 1U) &&
           (uVar3 = FUN_00e13cd0(lVar4,0,1), (int)uVar3 != 0)) {
          return uVar3;
        }
        sVar2 = *psVar6;
        if (0 < (long)sVar2) {
          *(short *)(*(long *)(psVar6 + 0xc) + (long)sVar2 * 2 + -2) = psVar6[1] + -1;
          sVar2 = *psVar6;
        }
      }
      *psVar6 = sVar2 + 1;
      lVar4 = *(long *)(param_1 + 0x18);
      if (((int)*(short *)(lVar4 + 0x1a) + (int)*(short *)(lVar4 + 0x62) + 1U <=
           *(uint *)(lVar4 + 8)) || (uVar3 = FUN_00e13cd0(lVar4,1,0), (int)uVar3 == 0)) {
        lVar4 = *(long *)(param_1 + 0x28);
        if (*(char *)(param_1 + 0x84) != '\0') {
          sVar2 = *(short *)(lVar4 + 2);
          lVar7 = *(long *)(lVar4 + 8);
          lVar8 = *(long *)(lVar4 + 0x10);
          lVar5 = FT_RoundFix(param_2);
          plVar1 = (long *)(lVar7 + (long)sVar2 * 0x10);
          *plVar1 = lVar5 >> 0x10;
          lVar5 = FT_RoundFix(param_3);
          plVar1[1] = lVar5 >> 0x10;
          *(undefined1 *)(lVar8 + sVar2) = 1;
        }
        uVar3 = 0;
        *(short *)(lVar4 + 2) = *(short *)(lVar4 + 2) + 1;
      }
    }
  }
  return uVar3;
}

