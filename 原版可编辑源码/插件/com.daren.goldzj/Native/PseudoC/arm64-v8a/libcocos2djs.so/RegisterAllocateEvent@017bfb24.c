
/* v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterAllocateEvent(v8::internal::interpreter::Register)
    */

void __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterAllocateEvent
          (BytecodeRegisterOptimizer *this,int param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(this + 0x40);
  lVar2 = *(long *)(this + 0x20);
  if ((ulong)(*(long *)(this + 0x28) - lVar2 >> 3) <= (ulong)((long)iVar1 + (long)param_2)) {
    GrowRegisterMap(this,param_2);
    lVar2 = *(long *)(this + 0x20);
  }
  lVar2 = *(long *)(lVar2 + ((long)iVar1 + (long)param_2) * 8);
  *(undefined1 *)(lVar2 + 9) = 1;
  if (*(char *)(lVar2 + 8) == '\0') {
    iVar1 = *(int *)(this + 0x98);
    *(int *)(this + 0x98) = iVar1 + 1;
    *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x18) = *(undefined8 *)(lVar2 + 0x18);
    *(undefined8 *)(*(long *)(lVar2 + 0x18) + 0x10) = *(undefined8 *)(lVar2 + 0x10);
    *(long *)(lVar2 + 0x10) = lVar2;
    *(long *)(lVar2 + 0x18) = lVar2;
    *(int *)(lVar2 + 4) = iVar1 + 1;
    *(undefined1 *)(lVar2 + 8) = 1;
  }
  return;
}

