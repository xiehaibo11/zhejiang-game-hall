
/* v8::internal::CpuProfilesCollection::IsLastProfile(char const*) */

bool __thiscall
v8::internal::CpuProfilesCollection::IsLastProfile(CpuProfilesCollection *this,char *param_1)

{
  int iVar1;
  
  if (*(long *)(this + 0x40) - (long)*(undefined8 **)(this + 0x38) != 8) {
    return false;
  }
  if (*param_1 != '\0') {
    iVar1 = strcmp(*(char **)**(undefined8 **)(this + 0x38),param_1);
    return iVar1 == 0;
  }
  return true;
}

