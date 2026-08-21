
/* WARNING: Type propagation algorithm not settling */

ulong FUN_010b9170(long *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  byte *pbVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  byte *pbVar16;
  long lVar17;
  long lVar18;
  byte *pbVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  
                    /* try { // try from 010b9170 to 011b91c3 has its CatchHandler @ 010b9118 */
  pbVar11 = (byte *)*param_1;
  if (param_2 <= pbVar11) {
    return 0;
  }
  bVar1 = *pbVar11;
  if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
    pbVar11 = pbVar11 + 1;
                    /* catch() { ... } // from try @ 010b915c with catch @ 010b91a8 */
    if (pbVar11 == param_2) {
      return 0;
    }
    bVar7 = bVar1 == 0x2d;
    bVar1 = *pbVar11;
  }
  else {
    bVar7 = false;
  }
                    /* try { // try from 010b91c4 to 011b9233 has its CatchHandler @ 010b91c4
                       catch() { ... } // from try @ 010b91c4 with catch @ 010b91c4
                       catch() { ... } // from try @ 010b92c4 with catch @ 010b91c4
                       catch() { ... } // from try @ 010b9398 with catch @ 010b91c4 */
  pbVar19 = pbVar11;
  if (bVar1 == 0x2e) {
    uVar22 = 0;
    bVar8 = false;
  }
  else {
    if (param_2 <= pbVar11) {
      return 0;
    }
    if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
      bVar8 = bVar1 == 0x2d;
      pbVar19 = pbVar11 + 1;
      if (pbVar19 == param_2) {
        return 0;
      }
    }
    else {
      bVar8 = false;
    }
    if (pbVar19 < param_2) {
      uVar20 = 0;
      bVar9 = false;
                    /* try { // try from 010b9234 to 011b92c3 has its CatchHandler @ 010b9418 */
      while( true ) {
        bVar1 = *pbVar19;
        if (((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) ||
           ((char)bVar1 < 0)) break;
        cVar3 = (&DAT_01463138)[(ulong)(uint)(int)(char)bVar1 & 0x7f];
        if (((long)cVar3 < 0) || ('\t' < cVar3)) break;
        if ((long)uVar20 < 0xccccccd) {
          if ((uVar20 == 0xccccccc) && ('\a' < cVar3)) {
            bVar9 = true;
            uVar20 = 0xccccccc;
          }
          else {
            uVar20 = (long)cVar3 + uVar20 * 10;
          }
        }
        else {
          bVar9 = true;
        }
        pbVar19 = pbVar19 + 1;
        if (param_2 <= pbVar19) break;
      }
    }
    else {
                    /* try { // try from 010b92c4 to 011b936f has its CatchHandler @ 010b91c4 */
      bVar9 = false;
      uVar20 = 0;
    }
    if (bVar9) {
      uVar20 = 0x7fffffff;
    }
    uVar22 = -uVar20;
    if (!bVar8) {
      uVar22 = uVar20;
    }
    if (pbVar19 == pbVar11) {
      return 0;
    }
    if ((pbVar19 < param_2) && (*pbVar19 == 0x23)) {
      if (param_2 <= pbVar19 + 1) {
        return 0;
      }
      if (0x22 < uVar22 - 2) {
        return 0;
      }
      bVar1 = pbVar19[1];
      if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
        bVar8 = bVar1 == 0x2d;
        if (pbVar19 + 2 == param_2) {
          return 0;
        }
        lVar12 = 2;
      }
      else {
        bVar8 = false;
        lVar12 = 1;
      }
      if (pbVar19 + lVar12 < param_2) {
        cVar3 = '\0';
                    /* try { // try from 010b9370 to 011b937b has its CatchHandler @ 010b9404 */
        if (uVar22 != 0) {
          cVar3 = (char)(0x7fffffff / (long)uVar22);
        }
                    /* try { // try from 010b937c to 011b9397 has its CatchHandler @ 010b93e4 */
        uVar4 = 0;
        if (uVar22 != 0) {
          uVar4 = 0x7fffffff / (long)uVar22;
        }
                    /* try { // try from 010b9398 to 011b9433 has its CatchHandler @ 010b91c4 */
        uVar20 = 0;
        bVar9 = false;
        while( true ) {
          bVar1 = pbVar19[lVar12];
          if (((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) ||
             ((char)bVar1 < 0)) break;
          cVar2 = (&DAT_01463138)[(ulong)(uint)(int)(char)bVar1 & 0x7f];
          iVar10 = (int)cVar2;
          if ((iVar10 < 0) || ((long)uVar22 <= (long)iVar10)) break;
          if ((long)uVar4 < (long)uVar20) {
            bVar9 = true;
                    /* catch() { ... } // from try @ 010b937c with catch @ 010b93e4 */
          }
          else if ((uVar20 == uVar4) && ((char)(-1 - cVar3 * (char)uVar22) < cVar2)) {
            bVar9 = true;
            uVar20 = uVar4;
          }
          else {
            uVar20 = (long)iVar10 + uVar20 * uVar22;
          }
                    /* catch() { ... } // from try @ 010b9370 with catch @ 010b9404 */
          lVar12 = lVar12 + 1;
          if (param_2 <= pbVar19 + lVar12) break;
        }
      }
      else {
                    /* catch() { ... } // from try @ 010b9234 with catch @ 010b9418 */
        bVar9 = false;
        uVar20 = 0;
      }
      if (bVar9) {
        uVar20 = 0x7fffffff;
      }
      uVar22 = -uVar20;
      if (!bVar8) {
        uVar22 = uVar20;
      }
                    /* catch() { ... } // from try @ 010b965c with catch @ 010b9434 */
      if (lVar12 == 1) {
        return 0;
      }
      pbVar19 = pbVar19 + lVar12;
    }
    if (pbVar11 == pbVar19) {
      return 0;
    }
    if ((long)uVar22 < 0x8000) {
      bVar8 = false;
      uVar22 = (uVar22 & 0xffff) << 0x10;
    }
    else {
      bVar8 = true;
    }
  }
                    /* try { // try from 010b9478 to 011b9483 has its CatchHandler @ 010b971c */
  if ((param_2 <= pbVar19) || (*pbVar19 != 0x2e)) {
    lVar12 = 0;
    puVar13 = (undefined *)0x1;
LAB_010b9510:
    if ((pbVar19 + 1 < param_2) && ((*pbVar19 | 0x20) == 0x65)) {
      bVar1 = pbVar19[1];
      if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
        bVar9 = bVar1 == 0x2d;
                    /* try { // try from 010b9548 to 011b954f has its CatchHandler @ 010b972c */
        if (pbVar19 + 2 == param_2) {
          return 0;
        }
        lVar15 = 2;
      }
      else {
                    /* try { // try from 010b964c to 011b965b has its CatchHandler @ 010b972c */
        bVar9 = false;
        lVar15 = 1;
      }
                    /* try { // try from 010b965c to 011b97ab has its CatchHandler @ 010b9434 */
      if (pbVar19 + lVar15 < param_2) {
        lVar17 = 0;
        bVar6 = false;
        while( true ) {
          bVar1 = pbVar19[lVar15];
          if (((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) ||
             ((char)bVar1 < 0)) break;
          cVar3 = (&DAT_01463138)[(ulong)(uint)(int)(char)bVar1 & 0x7f];
                    /* catch() { ... } // from try @ 010b95ac with catch @ 010b96b0 */
          if (((long)cVar3 < 0) || ('\t' < cVar3)) break;
                    /* catch() { ... } // from try @ 010b94c4 with catch @ 010b96b4 */
          if (lVar17 < 0xccccccd) {
            if ((lVar17 == 0xccccccc) && ('\a' < cVar3)) {
              bVar6 = true;
              lVar17 = 0xccccccc;
            }
            else {
              lVar17 = (long)cVar3 + lVar17 * 10;
            }
          }
          else {
            bVar6 = true;
          }
                    /* catch() { ... } // from try @ 010b9494 with catch @ 010b96e8 */
          lVar15 = lVar15 + 1;
          if (param_2 <= pbVar19 + lVar15) break;
        }
      }
      else {
        bVar6 = false;
        lVar17 = 0;
      }
                    /* catch() { ... } // from try @ 010b9484 with catch @ 010b9708 */
      if (bVar6) {
        lVar17 = 0x7fffffff;
      }
      lVar18 = -lVar17;
      if (!bVar9) {
        lVar18 = lVar17;
      }
                    /* catch() { ... } // from try @ 010b9478 with catch @ 010b971c */
      if (lVar15 == 1) {
        return 0;
      }
                    /* catch() { ... } // from try @ 010b9548 with catch @ 010b972c
                       catch() { ... } // from try @ 010b964c with catch @ 010b972c */
      if ((pbVar19 + lVar15 < param_2) && (pbVar19[lVar15] == 0x23)) {
                    /* catch() { ... } // from try @ 010b956c with catch @ 010b973c
                       catch() { ... } // from try @ 010b95d0 with catch @ 010b973c */
        if (0x22 < lVar18 - 2U) {
          return 0;
        }
        lVar17 = lVar15 + 1;
        if (param_2 <= pbVar19 + lVar17) {
          return 0;
        }
        bVar1 = pbVar19[lVar17];
        if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
          lVar15 = lVar15 + 2;
          bVar9 = bVar1 == 0x2d;
          if (pbVar19 + lVar15 == param_2) {
            return 0;
          }
        }
        else {
          bVar9 = false;
          lVar15 = lVar17;
        }
        if (pbVar19 + lVar15 < param_2) {
          cVar3 = '\0';
          if (lVar18 != 0) {
            cVar3 = (char)(0x7fffffff / lVar18);
          }
          lVar5 = 0;
          if (lVar18 != 0) {
            lVar5 = 0x7fffffff / lVar18;
          }
          lVar21 = 0;
          bVar6 = false;
          while( true ) {
            bVar1 = pbVar19[lVar15];
            if (((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) ||
               ((char)bVar1 < 0)) break;
                    /* try { // try from 010b98f4 to 011b99cf has its CatchHandler @ 010b97c0 */
            cVar2 = (&DAT_01463138)[(ulong)(uint)(int)(char)bVar1 & 0x7f];
            iVar10 = (int)cVar2;
            if ((iVar10 < 0) || (lVar18 <= iVar10)) break;
            if (lVar5 < lVar21) {
              bVar6 = true;
            }
            else if ((lVar21 == lVar5) && ((char)(-1 - cVar3 * (char)lVar18) < cVar2)) {
              bVar6 = true;
              lVar21 = lVar5;
            }
            else {
              lVar21 = (long)iVar10 + lVar21 * lVar18;
            }
            lVar15 = lVar15 + 1;
            if (param_2 <= pbVar19 + lVar15) break;
          }
        }
        else {
          bVar6 = false;
          lVar21 = 0;
        }
        if (bVar6) {
          lVar21 = 0x7fffffff;
        }
        if (lVar15 == lVar17) {
          return 0;
        }
        lVar18 = -lVar21;
        if (!bVar9) {
          lVar18 = lVar21;
        }
        if (lVar15 == 1) {
          return 0;
        }
      }
      pbVar19 = pbVar19 + lVar15;
      if (lVar18 < 0x3e9) {
        lVar15 = 0;
        if (-0x3e9 < lVar18) {
          lVar15 = lVar18;
        }
        bVar9 = lVar18 < -1000;
        param_3 = lVar15 + param_3;
      }
      else {
        bVar9 = false;
        bVar8 = true;
      }
    }
    else {
      bVar9 = false;
    }
    *param_1 = (long)pbVar19;
    if (lVar12 == 0 && uVar22 == 0) {
      return 0;
    }
                    /* try { // try from 010b956c to 011b95a7 has its CatchHandler @ 010b973c */
    if (bVar8) {
LAB_010b9570:
      uVar22 = 0x7fffffff;
    }
    else {
      if (bVar9) {
        return 0;
      }
      lVar15 = param_3;
      if (0 < param_3) {
        do {
          if (0xccccccb < (long)uVar22) goto LAB_010b9570;
          if (lVar12 < 0xccccccc) {
            lVar12 = lVar12 * 10;
          }
          else {
                    /* try { // try from 010b95ac to 011b95b3 has its CatchHandler @ 010b96b0 */
            if (puVar13 == (undefined *)0x1) goto LAB_010b9570;
            puVar13 = (undefined *)((long)puVar13 / 10);
          }
          param_3 = lVar15 + -1;
                    /* try { // try from 010b95d0 to 011b95f3 has its CatchHandler @ 010b973c */
          uVar22 = uVar22 * 10;
          bVar8 = 0 < lVar15;
          lVar15 = param_3;
        } while (param_3 != 0 && bVar8);
      }
      if (param_3 < 0) {
        param_3 = param_3 + -1;
        puVar14 = puVar13;
        do {
          if (0xccccccb < (long)puVar14) {
            lVar12 = lVar12 / 10;
          }
          if ((uVar22 + 9 < 0x13) && (lVar12 == 0)) {
            return 0;
          }
          param_3 = param_3 + 1;
          uVar22 = (long)uVar22 / 10;
          puVar13 = (undefined *)((long)puVar14 * 10);
          if (0xccccccb < (long)puVar14) {
            puVar13 = puVar14;
          }
          puVar14 = puVar13;
        } while (param_3 < -1);
      }
      if (lVar12 != 0) {
        lVar12 = FT_DivFix(lVar12,puVar13);
        uVar22 = lVar12 + uVar22;
      }
    }
    if (!bVar7) {
      return uVar22;
    }
    return -uVar22;
  }
                    /* try { // try from 010b9484 to 011b9493 has its CatchHandler @ 010b9708 */
  lVar12 = 0;
  puVar13 = (undefined *)0x1;
                    /* try { // try from 010b9494 to 011b94ab has its CatchHandler @ 010b96e8 */
  pbVar11 = pbVar19;
  do {
    pbVar19 = pbVar11 + 1;
    if (param_2 <= pbVar19) goto LAB_010b9510;
    bVar1 = *pbVar19;
                    /* try { // try from 010b94c4 to 011b94d7 has its CatchHandler @ 010b96b4 */
    if ((((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) ||
        ((char)bVar1 < 0)) || (uVar20 = (ulong)(uint)(int)(char)bVar1 & 0x7f, 9 < uVar20 - 0x30))
    goto LAB_010b9510;
    lVar12 = (long)(char)(&DAT_01463138)[uVar20] + lVar12 * 10;
    if ((uVar22 != 0) || (param_3 < 1)) {
      if (lVar12 < 0xccccccc) {
        puVar13 = (undefined *)0xa;
        pbVar11 = pbVar11 + 2;
        goto LAB_010b97a4;
      }
      puVar13 = (undefined *)0xa;
      break;
    }
    param_3 = param_3 + -1;
    pbVar11 = pbVar19;
  } while (lVar12 < 0xccccccc);
LAB_010b9820:
  do {
    pbVar19 = pbVar19 + 1;
    if (param_2 <= pbVar19) goto LAB_010b9510;
    bVar1 = *pbVar19;
                    /* try { // try from 010b985c to 011b98f3 has its CatchHandler @ 010b9ad8 */
    if (((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) ||
       (((char)bVar1 < 0 || (9 < ((ulong)(uint)(int)(char)bVar1 & 0x7f) - 0x30))))
    goto LAB_010b9510;
  } while( true );
  while( true ) {
    param_3 = param_3 + -1;
    pbVar11 = pbVar19 + 1;
    if (0xccccccb < lVar12) break;
LAB_010b97a4:
    pbVar19 = pbVar11;
    if (param_2 <= pbVar19) goto LAB_010b9510;
    bVar1 = *pbVar19;
                    /* try { // try from 010b97c0 to 011b985b has its CatchHandler @ 010b97c0
                       catch() { ... } // from try @ 010b97c0 with catch @ 010b97c0
                       catch() { ... } // from try @ 010b98f4 with catch @ 010b97c0
                       catch() { ... } // from try @ 010b9a6c with catch @ 010b97c0 */
    if (((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) ||
       (((char)bVar1 < 0 || (uVar20 = (ulong)(uint)(int)(char)bVar1 & 0x7f, 9 < uVar20 - 0x30))))
    goto LAB_010b9510;
    lVar12 = (long)(char)(&DAT_01463138)[uVar20] + lVar12 * 10;
    if ((uVar22 != 0) || (param_3 < 1)) {
      if (lVar12 < 0xccccccc) {
        puVar13 = (undefined *)0x64;
        pbVar11 = pbVar19;
        goto LAB_010b99c4;
      }
                    /* try { // try from 010b9a2c to 011b9a4b has its CatchHandler @ 010b9aec */
      puVar13 = (undefined *)0x64;
      break;
    }
  }
  goto LAB_010b9820;
  while (param_3 = param_3 + -1, pbVar11 = pbVar19, lVar12 < 0xccccccc) {
LAB_010b99c4:
    pbVar19 = pbVar11 + 1;
    if (param_2 <= pbVar19) goto LAB_010b9510;
    bVar1 = *pbVar19;
                    /* try { // try from 010b99d0 to 011b99e7 has its CatchHandler @ 010b9ac4 */
    if ((((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) ||
        ((char)bVar1 < 0)) || (uVar20 = (ulong)(uint)(int)(char)bVar1 & 0x7f, 9 < uVar20 - 0x30))
    goto LAB_010b9510;
    lVar12 = (long)(char)(&DAT_01463138)[uVar20] + lVar12 * 10;
    if ((uVar22 != 0) || (param_3 < 1)) {
      if (lVar12 < 0xccccccc) {
        puVar13 = (undefined *)0x3e8;
        pbVar11 = pbVar11 + 2;
        goto LAB_010b9a54;
      }
      puVar13 = (undefined *)0x3e8;
                    /* catch() { ... } // from try @ 010b99d0 with catch @ 010b9ac4 */
      break;
    }
  }
  goto LAB_010b9820;
  while( true ) {
                    /* catch() { ... } // from try @ 010b9a54 with catch @ 010b9aac */
    param_3 = param_3 + -1;
    pbVar11 = pbVar19 + 1;
    if (0xccccccb < lVar12) break;
LAB_010b9a54:
    pbVar19 = pbVar11;
                    /* try { // try from 010b9a54 to 011b9a5b has its CatchHandler @ 010b9aac */
    if (param_2 <= pbVar19) goto LAB_010b9510;
    bVar1 = *pbVar19;
                    /* try { // try from 010b9a60 to 011b9a6b has its CatchHandler @ 010b9aec */
                    /* try { // try from 010b9a6c to 011b9b0f has its CatchHandler @ 010b97c0 */
    if (((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) ||
       (((char)bVar1 < 0 || (uVar20 = (ulong)(uint)(int)(char)bVar1 & 0x7f, 9 < uVar20 - 0x30))))
    goto LAB_010b9510;
    lVar12 = (long)(char)(&DAT_01463138)[uVar20] + lVar12 * 10;
    if ((uVar22 != 0) || (param_3 < 1)) {
      if (lVar12 < 0xccccccc) {
                    /* catch() { ... } // from try @ 010b985c with catch @ 010b9ad8 */
        puVar13 = (undefined *)0x2710;
        pbVar11 = pbVar19;
        goto LAB_010b9ae8;
      }
      puVar13 = (undefined *)0x2710;
      break;
    }
  }
  goto LAB_010b9820;
  while (param_3 = param_3 + -1, pbVar11 = pbVar19, lVar12 < 0xccccccc) {
LAB_010b9ae8:
    pbVar19 = pbVar11 + 1;
                    /* catch() { ... } // from try @ 010b9a2c with catch @ 010b9aec
                       catch() { ... } // from try @ 010b9a60 with catch @ 010b9aec */
    if (param_2 <= pbVar19) goto LAB_010b9510;
    bVar1 = *pbVar19;
                    /* catch() { ... } // from try @ 010b9d08 with catch @ 010b9b10 */
    if ((((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) ||
        ((char)bVar1 < 0)) || (uVar20 = (ulong)(uint)(int)(char)bVar1 & 0x7f, 9 < uVar20 - 0x30))
    goto LAB_010b9510;
    lVar12 = (long)(char)(&DAT_01463138)[uVar20] + lVar12 * 10;
    if ((uVar22 != 0) || (param_3 < 1)) {
                    /* try { // try from 010b9b64 to 011b9b7b has its CatchHandler @ 010b9d80 */
      puVar13 = (undefined *)0x186a0;
      if (lVar12 < 0xccccccc) {
        pbVar11 = pbVar11 + 2;
        goto LAB_010b9b88;
      }
      break;
    }
  }
  goto LAB_010b9820;
  while( true ) {
                    /* try { // try from 010b9b94 to 011b9ba7 has its CatchHandler @ 010b9d60 */
    bVar1 = *pbVar19;
    if (((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) ||
       (((char)bVar1 < 0 || (uVar20 = (ulong)(uint)(int)(char)bVar1 & 0x7f, 9 < uVar20 - 0x30))))
    goto LAB_010b9510;
    lVar12 = (long)(char)(&DAT_01463138)[uVar20] + lVar12 * 10;
    if ((uVar22 != 0) || (param_3 < 1)) {
      puVar13 = (undefined *)0xf4240;
      pbVar11 = pbVar19;
      goto joined_r0x010b9c04;
    }
    param_3 = param_3 + -1;
    pbVar11 = pbVar19 + 1;
    if (0xccccccb < lVar12) break;
LAB_010b9b88:
    pbVar19 = pbVar11;
    if (param_2 <= pbVar19) goto LAB_010b9510;
  }
  goto LAB_010b9820;
joined_r0x010b9c04:
  pbVar19 = pbVar11;
  if (0xccccccb < lVar12) goto LAB_010b9820;
  pbVar19 = pbVar11 + 1;
  if (param_2 <= pbVar19) goto LAB_010b9510;
  bVar1 = *pbVar19;
                    /* try { // try from 010b9c3c to 011b9c77 has its CatchHandler @ 010b9db4 */
  if ((((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) || ((char)bVar1 < 0))
     || (uVar20 = (ulong)(uint)(int)(char)bVar1 & 0x7f, 9 < uVar20 - 0x30)) goto LAB_010b9510;
  lVar12 = (long)(char)(&DAT_01463138)[uVar20] + lVar12 * 10;
  if ((uVar22 != 0) || (param_3 < 1)) {
    puVar13 = &UNK_00989680;
    if (lVar12 < 0xccccccc) {
                    /* try { // try from 010b9ca0 to 011b9cc3 has its CatchHandler @ 010b9db4 */
      pbVar11 = pbVar11 + 2;
      goto LAB_010b9ca8;
    }
    goto LAB_010b9820;
  }
  param_3 = param_3 + -1;
                    /* try { // try from 010b9c7c to 011b9c83 has its CatchHandler @ 010b9d5c */
  pbVar11 = pbVar19;
  goto joined_r0x010b9c04;
  while( true ) {
    param_3 = param_3 + -1;
                    /* try { // try from 010b9d08 to 011b9e23 has its CatchHandler @ 010b9b10 */
    pbVar11 = pbVar19 + 1;
    if (0xccccccb < lVar12) break;
LAB_010b9ca8:
    pbVar19 = pbVar11;
    if (param_2 <= pbVar19) goto LAB_010b9510;
    bVar1 = *pbVar19;
    if (((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) ||
       (((char)bVar1 < 0 || (uVar20 = (ulong)(uint)(int)(char)bVar1 & 0x7f, 9 < uVar20 - 0x30))))
    goto LAB_010b9510;
    lVar12 = (long)(char)(&DAT_01463138)[uVar20] + lVar12 * 10;
                    /* try { // try from 010b9cf8 to 011b9d07 has its CatchHandler @ 010b9da4 */
    if ((uVar22 != 0) || (param_3 < 1)) {
      puVar13 = (undefined *)0x5f5e100;
      if (lVar12 < 0xccccccc) {
        pbVar11 = pbVar19 + 2;
        goto LAB_010b9d34;
      }
      break;
    }
  }
  goto LAB_010b9820;
  while( true ) {
    bVar1 = *pbVar19;
                    /* catch() { ... } // from try @ 010b9c7c with catch @ 010b9d5c */
                    /* catch() { ... } // from try @ 010b9b94 with catch @ 010b9d60 */
    if ((((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) ||
        ((char)bVar1 < 0)) || (uVar20 = (ulong)(uint)(int)(char)bVar1 & 0x7f, 9 < uVar20 - 0x30))
    goto LAB_010b9510;
    lVar12 = (long)(char)(&DAT_01463138)[uVar20] + lVar12 * 10;
                    /* catch() { ... } // from try @ 010b9b64 with catch @ 010b9d80 */
    if ((uVar22 != 0) || (param_3 < 1)) {
                    /* catch() { ... } // from try @ 010b9c18 with catch @ 010b9da4
                       catch() { ... } // from try @ 010b9cf8 with catch @ 010b9da4 */
      puVar13 = (undefined *)0x3b9aca00;
                    /* catch() { ... } // from try @ 010b9c3c with catch @ 010b9db4
                       catch() { ... } // from try @ 010b9ca0 with catch @ 010b9db4 */
      if (uVar22 != 0) goto LAB_010b9db8;
      goto LAB_010b9dfc;
    }
    param_3 = param_3 + -1;
                    /* catch() { ... } // from try @ 010b9b54 with catch @ 010b9d94 */
    pbVar11 = pbVar16 + 1;
    if (0xccccccb < lVar12) break;
LAB_010b9d34:
    pbVar16 = pbVar11;
    pbVar19 = pbVar16 + -1;
    if (param_2 <= pbVar19) goto LAB_010b9510;
  }
  pbVar19 = pbVar16 + -1;
  goto LAB_010b9820;
LAB_010b9dfc:
  pbVar19 = pbVar16;
  if (param_2 <= pbVar19) goto LAB_010b9510;
  bVar1 = *pbVar19;
                    /* try { // try from 010b9e24 to 011b9e63 has its CatchHandler @ 010b9e24
                       catch() { ... } // from try @ 010b9e24 with catch @ 010b9e24
                       catch() { ... } // from try @ 010b9e7c with catch @ 010b9e24 */
  if (((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) ||
     (((char)bVar1 < 0 || (pbVar16 = pbVar19 + 1, 9 < ((ulong)(uint)(int)(char)bVar1 & 0x7f) - 0x30)
      ))) goto LAB_010b9510;
  goto LAB_010b9dfc;
LAB_010b9db8:
  pbVar19 = pbVar16;
  if (param_2 <= pbVar19) goto LAB_010b9510;
  bVar1 = *pbVar19;
  if ((((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) || ((char)bVar1 < 0))
     || (pbVar16 = pbVar19 + 1, 9 < ((ulong)(uint)(int)(char)bVar1 & 0x7f) - 0x30))
  goto LAB_010b9510;
  goto LAB_010b9db8;
}

