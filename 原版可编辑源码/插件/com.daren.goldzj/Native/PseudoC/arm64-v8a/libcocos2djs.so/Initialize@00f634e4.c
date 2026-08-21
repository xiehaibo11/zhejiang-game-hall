
/* v8::internal::ThreadLocalTop::Initialize(v8::internal::Isolate*) */

void __thiscall v8::internal::ThreadLocalTop::Initialize(ThreadLocalTop *this,Isolate *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x5a) = 0;
  *(undefined8 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
  *(undefined8 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x9a) = 0;
  *(undefined8 *)(this + 0x92) = 0;
  *(undefined8 *)(this + 0x8a) = 0;
  *(undefined8 *)(this + 0x82) = 0;
  *(undefined8 *)(this + 0x7a) = 0;
  *(undefined8 *)(this + 0x72) = 0;
  *(undefined4 *)(this + 0xa8) = 6;
  *(undefined8 *)(this + 0x6a) = 0;
  *(undefined8 *)(this + 0x62) = 0;
  *(Isolate **)(this + 8) = param_1;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined8 *)(this + 0xb4) = 0;
  *(undefined8 *)(this + 0xac) = 0;
  uVar3 = ThreadId::GetCurrentThreadId();
  *(undefined4 *)(this + 0x18) = uVar3;
  uVar2 = trap_handler::GetThreadInWasmThreadLocalAddress();
  *(undefined8 *)(this + 0xb8) = uVar2;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

