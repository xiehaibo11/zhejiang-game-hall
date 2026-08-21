
undefined8 FT_Outline_Copy(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14;
  if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
    uVar1 = param_1[1];
    if (uVar1 != param_2[1]) {
      return 6;
    }
    uVar2 = *param_1;
    if (uVar2 != *param_2) {
      return 6;
    }
    if (param_1 == param_2) {
      return 0;
    }
    if (uVar1 != 0) {
      memcpy(*(void **)(param_2 + 4),*(void **)(param_1 + 4),(long)(short)uVar1 << 4);
      memcpy(*(void **)(param_2 + 8),*(void **)(param_1 + 8),(long)(short)param_1[1]);
      uVar2 = *param_1;
    }
    if (uVar2 != 0) {
      memcpy(*(void **)(param_2 + 0xc),*(void **)(param_1 + 0xc),
             -(ulong)(uVar2 >> 0xf) & 0xfffffffffffe0000 | (ulong)uVar2 << 1);
    }
    uVar3 = 0;
    *(uint *)(param_2 + 0x10) =
         *(uint *)(param_1 + 0x10) & 0xfffffffe | *(uint *)(param_2 + 0x10) & 1;
  }
  return uVar3;
}

