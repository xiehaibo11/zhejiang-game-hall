
/* v8::internal::ScopeIterator::~ScopeIterator() */

void __thiscall v8::internal::ScopeIterator::~ScopeIterator(ScopeIterator *this)

{
  ParseInfo *this_00;
  
  this_00 = *(ParseInfo **)(this + 8);
  if (this_00 != (ParseInfo *)0x0) {
    ParseInfo::~ParseInfo(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}

