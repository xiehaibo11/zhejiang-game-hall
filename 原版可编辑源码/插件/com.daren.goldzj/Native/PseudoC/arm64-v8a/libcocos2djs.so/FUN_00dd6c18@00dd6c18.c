
undefined8 FUN_00dd6c18(long param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x350);
  FUN_00ddaa8c(param_1,1,0xc);
  FUN_00ddaa8c(param_1,1,0xc);
  if (*(int *)(lVar3 + 0x4c) != 8) {
    if (*(long *)(param_1 + 0x370) <= *(long *)(param_1 + 0x390)) {
      TIFFFlushData1(param_1);
    }
    puVar2 = *(undefined1 **)(param_1 + 0x388);
    uVar1 = *(undefined4 *)(lVar3 + 0x48);
    *(undefined1 **)(param_1 + 0x388) = puVar2 + 1;
    *puVar2 = (char)uVar1;
    *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x390) + 1;
    *(undefined8 *)(lVar3 + 0x48) = 0x800000000;
  }
  return 1;
}

