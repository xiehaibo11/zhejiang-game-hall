
/* v8::internal::UseScratchRegisterScope::AcquireNextAvailable(v8::internal::CPURegList*) */

void v8::internal::UseScratchRegisterScope::AcquireNextAvailable(CPURegList *param_1)

{
  if (*(long *)param_1 != 0) {
    CPURegList::PopLowestIndex((CPURegList *)param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!available->IsEmpty()");
}

