
/* v8::internal::compiler::LoadElimination::AbstractState::Merge(v8::internal::compiler::LoadElimination::AbstractState
   const*, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::LoadElimination::AbstractState::Merge
          (AbstractState *this,AbstractState *param_1,Zone *param_2)

{
  AbstractState *pAVar1;
  undefined8 uVar2;
  AbstractField *pAVar3;
  long lVar4;
  
  if (*(AbstractElements **)this != (AbstractElements *)0x0) {
    uVar2 = 0;
    if (*(AbstractElements **)param_1 != (AbstractElements *)0x0) {
      uVar2 = AbstractElements::Merge
                        (*(AbstractElements **)param_1,*(AbstractElements **)this,param_2);
    }
    *(undefined8 *)this = uVar2;
  }
  lVar4 = 0;
  pAVar1 = this + 8;
  pAVar3 = *(AbstractField **)pAVar1;
  while( true ) {
    if (pAVar3 != (AbstractField *)0x0) {
      if (*(AbstractField **)(param_1 + lVar4 + 8) == (AbstractField *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = AbstractField::Merge(pAVar3,*(AbstractField **)(param_1 + lVar4 + 8),param_2);
      }
      *(undefined8 *)(pAVar1 + lVar4) = uVar2;
    }
    lVar4 = lVar4 + 8;
    if (lVar4 == 0x100) break;
    pAVar3 = *(AbstractField **)(pAVar1 + lVar4);
  }
  lVar4 = 0;
  pAVar1 = this + 0x108;
  pAVar3 = *(AbstractField **)pAVar1;
  while( true ) {
    if (pAVar3 != (AbstractField *)0x0) {
      if (*(AbstractField **)(param_1 + lVar4 + 0x108) == (AbstractField *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = AbstractField::Merge(pAVar3,*(AbstractField **)(param_1 + lVar4 + 0x108),param_2);
      }
      *(undefined8 *)(pAVar1 + lVar4) = uVar2;
    }
    lVar4 = lVar4 + 8;
    if (lVar4 == 0x100) break;
    pAVar3 = *(AbstractField **)(pAVar1 + lVar4);
  }
  if (*(AbstractMaps **)(this + 0x208) != (AbstractMaps *)0x0) {
    uVar2 = 0;
    if (*(AbstractMaps **)(param_1 + 0x208) != (AbstractMaps *)0x0) {
      uVar2 = AbstractMaps::Merge(*(AbstractMaps **)(param_1 + 0x208),
                                  *(AbstractMaps **)(this + 0x208),param_2);
    }
    *(undefined8 *)(this + 0x208) = uVar2;
  }
  return;
}

