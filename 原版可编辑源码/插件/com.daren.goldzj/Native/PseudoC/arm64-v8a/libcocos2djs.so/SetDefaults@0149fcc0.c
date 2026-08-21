
/* v8::internal::DeclarationScope::SetDefaults() */

void __thiscall v8::internal::DeclarationScope::SetDefaults(DeclarationScope *this)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)(this + 0x83);
  *(ushort *)(this + 0x81) = *(ushort *)(this + 0x81) | 0x100;
  *(ushort *)(this + 0x83) = uVar1 & 0xf3c8 | 1;
  if ((this[0x80] == (DeclarationScope)0x2) && (1 < (byte)this[0x85] - 9)) {
    uVar2 = 0x1000;
  }
  else {
    uVar2 = (ushort)(this[0x80] == (DeclarationScope)0x3) << 0xc;
  }
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(ushort *)(this + 0x83) = uVar2 | uVar1 & 0xc200 | 1;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  return;
}

