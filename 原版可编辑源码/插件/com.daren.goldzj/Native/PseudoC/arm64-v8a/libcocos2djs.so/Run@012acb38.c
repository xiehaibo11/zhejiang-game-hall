
/* v8::internal::compiler::GraphBuilderPhase::Run(v8::internal::compiler::PipelineData*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::GraphBuilderPhase::Run
          (GraphBuilderPhase *this,PipelineData *param_1,Zone *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48 [2];
  ObjectRef aOStack_40 [16];
  
  uVar1 = **(uint **)(param_1 + 0x18);
  ObjectRef::ObjectRef
            (aOStack_40,*(undefined8 *)(param_1 + 0x140),
             *(undefined8 *)(*(uint **)(param_1 + 0x18) + 8),0);
  uVar2 = ObjectRef::IsJSFunction(aOStack_40);
  if ((uVar2 & 1) != 0) {
    local_48[0] = 0x3f800000;
    uVar3 = *(undefined8 *)(param_1 + 0x140);
    local_58 = JSFunctionRef::shared((JSFunctionRef *)aOStack_40);
    local_68 = JSFunctionRef::feedback_vector((JSFunctionRef *)aOStack_40);
    BuildGraphFromBytecode
              (uVar3,param_2,local_58,local_68,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x38),
               *(undefined8 *)(param_1 + 0xd8),local_48,*(undefined8 *)(param_1 + 0xa8),0xffffffff,
               uVar1 >> 3 & 4 | uVar1 >> 0xb & 2,*(long *)(param_1 + 0x18) + 0x98);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsJSFunction()");
}

