
/* v8::internal::Heap::GCCallbackTuple::TEMPNAMEPLACEHOLDERVALUE(v8::internal::Heap::GCCallbackTuple
   const&) */

void __thiscall
v8::internal::Heap::GCCallbackTuple::operator=(GCCallbackTuple *this,GCCallbackTuple *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)this = uVar1;
  return;
}

