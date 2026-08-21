
/* v8::internal::compiler::RegisterAllocationData::MarkFixedUse(v8::internal::MachineRepresentation,
   int) */

void __thiscall
v8::internal::compiler::RegisterAllocationData::MarkFixedUse
          (RegisterAllocationData *this,char param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong *puVar4;
  
  iVar2 = (int)param_3;
  if (((param_2 == '\r') || (param_2 == '\f')) || (param_2 == '\v')) {
    lVar3 = *(long *)(this + 0x180);
    if (*(int *)(lVar3 + 4) != 1) {
      iVar1 = iVar2 + 0x3f;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      param_3 = param_3 & 0xffffffff;
      puVar4 = (ulong *)(*(long *)(lVar3 + 8) + (long)(iVar1 >> 6) * 8);
      goto LAB_0165976c;
    }
  }
  else {
    lVar3 = *(long *)(this + 0x178);
    if (*(int *)(lVar3 + 4) != 1) {
      iVar1 = iVar2 + 0x3f;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      param_3 = param_3 & 0xffffffff;
      puVar4 = (ulong *)(*(long *)(lVar3 + 8) + (long)(iVar1 >> 6) * 8);
      goto LAB_0165976c;
    }
  }
  puVar4 = (ulong *)(lVar3 + 8);
LAB_0165976c:
  *puVar4 = *puVar4 | 1L << (param_3 & 0x3f);
  return;
}

