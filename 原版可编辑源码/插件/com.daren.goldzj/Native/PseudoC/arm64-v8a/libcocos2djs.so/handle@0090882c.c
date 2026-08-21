
/* se::ObjectWrap::handle() */

undefined8 __thiscall se::ObjectWrap::handle(ObjectWrap *this)

{
  Isolate *pIVar1;
  undefined8 uVar2;
  
  pIVar1 = (Isolate *)v8::Isolate::GetCurrent();
  if (*(ulong **)(this + 8) == (ulong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = v8::HandleScope::CreateHandle(pIVar1,**(ulong **)(this + 8));
  }
  return uVar2;
}

