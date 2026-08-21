
/* v8::internal::compiler::SerializationPhase::Run(v8::internal::compiler::PipelineData*,
   v8::internal::Zone*) */

void v8::internal::compiler::SerializationPhase::Run(PipelineData *param_1,Zone *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  ObjectRef aOStack_30 [16];
  
  puVar3 = *(uint **)(param_2 + 0x18);
  uVar1 = *puVar3;
  RunSerializerForBackgroundCompilation
            (*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x140),
             *(undefined8 *)(param_2 + 0x138),*(undefined8 *)(puVar3 + 8),
             uVar1 >> 3 & 2 | uVar1 >> 5 & 1 | uVar1 >> 10 & 4 | (uVar1 & 2) << 2,puVar3[0xe]);
  if (param_2[0x1b8] != (Zone)0x0) {
    ObjectRef::ObjectRef
              (aOStack_30,*(undefined8 *)(param_2 + 0x140),*(undefined8 *)(param_2 + 0x1c0),0);
    uVar2 = ObjectRef::IsContext(aOStack_30);
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsContext()");
    }
  }
  return;
}

