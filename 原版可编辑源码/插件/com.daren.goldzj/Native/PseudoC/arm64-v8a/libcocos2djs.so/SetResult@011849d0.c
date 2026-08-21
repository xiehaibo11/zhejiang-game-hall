
/* v8::internal::Processor::SetResult(v8::internal::Expression*) */

Assignment * __thiscall v8::internal::Processor::SetResult(Processor *this,Expression *param_1)

{
  uint uVar1;
  Zone *pZVar2;
  VariableProxy *this_00;
  Assignment *pAVar3;
  Variable *pVVar4;
  
  pZVar2 = *(Zone **)(this + 0x20);
  this[0x51] = (Processor)0x1;
  pVVar4 = *(Variable **)this;
  this_00 = *(VariableProxy **)(pZVar2 + 0x10);
  if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)this_00) < 0x18) {
    this_00 = (VariableProxy *)Zone::NewExpand(pZVar2,0x18);
  }
  else {
    *(VariableProxy **)(pZVar2 + 0x10) = this_00 + 0x18;
  }
  VariableProxy::VariableProxy(this_00,pVVar4,-1);
  uVar1 = *(uint *)(this_00 + 4);
  if (((uVar1 & 0x3f) == 0x35) && (*(uint *)(this_00 + 4) = uVar1 | 0x80, (uVar1 >> 8 & 1) != 0)) {
    Variable::SetMaybeAssigned(*(Variable **)(this_00 + 8));
  }
  pZVar2 = *(Zone **)(this + 0x20);
  pAVar3 = *(Assignment **)(pZVar2 + 0x10);
  if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)pAVar3) < 0x18) {
    pAVar3 = (Assignment *)Zone::NewExpand(pZVar2,0x18);
  }
  else {
    *(Assignment **)(pZVar2 + 0x10) = pAVar3 + 0x18;
  }
  Assignment::Assignment(pAVar3,0x18,0x11,this_00,param_1,0xffffffff);
  return pAVar3;
}

