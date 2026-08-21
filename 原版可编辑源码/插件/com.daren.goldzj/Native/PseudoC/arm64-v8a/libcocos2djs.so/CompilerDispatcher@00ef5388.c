
/* v8::internal::CompilerDispatcher::CompilerDispatcher(v8::internal::Isolate*, v8::Platform*,
   unsigned long) */

void __thiscall
v8::internal::CompilerDispatcher::CompilerDispatcher
          (CompilerDispatcher *this,Isolate *param_1,Platform *param_2,ulong param_3)

{
  CancelableTaskManager *this_00;
  
  *(Isolate **)this = param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x95d0);
  *(long *)(this + 0x10) = *(long *)(param_1 + 0x9520) + 0xc928;
  *(long *)(this + 0x18) = *(long *)(param_1 + 0x9520) + 0x1570;
  (**(code **)(*(long *)param_2 + 0x30))(this + 0x20,param_2);
  *(Platform **)(this + 0x30) = param_2;
  *(ulong *)(this + 0x38) = param_3;
  this[0x40] = FLAG_trace_compiler_dispatcher;
  this_00 = operator_new(0x90);
  CancelableTaskManager::CancelableTaskManager(this_00);
  *(undefined8 *)(this + 0x60) = 0;
  *(Isolate **)(this + 0x80) = param_1 + 0x8850;
  *(CancelableTaskManager **)(this + 0x48) = this_00;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined ***)(this + 0x70) = &PTR__IdentityMap_01ca43a8;
  *(CompilerDispatcher **)(this + 0x58) = this + 0x60;
  *(undefined4 *)(this + 0x88) = 0xffffffff;
  *(undefined8 *)(this + 0x8c) = 0;
  *(undefined8 *)(this + 0x9c) = 0;
  *(undefined8 *)(this + 0x94) = 0;
  *(undefined8 *)(this + 0xa1) = 0;
  base::Mutex::Mutex((Mutex *)(this + 0xb0));
  this[0xd8] = (CompilerDispatcher)0x0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0xe4) = 0;
  *(undefined8 *)(this + 0xdc) = 0;
  *(undefined8 *)(this + 0xf4) = 0;
  *(undefined8 *)(this + 0xec) = 0;
  *(undefined8 *)(this + 0xfc) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x128) = 0x3f800000;
  base::ConditionVariable::ConditionVariable((ConditionVariable *)(this + 0x138));
  *(undefined8 *)(this + 0x168) = 0;
  base::Semaphore::Semaphore((Semaphore *)(this + 0x170),0);
  if ((this[0x40] != (CompilerDispatcher)0x0) && (FLAG_compiler_dispatcher == '\0')) {
    PrintF("CompilerDispatcher: dispatcher is disabled\n");
    return;
  }
  return;
}

