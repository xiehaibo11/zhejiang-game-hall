
/* v8::debug::WasmScript::Cast(v8::debug::Script*) */

void v8::debug::WasmScript::Cast(Script *param_1)

{
  if ((*(uint *)(*(long *)param_1 + 0x17) & 0xfffffffe) == 6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","script->IsWasm()");
}

