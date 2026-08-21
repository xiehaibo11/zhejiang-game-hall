
/* v8::internal::wasm::LiftoffAssembler::SpillOneRegister(v8::internal::wasm::LiftoffRegList,
   v8::internal::wasm::LiftoffRegList) */

ulong __thiscall
v8::internal::wasm::LiftoffAssembler::SpillOneRegister
          (LiftoffAssembler *this,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  
  uVar1 = *(ulong *)(this + 0x338);
  param_2 = param_2 & (param_3 ^ 0xffffffffffffffff);
  uVar3 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if (uVar3 == 0) {
    uVar1 = 0;
    *(undefined8 *)(this + 0x338) = 0;
    uVar3 = param_2;
  }
  uVar3 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
  uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
  uVar3 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20);
  uVar4 = 1L << (uVar3 & 0x3f);
  *(ulong *)(this + 0x338) = uVar4 | uVar1;
  iVar5 = *(int *)(this + uVar3 * 4 + 0x248);
  lVar2 = *(long *)(this + 0x1c8);
  uVar6 = (int)((ulong)(*(long *)(this + 0x1d0) - lVar2) >> 2) * -0x55555555;
  while( true ) {
    do {
      do {
        uVar6 = uVar6 - 1;
        pcVar7 = (char *)(lVar2 + (ulong)uVar6 * 0xc);
      } while (*pcVar7 != '\x01');
    } while ((uint)*(byte *)(lVar2 + (ulong)uVar6 * 0xc + 4) != (uint)uVar3);
    Spill(this,*(undefined4 *)(pcVar7 + 8),uVar3,pcVar7[1]);
    iVar5 = iVar5 + -1;
    *pcVar7 = '\0';
    if (iVar5 == 0) break;
    lVar2 = *(long *)(this + 0x1c8);
  }
  *(undefined4 *)(this + uVar3 * 4 + 0x248) = 0;
  *(ulong *)(this + 0x240) = *(ulong *)(this + 0x240) & (uVar4 ^ 0xffffffffffffffff);
  return uVar3;
}

