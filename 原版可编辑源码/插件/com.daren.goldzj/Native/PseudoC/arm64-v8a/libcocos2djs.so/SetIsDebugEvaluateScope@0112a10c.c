
/* v8::internal::ScopeInfo::SetIsDebugEvaluateScope() */

void __thiscall v8::internal::ScopeInfo::SetIsDebugEvaluateScope(ScopeInfo *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  if (1 < *(int *)(lVar1 + 3)) {
    *(uint *)(lVar1 + 7) = *(uint *)(lVar1 + 7) & 0xfffffffe | 0x1000000;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

