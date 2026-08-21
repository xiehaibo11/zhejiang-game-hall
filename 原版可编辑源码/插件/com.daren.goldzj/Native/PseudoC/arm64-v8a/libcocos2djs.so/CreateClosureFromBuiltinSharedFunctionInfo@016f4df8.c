
/* v8::internal::compiler::JSCallReducer::CreateClosureFromBuiltinSharedFunctionInfo(v8::internal::compiler::SharedFunctionInfoRef,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void v8::internal::compiler::JSCallReducer::CreateClosureFromBuiltinSharedFunctionInfo
               (long param_1,undefined8 param_2,undefined8 param_3,Node *param_4,undefined8 param_5,
               undefined8 param_6)

{
  undefined4 uVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  Graph *this;
  JSOperatorBuilder *pJVar4;
  undefined8 local_80 [3];
  undefined8 local_68;
  undefined8 uStack_60;
  Node *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x168);
  local_68 = param_2;
  uStack_60 = param_3;
  uVar1 = SharedFunctionInfoRef::builtin_id((SharedFunctionInfoRef *)&local_68);
  Builtins::CallableFor((Builtins *)local_80,uVar3,uVar1);
  this = (Graph *)**(undefined8 **)(param_1 + 0x10);
  pJVar4 = (JSOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2e];
  uVar3 = SharedFunctionInfoRef::object((SharedFunctionInfoRef *)&local_68);
  pOVar2 = (Operator *)
           JSOperatorBuilder::CreateClosure
                     (pJVar4,uVar3,*(long *)(*(long *)(param_1 + 0x10) + 0x168) + 0xe90,local_80[0],
                      0);
  local_58 = param_4;
  uStack_50 = param_5;
  local_48 = param_6;
  Graph::NewNode(this,pOVar2,3,&local_58,false);
  return;
}

