
/* v8::internal::ThinString::ThinStringVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::ThinString::ThinStringVerify(ThinString *this,Isolate *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  TorqueGeneratedClassVerifiers::ThinStringVerify(*(undefined8 *)this);
  uVar2 = *(ulong *)this & 0xffffffff00000000;
  uVar1 = uVar2 | *(uint *)(*(ulong *)this + 0xb);
  uVar2 = uVar2 | 7;
  if (0x1f < *(ushort *)(uVar2 + *(uint *)(uVar1 - 1))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","this->actual().IsInternalizedString()");
  }
  if (((0x3f < *(ushort *)(uVar2 + *(uint *)(uVar1 - 1))) ||
      ((*(byte *)(uVar2 + *(uint *)(uVar1 - 1)) & 7) != 0)) &&
     ((0x3f < *(ushort *)(uVar2 + *(uint *)(uVar1 - 1)) ||
      ((*(ushort *)(uVar2 + *(uint *)(uVar1 - 1)) & 7) != 2)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","this->actual().IsSeqString() || this->actual().IsExternalString()"
            );
  }
  return;
}

