
/* v8::internal::ScopeInfo::ReceiverInfoIndex() const */

int __thiscall v8::internal::ScopeInfo::ReceiverInfoIndex(ScopeInfo *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  if (1 < *(int *)(lVar1 + 3)) {
    return (*(uint *)(lVar1 + 7) >> 0xb & 1) +
           (*(int *)(lVar1 + 0xf) >> 1) + (*(int *)(lVar1 + 0xf) >> 1) + 3;
  }
  return 3;
}

