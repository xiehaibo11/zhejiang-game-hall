
/* v8::internal::Isolate::InitializeThreadLocal() */

void __thiscall v8::internal::Isolate::InitializeThreadLocal(Isolate *this)

{
  undefined8 uVar1;
  
  ThreadLocalTop::Initialize((ThreadLocalTop *)(this + 0x2bb8),this);
  uVar1 = *(undefined8 *)(this + 0xa8);
  *(undefined8 *)(this + 0x2bd8) = uVar1;
  *(undefined8 *)(this + 0x2c10) = uVar1;
  *(undefined8 *)(this + 0x2c20) = uVar1;
  return;
}

