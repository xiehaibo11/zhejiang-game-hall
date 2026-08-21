
/* v8::internal::wasm::LiftoffAssembler::SpillAllRegisters() */

void __thiscall v8::internal::wasm::LiftoffAssembler::SpillAllRegisters(LiftoffAssembler *this)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = *(long *)(this + 0x1c8);
  uVar3 = (*(long *)(this + 0x1d0) - lVar2 >> 2) * -0x5555555555555555;
  if ((int)uVar3 != 0) {
    lVar4 = 0;
    while( true ) {
      if (*(char *)(lVar2 + lVar4) == '\x01') {
        puVar1 = (undefined1 *)(lVar2 + lVar4);
        Spill(this,*(undefined4 *)(puVar1 + 8),puVar1[4],puVar1[1]);
        *puVar1 = 0;
      }
      if ((uVar3 & 0xffffffff) * 0xc + -0xc == lVar4) break;
      lVar2 = *(long *)(this + 0x1c8);
      lVar4 = lVar4 + 0xc;
    }
  }
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x32c) = 0;
  *(undefined8 *)(this + 0x324) = 0;
  return;
}

