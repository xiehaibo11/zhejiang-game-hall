
/* v8::internal::DescriptorArray::Sort() */

void __thiscall v8::internal::DescriptorArray::Sort(DescriptorArray *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong local_68;
  
  lVar9 = *(long *)this;
  uVar4 = (uint)*(short *)(lVar9 + 5);
  uVar6 = uVar4 - 1;
  uVar13 = (ulong)uVar6;
  if (0 < (int)uVar4) {
    *(uint *)(lVar9 + 0x13) = *(uint *)(lVar9 + 0x13) & 0xfff003fe;
    if (uVar4 != 1) {
      uVar10 = 0x1c00000000;
      uVar5 = 0x400;
      lVar9 = (ulong)uVar4 - 1;
      do {
        uVar12 = uVar10 >> 0x20 | 3;
        lVar9 = lVar9 + -1;
        uVar10 = uVar10 + 0xc00000000;
        uVar3 = *(uint *)(*(long *)this + uVar12) & 0xfff003fe | uVar5;
        uVar5 = uVar5 + 0x400;
        *(uint *)(*(long *)this + uVar12) = uVar3;
      } while (lVar9 != 0);
    }
    uVar5 = uVar4;
    if ((int)uVar4 < 0) {
      uVar5 = uVar4 + 1;
    }
    if (1 < (int)uVar4) {
      iVar2 = (int)uVar5 >> 1;
      uVar10 = (long)iVar2;
      do {
        uVar11 = uVar10 - 1;
        uVar12 = *(ulong *)this;
        local_68 = uVar12 & 0xffffffff00000000 |
                   (ulong)*(uint *)(uVar12 + (((ulong)(*(uint *)(uVar12 + ((long)(uVar11 * 
                                                  0xc00000000 + 0x1000000000) >> 0x20 | 3U)) >> 10)
                                              & 0x3ff) * 0xc00000000 + 0x1000000000 >> 0x20) + -1);
        if ((*(uint *)(local_68 + 3) & 1) == 0) {
          uVar5 = *(uint *)(local_68 + 3) >> 3;
        }
        else {
          uVar5 = String::ComputeAndSetHash((String *)&local_68);
        }
        uVar12 = uVar11;
        if ((long)uVar10 <= (long)iVar2) {
          do {
            uVar3 = (int)uVar12 << 1 | 1;
            uVar10 = *(ulong *)this;
            local_68 = uVar10 & 0xffffffff00000000 |
                       (ulong)*(uint *)(uVar10 + (((ulong)(*(uint *)(uVar10 + ((long)(int)uVar3 *
                                                                               0xc00000000 +
                                                                               0x1000000000 >> 0x20
                                                                              | 3U)) >> 10) & 0x3ff)
                                                  * 0xc00000000 + 0x1000000000 >> 0x20) + -1);
            if ((*(uint *)(local_68 + 3) & 1) == 0) {
              uVar7 = *(uint *)(local_68 + 3) >> 3;
            }
            else {
              uVar7 = String::ComputeAndSetHash((String *)&local_68);
            }
            uVar1 = uVar3 + 1;
            uVar14 = uVar3;
            uVar8 = uVar7;
            if ((int)uVar1 < (int)uVar4) {
              uVar10 = *(ulong *)this;
              local_68 = uVar10 & 0xffffffff00000000 |
                         (ulong)*(uint *)(uVar10 + (((ulong)(*(uint *)(uVar10 + ((long)(int)uVar1 *
                                                                                 0xc00000000 +
                                                                                 0x1000000000 >>
                                                                                 0x20 | 3U)) >> 10)
                                                    & 0x3ff) * 0xc00000000 + 0x1000000000 >> 0x20) +
                                         -1);
              if ((*(uint *)(local_68 + 3) & 1) == 0) {
                uVar8 = *(uint *)(local_68 + 3) >> 3;
              }
              else {
                uVar8 = String::ComputeAndSetHash((String *)&local_68);
              }
              uVar14 = uVar1;
              if (uVar8 <= uVar7) {
                uVar14 = uVar3;
                uVar8 = uVar7;
              }
            }
            if (uVar8 <= uVar5) break;
            lVar9 = *(long *)this;
            uVar10 = (long)(int)uVar12 * 0xc00000000 + 0x1000000000 >> 0x20 | 3;
            uVar12 = (long)(int)uVar14 * 0xc00000000 + 0x1000000000 >> 0x20 | 3;
            uVar3 = *(uint *)(lVar9 + uVar10);
            *(uint *)(lVar9 + uVar10) =
                 *(uint *)(lVar9 + uVar10) & 0xfff003fe | *(uint *)(lVar9 + uVar12) & 0xffc00;
            *(uint *)(*(long *)this + uVar12) =
                 *(uint *)(*(long *)this + uVar12) & 0xfff003fe | uVar3 & 0xffc00;
            uVar12 = (ulong)uVar14;
          } while ((int)uVar14 < iVar2);
        }
        uVar10 = uVar11;
      } while (0 < (long)uVar11);
    }
  }
  do {
    if ((int)uVar6 < 1) {
      return;
    }
    lVar9 = *(long *)this;
    uVar10 = (long)(uVar13 * 0xc00000000 + 0x1000000000) >> 0x20 | 3;
    uVar6 = *(uint *)(lVar9 + 0x13);
    *(uint *)(lVar9 + 0x13) =
         *(uint *)(lVar9 + 0x13) & 0xfff003fe | *(uint *)(lVar9 + uVar10) & 0xffc00;
    *(uint *)(*(long *)this + uVar10) =
         *(uint *)(*(long *)this + uVar10) & 0xfff003fe | uVar6 & 0xffc00;
    uVar10 = *(ulong *)this;
    local_68 = uVar10 & 0xffffffff00000000 |
               (ulong)*(uint *)(uVar10 + (((ulong)(*(uint *)(uVar10 + 0x13) >> 10) & 0x3ff) *
                                          0xc00000000 + 0x1000000000 >> 0x20) + -1);
    if ((*(uint *)(local_68 + 3) & 1) == 0) {
      uVar6 = *(uint *)(local_68 + 3) >> 3;
      uVar4 = (uint)(uVar13 >> 1);
    }
    else {
      uVar6 = String::ComputeAndSetHash((String *)&local_68);
      uVar4 = (uint)(uVar13 >> 1);
    }
    if ((uVar13 >> 1 & 0x7fffffff) != 0) {
      uVar5 = 0;
      do {
        uVar3 = uVar5 << 1 | 1;
        uVar10 = *(ulong *)this;
        local_68 = uVar10 & 0xffffffff00000000 |
                   (ulong)*(uint *)(uVar10 + (((ulong)(*(uint *)(uVar10 + ((long)(int)uVar3 *
                                                                           0xc00000000 +
                                                                           0x1000000000 >> 0x20 | 3U
                                                                          )) >> 10) & 0x3ff) *
                                              0xc00000000 + 0x1000000000 >> 0x20) + -1);
        if ((*(uint *)(local_68 + 3) & 1) == 0) {
          uVar7 = *(uint *)(local_68 + 3) >> 3;
        }
        else {
          uVar7 = String::ComputeAndSetHash((String *)&local_68);
        }
        uVar1 = uVar3 + 1;
        uVar14 = uVar3;
        uVar8 = uVar7;
        if ((long)(int)uVar1 < (long)uVar13) {
          uVar10 = *(ulong *)this;
          local_68 = uVar10 & 0xffffffff00000000 |
                     (ulong)*(uint *)(uVar10 + (((ulong)(*(uint *)(uVar10 + ((long)(int)uVar1 *
                                                                             0xc00000000 +
                                                                             0x1000000000 >> 0x20 |
                                                                            3U)) >> 10) & 0x3ff) *
                                                0xc00000000 + 0x1000000000 >> 0x20) + -1);
          if ((*(uint *)(local_68 + 3) & 1) == 0) {
            uVar8 = *(uint *)(local_68 + 3) >> 3;
          }
          else {
            uVar8 = String::ComputeAndSetHash((String *)&local_68);
          }
          uVar14 = uVar1;
          if (uVar8 <= uVar7) {
            uVar14 = uVar3;
            uVar8 = uVar7;
          }
        }
        if (uVar8 <= uVar6) break;
        lVar9 = *(long *)this;
        uVar10 = (long)(int)uVar5 * 0xc00000000 + 0x1000000000 >> 0x20 | 3;
        uVar12 = (long)(int)uVar14 * 0xc00000000 + 0x1000000000 >> 0x20 | 3;
        uVar5 = *(uint *)(lVar9 + uVar10);
        *(uint *)(lVar9 + uVar10) =
             *(uint *)(lVar9 + uVar10) & 0xfff003fe | *(uint *)(lVar9 + uVar12) & 0xffc00;
        *(uint *)(*(long *)this + uVar12) =
             *(uint *)(*(long *)this + uVar12) & 0xfff003fe | uVar5 & 0xffc00;
        uVar5 = uVar14;
      } while ((int)uVar14 < (int)(uVar4 & 0x7fffffff));
    }
    uVar13 = uVar13 - 1;
    uVar6 = (uint)uVar13;
  } while( true );
}

