
/* v8::internal::TranslationIterator::HasNext() const */

bool __thiscall v8::internal::TranslationIterator::HasNext(TranslationIterator *this)

{
  return *(int *)(this + 8) < *(int *)(*(long *)this + 3) >> 1;
}

