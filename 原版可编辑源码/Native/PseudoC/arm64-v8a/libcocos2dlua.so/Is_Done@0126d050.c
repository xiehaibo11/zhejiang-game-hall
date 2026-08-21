
/* CProfileIterator::Is_Done() */

bool __thiscall CProfileIterator::Is_Done(CProfileIterator *this)

{
  return *(long *)(this + 8) == 0;
}

