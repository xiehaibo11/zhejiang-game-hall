
/* v8::internal::compiler::JSContextSpecialization::ReduceJSLoadContext(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSContextSpecialization::ReduceJSLoadContext
          (JSContextSpecialization *this,Node *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  char *pcVar5;
  Node *pNVar6;
  basic_ostream *pbVar7;
  long *plVar8;
  locale *this_00;
  ulong uVar9;
  long lVar10;
  Node *pNVar11;
  Operator *pOVar12;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 uStack_a0;
  locale local_98 [8];
  ulong local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  char local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_28;
  
  pcVar5 = (char *)ContextAccessOf(*(Operator **)param_1);
  local_28 = (ulong)*(ushort *)(pcVar5 + 2);
  pNVar6 = (Node *)NodeProperties::GetOuterContext(param_1,&local_28);
  local_60 = *(undefined8 *)(this + 0x28);
  uStack_68 = *(undefined8 *)(this + 0x20);
  local_70 = *(undefined8 *)(this + 0x18);
  FUN_016fa1b0(local_58,*(undefined8 *)(this + 0x38),pNVar6,&local_28,&local_70);
  uVar9 = local_28;
  if (local_58[0] == '\0') {
    lVar10 = ContextAccessOf(*(Operator **)param_1);
    if ((uVar9 == *(ushort *)(lVar10 + 2)) &&
       (pNVar11 = (Node *)NodeProperties::GetContextInput(param_1), pNVar11 == pNVar6)) {
      return (Node *)0x0;
    }
    pOVar12 = (Operator *)
              JSOperatorBuilder::LoadContext
                        (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),uVar9,
                         (ulong)*(uint *)(lVar10 + 4),*(bool *)lVar10);
    goto LAB_016f9e28;
  }
  local_80._8_8_ = uStack_48;
  local_80._0_8_ = local_50;
  local_80 = ContextRef::previous((ContextRef *)local_80,&local_28,0);
  auVar3._8_8_ = local_b0._8_8_;
  auVar3._0_8_ = local_b0._0_8_;
  auVar2._8_8_ = local_b0._8_8_;
  auVar2._0_8_ = local_b0._0_8_;
  auVar1._8_8_ = local_c0._8_8_;
  auVar1._0_8_ = local_c0._0_8_;
  if (local_28 == 0) {
    if (*pcVar5 != '\0') {
      local_98[0] = (locale)0x0;
      local_90 = local_90 & 0xffffffffffffff00;
      ContextRef::get(local_b0,local_80,*(undefined4 *)(pcVar5 + 4),0);
      auVar3._8_8_ = local_b0._8_8_;
      auVar3._0_8_ = local_b0._0_8_;
      if (local_b0[0] == (MapRef)0x0) {
        if ((*(JSHeapBroker **)(this + 0x38))[0x74] != (JSHeapBroker)0x0) {
          pbVar7 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x38));
          pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar7,"Missing ",8);
          pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar7,"slot value ",0xb);
          pbVar7 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                              (ulong)*(uint *)(pcVar5 + 4));
          pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar7," for context ",0xd);
          pbVar7 = (basic_ostream *)compiler::operator<<(pbVar7,(ObjectRef *)local_80);
          pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar7," (",2);
          pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar7,"../../src/compiler/js-context-specialization.cc",0x2f);
          pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar7,":",1);
          pbVar7 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,0xa7);
          pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar7,")",1);
          std::__ndk1::ios_base::getloc();
          plVar8 = (long *)std::__ndk1::locale::use_facet
                                     ((locale *)local_b0,(id *)&std::__ndk1::ctype<char>::id);
          cVar4 = (**(code **)(*plVar8 + 0x38))(plVar8,10);
          this_00 = (locale *)local_b0;
          goto LAB_016f9bb8;
        }
      }
      else {
        uStack_88 = uStack_a0;
        local_90 = local_b0._8_8_;
        local_98[0] = (locale)0x1;
        uVar9 = ObjectRef::IsSmi((ObjectRef *)&local_90);
        if ((uVar9 & 1) != 0) {
LAB_016f9cac:
          pNVar6 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)&local_90);
          (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar6,0,0);
          return pNVar6;
        }
        local_c0 = ObjectRef::AsHeapObject((ObjectRef *)&local_90);
        local_b0 = HeapObjectRef::map((HeapObjectRef *)local_c0);
        cVar4 = MapRef::oddball_type((MapRef *)local_b0);
        auVar3 = local_b0;
        if ((cVar4 != '\x04') && (cVar4 != '\x02')) goto LAB_016f9cac;
      }
    }
  }
  else {
    local_c0 = auVar1;
    auVar3 = auVar2;
    if ((*(JSHeapBroker **)(this + 0x38))[0x74] != (JSHeapBroker)0x0) {
      pbVar7 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x38));
      pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar7,"Missing ",8);
      pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar7,"previous value for context ",0x1b);
      pbVar7 = (basic_ostream *)compiler::operator<<(pbVar7,(ObjectRef *)local_80);
      pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar7," (",2);
      pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar7,"../../src/compiler/js-context-specialization.cc",0x2f);
      pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar7,":",1);
      pbVar7 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,0x96);
      pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar7,")",1);
      std::__ndk1::ios_base::getloc();
      plVar8 = (long *)std::__ndk1::locale::use_facet(local_98,(id *)&std::__ndk1::ctype<char>::id);
      cVar4 = (**(code **)(*plVar8 + 0x38))(plVar8,10);
      this_00 = local_98;
LAB_016f9bb8:
      std::__ndk1::locale::~locale(this_00);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,cVar4);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7);
      auVar3._8_8_ = local_b0._8_8_;
      auVar3._0_8_ = local_b0._0_8_;
    }
  }
  local_b0 = auVar3;
  pNVar6 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)local_80);
  uVar9 = local_28;
  lVar10 = ContextAccessOf(*(Operator **)param_1);
  if (uVar9 == *(ushort *)(lVar10 + 2)) {
    pNVar11 = (Node *)NodeProperties::GetContextInput(param_1);
    if (pNVar11 == pNVar6) {
      return (Node *)0x0;
    }
  }
  pOVar12 = (Operator *)
            JSOperatorBuilder::LoadContext
                      (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),uVar9,
                       (ulong)*(uint *)(lVar10 + 4),*(bool *)lVar10);
LAB_016f9e28:
  NodeProperties::ReplaceContextInput(param_1,pNVar6);
  NodeProperties::ChangeOp(param_1,pOVar12);
  return param_1;
}

