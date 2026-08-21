
/* v8::internal::LayoutDescriptor::SetTaggedForTesting(int, bool) */

ulong __thiscall
v8::internal::LayoutDescriptor::SetTaggedForTesting(LayoutDescriptor *this,int param_1,bool param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)this;
  if ((uVar6 & 1) == 0) {
    if ((uint)param_1 < 0x1e) {
LAB_010e3b18:
      iVar3 = param_1 + 0x1f;
      if (-1 < param_1) {
        iVar3 = param_1;
      }
      if ((uVar6 & 1) == 0) {
        if (param_1 < 0x20) {
          uVar2 = (int)uVar6 >> 1;
          uVar5 = 1 << (ulong)(param_1 & 0x1f);
          uVar4 = uVar2 & (uVar5 ^ 0xffffffff);
          if (!param_2) {
            uVar4 = uVar2 | uVar5;
          }
          return -(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1;
        }
      }
      else if (iVar3 >> 5 < *(int *)(uVar6 + 3) >> 1) {
        lVar1 = uVar6 + (long)((iVar3 >> 5) << 2);
        uVar4 = *(uint *)(lVar1 + 7);
        uVar5 = 1 << (ulong)(param_1 & 0x1f);
        uVar2 = uVar4 & (uVar5 ^ 0xffffffff);
        if (!param_2) {
          uVar2 = uVar4 | uVar5;
        }
        *(uint *)(lVar1 + 7) = uVar2;
        return *(ulong *)this;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "(!IsSmi() && (*layout_word_index < length())) || (IsSmi() && (*layout_word_index < 1))"
              );
    }
  }
  else if ((uint)param_1 < (*(uint *)(uVar6 + 3) & 0x3ffffffe) << 2) goto LAB_010e3b18;
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","GetIndexes(field_index, &layout_word_index, &layout_bit_index)");
}

