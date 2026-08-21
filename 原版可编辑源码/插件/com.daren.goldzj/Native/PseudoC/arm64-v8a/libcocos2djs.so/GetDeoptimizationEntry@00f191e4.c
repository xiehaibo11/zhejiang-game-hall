
/* v8::internal::Deoptimizer::GetDeoptimizationEntry(v8::internal::Isolate*,
   v8::internal::DeoptimizeKind) */

long v8::internal::Deoptimizer::GetDeoptimizationEntry(long param_1,byte param_2)

{
  long lVar1;
  
  if (2 < param_2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind <= DeoptimizerData::kLastDeoptimizeKind");
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x9570) + (ulong)param_2 * 8 + 8);
  if ((int)lVar1 != 0) {
    return lVar1 + 0x3f;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!data->deopt_entry_code(kind).is_null()");
}

