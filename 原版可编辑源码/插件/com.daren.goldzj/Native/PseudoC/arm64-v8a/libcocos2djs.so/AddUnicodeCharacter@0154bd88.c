
/* v8::internal::RegExpBuilder::AddUnicodeCharacter(int) */

void __thiscall v8::internal::RegExpBuilder::AddUnicodeCharacter(RegExpBuilder *this,int param_1)

{
  uint uVar1;
  ushort uVar2;
  
  if (param_1 < 0x10000) {
    if (((byte)this[0xc] >> 4 & 1) != 0) {
      if ((param_1 & 0xfc00U) == 0xdc00) goto LAB_0154bdd8;
      if ((param_1 & 0xfc00U) == 0xd800) {
        uVar2 = *(ushort *)(this + 0x18);
        if (uVar2 != 0) {
          *(undefined2 *)(this + 0x18) = 0;
          AddCharacterClassForDesugaring(this,(uint)uVar2);
        }
        *(ushort *)(this + 0x18) = (ushort)param_1;
        return;
      }
    }
    AddCharacter(this,(ushort)param_1);
    return;
  }
  uVar2 = *(ushort *)(this + 0x18);
  uVar1 = param_1 + 0xf0000;
  if (uVar2 != 0) {
    *(undefined2 *)(this + 0x18) = 0;
    AddCharacterClassForDesugaring(this,(uint)uVar2);
  }
  param_1 = param_1 & 0x3ffU | 0xffffdc00;
  *(ushort *)(this + 0x18) = (ushort)(uVar1 >> 10) & 0x3ff | 0xd800;
LAB_0154bdd8:
  AddTrailSurrogate(this,(ushort)param_1);
  return;
}

