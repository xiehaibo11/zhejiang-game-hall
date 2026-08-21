
/* v8::internal::wasm::NativeModule::PatchJumpTableLocked(v8::internal::wasm::NativeModule::CodeSpaceData
   const&, unsigned int, unsigned long) */

void __thiscall
v8::internal::wasm::NativeModule::PatchJumpTableLocked
          (NativeModule *this,CodeSpaceData *param_1,uint param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(param_2 * 0x10 + 0x210);
  uVar1 = **(long **)(param_1 + 0x18) + uVar2;
  if ((ulong)(*(long **)(param_1 + 0x18))[1] <= uVar2) {
    uVar1 = 0;
  }
  JumpTableAssembler::PatchJumpTableSlot
            (**(long **)(param_1 + 0x10) + (ulong)(param_2 << 2),uVar1,param_3);
  return;
}

