
/* v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterListAllocateEvent(v8::internal::interpreter::RegisterList)
    */

void __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterListAllocateEvent
          (BytecodeRegisterOptimizer *this,ulong param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = param_2 >> 0x20;
  iVar3 = (int)(param_2 >> 0x20);
  if ((iVar3 != 0) && (GrowRegisterMap(this,(int)param_2 + iVar3 + -1), 0 < iVar3)) {
    do {
      lVar2 = *(long *)(*(long *)(this + 0x20) + (long)((int)param_2 + *(int *)(this + 0x40)) * 8);
      *(undefined1 *)(lVar2 + 9) = 1;
      if (*(char *)(lVar2 + 8) == '\0') {
        iVar3 = *(int *)(this + 0x98);
        *(int *)(this + 0x98) = iVar3 + 1;
        *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x18) = *(undefined8 *)(lVar2 + 0x18);
        *(undefined8 *)(*(long *)(lVar2 + 0x18) + 0x10) = *(undefined8 *)(lVar2 + 0x10);
        *(long *)(lVar2 + 0x10) = lVar2;
        *(long *)(lVar2 + 0x18) = lVar2;
        *(int *)(lVar2 + 4) = iVar3 + 1;
        *(undefined1 *)(lVar2 + 8) = 1;
      }
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
      param_2 = (ulong)((int)param_2 + 1);
    } while (uVar1 != 0);
  }
  return;
}

