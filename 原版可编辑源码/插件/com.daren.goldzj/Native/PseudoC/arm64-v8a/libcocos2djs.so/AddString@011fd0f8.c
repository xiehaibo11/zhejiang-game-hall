
/* v8::internal::SimpleStringBuilder::AddString(char const*) */

void __thiscall
v8::internal::SimpleStringBuilder::AddString(SimpleStringBuilder *this,char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  MemCopy((void *)(*(long *)this + (long)*(int *)(this + 0x10)),param_1,(long)(int)sVar1);
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + (int)sVar1;
  return;
}

