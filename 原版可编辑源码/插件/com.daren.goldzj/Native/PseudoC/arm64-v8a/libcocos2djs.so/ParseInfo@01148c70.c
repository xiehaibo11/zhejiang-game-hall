
/* v8::internal::ParseInfo::ParseInfo(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Script>) */

void __thiscall
v8::internal::ParseInfo::ParseInfo(ParseInfo *this,Isolate *param_1,undefined8 *param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 local_18;
  
  ParseInfo(this,param_1,*(AccountingAllocator **)(param_1 + 0x95d0));
  SetScriptForToplevelCompile(this,param_1,param_3);
  if (*(int *)(param_1 + 0xb814) == 1) {
    local_18 = *param_3;
    uVar1 = Script::IsUserJavaScript((Script *)&local_18);
    uVar2 = *(uint *)(this + 8) | 0x200;
    if ((uVar1 & 1) == 0) {
      uVar2 = *(uint *)(this + 8) & 0xfffffdff;
    }
  }
  else {
    uVar2 = *(uint *)(this + 8) & 0xfffffdff;
  }
  *(uint *)(this + 8) = uVar2;
  return;
}

