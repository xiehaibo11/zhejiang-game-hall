
/* v8::internal::compiler::JSContextSpecialization::ReduceJSStoreContext(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSContextSpecialization::ReduceJSStoreContext
          (JSContextSpecialization *this,Node *param_1)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  Node *pNVar4;
  basic_ostream *pbVar5;
  long *plVar6;
  Node *pNVar7;
  Operator *pOVar8;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char local_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  ulong local_48;
  locale alStack_28 [8];
  
  lVar3 = ContextAccessOf(*(Operator **)param_1);
  local_48 = (ulong)*(ushort *)(lVar3 + 2);
  pNVar4 = (Node *)NodeProperties::GetOuterContext(param_1,&local_48);
  local_70 = *(undefined8 *)(this + 0x28);
  uStack_78 = *(undefined8 *)(this + 0x20);
  local_80 = *(undefined8 *)(this + 0x18);
  FUN_016fa1b0(local_60,*(undefined8 *)(this + 0x38),pNVar4,&local_48,&local_80);
  if (local_60[0] == '\0') {
    pOVar8 = *(Operator **)param_1;
  }
  else {
    local_90._8_8_ = uStack_50;
    local_90._0_8_ = local_58;
    local_90 = ContextRef::previous((ContextRef *)local_90,&local_48,0);
    if ((local_48 != 0) && ((*(JSHeapBroker **)(this + 0x38))[0x74] != (JSHeapBroker)0x0)) {
      pbVar5 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x38));
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"Missing ",8);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"previous value for context ",0x1b);
      pbVar5 = (basic_ostream *)compiler::operator<<(pbVar5,(ObjectRef *)local_90);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5," (",2);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"../../src/compiler/js-context-specialization.cc",0x2f);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,":",1);
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,0xd5);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,")",1);
      std::__ndk1::ios_base::getloc();
      plVar6 = (long *)std::__ndk1::locale::use_facet
                                 (alStack_28,(id *)&std::__ndk1::ctype<char>::id);
      cVar2 = (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale(alStack_28);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,cVar2);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5);
    }
    pNVar4 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)local_90);
    pOVar8 = *(Operator **)param_1;
  }
  uVar1 = local_48;
  lVar3 = ContextAccessOf(pOVar8);
  if ((uVar1 == *(ushort *)(lVar3 + 2)) &&
     (pNVar7 = (Node *)NodeProperties::GetContextInput(param_1), pNVar7 == pNVar4)) {
    param_1 = (Node *)0x0;
  }
  else {
    pOVar8 = (Operator *)
             JSOperatorBuilder::StoreContext
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),uVar1,
                        (ulong)*(uint *)(lVar3 + 4));
    NodeProperties::ReplaceContextInput(param_1,pNVar4);
    NodeProperties::ChangeOp(param_1,pOVar8);
  }
  return param_1;
}

