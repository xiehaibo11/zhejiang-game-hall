
/* v8::internal::compiler::JSCallReducerAssembler::ReduceStringPrototypeSubstring() */

void __thiscall
v8::internal::compiler::JSCallReducerAssembler::ReduceStringPrototypeSubstring
          (JSCallReducerAssembler *this)

{
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  long lVar5;
  Operator *pOVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  Graph *pGVar11;
  SimplifiedOperatorBuilder *pSVar12;
  undefined8 local_180;
  undefined8 local_178;
  undefined **local_170;
  JSCallReducerAssembler *local_168;
  undefined8 *puStack_160;
  undefined ***local_150;
  undefined **local_140;
  undefined1 *puStack_138;
  undefined ***local_120;
  Node *local_110;
  undefined8 uStack_108;
  ulong local_100;
  long alStack_f0 [4];
  long *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  undefined **local_90;
  JSCallReducerAssembler *local_88;
  undefined8 *puStack_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pNVar2 = (Node *)NodeProperties::GetValueInput(*(Node **)(this + 0x38),1);
  pNVar3 = (Node *)NodeProperties::GetValueInput(*(Node **)(this + 0x38),2);
  if (*(int *)(*(long *)*(Node **)(this + 0x38) + 0x14) < 4) {
    uVar4 = GraphAssembler::UndefinedConstant((GraphAssembler *)this);
  }
  else {
    uVar4 = NodeProperties::GetValueInput(*(Node **)(this + 0x38),3);
  }
  pGVar11 = (Graph *)**(undefined8 **)(this + 0x18);
  pSVar12 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f];
  local_178 = uVar4;
  lVar5 = CallParametersOf((Operator *)**(undefined8 **)(this + 0x38));
  pOVar6 = (Operator *)SimplifiedOperatorBuilder::CheckString(pSVar12,(FeedbackSource *)(lVar5 + 8))
  ;
  uStack_108 = *(undefined8 *)(this + 0x20);
  local_100 = *(ulong *)(this + 0x28);
  local_110 = pNVar2;
  pNVar2 = (Node *)Graph::NewNode(pGVar11,pOVar6,3,&local_110,false);
  uVar7 = GraphAssembler::AddNode((GraphAssembler *)this,pNVar2);
  pGVar11 = (Graph *)**(undefined8 **)(this + 0x18);
  pSVar12 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f];
  lVar5 = CallParametersOf((Operator *)**(undefined8 **)(this + 0x38));
  pOVar6 = (Operator *)SimplifiedOperatorBuilder::CheckSmi(pSVar12,(FeedbackSource *)(lVar5 + 8));
  uStack_108 = *(undefined8 *)(this + 0x20);
  local_100 = *(ulong *)(this + 0x28);
  local_110 = pNVar3;
  pNVar2 = (Node *)Graph::NewNode(pGVar11,pOVar6,3,&local_110,false);
  uVar8 = GraphAssembler::AddNode((GraphAssembler *)this,pNVar2);
  local_180 = GraphAssembler::StringLength((GraphAssembler *)this,uVar7);
  uStack_108 = GraphAssembler::IsUndefined((GraphAssembler *)this,uVar4);
  local_120 = &local_140;
  local_100 = local_100 & 0xffffffffffffff00;
  local_a0 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_140 = &PTR_FUN_01ccd498;
  local_90 = &PTR_FUN_01ccd498;
  puStack_138 = (undefined1 *)&local_180;
  local_110 = (Node *)this;
  local_88 = (JSCallReducerAssembler *)&local_180;
  local_70 = &local_90;
  FUN_016f7608(&local_90,alStack_f0);
  if (&local_90 == local_70) {
    pcVar10 = (code *)(*local_70)[4];
LAB_016d7840:
    (*pcVar10)();
  }
  else if (local_70 != (undefined ***)0x0) {
    pcVar10 = (code *)(*local_70)[5];
    goto LAB_016d7840;
  }
  puStack_160 = &local_178;
  local_170 = &PTR_FUN_01ccd4e0;
  local_150 = &local_170;
  local_90 = &PTR_FUN_01ccd4e0;
  local_168 = this;
  local_88 = this;
  puStack_80 = puStack_160;
  local_70 = &local_90;
  FUN_016f7608(&local_90,alStack_c0);
  if (&local_90 == local_70) {
    pcVar10 = (code *)(*local_70)[4];
LAB_016d78a8:
    (*pcVar10)();
  }
  else if (local_70 != (undefined ***)0x0) {
    pcVar10 = (code *)(*local_70)[5];
    goto LAB_016d78a8;
  }
  local_100 = CONCAT71(local_100._1_7_,2);
  uVar4 = IfBuilder1<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>::Value
                    ((IfBuilder1<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>> *
                     )&local_110);
  if (&local_170 == local_150) {
    pcVar10 = (code *)(*local_150)[4];
LAB_016d78e8:
    (*pcVar10)(local_150);
  }
  else if (local_150 != (undefined ***)0x0) {
    pcVar10 = (code *)(*local_150)[5];
    goto LAB_016d78e8;
  }
  if (&local_140 == local_120) {
    pcVar10 = (code *)(*local_120)[4];
LAB_016d7918:
    (*pcVar10)();
  }
  else if (local_120 != (undefined ***)0x0) {
    pcVar10 = (code *)(*local_120)[5];
    goto LAB_016d7918;
  }
  if (alStack_c0 == local_a0) {
    pcVar10 = *(code **)(*local_a0 + 0x20);
LAB_016d7948:
    (*pcVar10)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar10 = *(code **)(*local_a0 + 0x28);
    goto LAB_016d7948;
  }
  if (alStack_f0 == local_d0) {
    pcVar10 = *(code **)(*local_d0 + 0x20);
  }
  else {
    if (local_d0 == (long *)0x0) goto LAB_016d797c;
    pcVar10 = *(code **)(*local_d0 + 0x28);
  }
  (*pcVar10)();
LAB_016d797c:
  uVar9 = GraphAssembler::ZeroConstant((GraphAssembler *)this);
  uVar8 = GraphAssembler::NumberMax((GraphAssembler *)this,uVar8,uVar9);
  uVar8 = GraphAssembler::NumberMin((GraphAssembler *)this,uVar8,local_180);
  uVar4 = GraphAssembler::NumberMax((GraphAssembler *)this,uVar4,uVar9);
  uVar4 = GraphAssembler::NumberMin((GraphAssembler *)this,uVar4,local_180);
  uVar9 = GraphAssembler::NumberMin((GraphAssembler *)this,uVar8,uVar4);
  uVar4 = GraphAssembler::NumberMax((GraphAssembler *)this,uVar8,uVar4);
  GraphAssembler::StringSubstring((GraphAssembler *)this,uVar7,uVar9,uVar4);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

