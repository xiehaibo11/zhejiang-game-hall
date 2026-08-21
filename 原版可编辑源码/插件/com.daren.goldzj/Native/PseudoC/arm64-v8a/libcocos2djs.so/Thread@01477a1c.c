
/* v8::base::Thread::Thread(v8::base::Thread::Options const&) */

void __thiscall v8::base::Thread::Thread(Thread *this,Options *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  *(undefined ***)this = &PTR__Thread_01cc3fc0;
  puVar2 = operator_new(0x30);
  *puVar2 = 0;
  Mutex::Mutex((Mutex *)(puVar2 + 1));
  *(undefined8 **)(this + 8) = puVar2;
  uVar1 = *(uint *)(param_1 + 8);
  *(undefined8 *)(this + 0x28) = 0;
  *(uint *)(this + 0x20) = uVar1;
  if ((0 < (int)uVar1) && (uVar1 >> 0xe == 0)) {
    *(undefined4 *)(this + 0x20) = 0x4000;
  }
  strncpy((char *)(this + 0x10),*(char **)param_1,0x10);
  this[0x1f] = (Thread)0x0;
  return;
}

