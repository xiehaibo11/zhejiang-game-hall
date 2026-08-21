
/* v8::internal::compiler::SimdScalarLowering::SimdScalarLowering(v8::internal::compiler::MachineGraph*,
   v8::internal::Signature<v8::internal::MachineRepresentation>*) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::SimdScalarLowering
          (SimdScalarLowering *this,MachineGraph *param_1,Signature *param_2)

{
  Graph *this_00;
  Operator *pOVar1;
  void *__s;
  ulong uVar2;
  undefined8 *puVar3;
  Zone *this_01;
  undefined8 uVar4;
  Node *local_28;
  
  *(MachineGraph **)this = param_1;
  NodeMarkerBase::NodeMarkerBase((NodeMarkerBase *)(this + 8),*(Graph **)param_1,3);
  puVar3 = *(undefined8 **)this;
  uVar4 = *(undefined8 *)*puVar3;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(Signature **)(this + 0x68) = param_2;
  *(undefined8 *)(this + 0x30) = uVar4;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = uVar4;
  *(undefined8 *)(this + 0x58) = 0;
  this_00 = (Graph *)*puVar3;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Parameter((CommonOperatorBuilder *)puVar3[1],-2,"placeholder");
  local_28 = *(Node **)(**(long **)this + 8);
  uVar4 = Graph::NewNode(this_00,pOVar1,1,&local_28,false);
  *(undefined8 *)(this + 0x70) = uVar4;
  *(undefined4 *)(this + 0x78) = 0xffffffff;
  this_01 = *(Zone **)**(undefined8 **)this;
  __s = *(void **)(this_01 + 0x10);
  uVar2 = (ulong)*(uint *)((long)**(undefined8 **)this + 0x1c) * 0x10;
  if (uVar2 < (ulong)(*(long *)(this_01 + 0x18) - (long)__s) ||
      uVar2 - (*(long *)(this_01 + 0x18) - (long)__s) == 0) {
    *(void **)(this_01 + 0x10) = (void *)(uVar2 + (long)__s);
  }
  else {
    __s = (void *)Zone::NewExpand(this_01,uVar2);
  }
  *(void **)(this + 0x60) = __s;
  memset(__s,0,(ulong)*(uint *)(**(long **)this + 0x1c) << 4);
  return;
}

