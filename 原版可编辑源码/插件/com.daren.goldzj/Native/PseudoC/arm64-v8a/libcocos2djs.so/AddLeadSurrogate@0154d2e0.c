
/* v8::internal::RegExpBuilder::AddLeadSurrogate(unsigned short) */

void __thiscall v8::internal::RegExpBuilder::AddLeadSurrogate(RegExpBuilder *this,ushort param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(this + 0x18);
  if (uVar1 != 0) {
    *(undefined2 *)(this + 0x18) = 0;
    AddCharacterClassForDesugaring(this,(uint)uVar1);
  }
  *(ushort *)(this + 0x18) = param_1;
  return;
}

