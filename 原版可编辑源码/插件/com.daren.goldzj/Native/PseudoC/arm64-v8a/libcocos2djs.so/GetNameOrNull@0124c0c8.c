
/* v8::internal::wasm::ModuleWireBytes::GetNameOrNull(v8::internal::wasm::WireBytesRef) const */

undefined1  [16] __thiscall
v8::internal::wasm::ModuleWireBytes::GetNameOrNull(ModuleWireBytes *this,ulong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = (uint)param_2;
  if (uVar1 == 0) {
    return ZEXT816(0);
  }
  if ((uVar1 <= *(uint *)(this + 8)) && ((uint)(param_2 >> 0x20) <= *(uint *)(this + 8) - uVar1)) {
    auVar2._8_8_ = (long)param_2 >> 0x20;
    auVar2._0_8_ = *(long *)this + (param_2 & 0xffffffff);
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","BoundsCheck(ref.offset(), ref.length())");
}

