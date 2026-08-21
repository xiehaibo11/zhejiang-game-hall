
/* v8::internal::compiler::JSNativeContextSpecialization::InlineApiCall(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node**, v8::internal::compiler::Node**,
   v8::internal::compiler::SharedFunctionInfoRef const&,
   v8::internal::compiler::FunctionTemplateInfoRef const&) */

Node * __thiscall
v8::internal::compiler::JSNativeContextSpecialization::InlineApiCall
          (JSNativeContextSpecialization *this,Node *param_1,Node *param_2,Node *param_3,
          Node *param_4,Node **param_5,Node **param_6,SharedFunctionInfoRef *param_7,
          FunctionTemplateInfoRef *param_8)

{
  Graph *pGVar1;
  CommonOperatorBuilder *this_00;
  char cVar2;
  ulong uVar3;
  CallDescriptor *pCVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  undefined8 uVar7;
  Node *pNVar8;
  undefined8 uVar9;
  basic_ostream *pbVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  JSGraph *this_01;
  double dVar15;
  undefined1 local_110 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  Node *local_f0;
  Node *pNStack_e8;
  Node *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined **local_a8;
  int *piStack_a0;
  undefined8 local_98;
  int *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar3 = FunctionTemplateInfoRef::has_call_code((FunctionTemplateInfoRef *)param_8);
  if ((uVar3 & 1) != 0) {
    FunctionTemplateInfoRef::call_code();
    if (local_110[0] != (ObjectRef)0x0) {
      FunctionTemplateInfoRef::call_code();
      uStack_78 = uStack_100;
      local_80 = local_110._8_8_;
      CodeFactory::CallApiCallback(*(Isolate **)(*(long *)(this + 0x10) + 0x168));
      local_a8 = &PTR__CallInterfaceDescriptor_01ca0fc8;
      piStack_a0 = local_88;
      iVar14 = 1;
      if (param_4 != (Node *)0x0) {
        iVar14 = 2;
      }
      pCVar4 = (CallDescriptor *)
               Linkage::GetStubCallDescriptor
                         (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_a8,
                          (iVar14 + local_88[2]) - *local_88,1,0,0);
      this_01 = *(JSGraph **)(this + 0x10);
      local_110 = CallHandlerInfoRef::data((CallHandlerInfoRef *)&local_80);
      uVar5 = JSGraph::Constant(this_01,(ObjectRef *)local_110);
      local_b0 = CallHandlerInfoRef::callback((CallHandlerInfoRef *)&local_80);
      pGVar1 = (Graph *)**(undefined8 **)(this + 0x10);
      this_00 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1];
      local_b8 = ExternalReference::Create(&local_b0,6);
      pOVar6 = (Operator *)
               CommonOperatorBuilder::ExternalConstant(this_00,(ExternalReference *)&local_b8);
      local_110._0_8_ = (Node *)0x0;
      uVar7 = Graph::NewNode(pGVar1,pOVar6,0,(Node **)local_110,false);
      pNVar8 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_98);
      lVar13 = *(long *)(this + 0x18);
      if (*(char *)(lVar13 + 0x18) == '\x01') {
        local_110._8_8_ = *(undefined8 *)(lVar13 + 0x28);
        local_110._0_8_ = *(undefined8 *)(lVar13 + 0x20);
        uVar9 = JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)local_110);
        dVar15 = 1.0;
        if (param_4 == (Node *)0x0) {
          dVar15 = 0.0;
        }
        uVar12 = 6;
        if (param_4 != (Node *)0x0) {
          uVar12 = 7;
        }
        local_110._0_8_ = pNVar8;
        local_110._8_8_ = uVar7;
        uStack_100 = JSGraph::Constant(*(JSGraph **)(this + 0x10),dVar15);
        local_c0 = 0;
        uStack_d8 = 0;
        local_e0 = (Node *)0x0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        *(undefined8 *)(local_110 + (ulong)uVar12 * 8) = uVar9;
        *(Node **)(local_110 + (ulong)(uVar12 + 1) * 8) = param_3;
        *(Node **)(local_110 + (ulong)(uVar12 + 2) * 8) = *param_5;
        *(Node **)(local_110 + (ulong)(uVar12 + 3) * 8) = *param_6;
        if (param_4 != (Node *)0x0) {
          local_e0 = param_4;
        }
        pGVar1 = (Graph *)**(undefined8 **)(this + 0x10);
        uStack_f8 = uVar5;
        local_f0 = param_2;
        pNStack_e8 = param_1;
        pOVar6 = (Operator *)
                 CommonOperatorBuilder::Call
                           ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],pCVar4);
        pNVar8 = (Node *)Graph::NewNode(pGVar1,pOVar6,uVar12 + 4,(Node **)local_110,false);
        *param_6 = pNVar8;
        *param_5 = pNVar8;
        return pNVar8;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","storage_.is_populated_");
    }
    if ((*(JSHeapBroker **)(this + 0x18))[0x74] != (JSHeapBroker)0x0) {
      pbVar10 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
      pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar10,"Missing ",8);
      pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar10,"call code for function template info ",0x25);
      pbVar10 = (basic_ostream *)compiler::operator<<(pbVar10,(ObjectRef *)param_8);
      pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar10," (",2);
      pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar10,"../../src/compiler/js-native-context-specialization.cc",0x36);
      pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar10,":",1);
      pbVar10 = (basic_ostream *)
                std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                          ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,0x875);
      pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar10,")",1);
      std::__ndk1::ios_base::getloc();
      plVar11 = (long *)std::__ndk1::locale::use_facet
                                  ((locale *)local_110,(id *)&std::__ndk1::ctype<char>::id);
      cVar2 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
      std::__ndk1::locale::~locale((locale *)local_110);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,cVar2);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10);
    }
  }
  return (Node *)0x0;
}

