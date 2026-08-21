
/* v8::internal::compiler::CreateStubBuiltinContinuationFrameState(v8::internal::compiler::JSGraph*,
   v8::internal::Builtins::Name, v8::internal::compiler::Node*, v8::internal::compiler::Node*
   const*, int, v8::internal::compiler::Node*, v8::internal::compiler::ContinuationFrameStateMode)
    */

undefined8
v8::internal::compiler::CreateStubBuiltinContinuationFrameState
          (JSGraph *param_1,undefined4 param_2,undefined8 param_3,Node **param_4,undefined8 param_5,
          undefined8 param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined8 *local_80;
  Builtins aBStack_78 [16];
  int *local_68;
  
  Builtins::CallableFor(aBStack_78,*(undefined8 *)(param_1 + 0x168));
  puStack_88 = (undefined8 *)0x0;
  local_80 = (undefined8 *)0x0;
  local_90 = (undefined8 *)0x0;
  if (2 < param_7) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  iVar1 = local_68[2];
  iVar5 = *local_68;
  iVar2 = iVar1 - param_7;
  if (iVar2 != 0) {
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puStack_88 = operator_new((long)iVar2 * 8);
    local_80 = puStack_88 + iVar2;
  }
  iVar1 = iVar1 - iVar5;
  local_90 = puStack_88;
  if (0 < (int)(iVar1 - param_7)) {
    iVar5 = 0;
    while( true ) {
      if (puStack_88 == local_80) {
        std::__ndk1::
        vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
        ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                  ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                    *)&local_90,param_4 + (iVar5 + *local_68));
      }
      else {
        *puStack_88 = param_4[iVar5 + *local_68];
        puStack_88 = puStack_88 + 1;
      }
      if (~param_7 + iVar1 == iVar5) break;
      iVar5 = iVar5 + 1;
    }
  }
  if (0 < *local_68) {
    lVar4 = 0;
    do {
      if (puStack_88 == local_80) {
        std::__ndk1::
        vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
        ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                  ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                    *)&local_90,param_4);
      }
      else {
        *puStack_88 = *param_4;
        puStack_88 = puStack_88 + 1;
      }
      lVar4 = lVar4 + 1;
      param_4 = param_4 + 1;
    } while (lVar4 < *local_68);
  }
  uVar3 = JSGraph::UndefinedConstant(param_1);
  uVar3 = FUN_016be8fc(param_1,3,param_2,uVar3,param_3,local_90,
                       (ulong)((long)puStack_88 - (long)local_90) >> 3,param_6,0);
  if (local_90 != (undefined8 *)0x0) {
    puStack_88 = local_90;
    operator_delete(local_90);
  }
  return uVar3;
}

