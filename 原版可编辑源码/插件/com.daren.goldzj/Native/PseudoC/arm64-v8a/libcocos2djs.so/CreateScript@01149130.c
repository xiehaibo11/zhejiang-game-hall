
/* v8::internal::ParseInfo::CreateScript(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::String>, v8::ScriptOriginOptions, v8::internal::REPLMode,
   v8::internal::NativesFlag) */

long * __thiscall
v8::internal::ParseInfo::CreateScript
          (ParseInfo *this,Isolate *param_1,undefined8 param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  
  if (*(int *)(this + 0x34) == -1) {
    plVar3 = (long *)Factory::NewScript(param_1,param_3);
  }
  else {
    plVar3 = (long *)Factory::NewScriptWithId((Factory *)param_1,param_3,*(int *)(this + 0x34));
  }
  uVar4 = Isolate::NeedsSourcePositionsForProfiling(param_1);
  if ((uVar4 & 1) != 0) {
    Script::InitLineEnds(plVar3);
  }
  if (param_6 == 1) {
    lVar5 = *plVar3;
    uVar6 = 2;
  }
  else {
    if (param_6 != 2) goto LAB_011491bc;
    lVar5 = *plVar3;
    uVar6 = 8;
  }
  *(undefined4 *)(lVar5 + 0x17) = uVar6;
LAB_011491bc:
  *(uint *)(*plVar3 + 0x2f) = *(uint *)(*plVar3 + 0x2f) & 0xffffff0e | param_4 << 4;
  uVar1 = *(int *)(*plVar3 + 0x2f) >> 1;
  uVar2 = uVar1 | 4;
  if (param_5 != 0) {
    uVar2 = uVar1 & 0x7ffffffb;
  }
  *(int *)(*plVar3 + 0x2f) = uVar2 << 1;
  SetScriptForToplevelCompile(this,param_1,plVar3);
  return plVar3;
}

