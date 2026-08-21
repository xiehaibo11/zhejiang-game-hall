
/* v8::internal::LayoutDescriptor::AppendIfFastOrUseFull(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::PropertyDetails,
   v8::internal::Handle<v8::internal::LayoutDescriptor>) */

ulong * v8::internal::LayoutDescriptor::AppendIfFastOrUseFull
                  (Isolate *param_1,ulong *param_2,uint param_3,ulong *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  CanonicalHandleScope *this;
  ulong uVar4;
  
  uVar1 = *(uint *)(*param_2 + 0x1b);
  if ((uVar1 & 1) != 0) {
    return param_4;
  }
  if ((param_3 & 0x1c2) == 0x80) {
    uVar2 = param_3 >> 0x13 & 0x3ff;
    if ((int)uVar2 < (int)((uint)*(byte *)(*param_2 + 3) - (uint)*(byte *)(*param_2 + 4))) {
      if (0x1d < uVar2) {
        return param_4;
      }
      this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
      uVar1 = 1 << (ulong)(param_3 >> 0x13 & 0x1f) | (int)uVar1 >> 1;
      uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
      goto joined_r0x010e3860;
    }
  }
  this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
  uVar4 = *param_2 & 0xffffffff00000000 | (ulong)uVar1;
joined_r0x010e3860:
  if (this == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(param_1 + 0x95a0);
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar4;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(this,uVar4);
  }
  return puVar3;
}

