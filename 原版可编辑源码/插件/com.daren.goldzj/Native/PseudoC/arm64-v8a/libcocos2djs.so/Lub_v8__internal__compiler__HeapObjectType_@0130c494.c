
/* unsigned int
   v8::internal::compiler::BitsetType::Lub<v8::internal::compiler::HeapObjectType>(v8::internal::compiler::HeapObjectType
   const&) */

uint v8::internal::compiler::BitsetType::Lub<v8::internal::compiler::HeapObjectType>
               (HeapObjectType *param_1)

{
  uint uVar1;
  
  if (*(ushort *)param_1 < 0x43a) {
                    /* WARNING: Could not recover jumptable at 0x0130c4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK_0130c4c8 + (ulong)(byte)(&DAT_01a026c1)[*(ushort *)param_1] * 4))
                      (param_1,0x4020);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

