
/* v8::internal::ParseInfo::SetScriptForToplevelCompile(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Script>) */

void __thiscall
v8::internal::ParseInfo::SetScriptForToplevelCompile(ParseInfo *this,long param_1,ulong *param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong local_18;
  
  set_script(this,param_3);
  uVar3 = *(uint *)(this + 8);
  *(uint *)(this + 8) = uVar3 | 0x81;
  if (*(int *)(param_1 + 0xb814) == 1) {
    local_18 = *param_3;
    uVar2 = Script::IsUserJavaScript((Script *)&local_18);
    uVar3 = *(uint *)(this + 8) | 0x200;
    if ((uVar2 & 1) == 0) {
      uVar3 = *(uint *)(this + 8) & 0xfffffdff;
    }
  }
  else {
    uVar3 = uVar3 & 0xfffffdff | 0x81;
  }
  *(uint *)(this + 8) = uVar3;
  uVar1 = uVar3 & 0xbfffffff;
  if ((*(uint *)(*param_3 + 0x2f) & 8) != 0) {
    uVar1 = uVar3 | 0x40000000;
  }
  *(uint *)(this + 8) = uVar1;
  uVar3 = *(uint *)(*param_3 + 0x23);
  if (((uVar3 & 1) != 0) &&
     (uVar2 = *param_3 & 0xffffffff00000000,
     *(ushort *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar3) - 1)) - 0x76 < 0xf)) {
    this[0x31] = (ParseInfo)0x4;
  }
  return;
}

