
/* v8::internal::Profiler::Engage() */

void __thiscall v8::internal::Profiler::Engage(Profiler *this)

{
  basic_string *pbVar1;
  basic_string bVar2;
  basic_string *pbVar3;
  Logger *pLVar4;
  ulong uVar5;
  Semaphore *pSVar6;
  Thread *this_00;
  Sampler *this_01;
  basic_string *local_58;
  basic_string *local_50;
  
  base::OS::GetSharedLibraryAddresses((OS *)this);
  for (pbVar1 = local_58; pbVar1 != local_50; pbVar1 = pbVar1 + 0x30) {
    pLVar4 = *(Logger **)(*(long *)(this + 0x30) + 0x9558);
    if ((*(char *)(*(long *)(pLVar4 + 8) + 0xb7fc) == '\0') && (pLVar4[0x20] != (Logger)0x0)) {
      Logger::SharedLibraryEvent
                (pLVar4,pbVar1,*(ulong *)(pbVar1 + 0x18),*(ulong *)(pbVar1 + 0x20),
                 *(long *)(pbVar1 + 0x28));
    }
  }
  *(undefined4 *)(this + 0x81454) = 1;
  uVar5 = base::Thread::Start((Thread *)this);
  if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","Start()");
  }
  pLVar4 = *(Logger **)(*(long *)(this + 0x30) + 0x9558);
  this_01 = *(Sampler **)(pLVar4 + 0x10);
  *(Profiler **)(this_01 + 0x30) = this;
  if (((byte)this_01[0x20] & 1) == 0) {
    sampler::Sampler::Start(this_01);
  }
  this_00 = *(Thread **)(this_01 + 0x38);
  pSVar6 = operator_new(0x10);
  base::Semaphore::Semaphore(pSVar6,0);
  *(Semaphore **)(this_00 + 0x28) = pSVar6;
  uVar5 = base::Thread::Start(this_00);
  if ((uVar5 & 1) != 0) {
    base::Semaphore::Wait(*(Semaphore **)(this_00 + 0x28));
    pSVar6 = *(Semaphore **)(this_00 + 0x28);
    if (pSVar6 != (Semaphore *)0x0) {
      base::Semaphore::~Semaphore(pSVar6);
      operator_delete(pSVar6);
    }
    *(undefined8 *)(this_00 + 0x28) = 0;
  }
  Logger::ProfilerBeginEvent(pLVar4);
  if (local_58 != (basic_string *)0x0) {
    if (local_50 != local_58) {
      bVar2 = local_50[-0x30];
      pbVar1 = local_50 + -0x30;
      while( true ) {
        pbVar3 = pbVar1;
        if (((byte)bVar2 & 1) != 0) {
          operator_delete(*(void **)(local_50 + -0x20));
        }
        if (local_58 == pbVar3) break;
        bVar2 = pbVar3[-0x30];
        pbVar1 = pbVar3 + -0x30;
        local_50 = pbVar3;
      }
    }
    operator_delete(local_58);
  }
  return;
}

