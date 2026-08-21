
/* v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::DecodeBranchSystemException(v8::internal::Instruction*)
    */

void __thiscall
v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::DecodeBranchSystemException
          (Decoder<v8::internal::DispatchingDecoderVisitor> *this,Instruction *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0128a098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0128a09c + (ulong)(byte)(&DAT_019f4447)[*(uint *)param_1 >> 0x1d] * 4))();
  return;
}

