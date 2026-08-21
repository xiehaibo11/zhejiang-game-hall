
/* v8::internal::compiler::NodeProperties::FindProjection(v8::internal::compiler::Node*, unsigned
   long) */

undefined8 * v8::internal::compiler::NodeProperties::FindProjection(Node *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x18);
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    plVar2 = plVar3 + (ulong)(*(uint *)(plVar3 + 2) >> 1) * 3 + 3;
    if ((*(uint *)(plVar3 + 2) & 1) == 0) {
      plVar2 = (long *)*plVar2;
    }
    if ((*(short *)((Operator *)*plVar2 + 0x10) == 0x37) &&
       (uVar1 = ProjectionIndexOf((Operator *)*plVar2), uVar1 == param_2)) break;
    plVar3 = (long *)*plVar3;
  }
  return plVar2;
}

