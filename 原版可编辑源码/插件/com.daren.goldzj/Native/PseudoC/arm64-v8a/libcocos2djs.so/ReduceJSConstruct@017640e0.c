
/* v8::internal::compiler::JSTypedLowering::ReduceJSConstruct(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSConstruct(JSTypedLowering *this,Node *param_1)

{
  undefined8 uVar1;
  CommonOperatorBuilder *this_00;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  long lVar6;
  Node *pNVar7;
  ulong uVar8;
  undefined8 uVar9;
  Node *pNVar10;
  CallDescriptor *pCVar11;
  Operator *pOVar12;
  basic_ostream *pbVar13;
  long *plVar14;
  int iVar15;
  Zone *pZVar16;
  undefined1 auVar17 [16];
  undefined **local_78;
  undefined8 uStack_70;
  MapRef local_68 [16];
  HeapObjectRef local_58 [16];
  int *local_48;
  
  piVar5 = (int *)ConstructParametersOf(*(Operator **)param_1);
  iVar2 = *piVar5;
  lVar6 = NodeProperties::GetValueInput(param_1,0);
  piVar5 = *(int **)(lVar6 + 8);
  iVar3 = iVar2 + -1;
  local_48 = piVar5;
  pNVar7 = (Node *)NodeProperties::GetValueInput(param_1,iVar3);
  if ((((ulong)piVar5 & 1) == 0) && (*piVar5 == 0)) {
    lVar6 = Type::AsHeapConstant((Type *)&local_48);
    uVar8 = ObjectRef::IsJSFunction((ObjectRef *)(lVar6 + 8));
    if ((uVar8 & 1) != 0) {
      lVar6 = Type::AsHeapConstant((Type *)&local_48);
      local_58 = (HeapObjectRef  [16])ObjectRef::AsJSFunction((ObjectRef *)(lVar6 + 8));
      local_68 = (MapRef  [16])HeapObjectRef::map(local_58);
      uVar8 = MapRef::is_constructor(local_68);
      if ((uVar8 & 1) != 0) {
        uVar8 = JSFunctionRef::serialized((JSFunctionRef *)local_58);
        if ((uVar8 & 1) != 0) {
          auVar17 = JSFunctionRef::shared((JSFunctionRef *)local_58);
          local_68 = (MapRef  [16])auVar17;
          uVar8 = SharedFunctionInfoRef::construct_as_builtin((SharedFunctionInfoRef *)local_68);
          uVar1 = *(undefined8 *)(this + 0x18);
          iVar15 = 0x1d;
          if ((uVar8 & 1) != 0) {
            iVar15 = 0x1e;
          }
          uVar9 = Builtins::builtin_handle
                            ((Builtins *)(*(long *)(*(long *)(this + 0x10) + 0x168) + 0x9e00),iVar15
                            );
          ObjectRef::ObjectRef((ObjectRef *)local_68,uVar1,uVar9,0);
          uVar8 = ObjectRef::IsCode((ObjectRef *)local_68);
          if ((uVar8 & 1) != 0) {
            Node::RemoveInput(param_1,iVar3);
            pZVar16 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
            pNVar10 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)local_68);
            Node::InsertInput(param_1,pZVar16,0,pNVar10);
            Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),2,pNVar7);
            pZVar16 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
            pNVar7 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(double)(iVar2 + -2));
            Node::InsertInput(param_1,pZVar16,3,pNVar7);
            pZVar16 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
            pNVar7 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
            Node::InsertInput(param_1,pZVar16,4,pNVar7);
            pZVar16 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
            pNVar7 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
            Node::InsertInput(param_1,pZVar16,5,pNVar7);
            this_00 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1];
            uStack_70 = 0x1d2c648;
            local_78 = &PTR__CallInterfaceDescriptor_01cbd2a0;
            pCVar11 = (CallDescriptor *)
                      Linkage::GetStubCallDescriptor
                                (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_78,iVar3,1,0,0
                                );
            pOVar12 = (Operator *)CommonOperatorBuilder::Call(this_00,pCVar11);
            NodeProperties::ChangeOp(param_1,pOVar12);
            return param_1;
          }
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsCode()");
        }
        if ((*(JSHeapBroker **)(this + 0x18))[0x74] != (JSHeapBroker)0x0) {
          pbVar13 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
          pbVar13 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar13,"Missing ",8);
          pbVar13 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar13,"data for function ",0x12);
          pbVar13 = (basic_ostream *)compiler::operator<<(pbVar13,(ObjectRef *)local_58);
          pbVar13 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar13," (",2);
          pbVar13 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar13,"../../src/compiler/js-typed-lowering.cc",0x27);
          pbVar13 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar13,":",1);
          pbVar13 = (basic_ostream *)
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar13,0x63a);
          pbVar13 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar13,")",1);
          std::__ndk1::ios_base::getloc();
          plVar14 = (long *)std::__ndk1::locale::use_facet
                                      ((locale *)local_68,(id *)&std::__ndk1::ctype<char>::id);
          cVar4 = (**(code **)(*plVar14 + 0x38))(plVar14,10);
          std::__ndk1::locale::~locale((locale *)local_68);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar13,cVar4);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar13);
        }
      }
    }
  }
  return (Node *)0x0;
}

