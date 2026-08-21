
/* v8::internal::compiler::BytecodeGraphBuilder::Environment::UpdateStateValues(v8::internal::compiler::Node**,
   v8::internal::compiler::Node**, int) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::Environment::UpdateStateValues
          (Environment *this,Node **param_1,Node **param_2,int param_3)

{
  Operator *pOVar1;
  Node *pNVar2;
  Node *pNVar3;
  uint uVar4;
  ulong uVar5;
  Node **ppNVar6;
  
  pNVar2 = *param_1;
  if (pNVar2 != (Node *)0x0) {
    pNVar3 = pNVar2 + 0x20;
    uVar4 = (byte)pNVar2[0x17] & 0xf;
    if (uVar4 == 0xf) {
      uVar4 = *(uint *)(*(long *)pNVar3 + 8);
      pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
    }
    if (uVar4 == param_3) {
      uVar5 = (ulong)(uint)param_3;
      ppNVar6 = param_2;
      if (param_3 < 1) {
        return;
      }
      while (*(Node **)pNVar3 == *ppNVar6) {
        uVar5 = uVar5 - 1;
        pNVar3 = pNVar3 + 8;
        ppNVar6 = ppNVar6 + 1;
        if (uVar5 == 0) {
          return;
        }
      }
    }
  }
  pOVar1 = (Operator *)
           CommonOperatorBuilder::StateValues
                     (*(CommonOperatorBuilder **)(*(long *)(*(long *)this + 0x10) + 8),
                      (ulong)(uint)param_3,0);
  pNVar2 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(*(long *)this + 0x10),pOVar1,param_3,
                                  param_2,false);
  *param_1 = pNVar2;
  return;
}

