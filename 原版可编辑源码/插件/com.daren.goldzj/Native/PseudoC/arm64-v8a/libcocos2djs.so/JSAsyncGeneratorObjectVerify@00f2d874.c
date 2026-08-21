
/* v8::internal::JSAsyncGeneratorObject::JSAsyncGeneratorObjectVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::JSAsyncGeneratorObject::JSAsyncGeneratorObjectVerify
          (JSAsyncGeneratorObject *this,Isolate *param_1)

{
  ulong local_28;
  
  TorqueGeneratedClassVerifiers::JSAsyncGeneratorObjectVerify(*(undefined8 *)this);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x27);
  HeapObject::HeapObjectVerify((HeapObject *)&local_28,param_1);
  return;
}

