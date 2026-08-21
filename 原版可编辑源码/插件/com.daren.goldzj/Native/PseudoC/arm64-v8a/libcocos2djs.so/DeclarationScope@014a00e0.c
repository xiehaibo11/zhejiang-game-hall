
/* v8::internal::DeclarationScope::DeclarationScope(v8::internal::Zone*, v8::internal::ScopeType,
   v8::internal::Handle<v8::internal::ScopeInfo>) */

void __thiscall
v8::internal::DeclarationScope::DeclarationScope
          (DeclarationScope *this,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ushort uVar1;
  DeclarationScope DVar2;
  ulong uVar3;
  undefined8 local_28;
  
  Scope::Scope();
  local_28 = *param_4;
  DVar2 = (DeclarationScope)ScopeInfo::function_kind((ScopeInfo *)&local_28);
  *(undefined8 *)(this + 0xa0) = 0;
  *(ushort *)(this + 0x81) = *(ushort *)(this + 0x81) | 0x100;
  uVar1 = (ushort)(this[0x80] == (DeclarationScope)0x3) << 0xc;
  if (this[0x80] == (DeclarationScope)0x2 && 1 < (byte)((char)DVar2 - 9U)) {
    uVar1 = 0x1000;
  }
  this[0x85] = DVar2;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(DeclarationScope **)(this + 0xa8) = this + 0xa0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(ushort *)(this + 0x83) = *(ushort *)(this + 0x83) & 0xc200 | uVar1 | 1;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  local_28 = *param_4;
  uVar3 = ScopeInfo::SloppyEvalCanExtendVars((ScopeInfo *)&local_28);
  if ((uVar3 & 1) != 0) {
    *(ushort *)(this + 0x81) = *(ushort *)(this + 0x81) | 4;
  }
  return;
}

