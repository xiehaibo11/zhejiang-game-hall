
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceJSOrdinaryHasInstance(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceJSOrdinaryHasInstance
          (JSNativeContextSpecialization *this,Node *param_1)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  Node *pNVar4;
  ulong uVar5;
  Operator *pOVar6;
  Node *pNVar7;
  basic_ostream *pbVar8;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this_00;
  int iVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)NodeProperties::GetValueInput(param_1,0);
  pNVar4 = (Node *)NodeProperties::GetValueInput(param_1,1);
  if (*(short *)(*plVar3 + 0x10) != 0x1e) goto LAB_017475b0;
  uVar10 = *(undefined8 *)(*plVar3 + 0x30);
  ObjectRef::ObjectRef((ObjectRef *)local_68,*(undefined8 *)(this + 0x18),uVar10,0);
  uVar5 = ObjectRef::IsHeapObject((ObjectRef *)local_68);
  if ((uVar5 & 1) == 0) {
LAB_017475dc:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsHeapObject()");
  }
  uVar5 = ObjectRef::IsJSBoundFunction((ObjectRef *)local_68);
  if ((uVar5 & 1) == 0) {
    ObjectRef::ObjectRef((ObjectRef *)local_68,*(undefined8 *)(this + 0x18),uVar10,0);
    uVar5 = ObjectRef::IsHeapObject((ObjectRef *)local_68);
    if ((uVar5 & 1) == 0) goto LAB_017475dc;
    uVar5 = ObjectRef::IsJSFunction((ObjectRef *)local_68);
    if ((uVar5 & 1) != 0) {
      ObjectRef::ObjectRef((ObjectRef *)local_68,*(undefined8 *)(this + 0x18),uVar10,0);
      uVar5 = ObjectRef::IsHeapObject((ObjectRef *)local_68);
      if ((uVar5 & 1) == 0) goto LAB_017475dc;
      local_78._0_8_ = local_68._0_8_;
      local_78._8_8_ = local_68._8_8_;
      local_68 = ObjectRef::AsJSFunction((ObjectRef *)local_78);
      if (FLAG_concurrent_inlining != '\0') {
        uVar5 = JSFunctionRef::serialized((JSFunctionRef *)local_68);
        if ((uVar5 & 1) == 0) {
          if ((*(JSHeapBroker **)(this + 0x18))[0x74] != (JSHeapBroker)0x0) {
            pbVar8 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
            pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar8,"Missing ",8);
            pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar8,"data for JSFunction ",0x14);
            pbVar8 = (basic_ostream *)compiler::operator<<(pbVar8,(ObjectRef *)local_68);
            pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar8," (",2);
            pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar8,"../../src/compiler/js-native-context-specialization.cc",0x36
                               );
            this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (pbVar8,":",1);
            iVar9 = 0x277;
            goto LAB_01747544;
          }
          goto LAB_017475b0;
        }
      }
      local_78 = HeapObjectRef::map((HeapObjectRef *)local_68);
      uVar5 = MapRef::has_prototype_slot((MapRef *)local_78);
      if ((uVar5 & 1) != 0) {
        uVar5 = JSFunctionRef::has_prototype((JSFunctionRef *)local_68);
        if ((uVar5 & 1) != 0) {
          uVar5 = JSFunctionRef::PrototypeRequiresRuntimeLookup((JSFunctionRef *)local_68);
          if ((uVar5 & 1) == 0) {
            auVar11 = CompilationDependencies::DependOnPrototypeProperty
                                (*(CompilationDependencies **)(this + 0x38),
                                 (JSFunctionRef *)local_68);
            local_78 = auVar11;
            pNVar7 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)local_78);
            NodeProperties::ReplaceValueInput(param_1,pNVar4,0);
            NodeProperties::ReplaceValueInput(param_1,pNVar7,1);
            pOVar6 = (Operator *)
                     JSOperatorBuilder::HasInPrototypeChain
                               (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
            NodeProperties::ChangeOp(param_1,pOVar6);
            pNVar4 = (Node *)ReduceJSHasInPrototypeChain(this,param_1);
            goto LAB_01747340;
          }
        }
      }
    }
LAB_017475b0:
    param_1 = (Node *)0x0;
  }
  else {
    ObjectRef::ObjectRef((ObjectRef *)local_68,*(undefined8 *)(this + 0x18),uVar10,0);
    uVar5 = ObjectRef::IsHeapObject((ObjectRef *)local_68);
    if ((uVar5 & 1) == 0) goto LAB_017475dc;
    local_78._0_8_ = local_68._0_8_;
    local_78._8_8_ = local_68._8_8_;
    local_68 = ObjectRef::AsJSBoundFunction((ObjectRef *)local_78);
    if (FLAG_concurrent_inlining != '\0') {
      uVar5 = JSBoundFunctionRef::serialized((JSBoundFunctionRef *)local_68);
      if ((uVar5 & 1) == 0) {
        if ((*(JSHeapBroker **)(this + 0x18))[0x74] != (JSHeapBroker)0x0) {
          pbVar8 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar8,"Missing ",8);
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar8,"data for JSBoundFunction ",0x19);
          pbVar8 = (basic_ostream *)compiler::operator<<(pbVar8,(ObjectRef *)local_68);
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar8," (",2);
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar8,"../../src/compiler/js-native-context-specialization.cc",0x36);
          this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar8,":",1);
          iVar9 = 0x264;
LAB_01747544:
          pbVar8 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             (this_00,iVar9);
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar8,")",1);
          std::__ndk1::ios_base::getloc();
          plVar3 = (long *)std::__ndk1::locale::use_facet
                                     ((locale *)local_78,(id *)&std::__ndk1::ctype<char>::id);
          cVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
          std::__ndk1::locale::~locale((locale *)local_78);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,cVar2);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8);
        }
        goto LAB_017475b0;
      }
    }
    local_78 = JSBoundFunctionRef::bound_target_function((JSBoundFunctionRef *)local_68);
    NodeProperties::ReplaceValueInput(param_1,pNVar4,0);
    pNVar4 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)local_78);
    NodeProperties::ReplaceValueInput(param_1,pNVar4,1);
    local_58 = 0;
    local_50 = 0xffffffff;
    pOVar6 = (Operator *)
             JSOperatorBuilder::InstanceOf
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),
                        (FeedbackSource *)&local_58);
    NodeProperties::ChangeOp(param_1,pOVar6);
    pNVar4 = (Node *)ReduceJSInstanceOf(this,param_1);
LAB_01747340:
    if (pNVar4 != (Node *)0x0) {
      param_1 = pNVar4;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}

