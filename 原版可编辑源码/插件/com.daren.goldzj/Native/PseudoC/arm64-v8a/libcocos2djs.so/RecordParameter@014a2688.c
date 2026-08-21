
/* v8::internal::DeclarationScope::RecordParameter(bool) */

void __thiscall v8::internal::DeclarationScope::RecordParameter(DeclarationScope *this,bool param_1)

{
  ushort uVar1;
  
  uVar1 = 8;
  if (!param_1) {
    uVar1 = 0;
  }
  *(ushort *)(this + 0x83) = *(ushort *)(this + 0x83) & 0xfff7 | uVar1;
  if (!param_1) {
    *(int *)(this + 0x88) = *(int *)(this + 0x88) + 1;
  }
  return;
}

