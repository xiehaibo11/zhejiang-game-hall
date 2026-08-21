
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceJSStoreInArrayLiteral(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceJSStoreInArrayLiteral
          (JSNativeContextSpecialization *this,Node *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_70 [8];
  undefined1 local_68;
  long local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FeedbackParameterOf(*(Operator **)param_1);
  uVar3 = NodeProperties::GetValueInput(param_1,1);
  uVar4 = NodeProperties::GetValueInput(param_1,2);
  if ((*plVar2 == 0) || ((int)plVar2[1] == -1)) {
    uVar3 = 0;
  }
  else {
    local_70[0] = 0;
    local_68 = 0;
    local_50 = (undefined4)plVar2[1];
    local_58 = *plVar2;
    uVar3 = ReducePropertyAccess(this,param_1,uVar3,local_70,uVar4,&local_58,2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

