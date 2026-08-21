
/* v8::internal::LayoutDescriptor::IsTagged(int, int, int*) */

bool __thiscall
v8::internal::LayoutDescriptor::IsTagged
          (LayoutDescriptor *this,int param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  
  uVar7 = *(ulong *)this;
  if ((int)uVar7 != 0) {
    if ((uVar7 & 1) == 0) {
      if ((uint)param_1 < 0x1e) {
LAB_010e38c0:
        iVar13 = param_1 + 0x1f;
        if (-1 < param_1) {
          iVar13 = param_1;
        }
        iVar13 = iVar13 >> 5;
        if ((uVar7 & 1) == 0) {
          if (0x1f < param_1) {
LAB_010e3a1c:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.",
                     "(!IsSmi() && (*layout_word_index < length())) || (IsSmi() && (*layout_word_index < 1))"
                    );
          }
          bVar4 = false;
          uVar11 = (int)uVar7 >> 1;
        }
        else {
          if (*(int *)(uVar7 + 3) >> 1 <= iVar13) goto LAB_010e3a1c;
          uVar11 = *(uint *)(uVar7 + (long)(iVar13 << 2) + 7);
          bVar4 = true;
        }
        uVar3 = param_1 + iVar13 * -0x20;
        uVar9 = 1 << (ulong)(uVar3 & 0x1f);
        bVar5 = (uVar11 & uVar9) == 0;
        uVar1 = uVar11 & uVar9;
        if (!bVar5) {
          uVar11 = ~uVar11;
        }
        uVar11 = uVar11 & -uVar9;
        uVar9 = (uVar11 & 0xaaaaaaaa) >> 1 | (uVar11 & 0x55555555) << 1;
        uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        uVar9 = (uint)LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
        if (bVar4) {
          iVar8 = uVar9 - uVar3;
          iVar10 = iVar8;
          if (uVar11 == 0) {
            lVar12 = (long)iVar13;
            iVar13 = iVar13 * 4;
            uVar11 = *(int *)(uVar7 + 3) >> 1;
            uVar9 = uVar11 + 3;
            if (-1 < (int)uVar11) {
              uVar9 = uVar11;
            }
            while( true ) {
              iVar13 = iVar13 + 4;
              lVar12 = lVar12 + 1;
              if (((long)((ulong)uVar9 << 0x20) >> 0x22 <= lVar12) ||
                 (uVar3 = *(uint *)(uVar7 + 7 + (long)iVar13), (~uVar3 & 1) != (uint)(uVar1 == 0)))
              break;
              uVar3 = uVar3 ^ -(uint)!bVar5;
              uVar2 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
              uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
              uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
              uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
              iVar8 = (int)LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10) + iVar8;
              if ((uVar3 != 0) || (param_2 <= iVar8)) break;
            }
            iVar10 = iVar8;
            if (uVar1 == 0) {
              iVar13 = iVar8 + param_1;
              iVar6 = 0x1e;
              if ((uVar7 & 1) != 0) {
                iVar6 = uVar11 << 3;
              }
              goto LAB_010e39fc;
            }
          }
        }
        else {
          if (0x1d < uVar9) {
            uVar9 = 0x1e;
          }
          iVar8 = uVar9 - uVar3;
          iVar10 = iVar8;
          if (uVar1 == 0) {
            iVar13 = iVar8 + param_1;
            if ((uVar7 & 1) == 0) {
              iVar6 = 0x1e;
            }
            else {
              iVar6 = (*(uint *)(uVar7 + 3) & 0x3ffffffe) << 2;
            }
LAB_010e39fc:
            iVar10 = 0x7fffffff;
            if (iVar13 != iVar6) {
              iVar10 = iVar8;
            }
          }
        }
        if (param_2 <= iVar10) {
          iVar10 = param_2;
        }
        goto LAB_010e3a10;
      }
    }
    else if ((uint)param_1 < (*(uint *)(uVar7 + 3) & 0x3ffffffe) << 2) goto LAB_010e38c0;
  }
  bVar5 = true;
  iVar10 = param_2;
LAB_010e3a10:
  *param_3 = iVar10;
  return bVar5;
}

