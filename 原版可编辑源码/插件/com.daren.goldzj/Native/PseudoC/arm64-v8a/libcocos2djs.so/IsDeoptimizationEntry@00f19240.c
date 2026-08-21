
/* v8::internal::Deoptimizer::IsDeoptimizationEntry(v8::internal::Isolate*, unsigned long,
   v8::internal::DeoptimizeKind) */

bool v8::internal::Deoptimizer::IsDeoptimizationEntry(long param_1,long param_2,byte param_3)

{
  long lVar1;
  
  if (param_3 < 3) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x9570) + (ulong)param_3 * 8 + 8);
    return lVar1 + 0x3f == param_2 && (int)lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","type <= DeoptimizerData::kLastDeoptimizeKind");
}

