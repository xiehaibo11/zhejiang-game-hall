
int X509_cmp_time(ASN1_TIME *s,time_t *t)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  ASN1_UTCTIME *pAVar7;
  ASN1_TIME *pAVar8;
  ASN1_GENERALIZEDTIME *pAVar9;
  uchar *puVar10;
  byte *pbVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  byte local_70;
  byte local_6f;
  undefined8 local_58;
  undefined4 local_50;
  ASN1_UTCTIME local_40;
  time_t local_28;
  
  local_40.data = &local_70;
  iVar6 = s->length;
  local_40.type = s->type;
  puVar10 = s->data;
  if (local_40.type == 0x17) {
    if (6 < iVar6 - 0xbU) {
      return 0;
    }
    iVar12 = -10;
    local_50 = CONCAT22(local_50._2_2_,*(undefined2 *)(puVar10 + 8));
    local_58 = *(undefined8 *)puVar10;
    lVar13 = 10;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b5f8ec with catch @ 00b5f898
                        */
    if (10 < iVar6 - 0xdU) {
      return 0;
    }
    local_50 = *(undefined4 *)(puVar10 + 8);
    iVar12 = -0xc;
    local_58 = *(undefined8 *)puVar10;
    lVar13 = 0xc;
  }
  pbVar11 = puVar10 + lVar13;
  pbVar5 = (byte *)((long)&local_58 + lVar13);
  iVar1 = iVar12 + iVar6;
  uVar4 = *pbVar11 - 0x2b;
                    /* try { // try from 00b5f8e4 to 00c5f8eb has its CatchHandler @ 00b5fa4c */
                    /* try { // try from 00b5f8ec to 00c5fa4f has its CatchHandler @ 00b5f898 */
  if ((uVar4 < 0x30) && ((1L << ((ulong)uVar4 & 0x3f) & 0x800000000005U) != 0)) {
    pbVar5[0] = 0x30;
    pbVar5[1] = 0x30;
LAB_00b5f900:
    *(undefined2 *)((long)&local_58 + lVar13 + 2) = 0x5a;
    iVar14 = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar14 = iVar1 + -2;
    if (iVar1 < 2) {
      return 0;
    }
    *pbVar5 = *pbVar11;
    *(byte *)((long)&local_58 + lVar13 + 1) = pbVar11[1];
    if (iVar14 == 0) {
LAB_00b5fa70:
      *(undefined2 *)((long)&local_58 + lVar13 + 2) = 0x5a;
      return 0;
    }
    pbVar5 = pbVar11 + 2;
    if (pbVar11[2] == 0x2e) {
      iVar1 = iVar1 + -3;
      if (iVar1 == 0) goto LAB_00b5fa70;
      lVar16 = 0;
      do {
        lVar15 = lVar16;
        iVar14 = (int)lVar15;
        if (9 < pbVar11[lVar15 + 3] - 0x30) {
          iVar14 = iVar1 - iVar14;
          pbVar5 = pbVar11 + lVar15 + 3;
          goto LAB_00b5fb54;
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b5f8e4 with catch @ 00b5fa4c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b5faac with catch @ 00b5fa50
                       catch(type#1 @ 00000000) { ... } // from try @ 00b5fc64 with catch @ 00b5fa50
                        */
      } while ((iVar14 < 2) && (lVar16 = lVar15 + 1, iVar12 + iVar6 + -4 != iVar14));
      pbVar11 = pbVar11 + lVar15 + 4;
      iVar1 = iVar1 - (int)(lVar15 + 1);
      goto LAB_00b5f900;
    }
LAB_00b5fb54:
    pbVar11 = pbVar5;
    *(undefined2 *)((long)&local_58 + lVar13 + 2) = 0x5a;
  }
  bVar2 = *pbVar11;
  if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) {
    if (iVar14 != 5) {
      return 0;
    }
    if (9 < (byte)(pbVar11[1] - 0x30)) {
      return 0;
    }
    if (9 < (byte)(pbVar11[2] - 0x30)) {
      return 0;
    }
    if (9 < (byte)(pbVar11[3] - 0x30)) {
      return 0;
    }
    if (9 < (byte)(pbVar11[4] - 0x30)) {
      return 0;
    }
    lVar13 = ((ulong)pbVar11[2] + (ulong)pbVar11[1] * 10) * 0x3c + (ulong)pbVar11[3] * 10 +
             (ulong)pbVar11[4];
    lVar16 = 0x7dd0 - lVar13;
    if (bVar2 != 0x2d) {
      lVar16 = lVar13 + -0x7dd0;
    }
    lVar16 = lVar16 * 0x3c;
  }
  else {
    if ((bVar2 != 0x5a) || (iVar14 != 1)) {
      return 0;
    }
    lVar16 = 0;
  }
  local_40.length = 0x18;
  local_40.flags = 0;
  if (t == (time_t *)0x0) {
    time(&local_28);
    if (((byte)local_40.flags >> 6 & 1) == 0) goto LAB_00b5fa90;
  }
  else {
    local_28 = *t;
    local_40.data = &local_70;
LAB_00b5fa90:
    if (local_40.type == 0x18) {
      pAVar9 = ASN1_GENERALIZEDTIME_adj(&local_40,local_28,0,lVar16);
      if (pAVar9 == (ASN1_GENERALIZEDTIME *)0x0) {
        return 0;
      }
      goto LAB_00b5faf4;
    }
    if (local_40.type == 0x17) {
                    /* try { // try from 00b5faa4 to 00c5faab has its CatchHandler @ 00b5fda8 */
                    /* try { // try from 00b5faac to 00c5fc5b has its CatchHandler @ 00b5fa50 */
      pAVar7 = ASN1_UTCTIME_adj(&local_40,local_28,0,lVar16);
      if (pAVar7 == (ASN1_UTCTIME *)0x0) {
        return 0;
      }
      goto LAB_00b5faf4;
    }
  }
  pAVar8 = ASN1_TIME_adj(&local_40,local_28,0,lVar16);
  if (pAVar8 == (ASN1_TIME *)0x0) {
    return 0;
  }
LAB_00b5faf4:
  if (s->type == 0x17) {
    uVar4 = (uint)local_58._1_1_ + (uint)(byte)local_58 * 10;
    uVar3 = (uint)local_6f + (uint)local_70 * 10;
    iVar12 = -0x1ac;
    iVar6 = iVar12;
    if (0x241 < uVar4) {
      iVar6 = -0x210;
    }
    if (0x241 < uVar3) {
      iVar12 = -0x210;
    }
    iVar6 = iVar6 + uVar4;
    iVar12 = iVar12 + uVar3;
    if (iVar6 < iVar12) {
      return -1;
    }
    if (iVar12 < iVar6) {
      return 1;
    }
  }
  iVar6 = strcmp((char *)&local_58,(char *)&local_70);
  if (iVar6 == 0) {
    return -1;
  }
  return iVar6;
}

