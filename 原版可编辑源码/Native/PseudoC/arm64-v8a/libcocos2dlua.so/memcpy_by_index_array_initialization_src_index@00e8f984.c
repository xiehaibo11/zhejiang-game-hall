
ulong memcpy_by_index_array_initialization_src_index
                (long param_1,ulong param_2,undefined4 param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined2 uVar4;
  uint uVar5;
  int iVar3;
  
  uVar5 = CONCAT13(POPCOUNT((char)((uint)param_3 >> 0x18)),
                   CONCAT12(POPCOUNT((char)((uint)param_3 >> 0x10)),
                            CONCAT11(POPCOUNT((char)((uint)param_3 >> 8)),POPCOUNT((char)param_3))))
  ;
  uVar4 = NEON_uaddlv((ulong)uVar5,1);
  uVar1 = (ulong)CONCAT22((short)(uVar5 >> 0x10),uVar4);
  if (param_2 != 0) {
    if (uVar1 <= param_2) {
      param_2 = uVar1;
    }
    if (param_2 == 0) {
      return 0;
    }
    uVar1 = 0;
    iVar3 = 0;
    do {
      uVar2 = (undefined1)iVar3;
      if ((param_4 & 1) == 0) {
        uVar2 = 0xff;
      }
      *(undefined1 *)(param_1 + uVar1) = uVar2;
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + ((uint)param_4 & 1);
      param_4 = param_4 >> 1 & 0x7fffffff;
    } while (uVar1 < param_2);
  }
  return uVar1;
}

