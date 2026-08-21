
/* v8::internal::compiler::LoadElimination::AbstractState::KillField(v8::internal::compiler::Node*,
   v8::internal::compiler::LoadElimination::IndexRange,
   v8::internal::MaybeHandle<v8::internal::Name>, v8::internal::Zone*) const */

AbstractState * __thiscall
v8::internal::compiler::LoadElimination::AbstractState::KillField
          (AbstractState *this,undefined8 param_1,ulong param_3,undefined8 param_4,Zone *param_5)

{
  long lVar1;
  AbstractField *pAVar2;
  long lVar3;
  int iVar4;
  AbstractState *__dest;
  AbstractState *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  __dest = (AbstractState *)0x0;
  iVar4 = (int)(param_3 >> 0x20);
  local_58 = 0;
  if ((int)param_3 != iVar4) {
    iVar4 = iVar4 - (int)param_3;
    __dest = (AbstractState *)0x0;
    lVar1 = (-(param_3 >> 0x1f & 1) & 0xfffffff800000000 | (param_3 & 0xffffffff) << 3) + 8;
    pAVar2 = *(AbstractField **)(this + lVar1);
    local_68 = this;
    uStack_60 = param_1;
    while( true ) {
      if ((pAVar2 != (AbstractField *)0x0) &&
         (lVar3 = AbstractField::Kill(pAVar2,&local_68,param_4,param_5),
         *(long *)(this + lVar1) != lVar3)) {
        if (__dest == (AbstractState *)0x0) {
          __dest = *(AbstractState **)(param_5 + 0x10);
          if ((ulong)(*(long *)(param_5 + 0x18) - (long)__dest) < 0x210) {
            __dest = (AbstractState *)Zone::NewExpand(param_5,0x210);
          }
          else {
            *(AbstractState **)(param_5 + 0x10) = __dest + 0x210;
          }
          memcpy(__dest,this,0x210);
        }
        *(long *)(__dest + lVar1) = lVar3;
      }
      iVar4 = iVar4 + -1;
      lVar1 = lVar1 + 8;
      if (iVar4 == 0) break;
      pAVar2 = *(AbstractField **)(this + lVar1);
    }
  }
  if (__dest != (AbstractState *)0x0) {
    this = __dest;
  }
  return this;
}

