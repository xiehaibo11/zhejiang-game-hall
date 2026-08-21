
/* v8::internal::compiler::NodeProperties::CollectValueProjections(v8::internal::compiler::Node*,
   v8::internal::compiler::Node**, unsigned long) */

void v8::internal::compiler::NodeProperties::CollectValueProjections
               (Node *param_1,Node **param_2,ulong param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  Node *pNVar4;
  long *plVar5;
  Node *pNVar6;
  
  plVar2 = (long *)*(long *)(param_1 + 0x18);
  while (plVar2 != (long *)0x0) {
    uVar1 = *(uint *)(plVar2 + 2);
    plVar5 = (long *)*plVar2;
    pNVar6 = (Node *)(plVar2 + (ulong)(uVar1 >> 1) * 3 + 3);
    pNVar4 = pNVar6;
    if ((uVar1 & 1) == 0) {
      pNVar4 = *(Node **)pNVar6;
    }
    plVar2 = plVar5;
    if ((int)(uVar1 >> 1) < *(int *)(*(long *)pNVar4 + 0x14)) {
      if ((uVar1 & 1) == 0) {
        pNVar6 = *(Node **)pNVar6;
      }
      lVar3 = ProjectionIndexOf(*(Operator **)pNVar6);
      param_2[lVar3] = pNVar6;
    }
  }
  return;
}

