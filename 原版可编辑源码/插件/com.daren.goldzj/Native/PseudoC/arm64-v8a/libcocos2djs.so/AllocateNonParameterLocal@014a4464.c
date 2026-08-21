
/* v8::internal::Scope::AllocateNonParameterLocal(v8::internal::Variable*) */

void __thiscall v8::internal::Scope::AllocateNonParameterLocal(Scope *this,Variable *param_1)

{
  Scope SVar1;
  ulong uVar2;
  int iVar3;
  ushort uVar4;
  
  uVar4 = *(ushort *)(param_1 + 0x28);
  if ((uVar4 & 0x380) != 0) {
    return;
  }
  if (((*(int *)(*(long *)(param_1 + 8) + 0x10) != 0) &&
      (((((byte)this[0x81] >> 6 & 1) != 0 || (((byte)this[0x80] & 0xfe) == 4)) &&
       (*(ushort *)(param_1 + 0x28) = uVar4 | 0x800, (uVar4 & 0x70) != 0x20)))) &&
     ((*(ushort *)(this + 0x81) >> 6 & 1) != 0)) {
    Variable::SetMaybeAssigned(param_1);
  }
  uVar2 = Variable::IsGlobalObjectProperty(param_1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar4 = *(ushort *)(param_1 + 0x28);
  if ((uVar4 >> 0xb & 1) == 0) {
    return;
  }
  if ((uVar4 & 0xf) == 3) {
LAB_014a4544:
    while ((this[0x80] == (Scope)0x6 || (this[0x80] == (Scope)0x0))) {
      do {
        this = *(Scope **)(this + 8);
      } while (((byte)this[0x82] & 1) == 0);
    }
    iVar3 = *(int *)(this + 0x78);
    *(int *)(this + 0x78) = iVar3 + 1;
    uVar4 = *(ushort *)(param_1 + 0x28) & 0xfc7f | 0x100;
  }
  else {
    SVar1 = this[0x80];
    if (SVar1 == (Scope)0x1) {
LAB_014a4508:
      if (1 < (uVar4 & 0xf)) {
LAB_014a4510:
        if (((uVar4 >> 10 & 1) == 0) && (((byte)this[0x81] >> 6 & 1) == 0)) goto LAB_014a4544;
      }
    }
    else if (SVar1 != (Scope)0x5) {
      if (SVar1 == (Scope)0x4) goto LAB_014a4508;
      goto LAB_014a4510;
    }
    iVar3 = *(int *)(this + 0x7c);
    *(int *)(this + 0x7c) = iVar3 + 1;
    uVar4 = *(ushort *)(param_1 + 0x28) & 0xfdff | 0x180;
  }
  *(ushort *)(param_1 + 0x28) = uVar4;
  *(int *)(param_1 + 0x20) = iVar3;
  return;
}

