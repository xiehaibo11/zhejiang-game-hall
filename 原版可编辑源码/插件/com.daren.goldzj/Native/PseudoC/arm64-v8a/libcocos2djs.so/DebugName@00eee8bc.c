
/* v8::internal::CallInterfaceDescriptor::DebugName() const */

undefined1 * __thiscall
v8::internal::CallInterfaceDescriptor::DebugName(CallInterfaceDescriptor *this)

{
  ulong uVar1;
  
  uVar1 = (*(long *)(this + 8) + -0x1d2c238 >> 3) * -0x3333333333333333;
  if ((uint)uVar1 < 0x11c) {
    return *(undefined1 **)
            ((long)&PTR_s_Abort_Descriptor_01ca3a40 +
            (-(uVar1 >> 0x1f & 1) & 0xfffffff800000000 | (uVar1 & 0xffffffff) << 3));
  }
  return &DAT_0189703a;
}

