
/* v8::internal::compiler::LoadElimination::AbstractState::Equals(v8::internal::compiler::LoadElimination::AbstractState
   const*) const */

undefined8 __thiscall
v8::internal::compiler::LoadElimination::AbstractState::Equals
          (AbstractState *this,AbstractState *param_1)

{
  AbstractElements *this_00;
  AbstractState *pAVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  this_00 = *(AbstractElements **)param_1;
  if (*(AbstractElements **)this == (AbstractElements *)0x0) {
    pAVar1 = (AbstractState *)0x0;
    if (this_00 != (AbstractElements *)0x0) {
      return 0;
    }
  }
  else {
    if (this_00 == (AbstractElements *)0x0) {
      return 0;
    }
    pAVar1 = (AbstractState *)AbstractElements::Equals(this_00,*(AbstractElements **)this);
    if (((ulong)pAVar1 & 1) == 0) {
      return 0;
    }
  }
  pAVar1 = (AbstractState *)FieldsEquals(pAVar1,(array *)(this + 8),(array *)(param_1 + 8));
  if ((((ulong)pAVar1 & 1) != 0) &&
     (uVar2 = FieldsEquals(pAVar1,(array *)(this + 0x108),(array *)(param_1 + 0x108)),
     (uVar2 & 1) != 0)) {
    puVar4 = *(undefined8 **)(this + 0x208);
    puVar3 = *(undefined8 **)(param_1 + 0x208);
    if (puVar4 == (undefined8 *)0x0) {
      if (puVar3 == (undefined8 *)0x0) {
        return 1;
      }
    }
    else if ((puVar3 != (undefined8 *)0x0) &&
            ((puVar3 == puVar4 ||
             ((puVar3[3] == puVar4[3] &&
              (uVar2 = FUN_01770340(*puVar3,puVar3 + 1,*puVar4), (uVar2 & 1) != 0)))))) {
      return 1;
    }
  }
  return 0;
}

