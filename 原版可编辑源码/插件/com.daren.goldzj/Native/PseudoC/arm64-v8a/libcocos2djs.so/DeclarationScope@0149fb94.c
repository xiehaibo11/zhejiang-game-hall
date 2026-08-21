
/* v8::internal::DeclarationScope::DeclarationScope(v8::internal::Zone*,
   v8::internal::AstValueFactory*) */

void __thiscall
v8::internal::DeclarationScope::DeclarationScope
          (DeclarationScope *this,Zone *param_1,AstValueFactory *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  ushort uVar4;
  undefined1 auStack_14 [4];
  
  Scope::Scope((Scope *)this,param_1);
  this[0x85] = (DeclarationScope)0x0;
  *(undefined4 *)(this + 0x88) = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - lVar3) < 0x20) {
    lVar3 = Zone::NewExpand(param_1,0x20);
  }
  else {
    *(long *)(param_1 + 0x10) = lVar3 + 0x20;
  }
  *(undefined8 *)(this + 0xa0) = 0;
  uVar1 = *(ushort *)(this + 0x83);
  *(ushort *)(this + 0x81) = *(ushort *)(this + 0x81) | 0x100;
  *(long *)(this + 0x90) = lVar3;
  *(DeclarationScope **)(this + 0xa8) = this + 0xa0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0x98) = 4;
  *(ushort *)(this + 0x83) = uVar1 & 0xf3c8 | 1;
  if ((this[0x80] == (DeclarationScope)0x2) && (1 < (byte)this[0x85] - 9)) {
    uVar4 = 0x1000;
  }
  else {
    uVar4 = (ushort)(this[0x80] == (DeclarationScope)0x3) << 0xc;
  }
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(ushort *)(this + 0x83) = uVar4 | uVar1 & 0xc200 | 1;
  uVar2 = VariableMap::Declare
                    ((VariableMap *)(this + 0x20),*(undefined8 *)this,this,
                     *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x1d8),5,2,1,0,0,auStack_14);
  *(undefined8 *)(this + 0xb0) = uVar2;
  return;
}

