
undefined8 FUN_010913f0(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  ushort uVar2;
  undefined8 uVar3;
  
  uVar3 = FT_Stream_Seek(param_2,*param_1);
  if (((int)uVar3 == 0) &&
     (uVar3 = FT_Stream_ReadFields(param_2,&DAT_0145f964,param_1 + 1), (int)uVar3 == 0)) {
    uVar2 = *(ushort *)(param_1 + 1);
    if ((uVar2 | 0x100) == 0x300) {
      uVar1 = 0x94;
      if (uVar2 != 0x300) {
        uVar1 = 0x76;
      }
      if (uVar1 <= (ulong)param_1[2]) {
        if (uVar2 == 0x200) {
          param_1[0x15] = 0;
          param_1[0x16] = 0;
        }
        if ((*(byte *)((long)param_1 + 0x54) & 1) == 0) {
          uVar3 = FT_Stream_Seek(param_2,*param_1);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FT_Stream_ExtractFrame(param_2,param_1[2],param_1 + 0x1b);
          return uVar3;
        }
      }
    }
    uVar3 = 2;
  }
  return uVar3;
}

