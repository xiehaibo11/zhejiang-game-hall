
/* v8::internal::SimpleStringBuilder::AddSubstring(char const*, int) */

void __thiscall
v8::internal::SimpleStringBuilder::AddSubstring(SimpleStringBuilder *this,char *param_1,int param_2)

{
  MemCopy((void *)(*(long *)this + (long)*(int *)(this + 0x10)),param_1,(long)param_2);
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + param_2;
  return;
}

