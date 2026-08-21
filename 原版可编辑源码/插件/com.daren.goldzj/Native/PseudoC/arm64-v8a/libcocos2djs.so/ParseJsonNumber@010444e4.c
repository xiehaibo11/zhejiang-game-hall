
/* v8::internal::JsonParser<unsigned char>::ParseJsonNumber() */

void __thiscall
v8::internal::JsonParser<unsigned_char>::ParseJsonNumber(JsonParser<unsigned_char> *this)

{
  byte bVar1;
  byte *pbVar2;
  CanonicalHandleScope *this_00;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  byte *pbVar6;
  Isolate *pIVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  double dVar16;
  
  pbVar2 = *(byte **)(this + 0x30);
  if (*pbVar2 == 0x2d) {
    pbVar6 = pbVar2 + 1;
    *(byte **)(this + 0x30) = pbVar6;
    if (pbVar6 == *(byte **)(this + 0x38)) {
LAB_01044680:
      *(byte **)(this + 0x30) = pbVar6;
    }
    else {
      iVar11 = -1;
      pbVar8 = pbVar6;
      pbVar10 = pbVar6;
      iVar14 = iVar11;
      if (*pbVar6 == 0x30) goto LAB_010445e0;
LAB_01044528:
      pbVar6 = *(byte **)(this + 0x38);
      pbVar9 = pbVar10;
      if (pbVar10 == pbVar6) goto LAB_01044680;
      do {
        pbVar8 = pbVar9;
        if (9 < *pbVar9 - 0x30) break;
        pbVar9 = pbVar9 + 1;
        pbVar8 = pbVar6;
      } while (pbVar6 != pbVar9);
      *(byte **)(this + 0x30) = pbVar8;
      if (pbVar10 == pbVar8) {
        if (pbVar10 != pbVar6) {
          uVar5 = (&DAT_019cbf74)[*pbVar10];
          goto LAB_01044748;
        }
        goto LAB_01044684;
      }
      if (pbVar8 == pbVar6) {
        uVar13 = 0xffffffff;
      }
      else {
        uVar13 = (uint)*pbVar8;
      }
      if (((long)pbVar8 - (long)pbVar10 < 10) &&
         ((0xff < uVar13 || (((byte)(&DAT_019cc074)[uVar13] >> 4 & 1) == 0)))) {
        iVar14 = 0;
        do {
          pbVar2 = pbVar10 + 1;
          iVar14 = (uint)*pbVar10 + iVar14 * 10 + -0x30;
          pbVar10 = pbVar2;
        } while (pbVar8 != pbVar2);
        pIVar7 = *(Isolate **)this;
        this_00 = *(CanonicalHandleScope **)(pIVar7 + 0x95b8);
        uVar15 = -(ulong)((uint)(iVar14 * iVar11) >> 0x1f) & 0xfffffffe00000000 |
                 (ulong)(uint)(iVar14 * iVar11) << 1;
        if (this_00 == (CanonicalHandleScope *)0x0) {
          puVar3 = *(ulong **)(pIVar7 + 0x95a0);
          if (puVar3 == *(ulong **)(pIVar7 + 0x95a8)) {
            puVar3 = (ulong *)HandleScope::Extend(pIVar7);
          }
          *(ulong **)(pIVar7 + 0x95a0) = puVar3 + 1;
          *puVar3 = uVar15;
          return;
        }
        goto LAB_01044760;
      }
LAB_01044620:
      if (pbVar8 == pbVar6) goto LAB_010447c4;
      if (*pbVar8 == 0x2e) {
        pbVar10 = pbVar8 + 1;
        *(byte **)(this + 0x30) = pbVar10;
        if (pbVar10 == pbVar6) goto LAB_01044684;
        uVar12 = (uint)*pbVar10;
        uVar13 = *pbVar10 - 0x30;
        if (uVar13 < 10) {
          if (uVar13 < 10) {
            pbVar8 = pbVar8 + 2;
            do {
              pbVar9 = pbVar8;
              pbVar10 = pbVar6;
              if (pbVar6 == pbVar9) break;
              pbVar8 = pbVar9 + 1;
              pbVar10 = pbVar9;
            } while (*pbVar9 - 0x30 < 10);
          }
          pbVar8 = pbVar10;
          *(byte **)(this + 0x30) = pbVar8;
          goto LAB_010446c4;
        }
LAB_01044738:
        uVar5 = (&DAT_019cbf74)[uVar12];
        goto LAB_01044748;
      }
LAB_010446c4:
      if ((pbVar8 == pbVar6) || ((*pbVar8 | 0x20) != 0x65)) goto LAB_010447c4;
      pbVar10 = pbVar8 + 1;
      *(byte **)(this + 0x30) = pbVar10;
      if (pbVar10 != pbVar6) {
        bVar1 = *pbVar10;
        if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
          pbVar10 = pbVar8 + 2;
          *(byte **)(this + 0x30) = pbVar10;
          if (pbVar10 == pbVar6) goto LAB_01044684;
          bVar1 = *pbVar10;
        }
        uVar12 = (uint)bVar1;
        uVar13 = uVar12 - 0x30;
        if (uVar13 < 10) {
          pbVar8 = pbVar6;
          if (pbVar10 != pbVar6) {
            while ((pbVar8 = pbVar10, uVar13 < 10 &&
                   (pbVar10 = pbVar8 + 1, pbVar8 = pbVar6, pbVar6 != pbVar10))) {
              uVar13 = *pbVar10 - 0x30;
            }
          }
          *(byte **)(this + 0x30) = pbVar8;
LAB_010447c4:
          dVar16 = (double)StringToDouble((internal *)0x7ff8000000000000,pbVar2,
                                          (long)pbVar8 - (long)pbVar2,0);
          Factory::NewNumber<(v8::internal::AllocationType)0>(*(Factory **)this,dVar16);
          return;
        }
        goto LAB_01044738;
      }
    }
LAB_01044684:
    uVar5 = 0xd;
LAB_01044748:
    ReportUnexpectedToken(this,uVar5);
  }
  else {
    iVar14 = 1;
    iVar11 = 1;
    pbVar8 = pbVar2;
    pbVar10 = pbVar2;
    if (*pbVar2 != 0x30) goto LAB_01044528;
LAB_010445e0:
    pbVar6 = *(byte **)(this + 0x38);
    pbVar8 = pbVar8 + 1;
    *(byte **)(this + 0x30) = pbVar8;
    if ((pbVar8 != pbVar6) && (((byte)(&DAT_019cc074)[*pbVar8] >> 4 & 1) != 0)) {
      if (9 < *pbVar8 - 0x30) goto LAB_01044620;
      uVar5 = 0;
      goto LAB_01044748;
    }
    if (iVar14 < 1) goto LAB_01044620;
  }
  pIVar7 = *(Isolate **)this;
  this_00 = *(CanonicalHandleScope **)(pIVar7 + 0x95b8);
  if (this_00 == (CanonicalHandleScope *)0x0) {
    puVar4 = *(undefined8 **)(pIVar7 + 0x95a0);
    if (puVar4 == *(undefined8 **)(pIVar7 + 0x95a8)) {
      puVar4 = (undefined8 *)HandleScope::Extend(pIVar7);
    }
    *(undefined8 **)(pIVar7 + 0x95a0) = puVar4 + 1;
    *puVar4 = 0;
    return;
  }
  uVar15 = 0;
LAB_01044760:
  CanonicalHandleScope::Lookup(this_00,uVar15);
  return;
}

