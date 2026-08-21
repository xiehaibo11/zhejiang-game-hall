
/* v8::internal::DeclarationScope::DeclareFunctionVar(v8::internal::AstRawString const*,
   v8::internal::Scope*) */

undefined8 __thiscall
v8::internal::DeclarationScope::DeclareFunctionVar
          (DeclarationScope *this,AstRawString *param_1,Scope *param_2)

{
  DeclarationScope *pDVar1;
  DeclarationScope DVar2;
  Zone *this_00;
  long lVar3;
  Variable *pVVar4;
  undefined1 auStack_34 [4];
  
  this_00 = *(Zone **)this;
  DVar2 = this[0x81];
  pVVar4 = *(Variable **)(this_00 + 0x10);
  pDVar1 = this;
  if (param_2 != (Scope *)0x0) {
    pDVar1 = (DeclarationScope *)param_2;
  }
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pVVar4) < 0x30) {
    pVVar4 = (Variable *)Zone::NewExpand(this_00,0x30);
  }
  else {
    *(Variable **)(this_00 + 0x10) = pVVar4 + 0x30;
  }
  *(DeclarationScope **)pVVar4 = this;
  *(AstRawString **)(pVVar4 + 8) = param_1;
  *(undefined8 *)(pVVar4 + 0x10) = 0;
  *(undefined8 *)(pVVar4 + 0x18) = 0;
  *(undefined8 *)(pVVar4 + 0x20) = 0xffffffffffffffff;
  *(ushort *)(pVVar4 + 0x28) = ((byte)DVar2 & 1) << 6 ^ 0x41 | 0x1000;
  *(Variable **)(this + 0xb8) = pVVar4;
  if (((byte)this[0x81] >> 2 & 1) == 0) {
    VariableMap::Add((VariableMap *)(pDVar1 + 0x20),*(Zone **)this,pVVar4);
  }
  else {
    lVar3 = VariableMap::Declare
                      ((VariableMap *)(pDVar1 + 0x20),*(undefined8 *)pDVar1,pDVar1,param_1,4,0,1,0,0
                       ,auStack_34);
    *(undefined4 *)(lVar3 + 0x20) = 0xffffffff;
    *(ushort *)(lVar3 + 0x28) = *(ushort *)(lVar3 + 0x28) & 0xfc7f | 0x200;
  }
  return *(undefined8 *)(this + 0xb8);
}

