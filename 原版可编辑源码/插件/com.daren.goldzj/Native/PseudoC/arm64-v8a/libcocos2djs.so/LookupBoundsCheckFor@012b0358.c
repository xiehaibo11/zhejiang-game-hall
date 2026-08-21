
/* v8::internal::compiler::RedundancyElimination::EffectPathChecks::LookupBoundsCheckFor(v8::internal::compiler::Node*)
   const */

long __thiscall
v8::internal::compiler::RedundancyElimination::EffectPathChecks::LookupBoundsCheckFor
          (EffectPathChecks *this,Node *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long local_28;
  
  plVar4 = *(long **)this;
  do {
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    plVar2 = (long *)*plVar4;
    if (*(short *)(*plVar2 + 0x10) == 0xd4) {
      plVar3 = plVar2 + 4;
      if ((~*(uint *)((long)plVar2 + 0x14) & 0xf000000) == 0) {
        plVar3 = (long *)(*plVar3 + 0x10);
      }
      if (((Node *)*plVar3 == param_1) &&
         ((((*(long *)(param_1 + 8) == 0 || (local_28 = plVar2[1], local_28 == 0)) ||
           (local_28 == *(long *)(param_1 + 8))) ||
          (uVar1 = Type::SlowIs((Type *)&local_28), (uVar1 & 1) != 0)))) {
        return *plVar4;
      }
    }
    plVar4 = (long *)plVar4[1];
  } while( true );
}

