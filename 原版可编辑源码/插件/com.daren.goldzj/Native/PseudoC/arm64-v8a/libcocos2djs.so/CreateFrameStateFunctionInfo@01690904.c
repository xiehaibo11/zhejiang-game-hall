
/* v8::internal::compiler::CommonOperatorBuilder::CreateFrameStateFunctionInfo(v8::internal::compiler::FrameStateType,
   int, int, v8::internal::Handle<v8::internal::SharedFunctionInfo>) */

void __thiscall
v8::internal::compiler::CommonOperatorBuilder::CreateFrameStateFunctionInfo
          (CommonOperatorBuilder *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined4 *puVar1;
  Zone *this_00;
  
  this_00 = *(Zone **)(this + 8);
  puVar1 = *(undefined4 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar1) < 0x18) {
    puVar1 = (undefined4 *)Zone::NewExpand(this_00,0x18);
  }
  else {
    *(undefined4 **)(this_00 + 0x10) = puVar1 + 6;
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  *(undefined8 *)(puVar1 + 4) = param_5;
  return;
}

