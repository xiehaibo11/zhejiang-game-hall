
/* v8::internal::IncrementalMarking::CanBeActivated() */

bool __thiscall v8::internal::IncrementalMarking::CanBeActivated(IncrementalMarking *this)

{
  long lVar1;
  
  if (((FLAG_incremental_marking != '\0') && (lVar1 = *(long *)this, *(int *)(lVar1 + 0x178) == 0))
     && (*(char *)(lVar1 + 0xb44) != '\0')) {
    return *(char *)(lVar1 + 0x2e68) == '\0';
  }
  return false;
}

