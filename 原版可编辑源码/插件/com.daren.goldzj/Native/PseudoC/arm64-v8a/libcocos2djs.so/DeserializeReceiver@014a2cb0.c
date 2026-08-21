
/* v8::internal::DeclarationScope::DeserializeReceiver(v8::internal::AstValueFactory*) */

void __thiscall
v8::internal::DeclarationScope::DeserializeReceiver(DeclarationScope *this,AstValueFactory *param_1)

{
  DeclarationScope DVar1;
  undefined4 uVar2;
  Zone *this_00;
  undefined8 *puVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  
  if (this[0x80] != (DeclarationScope)0x4) {
    this_00 = *(Zone **)this;
    DVar1 = this[0x85];
    puVar3 = *(undefined8 **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar3) < 0x30) {
      puVar3 = (undefined8 *)Zone::NewExpand(this_00,0x30);
    }
    else {
      *(undefined8 **)(this_00 + 0x10) = puVar3 + 6;
    }
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x1d8);
    uVar4 = 0x21;
    if (1 < (byte)((char)DVar1 - 5U)) {
      uVar4 = 0x22;
    }
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0xffffffffffffffff;
    *puVar3 = this;
    puVar3[1] = uVar5;
    *(ushort *)(puVar3 + 5) = uVar4 | (ushort)(1 < (byte)((char)DVar1 - 5U)) << 0xc;
    *(undefined8 **)(this + 0xb0) = puVar3;
    if (((byte)this[0x81] >> 5 & 1) == 0) {
      local_38 = **(undefined8 **)(this + 0x68);
      uVar2 = ScopeInfo::ReceiverContextSlotIndex((ScopeInfo *)&local_38);
      *(undefined4 *)(puVar3 + 4) = uVar2;
      uVar4 = *(ushort *)(puVar3 + 5) & 0xfdff | 0x180;
    }
    else {
      *(undefined4 *)(puVar3 + 4) = 0xffffffff;
      uVar4 = *(ushort *)(puVar3 + 5) & 0xfc7f | 0x200;
    }
    *(ushort *)(puVar3 + 5) = uVar4;
  }
  return;
}

