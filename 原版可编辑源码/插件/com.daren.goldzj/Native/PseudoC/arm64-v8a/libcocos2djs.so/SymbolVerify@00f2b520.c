
/* v8::internal::Symbol::SymbolVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::Symbol::SymbolVerify(Symbol *this,Isolate *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  TorqueGeneratedClassVerifiers::SymbolVerify(*(undefined8 *)this);
  uVar1 = *(ulong *)this;
  if ((*(uint *)(uVar1 + 3) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","HasHashCode()");
  }
  if (*(uint *)(uVar1 + 3) < 8) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","Hash() > 0");
  }
  uVar2 = uVar1 & 0xffffffff00000000;
  if ((*(uint *)(uVar1 + 0xb) != *(uint *)(param_1 + 0xa0)) &&
     (0x3f < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | *(uint *)(uVar1 + 0xb)) - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","description().IsUndefined(isolate) || description().IsString()");
  }
  uVar2 = uVar2 | 7;
  if (((*(short *)(uVar2 + *(uint *)(uVar1 - 1)) == 0x40) && ((*(uint *)(uVar1 + 7) >> 4 & 1) != 0))
     && ((*(short *)(uVar2 + *(uint *)(uVar1 - 1)) != 0x40 || ((*(uint *)(uVar1 + 7) & 1) == 0)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsPrivateName() implies IsPrivate()");
  }
  if (((*(short *)(uVar2 + *(uint *)(uVar1 - 1)) == 0x40) && ((*(uint *)(uVar1 + 7) >> 5 & 1) != 0))
     && ((*(short *)(uVar2 + *(uint *)(uVar1 - 1)) != 0x40 || ((*(uint *)(uVar1 + 7) >> 4 & 1) == 0)
         ))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsPrivateBrand() implies IsPrivateName()");
  }
  return;
}

