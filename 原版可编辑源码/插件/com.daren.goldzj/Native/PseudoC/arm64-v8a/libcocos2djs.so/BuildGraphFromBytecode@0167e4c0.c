
/* v8::internal::compiler::BuildGraphFromBytecode(v8::internal::compiler::JSHeapBroker*,
   v8::internal::Zone*, v8::internal::compiler::SharedFunctionInfoRef const&,
   v8::internal::compiler::FeedbackVectorRef const&, v8::internal::BailoutId,
   v8::internal::compiler::JSGraph*, v8::internal::compiler::CallFrequency const&,
   v8::internal::compiler::SourcePositionTable*, int,
   v8::base::Flags<v8::internal::compiler::BytecodeGraphBuilderFlag, int>,
   v8::internal::TickCounter*) */

void v8::internal::compiler::BuildGraphFromBytecode
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  long lVar1;
  undefined8 local_230;
  undefined8 uStack_228;
  BytecodeGraphBuilder aBStack_218 [496];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","storage_.is_populated_");
  }
  uStack_228 = *(undefined8 *)(param_1 + 0x28);
  local_230 = *(undefined8 *)(param_1 + 0x20);
  BytecodeGraphBuilder::BytecodeGraphBuilder
            (aBStack_218,param_1,param_2,&local_230,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9,param_10,param_11);
  BytecodeGraphBuilder::CreateGraph(aBStack_218);
  BytecodeGraphBuilder::~BytecodeGraphBuilder(aBStack_218);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

