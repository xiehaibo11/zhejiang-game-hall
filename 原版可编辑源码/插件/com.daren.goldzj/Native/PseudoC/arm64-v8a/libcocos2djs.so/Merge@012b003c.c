
/* v8::internal::compiler::RedundancyElimination::EffectPathChecks::Merge(v8::internal::compiler::RedundancyElimination::EffectPathChecks
   const*) */

void __thiscall
v8::internal::compiler::RedundancyElimination::EffectPathChecks::Merge
          (EffectPathChecks *this,EffectPathChecks *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = *(long *)param_1;
  uVar2 = *(ulong *)(this + 8);
  for (uVar4 = *(ulong *)(param_1 + 8); uVar2 < uVar4; uVar4 = uVar4 - 1) {
    lVar1 = *(long *)(lVar1 + 8);
  }
  if (uVar4 < uVar2) {
    lVar3 = *(long *)this;
    do {
      lVar3 = *(long *)(lVar3 + 8);
      uVar2 = uVar2 - 1;
      *(long *)this = lVar3;
      *(ulong *)(this + 8) = uVar2;
    } while (uVar4 < uVar2);
  }
  else {
    lVar3 = *(long *)this;
  }
  if (lVar3 != lVar1) {
    do {
      uVar2 = uVar2 - 1;
      *(ulong *)(this + 8) = uVar2;
      lVar3 = *(long *)(lVar3 + 8);
      *(long *)this = lVar3;
      lVar1 = *(long *)(lVar1 + 8);
    } while (lVar1 != lVar3);
  }
  return;
}

