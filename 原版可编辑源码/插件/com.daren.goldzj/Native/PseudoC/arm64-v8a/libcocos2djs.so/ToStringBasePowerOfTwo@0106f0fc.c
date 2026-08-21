
/* v8::internal::MutableBigInt::ToStringBasePowerOfTwo(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigIntBase>, int, v8::internal::ShouldThrow) */

long * v8::internal::MutableBigInt::ToStringBasePowerOfTwo
                 (Factory *param_1,long *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  
  lVar6 = *param_2;
  uVar1 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
  uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar18 = LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
  uVar8 = *(uint *)(lVar6 + 3) >> 1;
  uVar1 = (uVar8 & 0x3fffffff) - 1;
  uVar19 = *(ulong *)(lVar6 + ((long)(int)(uVar1 * 8) | 7U));
  uVar16 = (ulong)*(uint *)(lVar6 + 3) & 1;
  uVar9 = 0;
  if (uVar18 != 0) {
    uVar9 = ((uVar18 + (long)(int)(uVar8 * 0x40 - (int)LZCOUNT(uVar19))) - 1) / uVar18;
  }
  uVar9 = uVar9 + uVar16;
  if (uVar9 < 0xffffff1) {
    plVar3 = (long *)Factory::NewRawOneByteString(param_1,uVar9 & 0xffffffff,0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    iVar7 = (int)uVar9 + -1;
    lVar6 = *plVar3 + 0xb;
    uVar8 = (uint)((long)(int)param_3 - 1U);
    iVar17 = (int)uVar18;
    if ((int)uVar1 < 1) {
      uVar9 = 0;
      uVar11 = 0;
    }
    else {
      uVar14 = 0;
      uVar13 = 0;
      uVar9 = 0;
      do {
        uVar15 = *(ulong *)(*param_2 + ((ulong)(uint)((int)uVar14 << 3) | 7));
        uVar11 = iVar17 - (int)uVar9;
        uVar5 = uVar9 & 0x3f;
        uVar12 = (uint)uVar13;
        uVar2 = 0x40 - uVar11;
        uVar9 = (ulong)uVar2;
        uVar13 = uVar15 >> ((ulong)uVar11 & 0x3f);
        *(char *)(lVar6 + iVar7) =
             "0123456789abcdefghijklmnopqrstuvwxyz"
             [(long)(int)param_3 - 1U & (long)(int)((uint)(uVar15 << uVar5) | uVar12)];
        iVar7 = iVar7 + -1;
        if (iVar17 <= (int)uVar2) {
          pcVar10 = (char *)(lVar6 + iVar7);
          do {
            uVar5 = uVar13 & (long)(int)uVar8;
            uVar11 = (int)uVar9 - iVar17;
            uVar9 = (ulong)uVar11;
            uVar13 = uVar13 >> uVar18;
            *pcVar10 = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar5];
            iVar7 = iVar7 + -1;
            pcVar10 = pcVar10 + -1;
          } while (iVar17 <= (int)uVar11);
        }
        uVar11 = (uint)uVar13;
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar1);
    }
    uVar14 = uVar19 >> ((ulong)(uint)(iVar17 - (int)uVar9) & 0x3f);
    *(char *)(lVar6 + iVar7) =
         "0123456789abcdefghijklmnopqrstuvwxyz"
         [(int)(uVar8 & ((uint)(uVar19 << (uVar9 & 0x3f)) | uVar11))];
    iVar7 = iVar7 + -1;
    if (uVar14 != 0) {
      pcVar10 = (char *)(lVar6 + iVar7);
      do {
        uVar9 = uVar14 & (long)(int)uVar8;
        uVar14 = uVar14 >> uVar18;
        iVar7 = iVar7 + -1;
        *pcVar10 = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar9];
        pcVar10 = pcVar10 + -1;
      } while (uVar14 != 0);
    }
    if ((int)uVar16 != 0) {
      *(undefined1 *)(lVar6 + iVar7) = 0x2d;
    }
  }
  else if (param_4 == 0) {
    puVar4 = (undefined8 *)Factory::NewInvalidStringLengthError(param_1);
    Isolate::Throw((Isolate *)param_1,*puVar4,0);
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = (long *)0x0;
  }
  return plVar3;
}

