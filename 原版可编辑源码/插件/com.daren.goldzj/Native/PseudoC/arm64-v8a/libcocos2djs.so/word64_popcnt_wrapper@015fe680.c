
/* v8::internal::wasm::word64_popcnt_wrapper(unsigned long) */

ulong v8::internal::wasm::word64_popcnt_wrapper(ulong param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_1;
  uVar2 = CONCAT17(POPCOUNT((char)((ulong)uVar2 >> 0x38)),
                   CONCAT16(POPCOUNT((char)((ulong)uVar2 >> 0x30)),
                            CONCAT15(POPCOUNT((char)((ulong)uVar2 >> 0x28)),
                                     CONCAT14(POPCOUNT((char)((ulong)uVar2 >> 0x20)),
                                              CONCAT13(POPCOUNT((char)((ulong)uVar2 >> 0x18)),
                                                       CONCAT12(POPCOUNT((char)((ulong)uVar2 >> 0x10
                                                                               )),
                                                                CONCAT11(POPCOUNT((char)((ulong)
                                                  uVar2 >> 8)),POPCOUNT((char)uVar2))))))));
  uVar1 = NEON_uaddlv(uVar2,1);
  return CONCAT62((int6)((ulong)uVar2 >> 0x10),uVar1) & 0xffffffff;
}

