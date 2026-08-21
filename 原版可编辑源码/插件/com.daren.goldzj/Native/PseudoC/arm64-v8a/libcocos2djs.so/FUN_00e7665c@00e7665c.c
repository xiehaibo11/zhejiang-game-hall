
undefined8 FUN_00e7665c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  short sVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if ((*(uint *)(lVar3 + 8) < (int)*(short *)(lVar3 + 0x1a) + (int)*(short *)(lVar3 + 0x62) + 1U) &&
     (uVar4 = FUN_00e13cd0(lVar3,1,0), (int)uVar4 != 0)) {
    return uVar4;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x81) != '\0') {
    sVar2 = *(short *)(lVar3 + 2);
    lVar5 = *(long *)(lVar3 + 0x10);
    plVar1 = (long *)(*(long *)(lVar3 + 8) + (long)sVar2 * 0x10);
    *plVar1 = param_2 >> 10;
    plVar1[1] = param_3 >> 10;
    *(undefined1 *)(lVar5 + sVar2) = 1;
  }
  *(short *)(lVar3 + 2) = *(short *)(lVar3 + 2) + 1;
  return 0;
}

