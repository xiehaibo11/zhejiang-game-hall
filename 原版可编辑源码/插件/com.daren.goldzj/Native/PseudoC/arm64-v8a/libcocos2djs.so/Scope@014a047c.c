
/* v8::internal::Scope::Scope(v8::internal::Zone*, v8::internal::ScopeType,
   v8::internal::Handle<v8::internal::ScopeInfo>) */

void __thiscall
v8::internal::Scope::Scope(Scope *this,Zone *param_1,Scope param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 local_18;
  
  *(Zone **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar2) < 0xc0) {
    puVar2 = (undefined8 *)Zone::NewExpand(param_1,0xc0);
    *(undefined8 **)(this + 0x20) = puVar2;
  }
  else {
    *(undefined8 **)(param_1 + 0x10) = puVar2 + 0x18;
    *(undefined8 **)(this + 0x20) = puVar2;
  }
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(this + 0x28) = 8;
    *puVar2 = 0;
    if (1 < *(uint *)(this + 0x28)) {
      uVar3 = 1;
      lVar5 = 0x18;
      do {
        uVar3 = uVar3 + 1;
        *(undefined8 *)(*(long *)(this + 0x20) + lVar5) = 0;
        lVar5 = lVar5 + 0x18;
      } while (uVar3 < *(uint *)(this + 0x28));
    }
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
    *(Scope **)(this + 0x40) = this + 0x38;
    *(undefined8 *)(this + 0x58) = 0;
    this[0x80] = param_3;
    *(Scope **)(this + 0x60) = this + 0x58;
    *(undefined8 **)(this + 0x68) = param_4;
    *(undefined8 *)(this + 0x48) = 0;
    uVar1 = *(ushort *)(this + 0x81);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x70) = 0xffffffffffffffff;
    *(Scope **)(this + 0x50) = this + 0x48;
    *(ushort *)(this + 0x81) = uVar1 & 0xf001;
    *(undefined4 *)(this + 0x78) = 0;
    if (((byte)param_3 | 4) == 7) {
      uVar4 = 3;
    }
    else {
      uVar4 = 2;
    }
    *(undefined4 *)(this + 0x7c) = uVar4;
    *(ushort *)(this + 0x81) = uVar1 & 0xf000;
    local_18 = *param_4;
    uVar1 = ScopeInfo::language_mode((ScopeInfo *)&local_18);
    *(ushort *)(this + 0x81) = *(ushort *)(this + 0x81) & 0xfffe | uVar1 & 1;
    local_18 = *param_4;
    uVar3 = ScopeInfo::PrivateNameLookupSkipsOuterClass((ScopeInfo *)&local_18);
    uVar1 = 0x200;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    *(ushort *)(this + 0x81) = *(ushort *)(this + 0x81) & 63999 | uVar1 | 0x400;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Out of memory: HashMap::Initialize");
}

