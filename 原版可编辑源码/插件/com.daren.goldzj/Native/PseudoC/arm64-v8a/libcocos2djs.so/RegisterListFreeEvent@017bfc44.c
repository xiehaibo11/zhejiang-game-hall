
/* v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterListFreeEvent(v8::internal::interpreter::RegisterList)
    */

void __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterListFreeEvent
          (BytecodeRegisterOptimizer *this,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)((ulong)param_2 >> 0x20);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = (int)param_2;
  }
  if (0 < iVar2) {
    do {
      iVar2 = iVar2 + -1;
      iVar1 = iVar3 + *(int *)(this + 0x40);
      iVar3 = iVar3 + 1;
      *(undefined1 *)(*(long *)(*(long *)(this + 0x20) + (long)iVar1 * 8) + 9) = 0;
    } while (iVar2 != 0);
  }
  return;
}

