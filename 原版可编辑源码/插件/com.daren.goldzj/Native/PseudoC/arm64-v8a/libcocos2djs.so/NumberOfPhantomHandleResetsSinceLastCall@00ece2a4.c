
/* v8::Isolate::NumberOfPhantomHandleResetsSinceLastCall() */

undefined8 __thiscall v8::Isolate::NumberOfPhantomHandleResetsSinceLastCall(Isolate *this)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(this + 0x95e0) + 0x50);
  *(undefined8 *)(*(long *)(this + 0x95e0) + 0x50) = 0;
  return uVar1;
}

