
/* v8::internal::compiler::CodeAssembler::AtomicCompareExchange(v8::internal::MachineType,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void v8::internal::compiler::CodeAssembler::AtomicCompareExchange
               (undefined8 *param_1,undefined2 param_2)

{
  RawMachineAssembler::AtomicCompareExchange(*(RawMachineAssembler **)*param_1,param_2);
  return;
}

