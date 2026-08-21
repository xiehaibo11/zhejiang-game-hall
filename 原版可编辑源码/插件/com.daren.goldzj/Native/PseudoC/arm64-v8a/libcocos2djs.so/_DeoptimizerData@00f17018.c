
/* v8::internal::DeoptimizerData::~DeoptimizerData() */

void __thiscall v8::internal::DeoptimizerData::~DeoptimizerData(DeoptimizerData *this)

{
  Heap::UnregisterStrongRoots(*(Heap **)this,this + 8);
  return;
}

