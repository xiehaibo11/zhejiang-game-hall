
/* v8::internal::LowLevelLogger::LogRecordedBuffer(v8::internal::wasm::WasmCode const*, char const*,
   int) */

void __thiscall
v8::internal::LowLevelLogger::LogRecordedBuffer
          (LowLevelLogger *this,WasmCode *param_1,char *param_2,int param_3)

{
  int local_48 [2];
  undefined8 local_40;
  undefined4 local_38;
  
  local_40 = *(undefined8 *)param_1;
  local_38 = (undefined4)*(undefined8 *)(param_1 + 8);
  local_48[0] = param_3;
  fputc(0x43,*(FILE **)(this + 0x18));
  fwrite(local_48,1,0x18,*(FILE **)(this + 0x18));
  fwrite(param_2,1,(long)param_3,*(FILE **)(this + 0x18));
  fwrite(*(void **)param_1,1,(long)*(int *)(param_1 + 8),*(FILE **)(this + 0x18));
  return;
}

