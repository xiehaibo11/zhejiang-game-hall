
/* v8::internal::DeclarationScope::AllocateVariables(v8::internal::ParseInfo*) */

undefined8 __thiscall
v8::internal::DeclarationScope::AllocateVariables(DeclarationScope *this,ParseInfo *param_1)

{
  DeclarationScope DVar1;
  DeclarationScope *pDVar2;
  DeclarationScope *pDVar3;
  DeclarationScope *this_00;
  ulong uVar4;
  
  DVar1 = this[0x80];
  if (DVar1 == (DeclarationScope)0x3) {
    ModuleScope::AllocateModuleVariables((ModuleScope *)this);
    DVar1 = this[0x80];
  }
  if ((DVar1 == (DeclarationScope)0x0) && (this_00 = this, ((byte)this[0x88] & 7) == 0)) {
LAB_014a1a84:
    uVar4 = ClassScope::ResolvePrivateNames((ClassScope *)this_00,param_1);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  else {
    pDVar3 = *(DeclarationScope **)(this + 8);
    pDVar2 = this;
    while (this_00 = pDVar3, this_00 != (DeclarationScope *)0x0) {
      if ((this_00[0x80] == (DeclarationScope)0x0) && (((byte)pDVar2[0x82] >> 1 & 1) == 0))
      goto LAB_014a1a84;
      pDVar2 = this_00;
      pDVar3 = *(DeclarationScope **)(this_00 + 8);
    }
  }
  Scope::ResolveVariablesRecursively((Scope *)this,param_1);
  if (-1 < (char)this[0x83]) {
    Scope::AllocateVariablesRecursively((Scope *)this);
  }
  return 1;
}

