
/* v8::internal::compiler::Pipeline::NewWasmHeapStubCompilationJob(v8::internal::Isolate*,
   v8::internal::wasm::WasmEngine*, v8::internal::compiler::CallDescriptor*,
   std::__ndk1::unique_ptr<v8::internal::Zone, std::__ndk1::default_delete<v8::internal::Zone> >,
   v8::internal::compiler::Graph*, v8::internal::Code::Kind, std::__ndk1::unique_ptr<char [],
   std::__ndk1::default_delete<char []> >, v8::internal::AssemblerOptions const&,
   v8::internal::compiler::SourcePositionTable*) */

void __thiscall
v8::internal::compiler::Pipeline::NewWasmHeapStubCompilationJob
          (undefined8 *param_1_00,Pipeline *this,undefined8 param_1,undefined8 param_2,
          undefined8 *param_3,undefined8 param_6,undefined4 param_7,undefined8 *param_8,
          undefined8 param_9,undefined8 param_10)

{
  void *pvVar1;
  Zone *this_00;
  WasmHeapStubCompilationJob *pWVar2;
  void *local_70;
  Zone *local_68;
  
  pWVar2 = operator_new(0x338);
  local_68 = (Zone *)*param_3;
  *param_3 = 0;
  local_70 = (void *)*param_8;
  *param_8 = 0;
  WasmHeapStubCompilationJob::WasmHeapStubCompilationJob
            (pWVar2,this,param_1,param_2,&local_68,param_6,param_7,&local_70,param_9,param_10);
  pvVar1 = local_70;
  local_70 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  this_00 = local_68;
  local_68 = (Zone *)0x0;
  if (this_00 != (Zone *)0x0) {
    Zone::~Zone(this_00);
    operator_delete(this_00);
  }
  *param_1_00 = pWVar2;
  return;
}

