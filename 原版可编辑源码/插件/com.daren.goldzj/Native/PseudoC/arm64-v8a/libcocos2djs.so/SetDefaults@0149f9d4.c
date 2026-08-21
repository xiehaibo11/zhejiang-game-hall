
/* v8::internal::Scope::SetDefaults() */

void __thiscall v8::internal::Scope::SetDefaults(Scope *this)

{
  ushort uVar1;
  undefined4 uVar2;
  
  *(undefined8 *)(this + 0x48) = 0;
  uVar1 = *(ushort *)(this + 0x81);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(Scope **)(this + 0x50) = this + 0x48;
  *(undefined8 *)(this + 0x70) = 0xffffffffffffffff;
  *(ushort *)(this + 0x81) = uVar1 & 0xf001;
  *(undefined4 *)(this + 0x78) = 0;
  if (((byte)this[0x80] | 4) == 7) {
    uVar2 = 3;
  }
  else {
    uVar2 = 2;
  }
  *(undefined4 *)(this + 0x7c) = uVar2;
  *(ushort *)(this + 0x81) = uVar1 & 0xf000;
  return;
}

