
undefined8 FUN_00e742fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  short sVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (((int)*(short *)(lVar3 + 0x1a) + (int)*(short *)(lVar3 + 0x62) + 1U <= *(uint *)(lVar3 + 8))
     || (uVar4 = FUN_00e13cd0(lVar3,1,0), (int)uVar4 == 0)) {
    lVar3 = *(long *)(param_1 + 0x28);
    if (*(char *)(param_1 + 0x84) != '\0') {
      sVar2 = *(short *)(lVar3 + 2);
      lVar6 = *(long *)(lVar3 + 8);
      lVar7 = *(long *)(lVar3 + 0x10);
      lVar5 = FT_RoundFix(param_2);
      plVar1 = (long *)(lVar6 + (long)sVar2 * 0x10);
      *plVar1 = lVar5 >> 0x10;
      lVar5 = FT_RoundFix(param_3);
      plVar1[1] = lVar5 >> 0x10;
      *(undefined1 *)(lVar7 + sVar2) = 1;
    }
    uVar4 = 0;
    *(short *)(lVar3 + 2) = *(short *)(lVar3 + 2) + 1;
  }
  return uVar4;
}

