
/* v8::internal::Parser::NewTargetExpression(int) */

VariableProxy * __thiscall v8::internal::Parser::NewTargetExpression(Parser *this,int param_1)

{
  Zone *this_00;
  VariableProxy *pVVar1;
  Scope *this_01;
  undefined8 uVar2;
  
  this_00 = *(Zone **)(this + 0x68);
  this_01 = *(Scope **)this;
  pVVar1 = *(VariableProxy **)(this_00 + 0x10);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x168);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pVVar1) < 0x18) {
    pVVar1 = (VariableProxy *)Zone::NewExpand(this_00,0x18);
  }
  else {
    *(VariableProxy **)(this_00 + 0x10) = pVVar1 + 0x18;
  }
  *(undefined8 *)(pVVar1 + 8) = uVar2;
  *(undefined8 *)(pVVar1 + 0x10) = 0;
  *(int *)pVVar1 = param_1;
  *(undefined4 *)(pVVar1 + 4) = 0x835;
  Scope::AddUnresolved(this_01,pVVar1);
  *(uint *)(pVVar1 + 4) = *(uint *)(pVVar1 + 4) | 0x400;
  return pVVar1;
}

