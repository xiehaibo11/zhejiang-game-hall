
/* v8::internal::SimpleStringBuilder::AddPadding(char, int) */

void __thiscall
v8::internal::SimpleStringBuilder::AddPadding(SimpleStringBuilder *this,char param_1,int param_2)

{
  int iVar1;
  
  if (0 < param_2) {
    do {
      iVar1 = *(int *)(this + 0x10);
      param_2 = param_2 + -1;
      *(int *)(this + 0x10) = iVar1 + 1;
      *(char *)(*(long *)this + (long)iVar1) = param_1;
    } while (param_2 != 0);
  }
  return;
}

