
/* v8::internal::DeclarationScope::DeclareThis(v8::internal::AstValueFactory*) */

void __thiscall
v8::internal::DeclarationScope::DeclareThis(DeclarationScope *this,AstValueFactory *param_1)

{
  DeclarationScope DVar1;
  undefined8 *puVar2;
  ushort uVar3;
  Zone *this_00;
  undefined8 uVar4;
  
  this_00 = *(Zone **)this;
  DVar1 = this[0x85];
  puVar2 = *(undefined8 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar2) < 0x30) {
    puVar2 = (undefined8 *)Zone::NewExpand(this_00,0x30);
  }
  else {
    *(undefined8 **)(this_00 + 0x10) = puVar2 + 6;
  }
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x1d8);
  uVar3 = 0x21;
  if (1 < (byte)((char)DVar1 - 5U)) {
    uVar3 = 0x22;
  }
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0xffffffffffffffff;
  *(ushort *)(puVar2 + 5) = uVar3 | (ushort)(1 < (byte)((char)DVar1 - 5U)) << 0xc;
  *puVar2 = this;
  puVar2[1] = uVar4;
  *(undefined8 **)(this + 0xb0) = puVar2;
  return;
}

