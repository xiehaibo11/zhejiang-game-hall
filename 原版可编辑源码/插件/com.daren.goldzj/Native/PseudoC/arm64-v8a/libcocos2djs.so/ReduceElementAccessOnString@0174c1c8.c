
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceElementAccessOnString(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::KeyedAccessMode const&) */

undefined8 __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceElementAccessOnString
          (JSNativeContextSpecialization *this,Node *param_1,Node *param_2,Node *param_3,
          KeyedAccessMode *param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  Node *pNVar4;
  Node *pNVar5;
  undefined8 uVar6;
  Operator *pOVar7;
  Graph *pGVar8;
  undefined8 local_a0;
  Node *local_98;
  Node *local_90;
  Node *pNStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pNVar4 = (Node *)NodeProperties::GetValueInput(param_1,0);
  pNVar5 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  local_98 = pNVar5;
  uVar6 = NodeProperties::GetControlInput(param_1,0);
  local_a0 = uVar6;
  iVar2 = KeyedAccessMode::access_mode(param_4);
  if ((iVar2 == 1) || (iVar2 = KeyedAccessMode::access_mode(param_4), iVar2 == 3)) {
    uVar6 = 0;
  }
  else {
    pGVar8 = (Graph *)**(undefined8 **)(this + 0x10);
    local_78 = 0;
    local_70 = 0xffffffff;
    pOVar7 = (Operator *)
             SimplifiedOperatorBuilder::CheckString
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                        (FeedbackSource *)&local_78);
    local_90 = pNVar4;
    pNStack_88 = pNVar5;
    local_80 = uVar6;
    pNVar4 = (Node *)Graph::NewNode(pGVar8,pOVar7,3,&local_90,false);
    pGVar8 = (Graph *)**(undefined8 **)(this + 0x10);
    local_98 = pNVar4;
    pOVar7 = (Operator *)
             SimplifiedOperatorBuilder::StringLength
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_90 = pNVar4;
    uVar6 = Graph::NewNode(pGVar8,pOVar7,1,&local_90,false);
    uVar3 = KeyedAccessMode::load_mode(param_4);
    uVar6 = BuildIndexedStringLoad(this,pNVar4,param_2,uVar6,&local_98,&local_a0,uVar3);
    (**(code **)(**(long **)(this + 8) + 0x20))
              (*(long **)(this + 8),param_1,uVar6,local_98,local_a0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

