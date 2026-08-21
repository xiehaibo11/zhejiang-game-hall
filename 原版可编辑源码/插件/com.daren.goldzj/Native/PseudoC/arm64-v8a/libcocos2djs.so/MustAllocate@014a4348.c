
/* v8::internal::Scope::MustAllocate(v8::internal::Variable*) */

byte __thiscall v8::internal::Scope::MustAllocate(Scope *this,Variable *param_1)

{
  ushort uVar1;
  byte bVar2;
  ulong uVar3;
  
  if (((*(int *)(*(long *)(param_1 + 8) + 0x10) != 0) &&
      (((((byte)this[0x81] >> 6 & 1) != 0 || (((byte)this[0x80] & 0xfe) == 4)) &&
       (uVar1 = *(ushort *)(param_1 + 0x28), *(ushort *)(param_1 + 0x28) = uVar1 | 0x800,
       (uVar1 & 0x70) != 0x20)))) && ((*(ushort *)(this + 0x81) >> 6 & 1) != 0)) {
    Variable::SetMaybeAssigned(param_1);
  }
  uVar3 = Variable::IsGlobalObjectProperty(param_1);
  if ((uVar3 & 1) == 0) {
    bVar2 = (byte)param_1[0x29] >> 3 & 1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2;
}

