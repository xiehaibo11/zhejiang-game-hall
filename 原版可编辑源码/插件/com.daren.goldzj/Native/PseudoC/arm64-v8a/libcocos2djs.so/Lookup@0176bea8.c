
/* v8::internal::compiler::LoadElimination::AbstractElements::Lookup(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::MachineRepresentation) const */

undefined8 __thiscall
v8::internal::compiler::LoadElimination::AbstractElements::Lookup
          (AbstractElements *this,undefined8 param_1,undefined8 param_2,AbstractElements param_4)

{
  AbstractElements *pAVar1;
  AbstractElements AVar2;
  ulong uVar3;
  undefined8 uVar4;
  AbstractElements *pAVar5;
  
  pAVar5 = this + 0x10;
  do {
    if (*(long *)(pAVar5 + -0x10) != 0) {
      uVar4 = *(undefined8 *)(pAVar5 + -8);
      AVar2 = pAVar5[8];
      uVar3 = thunk_FUN_0176bf74(param_1);
      if ((((uVar3 & 1) != 0) && (uVar3 = thunk_FUN_0176bf74(param_2,uVar4), (uVar3 & 1) != 0)) &&
         ((AVar2 == param_4 || (((byte)((char)param_4 - 6U) < 3 && ((byte)((char)AVar2 - 6U) < 3))))
         )) {
        return *(undefined8 *)pAVar5;
      }
    }
    pAVar1 = pAVar5 + 0x10;
    pAVar5 = pAVar5 + 0x20;
    if (pAVar1 == this + 0x100) {
      return 0;
    }
  } while( true );
}

