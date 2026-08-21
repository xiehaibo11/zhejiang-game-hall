
/* v8::internal::Isolate::GetExternallyCompiledFilenameCount() const */

void __thiscall v8::internal::Isolate::GetExternallyCompiledFilenameCount(Isolate *this)

{
  if (*(long **)(this + 0xc788) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f569e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0xc788) + 0x10))();
    return;
  }
  return;
}

