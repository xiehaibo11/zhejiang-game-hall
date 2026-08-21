
/* v8::internal::compiler::PropertyAccessBuilder::TryBuildNumberCheck(v8::internal::compiler::JSHeapBroker*,
   v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map> > const&,
   v8::internal::compiler::Node**, v8::internal::compiler::Node**, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::PropertyAccessBuilder::TryBuildNumberCheck
          (PropertyAccessBuilder *this,JSHeapBroker *param_1,ZoneVector *param_2,Node **param_3,
          Node **param_4,Node *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  short sVar4;
  ulong uVar5;
  Operator *pOVar6;
  Node *pNVar7;
  undefined8 uVar8;
  Graph *this_00;
  Node *local_80;
  Node *pNStack_78;
  Node *local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar1 = *(undefined8 **)param_2;
  puVar2 = *(undefined8 **)(param_2 + 8);
  do {
    if (puVar1 == puVar2) {
      this_00 = (Graph *)**(undefined8 **)this;
      local_68 = 0;
      local_60 = 0xffffffff;
      pOVar6 = (Operator *)
               SimplifiedOperatorBuilder::CheckNumber
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)this)[0x2f],
                          (FeedbackSource *)&local_68);
      local_80 = *param_3;
      pNStack_78 = *param_4;
      local_70 = param_5;
      pNVar7 = (Node *)Graph::NewNode(this_00,pOVar6,3,&local_80,false);
      *param_4 = pNVar7;
      *param_3 = pNVar7;
      uVar8 = 1;
LAB_0179e25c:
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar8);
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_80,param_1,*puVar1,0);
    uVar5 = ObjectRef::IsMap((ObjectRef *)&local_80);
    if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    sVar4 = MapRef::instance_type((MapRef *)&local_80);
    if (sVar4 != 0x42) {
      uVar8 = 0;
      goto LAB_0179e25c;
    }
    puVar1 = puVar1 + 1;
  } while( true );
}

