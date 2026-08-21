
/* v8::internal::PerfBasicLogger::LogRecordedBuffer(v8::internal::wasm::WasmCode const*, char
   const*, int) */

void __thiscall
v8::internal::PerfBasicLogger::LogRecordedBuffer
          (PerfBasicLogger *this,WasmCode *param_1,char *param_2,int param_3)

{
  base::OS::FPrint(*(__sFILE **)(this + 0x18),"%lx %x %.*s\n",*(undefined8 *)param_1,
                   (ulong)*(uint *)(param_1 + 8),(ulong)(uint)param_3,param_2);
  return;
}

