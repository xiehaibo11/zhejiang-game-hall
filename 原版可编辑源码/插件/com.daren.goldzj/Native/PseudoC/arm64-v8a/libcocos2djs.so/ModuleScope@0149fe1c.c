
/* v8::internal::ModuleScope::ModuleScope(v8::internal::DeclarationScope*,
   v8::internal::AstValueFactory*) */

void __thiscall
v8::internal::ModuleScope::ModuleScope
          (ModuleScope *this,DeclarationScope *param_1,AstValueFactory *param_2)

{
  ModuleScope MVar1;
  long lVar2;
  undefined8 *puVar3;
  ushort uVar4;
  undefined8 uVar5;
  ushort uVar6;
  Zone *pZVar7;
  
  pZVar7 = *(Zone **)(param_2 + 0x448);
  Scope::Scope((Scope *)this,pZVar7,param_1,3);
  *(undefined4 *)(this + 0x88) = 0;
  this[0x85] = (ModuleScope)0x1;
  lVar2 = *(long *)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - lVar2) < 0x20) {
    lVar2 = Zone::NewExpand(pZVar7,0x20);
  }
  else {
    *(long *)(pZVar7 + 0x10) = lVar2 + 0x20;
  }
  *(undefined8 *)(this + 0xa0) = 0;
  uVar4 = *(ushort *)(this + 0x83);
  *(ushort *)(this + 0x81) = *(ushort *)(this + 0x81) | 0x100;
  *(long *)(this + 0x90) = lVar2;
  *(ModuleScope **)(this + 0xa8) = this + 0xa0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0x98) = 4;
  *(ushort *)(this + 0x83) = uVar4 & 0xf3c8 | 1;
  if ((this[0x80] == (ModuleScope)0x2) && (1 < (byte)this[0x85] - 9)) {
    uVar6 = 0x1000;
  }
  else {
    uVar6 = (ushort)(this[0x80] == (ModuleScope)0x3) << 0xc;
  }
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(ushort *)(this + 0x83) = uVar6 | uVar4 & 0xc200 | 1;
  pZVar7 = *(Zone **)(param_2 + 0x448);
  puVar3 = *(undefined8 **)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)puVar3) < 0xa0) {
    puVar3 = (undefined8 *)Zone::NewExpand(pZVar7,0xa0);
  }
  else {
    *(undefined8 **)(pZVar7 + 0x10) = puVar3 + 0x14;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x448);
  puVar3[1] = 0;
  *puVar3 = puVar3 + 1;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[2] = uVar5;
  puVar3[3] = 0;
  puVar3[6] = 0;
  puVar3[7] = uVar5;
  puVar3[10] = 0;
  puVar3[0xb] = uVar5;
  puVar3[0xd] = 0;
  puVar3[0xe] = uVar5;
  puVar3[0xf] = 0;
  puVar3[0xc] = puVar3 + 0xd;
  puVar3[0x11] = 0;
  puVar3[0x12] = uVar5;
  puVar3[0x13] = 0;
  puVar3[0x10] = puVar3 + 0x11;
  pZVar7 = *(Zone **)this;
  *(undefined8 **)(this + 0xe0) = puVar3;
  MVar1 = this[0x85];
  *(ushort *)(this + 0x81) = *(ushort *)(this + 0x81) | 1;
  puVar3 = *(undefined8 **)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)puVar3) < 0x30) {
    puVar3 = (undefined8 *)Zone::NewExpand(pZVar7,0x30);
  }
  else {
    *(undefined8 **)(pZVar7 + 0x10) = puVar3 + 6;
  }
  uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x1d8);
  uVar4 = 0x21;
  if (1 < (byte)((char)MVar1 - 5U)) {
    uVar4 = 0x22;
  }
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0xffffffffffffffff;
  *(ushort *)(puVar3 + 5) = uVar4 | (ushort)(1 < (byte)((char)MVar1 - 5U)) << 0xc;
  *puVar3 = this;
  puVar3[1] = uVar5;
  *(undefined8 **)(this + 0xb0) = puVar3;
  return;
}

