
/* v8::internal::interpreter::BytecodeRegisterOptimizer::GrowRegisterMap(v8::internal::interpreter::Register)
    */

void __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::GrowRegisterMap
          (BytecodeRegisterOptimizer *this,int param_2)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  Zone *this_00;
  ulong uVar5;
  
  lVar4 = *(long *)(this + 0x20);
  uVar5 = *(long *)(this + 0x28) - lVar4 >> 3;
  if (uVar5 <= (ulong)((long)*(int *)(this + 0x40) + (long)param_2)) {
    uVar1 = (long)*(int *)(this + 0x40) + (long)param_2 + 1;
    if (uVar1 < uVar5 || uVar1 - uVar5 == 0) {
      if (uVar1 < uVar5) {
        *(ulong *)(this + 0x28) = lVar4 + uVar1 * 8;
      }
    }
    else {
      std::__ndk1::
      vector<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*>>
      ::__append((vector<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*>>
                  *)(this + 0x20),uVar1 - uVar5);
      do {
        this_00 = *(Zone **)(this + 0xb0);
        piVar3 = *(int **)(this_00 + 0x10);
        if ((ulong)(*(long *)(this_00 + 0x18) - (long)piVar3) < 0x20) {
          piVar3 = (int *)Zone::NewExpand(this_00,0x20);
        }
        else {
          *(int **)(this_00 + 0x10) = piVar3 + 8;
        }
        iVar2 = *(int *)(this + 0x98);
        *(int *)(this + 0x98) = iVar2 + 1;
        *piVar3 = (int)uVar5 - *(int *)(this + 0x40);
        piVar3[1] = iVar2 + 1;
        *(undefined2 *)(piVar3 + 2) = 1;
        *(undefined1 *)((long)piVar3 + 10) = 0;
        *(int **)(piVar3 + 4) = piVar3;
        *(int **)(piVar3 + 6) = piVar3;
        *(int **)(*(long *)(this + 0x20) + uVar5 * 8) = piVar3;
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
  }
  return;
}

