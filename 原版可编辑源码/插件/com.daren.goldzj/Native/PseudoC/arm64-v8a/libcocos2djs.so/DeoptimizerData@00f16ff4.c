
/* v8::internal::DeoptimizerData::DeoptimizerData(v8::internal::Heap*) */

void __thiscall v8::internal::DeoptimizerData::DeoptimizerData(DeoptimizerData *this,Heap *param_1)

{
  *(Heap **)this = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  Heap::RegisterStrongRoots(param_1,this + 8,this + 0x20);
  return;
}

