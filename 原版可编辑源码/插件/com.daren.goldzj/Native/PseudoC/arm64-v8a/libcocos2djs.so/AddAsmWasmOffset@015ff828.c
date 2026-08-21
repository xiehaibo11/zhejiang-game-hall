
/* v8::internal::wasm::WasmFunctionBuilder::AddAsmWasmOffset(unsigned long, unsigned long) */

void __thiscall
v8::internal::wasm::WasmFunctionBuilder::AddAsmWasmOffset
          (WasmFunctionBuilder *this,ulong param_1,ulong param_2)

{
  ZoneBuffer *this_00;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x50);
  iVar2 = *(int *)(this + 0x48);
  this_00 = (ZoneBuffer *)(this + 0x110);
  ZoneBuffer::write_u32v(this_00,(iVar1 - iVar2) - *(int *)(this + 0x130));
  *(int *)(this + 0x130) = iVar1 - iVar2;
  ZoneBuffer::write_i32v(this_00,(int)param_1 - *(int *)(this + 0x134));
  ZoneBuffer::write_i32v(this_00,(int)param_2 - (int)param_1);
  *(int *)(this + 0x134) = (int)param_2;
  return;
}

