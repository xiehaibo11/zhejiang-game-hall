
/* v8::internal::compiler::MemoryLowering::~MemoryLowering() */

void __thiscall v8::internal::compiler::MemoryLowering::~MemoryLowering(MemoryLowering *this)

{
  MemoryLowering *pMVar1;
  code *pcVar2;
  
  pMVar1 = *(MemoryLowering **)(this + 0x70);
  *(undefined ***)this = &PTR__MemoryLowering_01cd9578;
  if (this + 0x50 == pMVar1) {
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x20);
  }
  else {
    if (pMVar1 == (MemoryLowering *)0x0) goto LAB_01793f40;
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x28);
  }
  (*pcVar2)();
LAB_01793f40:
  operator_delete(this);
  return;
}

