
/* v8::internal::Factory::NewJSPromise() */

undefined8 __thiscall v8::internal::Factory::NewJSPromise(Factory *this)

{
  undefined8 uVar1;
  
  uVar1 = NewJSPromiseWithoutHook(this);
  Isolate::RunPromiseHook((Isolate *)this,0,uVar1,this + 0xa0);
  return uVar1;
}

