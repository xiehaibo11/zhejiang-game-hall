
/* v8::debug::Script::SetScriptSource(v8::Local<v8::String>, bool, v8::debug::LiveEditResult*) const
    */

void __thiscall
v8::debug::Script::SetScriptSource(Script *this,undefined8 param_2,uint param_3,undefined8 param_4)

{
  internal::Debug::SetScriptSource
            (*(Debug **)((ulong)*(uint *)(this + 4) << 0x20 | 0xb6c8),this,param_2,param_3 & 1,
             param_4);
  return;
}

