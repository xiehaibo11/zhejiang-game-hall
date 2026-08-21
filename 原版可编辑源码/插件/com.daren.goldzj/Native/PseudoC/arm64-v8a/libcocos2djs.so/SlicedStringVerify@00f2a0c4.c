
/* v8::internal::SlicedString::SlicedStringVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::SlicedString::SlicedStringVerify(SlicedString *this,Isolate *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  TorqueGeneratedClassVerifiers::SlicedStringVerify(*(undefined8 *)this);
  uVar1 = *(ulong *)this;
  uVar2 = uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0xb);
  uVar3 = uVar1 & 0xffffffff00000000 | 7;
  if ((*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0x40) &&
     ((*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) & 7) == 1)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!this->parent().IsConsString()");
  }
  if ((*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0x40) &&
     ((*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) & 7) == 3)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!this->parent().IsSlicedString()");
  }
  if (0xc < *(int *)(uVar1 + 7)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","this->length() >= SlicedString::kMinLength");
}

