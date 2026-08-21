
/* v8::internal::Scope::Scope(v8::internal::Zone*) */

void __thiscall v8::internal::Scope::Scope(Scope *this,Zone *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  
  *(Zone **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar1) < 0xc0) {
    puVar1 = (undefined8 *)Zone::NewExpand(param_1,0xc0);
    *(undefined8 **)(this + 0x20) = puVar1;
  }
  else {
    *(undefined8 **)(param_1 + 0x10) = puVar1 + 0x18;
    *(undefined8 **)(this + 0x20) = puVar1;
  }
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(this + 0x28) = 8;
    *puVar1 = 0;
    if (1 < *(uint *)(this + 0x28)) {
      uVar2 = 1;
      lVar3 = 0x18;
      do {
        uVar2 = uVar2 + 1;
        *(undefined8 *)(*(long *)(this + 0x20) + lVar3) = 0;
        lVar3 = lVar3 + 0x18;
      } while (uVar2 < *(uint *)(this + 0x28));
    }
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
    *(Scope **)(this + 0x40) = this + 0x38;
    *(undefined8 *)(this + 0x58) = 0;
    this[0x80] = (Scope)0x4;
    *(Scope **)(this + 0x60) = this + 0x58;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(Scope **)(this + 0x50) = this + 0x48;
    *(undefined8 *)(this + 0x78) = 0x200000000;
    *(undefined8 *)(this + 0x70) = 0xffffffffffffffff;
    *(ushort *)(this + 0x81) = *(ushort *)(this + 0x81) & 0xf000;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Out of memory: HashMap::Initialize");
}

