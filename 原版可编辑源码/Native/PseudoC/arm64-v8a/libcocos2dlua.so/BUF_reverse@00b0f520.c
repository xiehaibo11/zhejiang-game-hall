
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BUF_reverse(uchar *out,uchar *in,size_t siz)

{
  undefined1 (*pauVar1) [16];
  uchar uVar2;
  undefined1 auVar3 [16];
  uchar *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 (*pauVar7) [16];
  uchar *puVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar3 = _DAT_013d8ee0;
  if (in == (uchar *)0x0) {
    uVar6 = siz >> 1;
    if (uVar6 == 0) {
      return;
    }
    puVar4 = out + siz;
    do {
      puVar4 = puVar4 + -1;
      uVar2 = *puVar4;
      uVar6 = uVar6 - 1;
      *puVar4 = *out;
      *out = uVar2;
      out = out + 1;
    } while (uVar6 != 0);
    return;
  }
  if (siz == 0) {
    return;
  }
  puVar4 = out + (siz - 1);
  if (0x1f < siz) {
    uVar6 = siz & 0x1f;
    lVar5 = siz - uVar6;
    if (lVar5 == 0) goto LAB_00b0f5e0;
    if ((in + siz <= out) || (out + siz <= in)) {
      puVar4 = puVar4 + (uVar6 - siz);
      pauVar7 = (undefined1 (*) [16])(in + 0x10);
      puVar8 = out + siz + -0x10;
      lVar9 = lVar5;
      do {
        pauVar1 = pauVar7 + -1;
        auVar11 = *pauVar7;
        pauVar7 = pauVar7 + 2;
        lVar9 = lVar9 + -0x20;
        auVar10 = a64_TBL(ZEXT816(0),*pauVar1,auVar3);
        auVar11 = a64_TBL(ZEXT816(0),auVar11,auVar3);
        *(long *)(puVar8 + -8) = auVar11._8_8_;
        *(long *)(puVar8 + -0x10) = auVar11._0_8_;
        *(long *)(puVar8 + 8) = auVar10._8_8_;
        *(long *)puVar8 = auVar10._0_8_;
        puVar8 = puVar8 + -0x20;
      } while (lVar9 != 0);
      in = in + lVar5;
      if (uVar6 == 0) {
        return;
      }
      goto LAB_00b0f5e0;
    }
  }
  lVar5 = 0;
LAB_00b0f5e0:
  lVar5 = siz - lVar5;
  do {
    lVar5 = lVar5 + -1;
    *puVar4 = *in;
    puVar4 = puVar4 + -1;
    in = in + 1;
  } while (lVar5 != 0);
                    /* WARNING: Read-only address (ram,0x013d8ee0) is written */
  return;
}

