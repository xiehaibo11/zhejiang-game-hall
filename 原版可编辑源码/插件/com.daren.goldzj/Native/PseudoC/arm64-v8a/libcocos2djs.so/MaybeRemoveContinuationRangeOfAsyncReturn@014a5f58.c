
/* v8::internal::SourceRangeAstVisitor::MaybeRemoveContinuationRangeOfAsyncReturn(v8::internal::TryCatchStatement*)
    */

void __thiscall
v8::internal::SourceRangeAstVisitor::MaybeRemoveContinuationRangeOfAsyncReturn
          (SourceRangeAstVisitor *this,TryCatchStatement *param_1)

{
  Statement *pSVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x20) == 4) {
    lVar2 = (long)*(int *)(*(long *)(param_1 + 8) + 0x14);
    do {
      if (lVar2 < 1) {
        return;
      }
      pSVar1 = *(Statement **)(*(long *)(*(long *)(param_1 + 8) + 8) + lVar2 * 8 + -8);
      if ((*(uint *)(pSVar1 + 4) & 0x3f) != 0xf) {
        return;
      }
      lVar2 = lVar2 + -1;
    } while ((*(uint *)(pSVar1 + 4) & 0xc0) == 0x80);
    if (pSVar1 != (Statement *)0x0) {
      MaybeRemoveContinuationRange(this,pSVar1);
      return;
    }
  }
  return;
}

