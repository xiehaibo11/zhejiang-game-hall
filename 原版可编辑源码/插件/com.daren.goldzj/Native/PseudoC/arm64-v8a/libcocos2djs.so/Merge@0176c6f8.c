
/* v8::internal::compiler::LoadElimination::AbstractElements::Merge(v8::internal::compiler::LoadElimination::AbstractElements
   const*, v8::internal::Zone*) const */

AbstractElements * __thiscall
v8::internal::compiler::LoadElimination::AbstractElements::Merge
          (AbstractElements *this,AbstractElements *param_1,Zone *param_2)

{
  AbstractElements *pAVar1;
  AbstractElements *pAVar2;
  long lVar3;
  long lVar4;
  AbstractElements AVar5;
  ulong uVar6;
  AbstractElements *pAVar7;
  long lVar8;
  
  uVar6 = Equals(this,param_1);
  pAVar7 = this;
  if ((uVar6 & 1) == 0) {
    pAVar7 = *(AbstractElements **)(param_2 + 0x10);
    if ((ulong)(*(long *)(param_2 + 0x18) - (long)pAVar7) < 0x108) {
      pAVar7 = (AbstractElements *)Zone::NewExpand(param_2,0x108);
    }
    else {
      *(AbstractElements **)(param_2 + 0x10) = pAVar7 + 0x108;
    }
    pAVar1 = this + 0x100;
    *(undefined8 *)(pAVar7 + 0x100) = 0;
    *(undefined8 *)(pAVar7 + 8) = 0;
    *(undefined8 *)(pAVar7 + 0x10) = 0;
    *(undefined8 *)pAVar7 = 0;
    pAVar7[0x18] = (AbstractElements)0x0;
    *(undefined8 *)(pAVar7 + 0x28) = 0;
    *(undefined8 *)(pAVar7 + 0x30) = 0;
    *(undefined8 *)(pAVar7 + 0x20) = 0;
    pAVar7[0x38] = (AbstractElements)0x0;
    *(undefined8 *)(pAVar7 + 0x48) = 0;
    *(undefined8 *)(pAVar7 + 0x50) = 0;
    *(undefined8 *)(pAVar7 + 0x40) = 0;
    pAVar7[0x58] = (AbstractElements)0x0;
    *(undefined8 *)(pAVar7 + 0x68) = 0;
    *(undefined8 *)(pAVar7 + 0x70) = 0;
    *(undefined8 *)(pAVar7 + 0x60) = 0;
    pAVar7[0x78] = (AbstractElements)0x0;
    *(undefined8 *)(pAVar7 + 0x80) = 0;
    *(undefined8 *)(pAVar7 + 0x88) = 0;
    pAVar7[0x98] = (AbstractElements)0x0;
    *(undefined8 *)(pAVar7 + 0x90) = 0;
    *(undefined8 *)(pAVar7 + 0xa0) = 0;
    *(undefined8 *)(pAVar7 + 0xa8) = 0;
    pAVar7[0xb8] = (AbstractElements)0x0;
    *(undefined8 *)(pAVar7 + 0xb0) = 0;
    *(undefined8 *)(pAVar7 + 200) = 0;
    *(undefined8 *)(pAVar7 + 0xd0) = 0;
    *(undefined8 *)(pAVar7 + 0xc0) = 0;
    pAVar7[0xd8] = (AbstractElements)0x0;
    *(undefined8 *)(pAVar7 + 0xe8) = 0;
    *(undefined8 *)(pAVar7 + 0xf0) = 0;
    *(undefined8 *)(pAVar7 + 0xe0) = 0;
    pAVar7[0xf8] = (AbstractElements)0x0;
    lVar8 = *(long *)this;
    while( true ) {
      if (lVar8 != 0) {
        lVar3 = *(long *)(this + 8);
        lVar4 = *(long *)(this + 0x10);
        AVar5 = this[0x18];
        if (((((((lVar8 == *(long *)param_1) && (lVar4 == *(long *)(param_1 + 0x10))) &&
               (lVar3 == *(long *)(param_1 + 8))) ||
              (((lVar8 == *(long *)(param_1 + 0x20) && (lVar4 == *(long *)(param_1 + 0x30))) &&
               (lVar3 == *(long *)(param_1 + 0x28))))) ||
             ((((lVar8 == *(long *)(param_1 + 0x40) && (lVar4 == *(long *)(param_1 + 0x50))) &&
               (lVar3 == *(long *)(param_1 + 0x48))) ||
              (((lVar8 == *(long *)(param_1 + 0x60) && (lVar4 == *(long *)(param_1 + 0x70))) &&
               (lVar3 == *(long *)(param_1 + 0x68))))))) ||
            (((lVar8 == *(long *)(param_1 + 0x80) && (lVar4 == *(long *)(param_1 + 0x90))) &&
             (lVar3 == *(long *)(param_1 + 0x88))))) ||
           (((((lVar8 == *(long *)(param_1 + 0xa0) && (lVar4 == *(long *)(param_1 + 0xb0))) &&
              (lVar3 == *(long *)(param_1 + 0xa8))) ||
             (((lVar8 == *(long *)(param_1 + 0xc0) && (lVar4 == *(long *)(param_1 + 0xd0))) &&
              (lVar3 == *(long *)(param_1 + 200))))) ||
            (((lVar8 == *(long *)(param_1 + 0xe0) && (lVar4 == *(long *)(param_1 + 0xf0))) &&
             (lVar3 == *(long *)(param_1 + 0xe8))))))) {
          pAVar2 = pAVar7 + *(long *)(pAVar7 + 0x100) * 0x20;
          *(long *)(pAVar7 + 0x100) = *(long *)(pAVar7 + 0x100) + 1;
          *(long *)pAVar2 = lVar8;
          *(long *)(pAVar2 + 8) = lVar3;
          *(long *)(pAVar2 + 0x10) = lVar4;
          pAVar2[0x18] = AVar5;
        }
      }
      this = this + 0x20;
      if (this == pAVar1) break;
      lVar8 = *(long *)this;
    }
    *(ulong *)(pAVar7 + 0x100) = *(ulong *)(pAVar7 + 0x100) & 7;
  }
  return pAVar7;
}

