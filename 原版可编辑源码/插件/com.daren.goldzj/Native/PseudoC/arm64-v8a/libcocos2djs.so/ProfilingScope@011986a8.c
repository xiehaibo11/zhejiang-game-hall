
/* v8::internal::ProfilingScope::ProfilingScope(v8::internal::Isolate*,
   v8::internal::ProfilerListener*) */

void __thiscall
v8::internal::ProfilingScope::ProfilingScope
          (ProfilingScope *this,Isolate *param_1,ProfilerListener *param_2)

{
  Logger *this_00;
  
  *(Isolate **)this = param_1;
  *(ProfilerListener **)(this + 8) = param_2;
  *(long *)(param_1 + 0xb800) = *(long *)(param_1 + 0xb800) + 1;
  *(undefined1 *)(*(long *)this + 0xb7fc) = 1;
  wasm::WasmEngine::EnableCodeLogging
            (*(WasmEngine **)(*(Isolate **)this + 0xc770),*(Isolate **)this);
  this_00 = *(Logger **)(*(long *)this + 0x9558);
  Logger::AddCodeEventListener(this_00,*(CodeEventListener **)(this + 8));
  if (FLAG_prof_browser_mode == '\0') {
    Logger::LogCodeObjects(this_00);
  }
  Logger::LogCompiledFunctions(this_00);
  Logger::LogAccessorCallbacks(this_00);
  return;
}

