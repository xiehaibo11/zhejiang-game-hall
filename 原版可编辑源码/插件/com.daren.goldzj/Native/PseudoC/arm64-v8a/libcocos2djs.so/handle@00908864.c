
/* se::ObjectWrap::handle(v8::Isolate*) */

undefined8 __thiscall se::ObjectWrap::handle(ObjectWrap *this,Isolate *param_1)

{
  undefined8 uVar1;
  
  if (*(ulong **)(this + 8) != (ulong *)0x0) {
    uVar1 = v8::HandleScope::CreateHandle((Isolate *)param_1,**(ulong **)(this + 8));
    return uVar1;
  }
  return 0;
}

