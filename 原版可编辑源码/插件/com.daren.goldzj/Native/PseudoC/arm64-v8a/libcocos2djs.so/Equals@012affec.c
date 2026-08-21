
/* v8::internal::compiler::RedundancyElimination::EffectPathChecks::Equals(v8::internal::compiler::RedundancyElimination::EffectPathChecks
   const*) const */

undefined8 __thiscall
v8::internal::compiler::RedundancyElimination::EffectPathChecks::Equals
          (EffectPathChecks *this,EffectPathChecks *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
    return 0;
  }
  plVar1 = *(long **)param_1;
  plVar2 = *(long **)this;
  if (plVar2 != plVar1) {
    do {
      if (*plVar2 != *plVar1) {
        return 0;
      }
      plVar1 = (long *)plVar1[1];
      plVar2 = (long *)plVar2[1];
    } while (plVar2 != plVar1);
  }
  return 1;
}

