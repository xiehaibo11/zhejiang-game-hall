
/* v8::internal::SharedFunctionInfo::PassesFilter(char const*) */

uint __thiscall
v8::internal::SharedFunctionInfo::PassesFilter(SharedFunctionInfo *this,char *param_1)

{
  char *pcVar1;
  uint uVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 local_38;
  char *local_18;
  
  sVar3 = strlen(param_1);
  local_38 = DebugName(this);
  String::ToCString(&local_18,&local_38,1,1,0);
  pcVar1 = local_18;
  sVar4 = strlen(local_18);
  uVar2 = internal::PassesFilter(pcVar1,sVar4,param_1,sVar3);
  pcVar1 = local_18;
  local_18 = (char *)0x0;
  if (pcVar1 != (char *)0x0) {
    operator_delete__(pcVar1);
  }
  return uVar2 & 1;
}

