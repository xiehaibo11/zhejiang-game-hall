
/* se::ObjectWrap::init(v8::Local<v8::Object>) */

undefined8 __thiscall se::ObjectWrap::init(ObjectWrap *this,ulong *param_2)

{
  Isolate *pIVar1;
  undefined8 uVar2;
  
  pIVar1 = (Isolate *)v8::Isolate::GetCurrent();
  if (*(ulong **)(this + 8) != (ulong *)0x0) {
    v8::V8::DisposeGlobal(*(ulong **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  uVar2 = 0;
  if (param_2 != (ulong *)0x0) {
    uVar2 = v8::V8::GlobalizeReference(pIVar1,param_2);
    *(undefined8 *)(this + 8) = uVar2;
  }
  v8::V8::MakeWeak(uVar2,this,weakCallback,2);
  return 1;
}

