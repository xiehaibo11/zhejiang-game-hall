
/* v8::internal::TorqueGeneratedClassVerifiers::SymbolVerify(v8::internal::Symbol,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::SymbolVerify(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedName<v8::internal::Name,v8::internal::PrimitiveHeapObject>::NameVerify
            ((Isolate *)&local_38);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x40) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsSymbol()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) &&
     ((*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0x40 ||
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43)))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","description__value.IsString() || description__value.IsOddball()");
}

