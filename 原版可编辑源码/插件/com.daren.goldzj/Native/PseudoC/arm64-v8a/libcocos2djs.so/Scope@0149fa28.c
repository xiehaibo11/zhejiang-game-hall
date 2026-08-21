
/* v8::internal::Scope::Scope(v8::internal::Zone*, v8::internal::Scope*, v8::internal::ScopeType) */

void __thiscall v8::internal::Scope::Scope(Scope *this,Zone *param_1,long param_2,Scope param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ushort uVar4;
  undefined4 uVar5;
  long lVar6;
  
  *(Zone **)this = param_1;
  *(long *)(this + 8) = param_2;
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
      lVar6 = 0x18;
      do {
        uVar3 = uVar3 + 1;
        *(undefined8 *)(*(long *)(this + 0x20) + lVar6) = 0;
        lVar6 = lVar6 + 0x18;
      } while (uVar3 < *(uint *)(this + 0x28));
    }
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
    *(Scope **)(this + 0x40) = this + 0x38;
    *(undefined8 *)(this + 0x58) = 0;
    this[0x80] = param_4;
    *(Scope **)(this + 0x60) = this + 0x58;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    uVar1 = *(ushort *)(this + 0x81);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x70) = 0xffffffffffffffff;
    *(Scope **)(this + 0x50) = this + 0x48;
    *(ushort *)(this + 0x81) = uVar1 & 0xf001;
    *(undefined4 *)(this + 0x78) = 0;
    if (((byte)param_4 | 4) == 7) {
      uVar5 = 3;
    }
    else {
      uVar5 = 2;
    }
    *(undefined4 *)(this + 0x7c) = uVar5;
    *(ushort *)(this + 0x81) = uVar1 & 0xf000;
    uVar1 = uVar1 & 0xf000 | *(ushort *)(param_2 + 0x81) & 1;
    *(ushort *)(this + 0x81) = uVar1;
    if (*(char *)(param_2 + 0x80) == '\0') {
      uVar4 = (ushort)((*(byte *)(param_2 + 0x88) & 7) != 0) << 9;
    }
    else {
      uVar4 = 0;
    }
    lVar6 = *(long *)(this + 8);
    *(ushort *)(this + 0x81) = uVar4 | uVar1;
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(lVar6 + 0x10);
    *(Scope **)(lVar6 + 0x10) = this;
    *(long *)(this + 8) = lVar6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Out of memory: HashMap::Initialize");
}

