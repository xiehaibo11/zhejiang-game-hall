
/* v8::internal::compiler::SimdScalarLowering::Int32ToFloat32(v8::internal::compiler::Node**,
   v8::internal::compiler::Node**) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::Int32ToFloat32
          (SimdScalarLowering *this,Node **param_1,Node **param_2)

{
  Operator *pOVar1;
  Node *pNVar2;
  Graph *pGVar3;
  Node *local_38;
  
  if (*param_1 == (Node *)0x0) {
    pNVar2 = (Node *)0x0;
  }
  else {
    pGVar3 = (Graph *)**(undefined8 **)this;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::BitcastInt32ToFloat32
                       ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_38 = *param_1;
    pNVar2 = (Node *)Graph::NewNode(pGVar3,pOVar1,1,&local_38,false);
  }
  *param_2 = pNVar2;
  if (param_1[1] == (Node *)0x0) {
    pNVar2 = (Node *)0x0;
  }
  else {
    pGVar3 = (Graph *)**(undefined8 **)this;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::BitcastInt32ToFloat32
                       ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_38 = param_1[1];
    pNVar2 = (Node *)Graph::NewNode(pGVar3,pOVar1,1,&local_38,false);
  }
  param_2[1] = pNVar2;
  if (param_1[2] == (Node *)0x0) {
    pNVar2 = (Node *)0x0;
  }
  else {
    pGVar3 = (Graph *)**(undefined8 **)this;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::BitcastInt32ToFloat32
                       ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_38 = param_1[2];
    pNVar2 = (Node *)Graph::NewNode(pGVar3,pOVar1,1,&local_38,false);
  }
  param_2[2] = pNVar2;
  if (param_1[3] == (Node *)0x0) {
    pNVar2 = (Node *)0x0;
  }
  else {
    pGVar3 = (Graph *)**(undefined8 **)this;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::BitcastInt32ToFloat32
                       ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_38 = param_1[3];
    pNVar2 = (Node *)Graph::NewNode(pGVar3,pOVar1,1,&local_38,false);
  }
  param_2[3] = pNVar2;
  return;
}

