
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceJSLoadProperty(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceJSLoadProperty
          (JSNativeContextSpecialization *this,Node *param_1)

{
  Graph *this_00;
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  Operator *pOVar5;
  undefined8 *puVar6;
  undefined1 local_80 [8];
  undefined1 local_78;
  Node *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)PropertyAccessOf(*(Operator **)param_1);
  plVar3 = (long *)NodeProperties::GetValueInput(param_1,1);
  if ((*(short *)(*plVar3 + 0x10) != 0x309) ||
     (lVar4 = ReduceJSLoadPropertyWithEnumeratedKey(this,param_1), lVar4 == 0)) {
    if ((*plVar2 == 0) || ((int)plVar2[1] == -1)) {
      lVar4 = 0;
    }
    else {
      puVar6 = *(undefined8 **)(this + 0x10);
      lVar4 = puVar6[0x2c];
      if (lVar4 == 0) {
        this_00 = (Graph *)*puVar6;
        pOVar5 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar6[1]);
        local_68 = (Node *)0x0;
        lVar4 = Graph::NewNode(this_00,pOVar5,0,&local_68,false);
        puVar6[0x2c] = lVar4;
      }
      local_80[0] = 0;
      local_78 = 0;
      local_60 = (undefined4)plVar2[1];
      local_68 = (Node *)*plVar2;
      lVar4 = ReducePropertyAccess(this,param_1,plVar3,local_80,lVar4,&local_68,0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}

