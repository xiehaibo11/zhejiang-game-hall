
/* v8::internal::Deserializer::Synchronize(v8::internal::VisitorSynchronization::SyncTag) */

void v8::internal::Deserializer::Synchronize(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  *(int *)(param_1 + 0x7c) = iVar1 + 1;
  if (*(char *)(*(long *)(param_1 + 0x70) + (long)iVar1) == '\x1a') {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","expected == source_.Get()");
}

