
/* v8::internal::ProfilerEventsProcessor::~ProfilerEventsProcessor() */

void __thiscall
v8::internal::ProfilerEventsProcessor::~ProfilerEventsProcessor(ProfilerEventsProcessor *this)

{
  Malloced *pMVar1;
  void *pvVar2;
  void *in_x1;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  Malloced *pMVar3;
  
  *(undefined ***)this = &PTR__ProfilerEventsProcessor_01cb62d0;
  *(undefined ***)(this + 0x30) = &PTR_CodeEventHandler_01cb6310;
  *(undefined8 *)(*(long *)(this + 0x40) + 0x60) = 0;
  pMVar1 = *(Malloced **)(this + 0x158);
  while (pMVar1 != (Malloced *)0x0) {
    pMVar3 = *(Malloced **)(pMVar1 + 0x1030);
    Malloced::operator_delete(pMVar1,in_x1);
    pMVar1 = pMVar3;
    in_x1 = extraout_x1;
  }
  base::Mutex::~Mutex((Mutex *)(this + 0x130));
  base::Mutex::~Mutex((Mutex *)(this + 0x108));
  pMVar1 = *(Malloced **)(this + 0xf8);
  pvVar2 = extraout_x1_00;
  while (pMVar1 != (Malloced *)0x0) {
    pMVar3 = *(Malloced **)(pMVar1 + 0x40);
    Malloced::operator_delete(pMVar1,pvVar2);
    pMVar1 = pMVar3;
    pvVar2 = extraout_x1_01;
  }
  base::Mutex::~Mutex((Mutex *)(this + 0xd0));
  base::Mutex::~Mutex((Mutex *)(this + 0xa8));
  base::Mutex::~Mutex((Mutex *)(this + 0x7c));
  base::ConditionVariable::~ConditionVariable((ConditionVariable *)(this + 0x4c));
  base::Thread::~Thread((Thread *)this);
  return;
}

