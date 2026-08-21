
/* unsigned int
   v8::internal::compiler::BitsetType::Lub<v8::internal::compiler::MapRef>(v8::internal::compiler::MapRef
   const&) */

uint v8::internal::compiler::BitsetType::Lub<v8::internal::compiler::MapRef>(MapRef *param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = MapRef::instance_type((MapRef *)param_1);
  if (uVar1 < 0x43a) {
                    /* WARNING: Could not recover jumptable at 0x01308978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK_0130897c + (ulong)(byte)(&DAT_01a021a8)[uVar1] * 4))(0x4020);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

