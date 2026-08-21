
/* v8::internal::Scope::ResolveTo(v8::internal::ParseInfo*, v8::internal::VariableProxy*,
   v8::internal::Variable*) */

void __thiscall
v8::internal::Scope::ResolveTo
          (Scope *this,ParseInfo *param_1,VariableProxy *param_2,Variable *param_3)

{
  ushort uVar1;
  Variable *pVVar2;
  Variable *pVVar3;
  Scope *pSVar4;
  Scope *pSVar5;
  
  pVVar2 = param_3 + 0x28;
  uVar1 = *(ushort *)pVVar2;
  pVVar3 = param_3;
  if ((uVar1 & 0xf) == 6) {
    do {
      pVVar3 = *(Variable **)(pVVar3 + 0x10);
      uVar1 = *(ushort *)(pVVar3 + 0x28);
    } while ((uVar1 & 0xf) == 6);
    pVVar2 = pVVar3 + 0x28;
  }
  if ((uVar1 >> 0xc & 1) == 0) {
    if (((uVar1 & 0x380) != 0x280) || (0 < *(int *)(pVVar3 + 0x20))) {
      pSVar4 = *(Scope **)pVVar3;
      pSVar5 = pSVar4;
      if (((byte)pSVar4[0x82] & 1) != 0) goto LAB_014a420c;
      do {
        do {
          pSVar5 = *(Scope **)(pSVar5 + 8);
        } while (((byte)pSVar5[0x82] & 1) == 0);
LAB_014a420c:
      } while ((pSVar5[0x80] == (Scope)0x0) || (pSVar5[0x80] == (Scope)0x6));
      for (; (((byte)this[0x82] & 1) == 0 ||
             ((this[0x80] == (Scope)0x6 || (this[0x80] == (Scope)0x0))));
          this = *(Scope **)(this + 8)) {
      }
      if (((pSVar5 == this) && (((byte)pSVar4[0x81] >> 3 & 1) == 0)) &&
         (*(int *)(pVVar3 + 0x24) < *(int *)param_2)) goto LAB_014a4274;
    }
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffff7ff;
    *(ushort *)pVVar2 = *(ushort *)pVVar2 | 0x2000;
  }
LAB_014a4274:
  VariableProxy::BindTo(param_2,param_3);
  return;
}

