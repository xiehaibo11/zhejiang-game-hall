
void FUN_0132b39c(long param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  Operator *pOVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  CallDescriptor *pCVar5;
  Graph *pGVar6;
  undefined **local_90;
  undefined8 uStack_88;
  Node *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  pGVar6 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar1 = (Operator *)
           v8::internal::compiler::CommonOperatorBuilder::NumberConstant
                     ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[1],372.0);
  local_80 = (Node *)0x0;
  pNVar2 = (Node *)v8::internal::compiler::Graph::NewNode(pGVar6,pOVar1,0,&local_80,false);
  uStack_88 = 0x1d2d368;
  local_90 = &PTR__CallInterfaceDescriptor_01cc3bb8;
  pNVar3 = (Node *)v8::internal::compiler::MachineGraph::Int32Constant
                             (*(MachineGraph **)(param_1 + 8),*param_2);
  pGVar6 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar1 = (Operator *)
           v8::internal::compiler::MachineOperatorBuilder::Word32Shl
                     ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2]);
  uStack_78 = v8::internal::compiler::MachineGraph::Int32Constant(*(MachineGraph **)(param_1 + 8),1)
  ;
  local_80 = pNVar3;
  uVar4 = v8::internal::compiler::Graph::NewNode(pGVar6,pOVar1,2,&local_80,false);
  pCVar5 = (CallDescriptor *)
           v8::internal::compiler::Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(param_1 + 8),&local_90,
                      v8::internal::CallDescriptors::call_descriptor_data_._4408_4_ -
                      v8::internal::CallDescriptors::call_descriptor_data_._4400_4_,0,0,2);
  pGVar6 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar1 = (Operator *)
           v8::internal::compiler::CommonOperatorBuilder::Call
                     ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[1],pCVar5);
  local_60 = **(undefined8 **)(param_1 + 0x20);
  uStack_58 = **(undefined8 **)(param_1 + 0x18);
  local_80 = pNVar2;
  uStack_78 = param_3;
  local_70 = uVar4;
  uStack_68 = param_4;
  uVar4 = v8::internal::compiler::Graph::NewNode(pGVar6,pOVar1,6,&local_80,false);
  **(undefined8 **)(param_1 + 0x20) = uVar4;
  return;
}

