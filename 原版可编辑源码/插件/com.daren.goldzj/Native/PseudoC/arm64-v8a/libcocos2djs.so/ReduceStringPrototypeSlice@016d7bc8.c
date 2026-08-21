
/* v8::internal::compiler::JSCallReducerAssembler::ReduceStringPrototypeSlice() */

undefined8 __thiscall
v8::internal::compiler::JSCallReducerAssembler::ReduceStringPrototypeSlice
          (JSCallReducerAssembler *this)

{
  long lVar1;
  uint uVar2;
  Node *pNVar3;
  Node *pNVar4;
  long lVar5;
  Operator *pOVar6;
  undefined8 uVar7;
  long *plVar8;
  code *pcVar9;
  Graph *pGVar10;
  SimplifiedOperatorBuilder *pSVar11;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined **local_170;
  JSCallReducerAssembler *local_168;
  undefined8 *puStack_160;
  undefined ***local_150;
  undefined **local_140;
  JSCallReducerAssembler *local_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
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
  undefined8 *local_78;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pNVar3 = (Node *)NodeProperties::GetValueInput(*(Node **)(this + 0x38),1);
  pNVar4 = (Node *)NodeProperties::GetValueInput(*(Node **)(this + 0x38),2);
  if (*(int *)(*(long *)*(Node **)(this + 0x38) + 0x14) < 4) {
    local_178 = GraphAssembler::UndefinedConstant((GraphAssembler *)this);
  }
  else {
    local_178 = NodeProperties::GetValueInput(*(Node **)(this + 0x38),3);
  }
  pGVar10 = (Graph *)**(undefined8 **)(this + 0x18);
  pSVar11 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f];
  lVar5 = CallParametersOf((Operator *)**(undefined8 **)(this + 0x38));
  pOVar6 = (Operator *)SimplifiedOperatorBuilder::CheckString(pSVar11,(FeedbackSource *)(lVar5 + 8))
  ;
  uStack_108 = *(undefined8 *)(this + 0x20);
  local_100 = *(ulong *)(this + 0x28);
  local_110 = pNVar3;
  pNVar3 = (Node *)Graph::NewNode(pGVar10,pOVar6,3,&local_110,false);
  uVar7 = GraphAssembler::AddNode((GraphAssembler *)this,pNVar3);
  pGVar10 = (Graph *)**(undefined8 **)(this + 0x18);
  pSVar11 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f];
  local_180 = uVar7;
  lVar5 = CallParametersOf((Operator *)**(undefined8 **)(this + 0x38));
  pOVar6 = (Operator *)SimplifiedOperatorBuilder::CheckSmi(pSVar11,(FeedbackSource *)(lVar5 + 8));
  uStack_108 = *(undefined8 *)(this + 0x20);
  local_100 = *(ulong *)(this + 0x28);
  local_110 = pNVar4;
  pNVar3 = (Node *)Graph::NewNode(pGVar10,pOVar6,3,&local_110,false);
  local_188 = GraphAssembler::AddNode((GraphAssembler *)this,pNVar3);
  local_190 = GraphAssembler::StringLength((GraphAssembler *)this,uVar7);
  uStack_108 = GraphAssembler::IsUndefined((GraphAssembler *)this,local_178);
  local_138 = (JSCallReducerAssembler *)&local_190;
  local_120 = &local_140;
  local_100 = local_100 & 0xffffffffffffff00;
  local_a0 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_140 = &PTR_FUN_01ccd528;
  local_90 = &PTR_FUN_01ccd528;
  local_110 = (Node *)this;
  local_88 = local_138;
  local_70 = &local_90;
  FUN_016f7608(&local_90,alStack_f0);
  if (&local_90 == local_70) {
    pcVar9 = (code *)(*local_70)[4];
LAB_016d7d84:
    (*pcVar9)();
  }
  else if (local_70 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_70)[5];
    goto LAB_016d7d84;
  }
  puStack_160 = &local_178;
  local_170 = &PTR_FUN_01ccd570;
  local_150 = &local_170;
  local_90 = &PTR_FUN_01ccd570;
  local_168 = this;
  local_88 = this;
  puStack_80 = puStack_160;
  local_70 = &local_90;
  FUN_016f7608(&local_90,alStack_c0);
  if (&local_90 == local_70) {
    pcVar9 = (code *)(*local_70)[4];
LAB_016d7dec:
    (*pcVar9)();
  }
  else if (local_70 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_70)[5];
    goto LAB_016d7dec;
  }
  local_100 = CONCAT71(local_100._1_7_,2);
  local_198 = IfBuilder1<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>::Value
                        ((IfBuilder1<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>
                          *)&local_110);
  if (&local_170 == local_150) {
    pcVar9 = (code *)(*local_150)[4];
LAB_016d7e30:
    (*pcVar9)();
  }
  else if (local_150 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_150)[5];
    goto LAB_016d7e30;
  }
  if (&local_140 == local_120) {
    pcVar9 = (code *)(*local_120)[4];
LAB_016d7e5c:
    (*pcVar9)();
  }
  else if (local_120 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_120)[5];
    goto LAB_016d7e5c;
  }
  if (alStack_c0 == local_a0) {
    pcVar9 = *(code **)(*local_a0 + 0x20);
LAB_016d7e8c:
    (*pcVar9)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_a0 + 0x28);
    goto LAB_016d7e8c;
  }
  if (alStack_f0 == local_d0) {
    pcVar9 = *(code **)(*local_d0 + 0x20);
LAB_016d7ebc:
    (*pcVar9)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_d0 + 0x28);
    goto LAB_016d7ebc;
  }
  local_170 = (undefined **)GraphAssembler::ZeroConstant((GraphAssembler *)this);
  uStack_108 = GraphAssembler::NumberLessThan((GraphAssembler *)this,local_188,local_170);
  local_100 = local_100 & 0xffffffffffffff00;
  local_a0 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_110 = (Node *)this;
  plVar8 = operator_new(0x28);
  *plVar8 = (long)&PTR_FUN_01ccd5b8;
  plVar8[1] = (long)this;
  plVar8[2] = (long)&local_190;
  plVar8[3] = (long)&local_188;
  plVar8[4] = (long)&local_170;
  local_70 = (undefined ***)FUN_016f7a00();
  FUN_016f7608(&local_90,alStack_f0);
  if (&local_90 == local_70) {
    pcVar9 = (code *)(*local_70)[4];
LAB_016d7f5c:
    (*pcVar9)();
  }
  else if (local_70 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_70)[5];
    goto LAB_016d7f5c;
  }
  puStack_130 = &local_188;
  puStack_128 = &local_190;
  local_140 = &PTR_FUN_01ccd600;
  local_90 = &PTR_FUN_01ccd600;
  local_120 = &local_140;
  local_138 = this;
  local_88 = this;
  puStack_80 = puStack_130;
  local_78 = puStack_128;
  local_70 = &local_90;
  FUN_016f7608(&local_90,alStack_c0);
  if (&local_90 == local_70) {
    pcVar9 = (code *)(*local_70)[4];
LAB_016d7fc8:
    (*pcVar9)();
  }
  else if (local_70 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_70)[5];
    goto LAB_016d7fc8;
  }
  local_100 = CONCAT71(local_100._1_7_,2);
  uVar7 = IfBuilder1<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>::Value
                    ((IfBuilder1<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>> *
                     )&local_110);
  if (&local_140 == local_120) {
    pcVar9 = (code *)(*local_120)[4];
LAB_016d8008:
    (*pcVar9)(local_120);
  }
  else if (local_120 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_120)[5];
    goto LAB_016d8008;
  }
  (**(code **)(*plVar8 + 0x28))(plVar8);
  if (alStack_c0 == local_a0) {
    pcVar9 = *(code **)(*local_a0 + 0x20);
LAB_016d804c:
    (*pcVar9)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_a0 + 0x28);
    goto LAB_016d804c;
  }
  if (alStack_f0 == local_d0) {
    pcVar9 = *(code **)(*local_d0 + 0x20);
LAB_016d807c:
    (*pcVar9)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_d0 + 0x28);
    goto LAB_016d807c;
  }
  uVar2 = BitsetType::UnsignedSmall();
  local_1a0 = GraphAssembler::TypeGuard((GraphAssembler *)this,uVar2 | 1,uVar7);
  uStack_108 = GraphAssembler::NumberLessThan((GraphAssembler *)this,local_198,local_170);
  local_100 = local_100 & 0xffffffffffffff00;
  local_a0 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_110 = (Node *)this;
  plVar8 = operator_new(0x28);
  *plVar8 = (long)&PTR_FUN_01ccd648;
  plVar8[1] = (long)this;
  plVar8[2] = (long)&local_190;
  plVar8[3] = (long)&local_198;
  plVar8[4] = (long)&local_170;
  local_70 = (undefined ***)FUN_016f7b30();
  FUN_016f7608(&local_90,alStack_f0);
  if (&local_90 == local_70) {
    pcVar9 = (code *)(*local_70)[4];
LAB_016d8128:
    (*pcVar9)();
  }
  else if (local_70 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_70)[5];
    goto LAB_016d8128;
  }
  puStack_130 = &local_198;
  puStack_128 = &local_190;
  local_140 = &PTR_FUN_01ccd690;
  local_90 = &PTR_FUN_01ccd690;
  local_120 = &local_140;
  local_138 = this;
  local_88 = this;
  puStack_80 = puStack_130;
  local_78 = puStack_128;
  local_70 = &local_90;
  FUN_016f7608(&local_90,alStack_c0);
  if (&local_90 == local_70) {
    pcVar9 = (code *)(*local_70)[4];
LAB_016d8194:
    (*pcVar9)();
  }
  else if (local_70 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_70)[5];
    goto LAB_016d8194;
  }
  local_100 = CONCAT71(local_100._1_7_,2);
  uVar7 = IfBuilder1<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>::Value
                    ((IfBuilder1<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>> *
                     )&local_110);
  if (&local_140 == local_120) {
    pcVar9 = (code *)(*local_120)[4];
LAB_016d81d4:
    (*pcVar9)(local_120);
  }
  else if (local_120 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_120)[5];
    goto LAB_016d81d4;
  }
  (**(code **)(*plVar8 + 0x28))(plVar8);
  if (alStack_c0 == local_a0) {
    pcVar9 = *(code **)(*local_a0 + 0x20);
LAB_016d8218:
    (*pcVar9)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_a0 + 0x28);
    goto LAB_016d8218;
  }
  if (alStack_f0 == local_d0) {
    pcVar9 = *(code **)(*local_d0 + 0x20);
LAB_016d8248:
    (*pcVar9)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_d0 + 0x28);
    goto LAB_016d8248;
  }
  uVar2 = BitsetType::UnsignedSmall();
  local_1a8 = GraphAssembler::TypeGuard((GraphAssembler *)this,uVar2 | 1,uVar7);
  uStack_108 = GraphAssembler::NumberLessThan((GraphAssembler *)this,local_1a0,local_1a8);
  local_100 = local_100 & 0xffffffffffffff00;
  local_a0 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_110 = (Node *)this;
  plVar8 = operator_new(0x28);
  *plVar8 = (long)&PTR_FUN_01ccd6d8;
  plVar8[1] = (long)this;
  plVar8[2] = (long)&local_180;
  plVar8[3] = (long)&local_1a0;
  plVar8[4] = (long)&local_1a8;
  local_70 = (undefined ***)FUN_016f7dc0();
  FUN_016f7c5c(&local_90,alStack_f0);
  if (&local_90 == local_70) {
    pcVar9 = (code *)(*local_70)[4];
LAB_016d82f4:
    (*pcVar9)();
  }
  else if (local_70 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_70)[5];
    goto LAB_016d82f4;
  }
  local_120 = &local_140;
  local_140 = &PTR_FUN_01ccd720;
  local_90 = &PTR_FUN_01ccd720;
  local_138 = this;
  local_88 = this;
  local_70 = &local_90;
  FUN_016f7c5c(&local_90,alStack_c0);
  if (&local_90 == local_70) {
    pcVar9 = (code *)(*local_70)[4];
LAB_016d834c:
    (*pcVar9)();
  }
  else if (local_70 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_70)[5];
    goto LAB_016d834c;
  }
  local_100 = CONCAT71(local_100._1_7_,1);
  uVar7 = IfBuilder1<v8::internal::String>::Value((IfBuilder1<v8::internal::String> *)&local_110);
  if (&local_140 == local_120) {
    pcVar9 = (code *)(*local_120)[4];
LAB_016d838c:
    (*pcVar9)(local_120);
  }
  else if (local_120 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_120)[5];
    goto LAB_016d838c;
  }
  (**(code **)(*plVar8 + 0x28))(plVar8);
  if (alStack_c0 == local_a0) {
    pcVar9 = *(code **)(*local_a0 + 0x20);
LAB_016d83d0:
    (*pcVar9)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_a0 + 0x28);
    goto LAB_016d83d0;
  }
  if (alStack_f0 == local_d0) {
    pcVar9 = *(code **)(*local_d0 + 0x20);
  }
  else {
    if (local_d0 == (long *)0x0) goto LAB_016d8404;
    pcVar9 = *(code **)(*local_d0 + 0x28);
  }
  (*pcVar9)();
LAB_016d8404:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

