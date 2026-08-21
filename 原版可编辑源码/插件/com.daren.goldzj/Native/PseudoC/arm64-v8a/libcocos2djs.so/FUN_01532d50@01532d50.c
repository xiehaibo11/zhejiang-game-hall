
void FUN_01532d50(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__ndk1::__next_prime(param_2);
  }
  uVar2 = *(ulong *)(param_1 + 8);
  uVar1 = param_2;
  if (param_2 <= uVar2) {
    if (param_2 < uVar2) {
      uVar1 = (ulong)((float)*(ulong *)(param_1 + 0x28) / *(float *)(param_1 + 0x30));
      if ((uVar2 < 3) ||
         (uVar4 = CONCAT17(POPCOUNT((char)(uVar2 >> 0x38)),
                           CONCAT16(POPCOUNT((char)(uVar2 >> 0x30)),
                                    CONCAT15(POPCOUNT((char)(uVar2 >> 0x28)),
                                             CONCAT14(POPCOUNT((char)(uVar2 >> 0x20)),
                                                      CONCAT13(POPCOUNT((char)(uVar2 >> 0x18)),
                                                               CONCAT12(POPCOUNT((char)(uVar2 >> 
                                                  0x10)),CONCAT11(POPCOUNT((char)(uVar2 >> 8)),
                                                                  POPCOUNT((char)uVar2)))))))),
         uVar3 = NEON_uaddlv(uVar4,1), 1 < (uint)CONCAT62((int6)((ulong)uVar4 >> 0x10),uVar3))) {
        uVar1 = std::__ndk1::__next_prime(uVar1);
      }
      else if (1 < uVar1) {
        uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
      }
      if (uVar1 <= param_2) {
        uVar1 = param_2;
      }
      if (uVar1 < uVar2) goto LAB_01532e14;
    }
    return;
  }
LAB_01532e14:
  FUN_01532e34(param_1,uVar1);
  return;
}

