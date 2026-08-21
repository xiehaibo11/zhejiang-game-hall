
/* v8::internal::compiler::RegisterAllocationData::HasFixedUse(v8::internal::MachineRepresentation,
   int) */

uint __thiscall
v8::internal::compiler::RegisterAllocationData::HasFixedUse
          (RegisterAllocationData *this,char param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong *puVar3;
  
  if (((param_2 == '\r') || (param_2 == '\f')) || (param_2 == '\v')) {
    lVar2 = *(long *)(this + 0x180);
  }
  else {
    lVar2 = *(long *)(this + 0x178);
  }
  puVar3 = (ulong *)(lVar2 + 8);
  if (*(int *)(lVar2 + 4) != 1) {
    uVar1 = param_3 + 0x3f;
    if (-1 < (int)param_3) {
      uVar1 = param_3;
    }
    puVar3 = (ulong *)(*puVar3 + (long)((int)uVar1 >> 6) * 8);
  }
  return (uint)(*puVar3 >> ((ulong)param_3 & 0x3f)) & 1;
}

