
/* v8::internal::compiler::LoadElimination::AbstractState::KillConstField(v8::internal::compiler::Node*,
   v8::internal::compiler::LoadElimination::IndexRange, v8::internal::Zone*) const */

AbstractState * __thiscall
v8::internal::compiler::LoadElimination::AbstractState::KillConstField
          (AbstractState *this,Node *param_1,ulong param_3,Zone *param_4)

{
  long lVar1;
  AbstractField *this_00;
  long lVar2;
  int iVar3;
  AbstractState *__dest;
  
  iVar3 = (int)(param_3 >> 0x20);
  if ((int)param_3 == iVar3) {
    __dest = (AbstractState *)0x0;
  }
  else {
    __dest = (AbstractState *)0x0;
    lVar1 = (-(param_3 >> 0x1f & 1) & 0xfffffff800000000 | (param_3 & 0xffffffff) << 3) + 0x108;
    iVar3 = iVar3 - (int)param_3;
    this_00 = *(AbstractField **)(this + lVar1);
    while( true ) {
      if ((this_00 != (AbstractField *)0x0) &&
         (lVar2 = AbstractField::KillConst(this_00,param_1,param_4),
         *(long *)(this + lVar1) != lVar2)) {
        if (__dest == (AbstractState *)0x0) {
          __dest = *(AbstractState **)(param_4 + 0x10);
          if ((ulong)(*(long *)(param_4 + 0x18) - (long)__dest) < 0x210) {
            __dest = (AbstractState *)Zone::NewExpand(param_4,0x210);
          }
          else {
            *(AbstractState **)(param_4 + 0x10) = __dest + 0x210;
          }
          memcpy(__dest,this,0x210);
        }
        *(long *)(__dest + lVar1) = lVar2;
      }
      iVar3 = iVar3 + -1;
      lVar1 = lVar1 + 8;
      if (iVar3 == 0) break;
      this_00 = *(AbstractField **)(this + lVar1);
    }
  }
  if (__dest != (AbstractState *)0x0) {
    this = __dest;
  }
  return this;
}

