
void FUN_00e7426c(long param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  long *plVar1;
  short sVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x84) != '\0') {
    sVar2 = *(short *)(lVar5 + 2);
    lVar6 = *(long *)(lVar5 + 8);
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar3 = FT_RoundFix(param_2);
    plVar1 = (long *)(lVar6 + (long)sVar2 * 0x10);
    *plVar1 = lVar3 >> 0x10;
    lVar3 = FT_RoundFix(param_3);
    plVar1[1] = lVar3 >> 0x10;
    uVar4 = 1;
    if (param_4 == '\0') {
      uVar4 = 2;
    }
    *(undefined1 *)(lVar7 + sVar2) = uVar4;
  }
  *(short *)(lVar5 + 2) = *(short *)(lVar5 + 2) + 1;
  return;
}

