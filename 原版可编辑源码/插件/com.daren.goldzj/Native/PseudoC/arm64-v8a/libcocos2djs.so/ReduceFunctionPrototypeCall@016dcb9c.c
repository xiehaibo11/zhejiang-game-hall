
/* v8::internal::compiler::JSCallReducer::ReduceFunctionPrototypeCall(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSCallReducer::ReduceFunctionPrototypeCall
          (JSCallReducer *this,Node *param_1)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  uint *puVar4;
  Node *pNVar5;
  Node *pNVar6;
  AccessBuilder *this_00;
  ulong uVar7;
  basic_ostream *pbVar8;
  long *plVar9;
  Node *pNVar10;
  Node *pNVar11;
  Operator *pOVar12;
  long lVar13;
  undefined8 uVar14;
  JSGraph *this_01;
  Use *pUVar15;
  Graph *this_02;
  SimplifiedOperatorBuilder *this_03;
  undefined1 local_b8 [16];
  AccessBuilder *local_a8;
  undefined1 local_a0 [3] [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar4 = (uint *)CallParametersOf(*(Operator **)param_1);
  pNVar5 = (Node *)NodeProperties::GetValueInput(param_1,0);
  pNVar6 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  this_00 = (AccessBuilder *)NodeProperties::GetControlInput(param_1,0);
  if (*(short *)(*(long *)pNVar5 + 0x10) == 0x1e) {
    ObjectRef::ObjectRef
              ((ObjectRef *)local_a0,*(undefined8 *)(this + 0x18),
               *(undefined8 *)(*(long *)pNVar5 + 0x30),0);
    uVar7 = ObjectRef::IsHeapObject((ObjectRef *)local_a0);
    if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapObject()");
    }
    local_b8 = ObjectRef::AsJSFunction((ObjectRef *)local_a0);
    if (FLAG_concurrent_inlining != '\0') {
      uVar7 = JSFunctionRef::serialized((JSFunctionRef *)local_b8);
      if ((uVar7 & 1) == 0) {
        if ((*(JSHeapBroker **)(this + 0x18))[0x74] != (JSHeapBroker)0x0) {
          pbVar8 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar8,"Missing ",8);
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar8,"Serialize call on function ",0x1b);
          pbVar8 = (basic_ostream *)compiler::operator<<(pbVar8,(ObjectRef *)local_b8);
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar8," (",2);
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar8,"../../src/compiler/js-call-reducer.cc",0x25);
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar8,":",1);
          pbVar8 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,0x647);
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar8,")",1);
          std::__ndk1::ios_base::getloc();
          plVar9 = (long *)std::__ndk1::locale::use_facet
                                     ((locale *)local_a0,(id *)&std::__ndk1::ctype<char>::id);
          cVar3 = (**(code **)(*plVar9 + 0x38))(plVar9,10);
          std::__ndk1::locale::~locale((locale *)local_a0);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,cVar3);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8);
        }
        param_1 = (Node *)0x0;
        goto LAB_016dcf30;
      }
    }
    this_01 = *(JSGraph **)(this + 0x10);
    local_a0[0] = JSFunctionRef::context((JSFunctionRef *)local_b8);
    pNVar5 = (Node *)JSGraph::Constant(this_01,(ObjectRef *)local_a0);
  }
  else {
    this_02 = (Graph *)**(undefined8 **)(this + 0x10);
    this_03 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    AccessBuilder::ForJSFunctionContext(this_00);
    pOVar12 = (Operator *)SimplifiedOperatorBuilder::LoadField(this_03,(FieldAccess *)local_a0);
    local_b8._0_8_ = pNVar5;
    local_b8._8_8_ = pNVar6;
    local_a8 = this_00;
    pNVar5 = (Node *)Graph::NewNode(this_02,pOVar12,3,(Node **)local_b8,false);
    pNVar6 = pNVar5;
  }
  NodeProperties::ReplaceContextInput(param_1,pNVar5);
  NodeProperties::ReplaceEffectInput(param_1,pNVar6,0);
  uVar1 = *puVar4;
  if ((int)((ulong)uVar1 & 0x7ffffff) == 2) {
    pNVar6 = param_1 + 0x20;
    pNVar5 = pNVar6;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar5 = (Node *)(*(long *)pNVar6 + 0x10);
    }
    pNVar10 = *(Node **)pNVar5;
    pNVar11 = *(Node **)(pNVar5 + 8);
    if (pNVar10 != pNVar11) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar15 = (Use *)(*(long *)pNVar6 + -0x18);
      }
      else {
        pUVar15 = (Use *)(param_1 + -0x18);
      }
      if (pNVar10 != (Node *)0x0) {
        Node::RemoveUse(pNVar10,pUVar15);
      }
      *(Node **)pNVar5 = pNVar11;
      if (pNVar11 != (Node *)0x0) {
        Node::AppendUse(pNVar11,pUVar15);
      }
    }
    pNVar10 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    pNVar5 = pNVar6;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar5 = (Node *)(*(long *)pNVar6 + 0x10);
    }
    pNVar11 = *(Node **)(pNVar5 + 8);
    if (pNVar11 != pNVar10) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar15 = (Use *)(*(long *)pNVar6 + -0x30);
      }
      else {
        pUVar15 = (Use *)(param_1 + -0x30);
      }
      if (pNVar11 != (Node *)0x0) {
        Node::RemoveUse(pNVar11,pUVar15);
      }
      *(Node **)(pNVar5 + 8) = pNVar10;
      if (pNVar10 != (Node *)0x0) {
        Node::AppendUse(pNVar10,pUVar15);
      }
    }
    uVar14 = 0;
    lVar13 = 2;
  }
  else {
    Node::RemoveInput(param_1,0);
    lVar13 = ((ulong)uVar1 & 0x7ffffff) - 1;
    uVar14 = 2;
  }
  pOVar12 = (Operator *)
            JSOperatorBuilder::Call
                      (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),lVar13,puVar4 + 1,
                       puVar4 + 2,uVar14,*puVar4 >> 0x1c & 1,1);
  NodeProperties::ChangeOp(param_1,pOVar12);
  pNVar6 = (Node *)ReduceJSCall(this,param_1);
  if (pNVar6 != (Node *)0x0) {
    param_1 = pNVar6;
  }
LAB_016dcf30:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}

