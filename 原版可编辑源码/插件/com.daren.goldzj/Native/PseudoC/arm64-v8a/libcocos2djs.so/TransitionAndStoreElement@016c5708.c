
/* v8::internal::compiler::GraphAssembler::TransitionAndStoreElement(v8::internal::compiler::MapRef,
   v8::internal::compiler::MapRef, v8::internal::TNode<v8::internal::HeapObject>,
   v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi, v8::internal::HeapNumber> >,
   v8::internal::TNode<v8::internal::Object>) */

void v8::internal::compiler::GraphAssembler::TransitionAndStoreElement
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,Node *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  Node *pNVar5;
  long lVar6;
  BasicBlockUpdater *this;
  Graph *this_00;
  BasicBlock *pBVar7;
  SimplifiedOperatorBuilder *pSVar8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  Node *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  this_00 = (Graph *)**(undefined8 **)(param_1 + 0x18);
  pSVar8 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x18))[0x2f];
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = param_2;
  uStack_80 = param_3;
  uVar2 = MapRef::object((MapRef *)&local_88);
  uVar3 = MapRef::object((MapRef *)&local_98);
  pOVar4 = (Operator *)SimplifiedOperatorBuilder::TransitionAndStoreElement(pSVar8,uVar2,uVar3);
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  local_58 = *(undefined8 *)(param_1 + 0x28);
  local_78 = param_6;
  uStack_70 = param_7;
  local_68 = param_8;
  pNVar5 = (Node *)Graph::NewNode(this_00,pOVar4,5,&local_78,false);
  this = *(BasicBlockUpdater **)(param_1 + 0x30);
  if (this != (BasicBlockUpdater *)0x0) {
    pBVar7 = *(BasicBlock **)(this + 8);
    if (*(int *)(this + 0x98) == 0) {
      puVar1 = *(undefined8 **)(this + 0x18);
      if ((puVar1 != *(undefined8 **)(this + 0x20)) && ((Node *)*puVar1 == pNVar5)) {
        *(undefined8 **)(this + 0x18) = puVar1 + 1;
        goto LAB_016c57dc;
      }
      BasicBlockUpdater::CopyForChange(this);
    }
    Schedule::AddNode(*(Schedule **)(this + 0x28),pBVar7,pNVar5);
  }
LAB_016c57dc:
  lVar6 = *(long *)pNVar5;
  if (*(short *)(lVar6 + 0x10) != 0x12) {
    if (*(char *)(lVar6 + 0x24) != '\0') {
      *(Node **)(param_1 + 0x20) = pNVar5;
      lVar6 = *(long *)pNVar5;
    }
    if (0 < *(int *)(lVar6 + 0x28)) {
      *(Node **)(param_1 + 0x28) = pNVar5;
    }
  }
  return;
}

