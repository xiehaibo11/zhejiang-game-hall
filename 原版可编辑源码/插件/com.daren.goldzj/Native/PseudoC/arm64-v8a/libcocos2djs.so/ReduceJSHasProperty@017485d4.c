
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceJSHasProperty(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceJSHasProperty
          (JSNativeContextSpecialization *this,Node *param_1)

{
  Graph *this_00;
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 local_80 [8];
  undefined1 local_78;
  Node *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)PropertyAccessOf(*(Operator **)param_1);
  uVar3 = NodeProperties::GetValueInput(param_1,1);
  puVar7 = *(undefined8 **)(this + 0x10);
  lVar5 = puVar7[0x2c];
  if (lVar5 == 0) {
    this_00 = (Graph *)*puVar7;
    pOVar4 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar7[1]);
    local_68 = (Node *)0x0;
    lVar5 = Graph::NewNode(this_00,pOVar4,0,&local_68,false);
    puVar7[0x2c] = lVar5;
    lVar6 = *plVar2;
  }
  else {
    lVar6 = *plVar2;
  }
  if ((lVar6 == 0) || ((int)plVar2[1] == -1)) {
    uVar3 = 0;
  }
  else {
    local_80[0] = 0;
    local_78 = 0;
    local_60 = (undefined4)plVar2[1];
    local_68 = (Node *)*plVar2;
    uVar3 = ReducePropertyAccess(this,param_1,uVar3,local_80,lVar5,&local_68,3);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

