
/* v8::internal::FixedDoubleArray::FixedDoubleArrayVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::FixedDoubleArray::FixedDoubleArrayVerify(FixedDoubleArray *this,Isolate *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  TorqueGeneratedClassVerifiers::FixedDoubleArrayVerify(*(undefined8 *)this);
  uVar1 = *(uint *)(*(long *)this + 3);
  if (1 < (int)uVar1) {
    uVar2 = 0;
    lVar3 = 0;
    do {
      uVar4 = *(ulong *)(*(long *)this + (uVar2 & 0xfffffff8 | 7));
      if (((uVar4 != 0xfff7fffffff7ffff) && ((uVar4 & 0x7ff8000000000000) == 0x7ff0000000000000)) &&
         ((uVar4 & 0x7ffffffffffff) != 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "(value & uint64_t{0x7FF8000000000000}) != unexpected || (value & uint64_t{0x0007FFFFFFFFFFFF}) == uint64_t{0}"
                );
      }
      lVar3 = lVar3 + 1;
      uVar2 = uVar2 + 8;
    } while (lVar3 < (long)((ulong)uVar1 << 0x20) >> 0x21);
  }
  return;
}

