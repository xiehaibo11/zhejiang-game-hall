
/* v8::internal::SourceRangeAstVisitor::MaybeRemoveLastContinuationRange(v8::internal::ZoneList<v8::internal::Statement*>*)
    */

void __thiscall
v8::internal::SourceRangeAstVisitor::MaybeRemoveLastContinuationRange
          (SourceRangeAstVisitor *this,ZoneList *param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    MaybeRemoveContinuationRange
              (this,*(Statement **)(*(long *)param_1 + (long)(*(int *)(param_1 + 0xc) + -1) * 8));
    return;
  }
  return;
}

