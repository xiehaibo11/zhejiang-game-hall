
ulong memcpy_by_index_array_initialization_dst_index
                (long param_1,ulong param_2,ulong param_3,undefined4 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined2 uVar5;
  uint uVar6;
  
  uVar1 = param_3 & 0xffffffff;
  uVar6 = CONCAT13(POPCOUNT((char)(uVar1 >> 0x18)),
                   CONCAT12(POPCOUNT((char)(uVar1 >> 0x10)),
                            CONCAT11(POPCOUNT((char)(uVar1 >> 8)),POPCOUNT((char)uVar1))));
  uVar5 = NEON_uaddlv((ulong)uVar6,1);
  uVar1 = (ulong)CONCAT22((short)(uVar6 >> 0x10),uVar5);
  if (param_2 != 0) {
    if (uVar1 <= param_2) {
      param_2 = uVar1;
    }
    if (param_2 == 0) {
      return 0;
    }
    uVar6 = CONCAT13(POPCOUNT((char)((uint)param_4 >> 0x18)),
                     CONCAT12(POPCOUNT((char)((uint)param_4 >> 0x10)),
                              CONCAT11(POPCOUNT((char)((uint)param_4 >> 8)),POPCOUNT((char)param_4))
                             ));
    uVar5 = NEON_uaddlv((ulong)uVar6,1);
    uVar4 = 0;
    uVar2 = 0;
    do {
      uVar1 = uVar2;
      if ((param_3 & 1) != 0) {
        uVar3 = (undefined1)uVar4;
        if (CONCAT22((short)(uVar6 >> 0x10),uVar5) <= uVar4) {
          uVar3 = 0xff;
        }
        uVar1 = uVar2 + 1;
        *(undefined1 *)(param_1 + uVar2) = uVar3;
      }
      param_3 = param_3 >> 1 & 0x7fffffff;
      uVar4 = uVar4 + 1;
      uVar2 = uVar1;
    } while (uVar1 < param_2);
  }
  return uVar1;
}

