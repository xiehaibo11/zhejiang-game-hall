
/* v8::internal::wasm::word32_popcnt_wrapper(unsigned long) */

undefined4 v8::internal::wasm::word32_popcnt_wrapper(ulong param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar3 = CONCAT13(POPCOUNT((char)((uint)uVar1 >> 0x18)),
                   CONCAT12(POPCOUNT((char)((uint)uVar1 >> 0x10)),
                            CONCAT11(POPCOUNT((char)((uint)uVar1 >> 8)),POPCOUNT((char)uVar1))));
  uVar2 = NEON_uaddlv((ulong)uVar3,1);
  return CONCAT22((short)(uVar3 >> 0x10),uVar2);
}

