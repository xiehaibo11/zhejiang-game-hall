
/* v8::internal::ThreadManager::ThreadManager(v8::internal::Isolate*) */

void __thiscall v8::internal::ThreadManager::ThreadManager(ThreadManager *this,Isolate *param_1)

{
  undefined4 *puVar1;
  
  base::Mutex::Mutex((Mutex *)this);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0xffffffffffffffff;
  *(Isolate **)(this + 0x48) = param_1;
  puVar1 = operator_new(0x28);
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined4 **)(puVar1 + 4) = puVar1;
  *(undefined4 **)(puVar1 + 6) = puVar1;
  *(ThreadManager **)(puVar1 + 8) = this;
  *puVar1 = 0xffffffff;
  *(undefined4 **)(this + 0x38) = puVar1;
  puVar1 = operator_new(0x28);
  *puVar1 = 0xffffffff;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined4 **)(puVar1 + 4) = puVar1;
  *(undefined4 **)(puVar1 + 6) = puVar1;
  *(ThreadManager **)(puVar1 + 8) = this;
  *(undefined4 **)(this + 0x40) = puVar1;
  return;
}

