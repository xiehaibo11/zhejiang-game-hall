
/* se::ObjectWrap::wrap(void*) */

void __thiscall se::ObjectWrap::wrap(ObjectWrap *this,void *param_1)

{
  Isolate *pIVar1;
  Object *this_00;
  
  *(void **)(this + 0x10) = param_1;
  pIVar1 = (Isolate *)v8::Isolate::GetCurrent();
  if (*(ulong **)(this + 8) == (ulong *)0x0) {
    this_00 = (Object *)0x0;
  }
  else {
    this_00 = (Object *)v8::HandleScope::CreateHandle(pIVar1,**(ulong **)(this + 8));
  }
  v8::Object::SetAlignedPointerInInternalField(this_00,0,param_1);
  return;
}

