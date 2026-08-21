
/* v8::internal::compiler::LoadElimination::AbstractState::KillFields(v8::internal::compiler::Node*,
   v8::internal::MaybeHandle<v8::internal::Name>, v8::internal::Zone*) const */

AbstractState * __thiscall
v8::internal::compiler::LoadElimination::AbstractState::KillFields
          (AbstractState *this,undefined8 param_1,undefined8 param_3,Zone *param_4)

{
  AbstractField *pAVar1;
  undefined8 uVar2;
  AbstractState *__dest;
  AbstractField *pAVar3;
  long lVar4;
  ulong uVar5;
  AbstractState *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar5 = 1;
  local_48 = 0;
  pAVar3 = *(AbstractField **)(this + 8);
  local_58 = this;
  uStack_50 = param_1;
  if (pAVar3 != (AbstractField *)0x0) goto LAB_0176eb8c;
  do {
    do {
      uVar5 = uVar5 + 1;
      if (uVar5 == 0x21) {
        return this;
      }
      pAVar3 = *(AbstractField **)(this + uVar5 * 8);
    } while (pAVar3 == (AbstractField *)0x0);
LAB_0176eb8c:
    pAVar1 = (AbstractField *)AbstractField::Kill(pAVar3,&local_58,param_3,param_4);
  } while (pAVar1 == pAVar3);
  __dest = *(AbstractState **)(param_4 + 0x10);
  if ((ulong)(*(long *)(param_4 + 0x18) - (long)__dest) < 0x210) {
    __dest = (AbstractState *)Zone::NewExpand(param_4,0x210);
  }
  else {
    *(AbstractState **)(param_4 + 0x10) = __dest + 0x210;
  }
  memcpy(__dest,this,0x210);
  *(AbstractField **)(__dest + uVar5 * 8) = pAVar1;
  if (uVar5 < 0x20) {
    lVar4 = uVar5 - 1;
    pAVar3 = *(AbstractField **)(this + lVar4 * 8 + 0x10);
    while( true ) {
      if (pAVar3 != (AbstractField *)0x0) {
        uVar2 = AbstractField::Kill(pAVar3,&local_58,param_3,param_4);
        *(undefined8 *)(__dest + lVar4 * 8 + 0x10) = uVar2;
      }
      lVar4 = lVar4 + 1;
      if (lVar4 == 0x1f) break;
      pAVar3 = *(AbstractField **)(this + lVar4 * 8 + 0x10);
    }
  }
  return __dest;
}

