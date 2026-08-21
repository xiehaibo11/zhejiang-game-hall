
/* v8::internal::Isolate::GetExternallyCompiledFilename(int) const */

undefined1 * v8::internal::Isolate::GetExternallyCompiledFilename(int param_1)

{
  undefined1 *puVar1;
  
  if (*(long **)((ulong)(uint)param_1 + 0xc788) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f569bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined1 *)(**(code **)(**(long **)((ulong)(uint)param_1 + 0xc788) + 8))();
    return puVar1;
  }
  return &DAT_0189703a;
}

