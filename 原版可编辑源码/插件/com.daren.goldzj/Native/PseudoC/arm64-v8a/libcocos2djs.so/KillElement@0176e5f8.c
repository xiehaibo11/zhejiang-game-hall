
/* v8::internal::compiler::LoadElimination::AbstractState::KillElement(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::Zone*) const */

AbstractState * __thiscall
v8::internal::compiler::LoadElimination::AbstractState::KillElement
          (AbstractState *this,Node *param_1,Node *param_2,Zone *param_3)

{
  long lVar1;
  AbstractState *__dest;
  
  __dest = this;
  if ((*(AbstractElements **)this != (AbstractElements *)0x0) &&
     (lVar1 = AbstractElements::Kill(*(AbstractElements **)this,param_1,param_2,param_3),
     *(long *)this != lVar1)) {
    __dest = *(AbstractState **)(param_3 + 0x10);
    if ((ulong)(*(long *)(param_3 + 0x18) - (long)__dest) < 0x210) {
      __dest = (AbstractState *)Zone::NewExpand(param_3,0x210);
    }
    else {
      *(AbstractState **)(param_3 + 0x10) = __dest + 0x210;
    }
    memcpy(__dest,this,0x210);
    *(long *)__dest = lVar1;
  }
  return __dest;
}

