
/* v8::internal::compiler::LoadElimination::AbstractElements::Equals(v8::internal::compiler::LoadElimination::AbstractElements
   const*) const */

undefined4 __thiscall
v8::internal::compiler::LoadElimination::AbstractElements::Equals
          (AbstractElements *this,AbstractElements *param_1)

{
  AbstractElements *pAVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (this != param_1) {
    lVar5 = 0;
    do {
      pAVar1 = this + lVar5;
      lVar4 = *(long *)pAVar1;
      if (lVar4 != 0) {
        lVar2 = *(long *)(pAVar1 + 8);
        lVar3 = *(long *)(pAVar1 + 0x10);
        if ((((((((lVar4 != *(long *)param_1) || (lVar3 != *(long *)(param_1 + 0x10))) ||
                (lVar2 != *(long *)(param_1 + 8))) &&
               (((lVar4 != *(long *)(param_1 + 0x20) || (lVar3 != *(long *)(param_1 + 0x30))) ||
                (lVar2 != *(long *)(param_1 + 0x28))))) &&
              (((lVar4 != *(long *)(param_1 + 0x40) || (lVar3 != *(long *)(param_1 + 0x50))) ||
               (lVar2 != *(long *)(param_1 + 0x48))))) &&
             (((lVar4 != *(long *)(param_1 + 0x60) || (lVar3 != *(long *)(param_1 + 0x70))) ||
              (lVar2 != *(long *)(param_1 + 0x68))))) &&
            (((lVar4 != *(long *)(param_1 + 0x80) || (lVar3 != *(long *)(param_1 + 0x90))) ||
             (lVar2 != *(long *)(param_1 + 0x88))))) &&
           ((((lVar4 != *(long *)(param_1 + 0xa0) || (lVar3 != *(long *)(param_1 + 0xb0))) ||
             (lVar2 != *(long *)(param_1 + 0xa8))) &&
            (((lVar4 != *(long *)(param_1 + 0xc0) || (lVar3 != *(long *)(param_1 + 0xd0))) ||
             (lVar2 != *(long *)(param_1 + 200))))))) {
          if (lVar4 != *(long *)(param_1 + 0xe0)) {
            return 0;
          }
          if (lVar3 != *(long *)(param_1 + 0xf0)) {
            return 0;
          }
          if (lVar2 != *(long *)(param_1 + 0xe8)) {
            return 0;
          }
        }
      }
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != 0x100);
    lVar5 = 0;
    do {
      pAVar1 = param_1 + lVar5;
      lVar4 = *(long *)pAVar1;
      if (lVar4 != 0) {
        lVar2 = *(long *)(pAVar1 + 8);
        lVar3 = *(long *)(pAVar1 + 0x10);
        if ((((((lVar4 != *(long *)this) || (lVar3 != *(long *)(this + 0x10))) ||
              (lVar2 != *(long *)(this + 8))) &&
             ((((lVar4 != *(long *)(this + 0x20) || (lVar3 != *(long *)(this + 0x30))) ||
               (lVar2 != *(long *)(this + 0x28))) &&
              ((((lVar4 != *(long *)(this + 0x40) || (lVar3 != *(long *)(this + 0x50))) ||
                (lVar2 != *(long *)(this + 0x48))) &&
               (((lVar4 != *(long *)(this + 0x60) || (lVar3 != *(long *)(this + 0x70))) ||
                (lVar2 != *(long *)(this + 0x68))))))))) &&
            (((lVar4 != *(long *)(this + 0x80) || (lVar3 != *(long *)(this + 0x90))) ||
             (lVar2 != *(long *)(this + 0x88))))) &&
           ((((lVar4 != *(long *)(this + 0xa0) || (lVar3 != *(long *)(this + 0xb0))) ||
             (lVar2 != *(long *)(this + 0xa8))) &&
            (((lVar4 != *(long *)(this + 0xc0) || (lVar3 != *(long *)(this + 0xd0))) ||
             (lVar2 != *(long *)(this + 200))))))) {
          if (lVar4 != *(long *)(this + 0xe0)) {
            return 0;
          }
          if (lVar3 != *(long *)(this + 0xf0)) {
            return 0;
          }
          if (lVar2 != *(long *)(this + 0xe8)) {
            return 0;
          }
        }
      }
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != 0x100);
  }
  return 1;
}

