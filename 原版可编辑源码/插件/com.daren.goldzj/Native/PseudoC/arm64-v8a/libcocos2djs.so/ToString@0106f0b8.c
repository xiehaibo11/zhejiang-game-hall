
/* v8::internal::BigInt::ToString(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigInt>, int, v8::internal::ShouldThrow) */

long v8::internal::BigInt::ToString(long param_1,long *param_2,int param_3)

{
  long lVar1;
  undefined2 uVar2;
  uint uVar3;
  
  if ((*(uint *)(*param_2 + 3) & 0x7ffffffe) == 0) {
    return param_1 + 0xb08;
  }
  if (0 < param_3) {
    uVar3 = CONCAT13(POPCOUNT((char)((uint)param_3 >> 0x18)),
                     CONCAT12(POPCOUNT((char)((uint)param_3 >> 0x10)),
                              CONCAT11(POPCOUNT((char)((uint)param_3 >> 8)),POPCOUNT((char)param_3))
                             ));
    uVar2 = NEON_uaddlv((ulong)uVar3,1);
    if (CONCAT22((short)(uVar3 >> 0x10),uVar2) < 2) {
      lVar1 = MutableBigInt::ToStringBasePowerOfTwo();
      return lVar1;
    }
  }
  lVar1 = MutableBigInt::ToStringGeneric();
  return lVar1;
}

