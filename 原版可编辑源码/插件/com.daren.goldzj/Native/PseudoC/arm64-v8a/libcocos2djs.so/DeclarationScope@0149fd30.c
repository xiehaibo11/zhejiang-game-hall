
/* v8::internal::DeclarationScope::DeclarationScope(v8::internal::Zone*, v8::internal::Scope*,
   v8::internal::ScopeType, v8::internal::FunctionKind) */

void __thiscall
v8::internal::DeclarationScope::DeclarationScope
          (DeclarationScope *this,Zone *param_1,undefined8 param_3,undefined8 param_4,
          DeclarationScope param_5)

{
  ushort uVar1;
  long lVar2;
  ushort uVar3;
  
  Scope::Scope();
  this[0x85] = param_5;
  *(undefined4 *)(this + 0x88) = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - lVar2) < 0x20) {
    lVar2 = Zone::NewExpand(param_1,0x20);
  }
  else {
    *(long *)(param_1 + 0x10) = lVar2 + 0x20;
  }
  *(undefined8 *)(this + 0xa0) = 0;
  uVar1 = *(ushort *)(this + 0x83);
  *(ushort *)(this + 0x81) = *(ushort *)(this + 0x81) | 0x100;
  *(long *)(this + 0x90) = lVar2;
  *(DeclarationScope **)(this + 0xa8) = this + 0xa0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0x98) = 4;
  *(ushort *)(this + 0x83) = uVar1 & 0xf3c8 | 1;
  if ((this[0x80] == (DeclarationScope)0x2) && (1 < (byte)this[0x85] - 9)) {
    uVar3 = 0x1000;
  }
  else {
    uVar3 = (ushort)(this[0x80] == (DeclarationScope)0x3) << 0xc;
  }
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(ushort *)(this + 0x83) = uVar3 | uVar1 & 0xc200 | 1;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  return;
}

