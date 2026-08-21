
/* v8::internal::LayoutDescriptor::ShareAppend(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::PropertyDetails) */

ulong * v8::internal::LayoutDescriptor::ShareAppend(Isolate *param_1,long *param_2,uint param_3)

{
  Isolate *pIVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  CanonicalHandleScope *this;
  ulong uVar5;
  
  pIVar1 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = 0;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),0);
  }
  if ((param_3 & 0x1c2) == 0x80) {
    uVar3 = param_3 >> 0x13 & 0x3ff;
    if ((int)uVar3 < (int)((uint)*(byte *)(*param_2 + 3) - (uint)*(byte *)(*param_2 + 4))) {
      puVar4 = (ulong *)EnsureCapacity(param_1,puVar4,uVar3 + 1);
      uVar5 = *puVar4;
      if ((uVar5 & 1) == 0) {
        if (0x1d < uVar3) {
LAB_010e3664:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.",
                   "GetIndexes(field_index, &layout_word_index, &layout_bit_index)");
        }
      }
      else if ((*(uint *)(uVar5 + 3) & 0x3ffffffe) << 2 <= uVar3) goto LAB_010e3664;
      if ((uVar5 & 1) == 0) {
        if (0x1f < uVar3) {
LAB_010e3678:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.",
                   "(!IsSmi() && (*layout_word_index < length())) || (IsSmi() && (*layout_word_index < 1))"
                  );
        }
        uVar3 = 1 << (ulong)(param_3 >> 0x13 & 0x1f) | (int)uVar5 >> 1;
        uVar5 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1;
        this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
      }
      else {
        if (*(int *)(uVar5 + 3) >> 1 <= (int)(uVar3 >> 5)) goto LAB_010e3678;
        lVar2 = ((uVar3 >> 5) << 2) + uVar5;
        *(uint *)(lVar2 + 7) = *(uint *)(lVar2 + 7) | 1 << (ulong)(param_3 >> 0x13 & 0x1f);
        this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
      }
      if (this == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)pIVar1;
        if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar4 + 1;
        *puVar4 = uVar5;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup(this,uVar5);
      }
    }
  }
  return puVar4;
}

