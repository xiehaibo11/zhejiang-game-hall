
/* v8::internal::Factory::NewSharedFunctionInfoForLiteral(v8::internal::FunctionLiteral*,
   v8::internal::Handle<v8::internal::Script>, bool) */

undefined8 __thiscall
v8::internal::Factory::NewSharedFunctionInfoForLiteral
          (Factory *this,FunctionLiteral *param_1,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FunctionLiteral::kind(param_1);
  if (*(undefined8 **)(param_1 + 0x20) == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined8 **)(param_1 + 0x20);
  }
  uVar2 = NewSharedFunctionInfo(this,uVar2,0,0x42,uVar1);
  SharedFunctionInfo::InitFromFunctionLiteral(uVar2,param_1,param_4 & 1);
  SharedFunctionInfo::SetScript(uVar2,param_3,*(undefined4 *)(param_1 + 0x1c),0);
  return uVar2;
}

