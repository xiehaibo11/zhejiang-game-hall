
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceJSLoadNamed(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceJSLoadNamed
          (JSNativeContextSpecialization *this,Node *param_1)

{
  Graph *this_00;
  long lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  Operator *pOVar9;
  basic_ostream *pbVar10;
  long lVar11;
  JSGraph *this_01;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  Node *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar5 = (undefined8 *)NamedAccessOf(*(Operator **)param_1);
  plVar6 = (long *)NodeProperties::GetValueInput(param_1,0);
  ObjectRef::ObjectRef((ObjectRef *)&local_68,*(undefined8 *)(this + 0x18),*puVar5,0);
  uVar7 = ObjectRef::IsName((ObjectRef *)&local_68);
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsName()");
  }
  if (*(short *)(*plVar6 + 0x10) == 0x1e) {
    ObjectRef::ObjectRef
              ((ObjectRef *)local_58,*(undefined8 *)(this + 0x18),*(undefined8 *)(*plVar6 + 0x30),0)
    ;
    uVar7 = ObjectRef::IsHeapObject((ObjectRef *)local_58);
    if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapObject()");
    }
    local_78 = (Node *)local_58._0_8_;
    uStack_70 = local_58._8_8_;
    uVar7 = ObjectRef::IsJSFunction((ObjectRef *)&local_78);
    if ((uVar7 & 1) == 0) {
LAB_0174827c:
      uVar7 = ObjectRef::IsString((ObjectRef *)&local_78);
      if ((uVar7 & 1) != 0) {
        ObjectRef::ObjectRef
                  ((ObjectRef *)local_58,*(undefined8 *)(this + 0x18),
                   *(long *)(*(long *)(this + 0x10) + 0x168) + 0x7b8,1);
        uVar7 = ObjectRef::equals((ObjectRef *)&local_68,(ObjectRef *)local_58);
        if ((uVar7 & 1) != 0) {
          this_01 = *(JSGraph **)(this + 0x10);
          local_58 = ObjectRef::AsString((ObjectRef *)&local_78);
          iVar4 = StringRef::length((StringRef *)local_58);
          uVar8 = JSGraph::Constant(this_01,(double)iVar4);
          goto LAB_017482d4;
        }
      }
      goto LAB_01748300;
    }
    ObjectRef::ObjectRef
              ((ObjectRef *)local_58,*(undefined8 *)(this + 0x18),
               *(long *)(*(long *)(this + 0x10) + 0x168) + 0x908,1);
    uVar7 = ObjectRef::equals((ObjectRef *)&local_68,(ObjectRef *)local_58);
    if ((uVar7 & 1) == 0) goto LAB_0174827c;
    local_58 = ObjectRef::AsJSFunction((ObjectRef *)&local_78);
    if ((FLAG_concurrent_inlining == '\0') ||
       (uVar7 = JSFunctionRef::serialized((JSFunctionRef *)local_58), (uVar7 & 1) != 0)) {
      local_88 = HeapObjectRef::map((HeapObjectRef *)local_58);
      uVar7 = MapRef::has_prototype_slot((MapRef *)local_88);
      if ((((uVar7 & 1) == 0) ||
          (uVar7 = JSFunctionRef::has_prototype((JSFunctionRef *)local_58), (uVar7 & 1) == 0)) ||
         (uVar7 = JSFunctionRef::PrototypeRequiresRuntimeLookup((JSFunctionRef *)local_58),
         (uVar7 & 1) != 0)) goto LAB_0174846c;
      auVar13 = CompilationDependencies::DependOnPrototypeProperty
                          (*(CompilationDependencies **)(this + 0x38),(JSFunctionRef *)local_58);
      local_88 = auVar13;
      uVar8 = JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)local_88);
LAB_017482d4:
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar8,0,0);
      goto LAB_01748470;
    }
    if ((*(JSHeapBroker **)(this + 0x18))[0x74] != (JSHeapBroker)0x0) {
      pbVar10 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
      pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar10,"Missing ",8);
      pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar10,"data for function ",0x12);
      pbVar10 = (basic_ostream *)compiler::operator<<(pbVar10,(ObjectRef *)local_58);
      pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar10," (",2);
      pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar10,"../../src/compiler/js-native-context-specialization.cc",0x36);
      pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar10,":",1);
      pbVar10 = (basic_ostream *)
                std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                          ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,0x532);
      pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar10,")",1);
      std::__ndk1::ios_base::getloc();
      plVar6 = (long *)std::__ndk1::locale::use_facet
                                 ((locale *)local_88,(id *)&std::__ndk1::ctype<char>::id);
      cVar3 = (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)local_88);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,cVar3);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10);
    }
  }
  else {
LAB_01748300:
    auVar2._8_8_ = local_58._8_8_;
    auVar2._0_8_ = local_58._0_8_;
    auVar13._8_8_ = local_88._8_8_;
    auVar13._0_8_ = local_88._0_8_;
    if ((puVar5[1] != 0) && (local_88 = auVar13, local_58 = auVar2, *(int *)(puVar5 + 2) != -1)) {
      local_a0[0] = 1;
      uStack_90 = uStack_60;
      local_98 = local_68;
      puVar12 = *(undefined8 **)(this + 0x10);
      lVar11 = puVar12[0x2c];
      if (lVar11 == 0) {
        this_00 = (Graph *)*puVar12;
        pOVar9 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar12[1]);
        local_58._0_8_ = (Node *)0x0;
        lVar11 = Graph::NewNode(this_00,pOVar9,0,(Node **)local_58,false);
        puVar12[0x2c] = lVar11;
      }
      local_58._0_8_ = puVar5[1];
      local_58._8_4_ = *(undefined4 *)(puVar5 + 2);
      uVar8 = ReducePropertyAccess(this,param_1,0,local_a0,lVar11,local_58,0);
      goto LAB_01748470;
    }
  }
LAB_0174846c:
  uVar8 = 0;
LAB_01748470:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

