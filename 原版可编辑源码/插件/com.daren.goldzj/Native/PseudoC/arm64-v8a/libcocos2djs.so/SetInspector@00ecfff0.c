
/* v8::debug::SetInspector(v8::Isolate*, v8_inspector::V8Inspector*) */

void v8::debug::SetInspector(Isolate *param_1,V8Inspector *param_2)

{
  *(V8Inspector **)(param_1 + 0xb820) = param_2;
  return;
}

