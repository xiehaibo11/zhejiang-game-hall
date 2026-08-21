
/* v8::internal::LayoutDescriptor::Trim(v8::internal::Heap*, v8::internal::Map,
   v8::internal::DescriptorArray, int) */

ulong __thiscall
v8::internal::LayoutDescriptor::Trim
          (LayoutDescriptor *this,Heap *param_1,long param_3,long param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  
  uVar7 = *(ulong *)this;
  if ((uVar7 & 1) != 0) {
    uVar5 = (uint)*(byte *)(param_3 + 3) - (uint)*(byte *)(param_3 + 4);
    iVar8 = 0;
    if (uVar5 != 0) {
      if ((int)param_5 < 0x10) {
        uVar11 = 0x1e;
      }
      else {
        uVar13 = (ulong)param_5;
        lVar12 = 0x1000000000;
        uVar10 = 0;
        do {
          uVar2 = *(uint *)((lVar12 >> 0x20 | 3U) + param_4);
          lVar12 = lVar12 + 0xc00000000;
          uVar6 = uVar2 >> 0x14 & 0x3ff;
          uVar11 = uVar10;
          if (uVar10 <= uVar6) {
            uVar11 = uVar6 + 1;
          }
          if ((int)uVar5 <= (int)uVar6 || (uVar2 & 900) != 0x100) {
            uVar11 = uVar10;
          }
          uVar13 = uVar13 - 1;
          uVar10 = uVar11;
        } while (uVar13 != 0);
      }
      if ((int)uVar5 <= (int)uVar11) {
        uVar11 = uVar5;
      }
      uVar5 = uVar11 + 0x1f & 0xffffffe0;
      uVar10 = uVar5 | 7;
      if (-1 < (int)(uVar11 + 0x1f)) {
        uVar10 = uVar5;
      }
      iVar8 = (int)uVar10 >> 3;
    }
    iVar8 = (*(int *)(uVar7 + 3) >> 1) - iVar8;
    if (iVar8 != 0) {
      Heap::RightTrimFixedArray(param_1,uVar7,iVar8);
      uVar7 = *(ulong *)this;
    }
    memset((void *)(uVar7 + 7),0,(long)(int)((*(int *)(uVar7 + 3) >> 1) + 3U & 0xfffffffc));
    uVar7 = *(ulong *)this;
    bVar3 = *(byte *)(param_3 + 3);
    bVar4 = *(byte *)(param_3 + 4);
    if (param_5 != 0) {
      lVar9 = (long)(int)param_5;
      lVar12 = 0x1000000000;
      do {
        uVar5 = *(uint *)((lVar12 >> 0x20 | 3U) + param_4);
        if ((uVar5 & 900) == 0x100) {
          uVar5 = (int)uVar5 >> 1;
          uVar10 = uVar5 >> 0x13;
          uVar11 = uVar10 & 0x3ff;
          if ((int)uVar11 < (int)((uint)bVar3 - (uint)bVar4)) {
            if ((uVar7 & 1) == 0) {
              if (0x1d < uVar11) {
LAB_010e3e58:
                    /* WARNING: Subroutine does not return */
                V8_Fatal("Check failed: %s.",
                         "GetIndexes(field_index, &layout_word_index, &layout_bit_index)");
              }
            }
            else if ((*(uint *)(uVar7 + 3) & 0x3ffffffe) << 2 <= uVar11) goto LAB_010e3e58;
            if ((uVar7 & 1) == 0) {
              if (0x1f < uVar11) {
LAB_010e3e6c:
                    /* WARNING: Subroutine does not return */
                V8_Fatal("Check failed: %s.",
                         "(!IsSmi() && (*layout_word_index < length())) || (IsSmi() && (*layout_word_index < 1))"
                        );
              }
              uVar5 = 1 << (ulong)(uVar10 & 0x1f) | (int)uVar7 >> 1;
              uVar7 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1;
            }
            else {
              if (*(int *)(uVar7 + 3) >> 1 <= (int)(uVar11 >> 5)) goto LAB_010e3e6c;
              lVar1 = ((uVar11 >> 5) << 2) + uVar7;
              *(uint *)(lVar1 + 7) = *(uint *)(lVar1 + 7) | 1 << (ulong)(uVar5 >> 0x13 & 0x1f);
            }
          }
        }
        lVar9 = lVar9 + -1;
        lVar12 = lVar12 + 0xc00000000;
      } while (lVar9 != 0);
    }
  }
  return uVar7;
}

