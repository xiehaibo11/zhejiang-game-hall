
/* v8::internal::compiler::LoadElimination::AbstractState::KillMaps(v8::internal::compiler::Node*,
   v8::internal::Zone*) const */

AbstractState * __thiscall
v8::internal::compiler::LoadElimination::AbstractState::KillMaps
          (AbstractState *this,Node *param_1,Zone *param_2)

{
  long lVar1;
  AbstractState *__dest;
  AbstractState *local_48;
  Node *pNStack_40;
  undefined8 local_38;
  
  local_38 = 0;
  __dest = this;
  if ((*(AbstractMaps **)(this + 0x208) != (AbstractMaps *)0x0) &&
     (local_48 = this, pNStack_40 = param_1,
     lVar1 = AbstractMaps::Kill(*(AbstractMaps **)(this + 0x208),(AliasStateInfo *)&local_48,param_2
                               ), *(long *)(this + 0x208) != lVar1)) {
    __dest = *(AbstractState **)(param_2 + 0x10);
    if ((ulong)(*(long *)(param_2 + 0x18) - (long)__dest) < 0x210) {
      __dest = (AbstractState *)Zone::NewExpand(param_2,0x210);
    }
    else {
      *(AbstractState **)(param_2 + 0x10) = __dest + 0x210;
    }
    memcpy(__dest,this,0x208);
    *(long *)(__dest + 0x208) = lVar1;
  }
  return __dest;
}

