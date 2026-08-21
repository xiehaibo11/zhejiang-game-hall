
/* v8::internal::compiler::MemoryLowering::~MemoryLowering() */

void __thiscall v8::internal::compiler::MemoryLowering::~MemoryLowering(MemoryLowering *this)

{
  MemoryLowering *pMVar1;
  
  pMVar1 = *(MemoryLowering **)(this + 0x70);
  *(undefined ***)this = &PTR__MemoryLowering_01cd9578;
  if (this + 0x50 == pMVar1) {
                    /* WARNING: Could not recover jumptable at 0x01793eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pMVar1 + 0x20))();
    return;
  }
  if (pMVar1 != (MemoryLowering *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01793ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pMVar1 + 0x28))();
    return;
  }
  return;
}

