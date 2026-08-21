
/* v8::internal::CountSetBits(unsigned long, int) */

undefined4 v8::internal::CountSetBits(ulong param_1,int param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  uint uVar6;
  
  uVar2 = param_1 & 0xffffffff;
  uVar4 = CONCAT17(POPCOUNT((char)(param_1 >> 0x38)),
                   CONCAT16(POPCOUNT((char)(param_1 >> 0x30)),
                            CONCAT15(POPCOUNT((char)(param_1 >> 0x28)),
                                     CONCAT14(POPCOUNT((char)(param_1 >> 0x20)),
                                              CONCAT13(POPCOUNT((char)(param_1 >> 0x18)),
                                                       CONCAT12(POPCOUNT((char)(param_1 >> 0x10)),
                                                                CONCAT11(POPCOUNT((char)(param_1 >>
                                                                                        8)),
                                                                         POPCOUNT((char)param_1)))))
                                    )));
  uVar6 = CONCAT13(POPCOUNT((char)(uVar2 >> 0x18)),
                   CONCAT12(POPCOUNT((char)(uVar2 >> 0x10)),
                            CONCAT11(POPCOUNT((char)(uVar2 >> 8)),POPCOUNT((char)uVar2))));
  uVar3 = NEON_uaddlv(uVar4,1);
  uVar5 = NEON_uaddlv((ulong)uVar6,1);
  uVar1 = (int)CONCAT62((int6)((ulong)uVar4 >> 0x10),uVar3);
  if (param_2 != 0x40) {
    uVar1 = CONCAT22((short)(uVar6 >> 0x10),uVar5);
  }
  return uVar1;
}

