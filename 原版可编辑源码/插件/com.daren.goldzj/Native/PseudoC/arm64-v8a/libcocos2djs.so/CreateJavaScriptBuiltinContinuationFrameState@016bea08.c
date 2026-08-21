
/* v8::internal::compiler::CreateJavaScriptBuiltinContinuationFrameState(v8::internal::compiler::JSGraph*,
   v8::internal::compiler::SharedFunctionInfoRef const&, v8::internal::Builtins::Name,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*
   const*, int, v8::internal::compiler::Node*, v8::internal::compiler::ContinuationFrameStateMode)
    */

undefined8
v8::internal::compiler::CreateJavaScriptBuiltinContinuationFrameState
          (JSGraph *param_1,SharedFunctionInfoRef *param_2,undefined4 param_3,Node *param_4,
          undefined8 param_5,Node **param_6,uint param_7,undefined8 param_8,int param_9)

{
  void *pvVar1;
  Node *pNVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  Node *local_88;
  void *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  Node *local_68;
  Node *local_48;
  
  local_48 = param_4;
  iVar3 = Builtins::GetStackParameterCount(param_3);
  local_68 = (Node *)JSGraph::Constant(param_1,(double)iVar3);
  local_78 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  local_80 = (void *)0x0;
  if (0 < (int)param_7) {
    lVar7 = (ulong)param_7 - 1;
    while (std::__ndk1::
           vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
           ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                     ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                       *)&local_80,param_6), lVar7 != 0) {
      while( true ) {
        param_6 = param_6 + 1;
        lVar7 = lVar7 + -1;
        if (local_78 == local_70) break;
        *local_78 = *param_6;
        local_78 = local_78 + 1;
        if (lVar7 == 0) goto LAB_016beacc;
      }
    }
  }
LAB_016beacc:
  local_88 = (Node *)JSGraph::UndefinedConstant(param_1);
  if (local_78 == local_70) {
    std::__ndk1::
    vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>::
    __push_back_slow_path<v8::internal::compiler::Node*const&>
              ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                *)&local_80,&local_48);
  }
  else {
    *local_78 = local_48;
    local_78 = local_78 + 1;
  }
  if (local_78 == local_70) {
    std::__ndk1::
    vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>::
    __push_back_slow_path<v8::internal::compiler::Node*const&>
              ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                *)&local_80,&local_88);
  }
  else {
    *local_78 = local_88;
    local_78 = local_78 + 1;
  }
  if (local_78 == local_70) {
    std::__ndk1::
    vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>::
    __push_back_slow_path<v8::internal::compiler::Node*const&>
              ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                *)&local_80,&local_68);
  }
  else {
    *local_78 = local_68;
    local_78 = local_78 + 1;
  }
  pNVar2 = local_48;
  pvVar1 = local_80;
  uVar5 = (long)local_78 - (long)local_80;
  uVar6 = 4;
  if (param_9 == 2) {
    uVar6 = 5;
  }
  uVar4 = SharedFunctionInfoRef::object(param_2);
  uVar4 = FUN_016be8fc(param_1,uVar6,param_3,pNVar2,param_5,pvVar1,uVar5 >> 3 & 0xffffffff,param_8,
                       uVar4);
  if (local_80 != (void *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
  return uVar4;
}

