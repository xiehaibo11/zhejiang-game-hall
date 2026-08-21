
/* v8::internal::ReplacementStringBuilder::AddString(v8::internal::Handle<v8::internal::String>) */

void __thiscall
v8::internal::ReplacementStringBuilder::AddString(ReplacementStringBuilder *this,ulong *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_2 + 7);
  AddElement();
  if ((*(byte *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) >> 3 & 1) ==
      0) {
    this[0x24] = (ReplacementStringBuilder)0x0;
  }
  iVar1 = 0x7fffffff;
  if (*(int *)(this + 0x20) <= 0xffffff0 - iVar2) {
    iVar1 = *(int *)(this + 0x20) + iVar2;
  }
  *(int *)(this + 0x20) = iVar1;
  return;
}

