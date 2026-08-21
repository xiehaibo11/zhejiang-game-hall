
/* v8::internal::compiler::InstructionSequence::MarkAsRepresentation(v8::internal::MachineRepresentation,
   int) */

void __thiscall
v8::internal::compiler::InstructionSequence::MarkAsRepresentation
          (InstructionSequence *this,uint param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  MachineRepresentation local_14 [4];
  
  uVar1 = *(long *)(this + 0x130) - *(long *)(this + 0x128);
  if ((int)uVar1 <= param_3) {
    uVar2 = (ulong)*(int *)(this + 0xd0);
    local_14[0] = 5;
    if (uVar1 < uVar2) {
      std::__ndk1::
      vector<v8::internal::MachineRepresentation,v8::internal::ZoneAllocator<v8::internal::MachineRepresentation>>
      ::__append((vector<v8::internal::MachineRepresentation,v8::internal::ZoneAllocator<v8::internal::MachineRepresentation>>
                  *)(this + 0x128),uVar2 - uVar1,local_14);
    }
    else if (uVar1 != uVar2) {
      *(ulong *)(this + 0x130) = *(long *)(this + 0x128) + uVar2;
    }
  }
  if (9 < (param_2 & 0xff) - 4) {
    if (2 < (param_2 & 0xff) - 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    param_2 = 5;
  }
  *(char *)(*(long *)(this + 0x128) + (long)param_3) = (char)param_2;
  *(uint *)(this + 0x148) = *(uint *)(this + 0x148) | 1 << (ulong)(param_2 & 0x1f);
  return;
}

