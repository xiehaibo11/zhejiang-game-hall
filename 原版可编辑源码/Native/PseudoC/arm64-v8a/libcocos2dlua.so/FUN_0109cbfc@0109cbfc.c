
undefined8 FUN_0109cbfc(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((ulong)*(ushort *)(param_1 + 0x120) != 0) {
    plVar3 = *(long **)(param_1 + 0x128);
    plVar1 = plVar3 + (ulong)*(ushort *)(param_1 + 0x120) * 4;
    do {
      if ((*plVar3 == param_2) && (plVar3[3] != 0)) {
        if (param_4 != (long *)0x0) {
          *param_4 = plVar3[3];
        }
        uVar2 = FT_Stream_Seek(param_3,plVar3[2]);
        return uVar2;
      }
      plVar3 = plVar3 + 4;
    } while (plVar3 < plVar1);
  }
  return 0x8e;
}

