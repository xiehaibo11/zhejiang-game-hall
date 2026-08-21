
ulong memcpy_by_index_array_initialization_dst_index
                (long param_1,ulong param_2,ulong param_3,undefined4 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined2 uVar6;
  uint uVar7;
  
  uVar3 = param_3 & 0xffffffff;
  uVar7 = CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                   CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                            CONCAT11(POPCOUNT((char)(uVar3 >> 8)),POPCOUNT((char)uVar3))));
  uVar6 = NEON_uaddlv((ulong)uVar7,1);
  uVar3 = (ulong)CONCAT22((short)(uVar7 >> 0x10),uVar6);
  if (param_2 != 0) {
    if (uVar3 <= param_2) {
      param_2 = uVar3;
    }
    if (param_2 == 0) {
      return 0;
    }
    uVar7 = CONCAT13(POPCOUNT((char)((uint)param_4 >> 0x18)),
                     CONCAT12(POPCOUNT((char)((uint)param_4 >> 0x10)),
                              CONCAT11(POPCOUNT((char)((uint)param_4 >> 8)),POPCOUNT((char)param_4))
                             ));
    uVar6 = NEON_uaddlv((ulong)uVar7,1);
    uVar5 = 0;
    uVar2 = 0;
    uVar1 = param_3;
    do {
      uVar3 = uVar2;
      if ((uVar1 & 1) != 0) {
        uVar4 = (undefined1)uVar5;
        if (CONCAT22((short)(uVar7 >> 0x10),uVar6) <= uVar5) {
          uVar4 = 0xff;
        }
        uVar3 = uVar2 + 1;
        *(undefined1 *)(param_1 + uVar2) = uVar4;
      }
      uVar1 = param_3 >> 1;
      param_3 = uVar1 & 0x7fffffff;
      uVar5 = uVar5 + 1;
      uVar2 = uVar3;
    } while (uVar3 < param_2);
  }
  return uVar3;
}

