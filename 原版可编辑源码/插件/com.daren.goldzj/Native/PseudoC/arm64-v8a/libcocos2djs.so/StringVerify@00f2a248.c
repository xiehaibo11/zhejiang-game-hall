
/* v8::internal::String::StringVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::String::StringVerify(String *this,Isolate *param_1)

{
  ulong uVar1;
  
  TorqueGeneratedClassVerifiers::StringVerify(*(undefined8 *)this);
  uVar1 = *(ulong *)this;
  if (*(uint *)(uVar1 + 7) >> 0x1e != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","length() >= 0 && length() <= Smi::kMaxValue");
  }
  if ((*(uint *)(uVar1 + 7) == 0) && ((int)uVar1 != *(int *)(param_1 + 200))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "length() == 0 implies *this == ReadOnlyRoots(isolate).empty_string()");
  }
  if (((*(ushort *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) < 0x20) &&
      ((uVar1 & 1) != 0)) && ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!ObjectInYoungGeneration(*this)");
  }
  return;
}

