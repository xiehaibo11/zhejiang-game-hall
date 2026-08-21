
/* v8::internal::wasm::LiftoffAssembler::SpillRegister(v8::internal::wasm::LiftoffRegister) */

void __thiscall
v8::internal::wasm::LiftoffAssembler::SpillRegister(LiftoffAssembler *this,byte param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  iVar2 = *(int *)(this + (ulong)param_2 * 4 + 0x248);
  lVar1 = *(long *)(this + 0x1c8);
  uVar3 = (int)((ulong)(*(long *)(this + 0x1d0) - lVar1) >> 2) * -0x55555555;
  while( true ) {
    do {
      do {
        uVar3 = uVar3 - 1;
        pcVar4 = (char *)(lVar1 + (ulong)uVar3 * 0xc);
      } while (*pcVar4 != '\x01');
    } while (*(byte *)(lVar1 + (ulong)uVar3 * 0xc + 4) != param_2);
    Spill(this,*(undefined4 *)(pcVar4 + 8),(ulong)param_2,pcVar4[1]);
    iVar2 = iVar2 + -1;
    *pcVar4 = '\0';
    if (iVar2 == 0) break;
    lVar1 = *(long *)(this + 0x1c8);
  }
  *(undefined4 *)(this + (ulong)param_2 * 4 + 0x248) = 0;
  *(ulong *)(this + 0x240) =
       *(ulong *)(this + 0x240) & (1L << ((ulong)param_2 & 0x3f) ^ 0xffffffffffffffffU);
  return;
}

