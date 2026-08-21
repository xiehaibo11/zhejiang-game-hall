
/* v8::internal::RegExpBuilder::AddEscapedUnicodeCharacter(int) */

void __thiscall
v8::internal::RegExpBuilder::AddEscapedUnicodeCharacter(RegExpBuilder *this,int param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(this + 0x18);
  if (uVar1 != 0) {
    *(undefined2 *)(this + 0x18) = 0;
    AddCharacterClassForDesugaring(this,(uint)uVar1);
  }
  AddUnicodeCharacter(this,param_1);
  uVar1 = *(ushort *)(this + 0x18);
  if (uVar1 != 0) {
    *(undefined2 *)(this + 0x18) = 0;
    AddCharacterClassForDesugaring(this,(uint)uVar1);
    return;
  }
  return;
}

