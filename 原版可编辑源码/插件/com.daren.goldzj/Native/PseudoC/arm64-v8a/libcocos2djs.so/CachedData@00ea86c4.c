
/* v8::ScriptCompiler::CachedData::CachedData(unsigned char const*, int,
   v8::ScriptCompiler::CachedData::BufferPolicy) */

void __thiscall
v8::ScriptCompiler::CachedData::CachedData
          (CachedData *this,undefined8 param_1,undefined4 param_2,undefined4 param_4)

{
  *(undefined8 *)this = param_1;
  *(undefined4 *)(this + 8) = param_2;
  this[0xc] = (CachedData)0x0;
  *(undefined4 *)(this + 0x10) = param_4;
  return;
}

