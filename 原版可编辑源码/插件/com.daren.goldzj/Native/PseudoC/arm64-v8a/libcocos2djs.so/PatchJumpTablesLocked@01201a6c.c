
/* v8::internal::wasm::NativeModule::PatchJumpTablesLocked(unsigned int, unsigned long) */

void __thiscall
v8::internal::wasm::NativeModule::PatchJumpTablesLocked
          (NativeModule *this,uint param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar2 = *(long *)(this + 0x160);
  lVar3 = *(long *)(this + 0x168);
  if (lVar2 != lVar3) {
    uVar5 = (ulong)(param_1 * 0x10 + 0x210);
    plVar4 = *(long **)(lVar2 + 0x10);
    while( true ) {
      if (plVar4 != (long *)0x0) {
        uVar1 = **(long **)(lVar2 + 0x18) + uVar5;
        if ((ulong)(*(long **)(lVar2 + 0x18))[1] <= uVar5) {
          uVar1 = 0;
        }
        JumpTableAssembler::PatchJumpTableSlot(*plVar4 + (ulong)(param_1 << 2),uVar1,param_2);
      }
      if (lVar3 == lVar2 + 0x20) break;
      plVar4 = *(long **)(lVar2 + 0x30);
      lVar2 = lVar2 + 0x20;
    }
  }
  return;
}

