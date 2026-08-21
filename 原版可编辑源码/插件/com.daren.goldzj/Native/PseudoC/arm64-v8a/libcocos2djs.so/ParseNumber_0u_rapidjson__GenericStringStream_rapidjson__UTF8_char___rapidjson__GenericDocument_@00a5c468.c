
/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::ParseNumber<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>
   >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&) */

void __thiscall
rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
ParseNumber<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *this,
          GenericStringStream *param_1,GenericDocument *param_2)

{
  int iVar1;
  byte *pbVar2;
  long lVar3;
  double *pdVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  void *pvVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  double *pdVar15;
  long lVar16;
  undefined4 uVar17;
  ulong uVar18;
  int iVar19;
  byte bVar20;
  byte *pbVar21;
  void *__ptr;
  byte *pbVar22;
  byte *pbVar23;
  double *pdVar24;
  double dVar25;
  double dVar26;
  
  pbVar2 = *(byte **)param_1;
  lVar3 = *(long *)(param_1 + 8);
  bVar5 = *pbVar2;
  pbVar23 = pbVar2 + 1;
  if (bVar5 != 0x2d) {
    pbVar23 = pbVar2;
  }
  uVar12 = (int)(char)*pbVar23 - 0x30;
  if (uVar12 == 0) {
    uVar14 = 0;
    bVar8 = false;
    uVar18 = 0;
    bVar9 = false;
    pbVar22 = pbVar23 + 1;
    dVar25 = 0.0;
    goto LAB_00a5c730;
  }
  if ((int)(char)*pbVar23 - 0x31U < 9) {
    pbVar22 = pbVar23 + 1;
    uVar13 = (uint)*pbVar22;
                    /* catch() { ... } // from try @ 00a5c378 with catch @ 00a5c4c4 */
                    /* catch() { ... } // from try @ 00a5c350 with catch @ 00a5c4c8 */
                    /* catch() { ... } // from try @ 00a5c328 with catch @ 00a5c4cc */
    bVar20 = *pbVar22 - 0x30;
    if (bVar5 == 0x2d) {
                    /* catch() { ... } // from try @ 00a5c2c8 with catch @ 00a5c4dc */
      if (bVar20 < 10) {
                    /* catch() { ... } // from try @ 00a5c2bc with catch @ 00a5c4e0 */
                    /* catch() { ... } // from try @ 00a5c29c with catch @ 00a5c4e4 */
        uVar18 = 0;
        do {
                    /* catch() { ... } // from try @ 00a5c2d4 with catch @ 00a5c4f4
                       catch() { ... } // from try @ 00a5c348 with catch @ 00a5c4f4
                       catch() { ... } // from try @ 00a5c370 with catch @ 00a5c4f4
                       catch() { ... } // from try @ 00a5c394 with catch @ 00a5c4f4 */
          if ((0xccccccb < uVar12) &&
             ((uVar10 = uVar12, uVar12 != 0xccccccc || (uVar10 = 0xccccccc, '8' < (char)uVar13))))
          goto LAB_00a5c5b4;
          pbVar22 = pbVar23 + uVar18 + 2;
          uVar12 = (uVar12 * 10 + (int)(char)uVar13) - 0x30;
          uVar13 = (uint)*pbVar22;
          uVar18 = uVar18 + 1;
        } while (uVar13 - 0x30 < 10);
LAB_00a5c63c:
        dVar25 = 0.0;
        uVar14 = 0;
        bVar8 = false;
        bVar9 = false;
                    /* try { // try from 00a5c64c to 00b5c653 has its CatchHandler @ 00a5c824 */
        pbVar22 = pbVar23 + uVar18 + 1;
        goto LAB_00a5c730;
      }
    }
    else {
                    /* try { // try from 00a5c54c to 00b5c59f has its CatchHandler @ 00a5c54c
                       catch() { ... } // from try @ 00a5c54c with catch @ 00a5c54c
                       catch() { ... } // from try @ 00a5c77c with catch @ 00a5c54c */
      if (bVar20 < 10) {
        uVar18 = 0;
        do {
          if (0x19999998 < uVar12) {
            uVar10 = uVar12;
            if (uVar12 != 0x19999999) goto LAB_00a5c5b4;
                    /* try { // try from 00a5c5a0 to 00b5c5b7 has its CatchHandler @ 00a5c814 */
            if ('5' < (char)uVar13) {
              uVar10 = 0x19999999;
              goto LAB_00a5c5b4;
            }
          }
          pbVar22 = pbVar23 + uVar18 + 2;
          uVar12 = (uVar12 * 10 + (int)(char)uVar13) - 0x30;
          uVar13 = (uint)*pbVar22;
          uVar18 = uVar18 + 1;
        } while (uVar13 - 0x30 < 10);
        goto LAB_00a5c63c;
      }
    }
    dVar25 = 0.0;
    uVar14 = 0;
                    /* try { // try from 00a5ca20 to 00b5ca33 has its CatchHandler @ 00a5cc6c */
    bVar8 = false;
    uVar18 = 0;
    bVar9 = false;
    goto LAB_00a5c730;
  }
  lVar16 = (long)pbVar23 - lVar3;
  uVar17 = 3;
  pbVar22 = pbVar23;
LAB_00a5ca44:
  *(undefined4 *)(this + 0x30) = uVar17;
                    /* try { // try from 00a5ca48 to 00b5caaf has its CatchHandler @ 00a5ccb0 */
  *(long *)(this + 0x38) = lVar16;
LAB_00a5c9e8:
  *(byte **)param_1 = pbVar22;
  *(long *)(param_1 + 8) = lVar3;
                    /* try { // try from 00a5c9fc to 00b5ca03 has its CatchHandler @ 00a5cc4c */
                    /* try { // try from 00a5ca04 to 00b5ca17 has its CatchHandler @ 00a5cc48 */
  return;
LAB_00a5c5b4:
  uVar12 = uVar10;
  bVar20 = *pbVar22;
  uVar14 = (ulong)uVar12;
                    /* try { // try from 00a5c5c0 to 00b5c5cb has its CatchHandler @ 00a5c810 */
  if (bVar5 == 0x2d) {
                    /* try { // try from 00a5c5cc to 00b5c5d7 has its CatchHandler @ 00a5c80c */
    if (9 < (byte)(bVar20 - 0x30)) goto LAB_00a5caa8;
                    /* try { // try from 00a5c5d8 to 00b5c62b has its CatchHandler @ 00a5c824 */
    pbVar23 = pbVar22 + 1;
    do {
      pbVar21 = pbVar23;
                    /* try { // try from 00a5c62c to 00b5c63f has its CatchHandler @ 00a5c7fc */
      if ((0xccccccccccccccb < uVar14) && ((uVar14 != 0xccccccccccccccc || ('8' < (char)bVar20))))
      goto LAB_00a5c6c0;
      iVar19 = (int)(char)bVar20;
      pbVar23 = pbVar21 + 1;
      bVar20 = *pbVar21;
      uVar14 = (ulong)(iVar19 - 0x30) + uVar14 * 10;
      uVar18 = (ulong)((int)uVar18 + 1);
      pbVar22 = pbVar21;
    } while (bVar20 - 0x30 < 10);
  }
  else {
                    /* try { // try from 00a5c654 to 00b5c667 has its CatchHandler @ 00a5c7f8 */
    if (9 < (byte)(bVar20 - 0x30)) {
LAB_00a5caa8:
      dVar25 = 0.0;
      bVar8 = false;
      goto LAB_00a5c72c;
    }
                    /* try { // try from 00a5c674 to 00b5c67b has its CatchHandler @ 00a5c824 */
    pbVar23 = pbVar22 + 1;
    do {
      pbVar21 = pbVar23;
                    /* try { // try from 00a5c67c to 00b5c68f has its CatchHandler @ 00a5c7f4 */
      if ((0x1999999999999998 < uVar14) && ((uVar14 != 0x1999999999999999 || ('5' < (char)bVar20))))
      goto LAB_00a5c6c0;
      iVar19 = (int)(char)bVar20;
      pbVar23 = pbVar21 + 1;
      bVar20 = *pbVar21;
      uVar14 = (ulong)(iVar19 - 0x30) + uVar14 * 10;
      uVar18 = (ulong)((int)uVar18 + 1);
                    /* try { // try from 00a5c69c to 00b5c6a3 has its CatchHandler @ 00a5c824 */
      pbVar22 = pbVar21;
    } while (bVar20 - 0x30 < 10);
  }
  dVar25 = 0.0;
  bVar8 = false;
  pbVar22 = pbVar23 + -1;
LAB_00a5c72c:
  bVar9 = true;
LAB_00a5c730:
  bVar20 = *pbVar22;
  uVar13 = (uint)bVar20;
  if (bVar20 != 0x2e) {
    iVar19 = 0;
    iVar1 = 0;
    if (bVar20 == 0x65) {
LAB_00a5c83c:
      if (!bVar9) {
        uVar14 = (ulong)uVar12;
      }
      bVar20 = pbVar22[1];
      if (!bVar8) {
        dVar25 = (double)uVar14;
      }
      lVar16 = 1;
      if (bVar20 == 0x2b || bVar20 == 0x2d) {
        lVar16 = 2;
      }
                    /* try { // try from 00a5c87c to 00b5c8cf has its CatchHandler @ 00a5c87c
                       catch() { ... } // from try @ 00a5c87c with catch @ 00a5c87c
                       catch() { ... } // from try @ 00a5cbd4 with catch @ 00a5c87c */
      pbVar23 = pbVar22 + 2;
      if (bVar20 != 0x2b && bVar20 != 0x2d) {
        pbVar23 = pbVar22 + 1;
      }
      uVar13 = (int)(char)pbVar22[lVar16] - 0x30;
      if (9 < uVar13) {
        lVar16 = (long)pbVar23 - lVar3;
        uVar17 = 0xf;
        pbVar22 = pbVar23;
        goto LAB_00a5ca44;
      }
      pbVar22 = pbVar23 + 1;
      if (bVar20 != 0x2d) {
        do {
                    /* try { // try from 00a5c8d0 to 00b5c8e7 has its CatchHandler @ 00a5cca0 */
          if (9 < (int)(char)*pbVar22 - 0x30U) goto LAB_00a5c94c;
          uVar13 = ((int)(char)*pbVar22 + uVar13 * 10) - 0x30;
          pbVar22 = pbVar22 + 1;
        } while ((int)uVar13 <= 0x134 - iVar19);
        goto LAB_00a5c8f0;
      }
      bVar6 = *pbVar22;
      while (bVar6 - 0x30 < 10) {
        uVar13 = (uVar13 * 10 + (int)(char)bVar6) - 0x30;
        pbVar22 = pbVar22 + 1;
        if (0xccccccb < (int)uVar13) {
          bVar6 = *pbVar22;
          while (bVar6 - 0x30 < 10) {
            pbVar22 = pbVar22 + 1;
            bVar6 = *pbVar22;
                    /* try { // try from 00a5c908 to 00b5c93b has its CatchHandler @ 00a5ccb0 */
          }
        }
                    /* try { // try from 00a5c93c to 00b5c943 has its CatchHandler @ 00a5cc78 */
        bVar6 = *pbVar22;
      }
LAB_00a5c94c:
                    /* try { // try from 00a5c94c to 00b5c953 has its CatchHandler @ 00a5cc80 */
      uVar12 = -uVar13;
      if (bVar20 != 0x2d) {
        uVar12 = uVar13;
      }
    }
    else {
LAB_00a5ca78:
      iVar19 = iVar1;
      if (uVar13 == 0x45) goto LAB_00a5c83c;
      if (!bVar8) {
        if (bVar9) {
          if (bVar5 != 0x2d) {
                    /* try { // try from 00a5cb44 to 00b5cb87 has its CatchHandler @ 00a5cc70 */
            uVar18 = GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                     ::Uint64((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                               *)param_2,uVar14);
          }
          else {
            uVar18 = GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                     ::Int64((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                              *)param_2,-uVar14);
          }
        }
        else if (bVar5 != 0x2d) {
          uVar18 = GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                   ::Uint((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                           *)param_2,uVar12);
        }
        else {
          uVar18 = GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                   ::Int((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                          *)param_2,-uVar12);
        }
        if ((uVar18 & 1) == 0) {
          *(undefined4 *)(this + 0x30) = 0x10;
          *(long *)(this + 0x38) = (long)pbVar2 - lVar3;
        }
        goto LAB_00a5c9e8;
      }
      uVar12 = 0;
    }
    iVar19 = uVar12 + iVar19;
    if (iVar19 < -0x134) {
                    /* try { // try from 00a5c964 to 00b5c96b has its CatchHandler @ 00a5cc74 */
      dVar26 = 0.0;
      if (-0x269 < iVar19) {
                    /* try { // try from 00a5c97c to 00b5c99b has its CatchHandler @ 00a5cc70 */
        dVar26 = (dVar25 / 1e+308) / (double)(&internal::Pow10(int)::e)[-0x134 - iVar19];
      }
    }
    else if (iVar19 < 0) {
                    /* try { // try from 00a5c9ac to 00b5c9b3 has its CatchHandler @ 00a5cc68 */
                    /* try { // try from 00a5c9b4 to 00b5c9c7 has its CatchHandler @ 00a5cc58 */
      dVar26 = dVar25 / (double)(&internal::Pow10(int)::e)[-(long)iVar19];
    }
    else {
                    /* try { // try from 00a5c9a0 to 00b5c9a3 has its CatchHandler @ 00a5cc6c */
      dVar26 = dVar25 * (double)(&internal::Pow10(int)::e)[iVar19];
    }
    pdVar24 = *(double **)(param_2 + 0x40);
    pdVar4 = *(double **)(param_2 + 0x48);
    dVar25 = -dVar26;
    if (bVar5 != 0x2d) {
      dVar25 = dVar26;
    }
    pdVar15 = pdVar24 + 3;
    if (pdVar4 < pdVar15) {
      __ptr = *(void **)(param_2 + 0x38);
      if (__ptr == (void *)0x0) {
                    /* try { // try from 00a5cab4 to 00b5caf7 has its CatchHandler @ 00a5cc80 */
        if (*(long *)(param_2 + 0x28) == 0) {
          pvVar11 = operator_new(1);
          *(void **)(param_2 + 0x28) = pvVar11;
          *(void **)(param_2 + 0x30) = pvVar11;
        }
        uVar18 = *(ulong *)(param_2 + 0x50);
      }
      else {
        uVar18 = (long)pdVar4 + (((ulong)((long)pdVar4 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
      }
      uVar14 = ((long)pdVar24 - (long)__ptr) + 0x18;
      if (uVar14 <= uVar18) {
        uVar14 = uVar18;
      }
      if (uVar14 == 0) {
        free(__ptr);
        pvVar11 = (void *)0x0;
      }
      else {
        pvVar11 = realloc(__ptr,uVar14);
      }
      pdVar24 = (double *)((long)pvVar11 + ((long)pdVar24 - (long)__ptr));
                    /* try { // try from 00a5cafc to 00b5cb3f has its CatchHandler @ 00a5cc74 */
      *(ulong *)(param_2 + 0x48) = (long)pvVar11 + uVar14;
      pdVar15 = pdVar24 + 3;
      *(void **)(param_2 + 0x38) = pvVar11;
      *(double **)(param_2 + 0x40) = pdVar24;
    }
                    /* try { // try from 00a5c9d4 to 00b5c9db has its CatchHandler @ 00a5cc54 */
    *(double **)(param_2 + 0x40) = pdVar15;
                    /* try { // try from 00a5c9dc to 00b5c9ef has its CatchHandler @ 00a5cc50 */
    pdVar24[1] = 0.0;
    pdVar24[2] = 0.0;
    *pdVar24 = dVar25;
    *(undefined2 *)((long)pdVar24 + 0x16) = 0x216;
    goto LAB_00a5c9e8;
  }
  pbVar23 = pbVar22 + 1;
  bVar20 = *pbVar23;
  if ((int)(char)bVar20 - 0x30U < 10) {
    if (bVar8) {
      iVar19 = 0;
    }
    else {
      if (!bVar9) {
        uVar14 = (ulong)uVar12;
      }
      iVar19 = 0;
      if ((uVar14 >> 0x35 == 0) && ((char)bVar20 < ':')) {
                    /* try { // try from 00a5c77c to 00b5c87b has its CatchHandler @ 00a5c54c */
        pbVar22 = pbVar22 + 2;
        iVar1 = -1;
        do {
          iVar19 = iVar1;
          pbVar23 = pbVar22;
          iVar1 = (int)(char)bVar20;
          bVar20 = *pbVar23;
          uVar14 = (ulong)(iVar1 - 0x30) + uVar14 * 10;
          uVar13 = (uint)uVar18;
          if (uVar14 != 0) {
            uVar13 = uVar13 + 1;
          }
          uVar18 = (ulong)uVar13;
        } while ((('/' < (char)bVar20) && (uVar14 >> 0x35 == 0)) &&
                (pbVar22 = pbVar23 + 1, iVar1 = iVar19 + -1, (char)bVar20 < ':'));
      }
      dVar25 = (double)uVar14;
    }
    bVar20 = *pbVar23;
    pbVar22 = pbVar23;
    while (uVar13 = (uint)bVar20, uVar13 - 0x30 < 10) {
      if ((int)uVar18 < 0x11) {
                    /* catch() { ... } // from try @ 00a5c6a4 with catch @ 00a5c7f0 */
                    /* catch() { ... } // from try @ 00a5c67c with catch @ 00a5c7f4 */
                    /* catch() { ... } // from try @ 00a5c654 with catch @ 00a5c7f8 */
                    /* catch() { ... } // from try @ 00a5c62c with catch @ 00a5c7fc */
        dVar25 = dVar25 * 10.0 + (double)((char)bVar20 + -0x30);
                    /* catch() { ... } // from try @ 00a5c5cc with catch @ 00a5c80c */
        iVar19 = iVar19 + -1;
                    /* catch() { ... } // from try @ 00a5c5c0 with catch @ 00a5c810 */
        if (0.0 < dVar25) {
                    /* catch() { ... } // from try @ 00a5c5a0 with catch @ 00a5c814 */
          uVar18 = (ulong)((int)uVar18 + 1);
        }
      }
      pbVar22 = pbVar22 + 1;
      bVar20 = *pbVar22;
                    /* catch() { ... } // from try @ 00a5c5d8 with catch @ 00a5c824
                       catch() { ... } // from try @ 00a5c64c with catch @ 00a5c824
                       catch() { ... } // from try @ 00a5c674 with catch @ 00a5c824
                       catch() { ... } // from try @ 00a5c69c with catch @ 00a5c824
                       catch() { ... } // from try @ 00a5c6c0 with catch @ 00a5c824 */
    }
    bVar8 = true;
    iVar1 = iVar19;
    if (uVar13 != 0x65) goto LAB_00a5ca78;
    goto LAB_00a5c83c;
  }
  lVar16 = (long)pbVar23 - lVar3;
  uVar17 = 0xe;
  pbVar22 = pbVar23;
  goto LAB_00a5ca44;
LAB_00a5c6c0:
                    /* try { // try from 00a5c6c0 to 00b5c77b has its CatchHandler @ 00a5c824 */
  uVar13 = (uint)*pbVar22;
  dVar25 = (double)uVar14;
  if (9 < *pbVar22 - 0x30) {
LAB_00a5c728:
    bVar8 = true;
    goto LAB_00a5c72c;
  }
  do {
    pbVar22 = pbVar22 + 1;
    cVar7 = (char)uVar13;
    uVar13 = (uint)*pbVar22;
    dVar25 = dVar25 * 10.0 + (double)(cVar7 + -0x30);
    if (9 < uVar13 - 0x30) goto LAB_00a5c728;
  } while (dVar25 < 1.7976931348623158e+307);
LAB_00a5c8f0:
                    /* try { // try from 00a5c8f0 to 00b5c8fb has its CatchHandler @ 00a5cc9c */
  *(undefined4 *)(this + 0x30) = 0xd;
  *(long *)(this + 0x38) = (long)pbVar2 - lVar3;
                    /* try { // try from 00a5c8fc to 00b5c907 has its CatchHandler @ 00a5cc98 */
  goto LAB_00a5c9e8;
}

