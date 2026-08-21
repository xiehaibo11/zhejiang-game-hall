
/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::ParseNumber<1u,
   rapidjson::GenericInsituStringStream<rapidjson::UTF8<char> >,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>
   >(rapidjson::GenericInsituStringStream<rapidjson::UTF8<char> >&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&) */

void __thiscall
rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
ParseNumber<1u,rapidjson::GenericInsituStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *this,
          GenericInsituStringStream *param_1,GenericDocument *param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined8 uVar3;
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
  long lVar15;
  undefined4 uVar16;
  ulong uVar17;
  int iVar18;
  byte bVar19;
  byte *pbVar20;
  void *__ptr;
  byte *pbVar21;
  long lVar22;
  byte *pbVar23;
  double *pdVar24;
  double dVar25;
  double dVar26;
  
  pbVar2 = *(byte **)param_1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar22 = *(long *)(param_1 + 0x10);
  bVar5 = *pbVar2;
  pbVar23 = pbVar2 + 1;
  if (bVar5 != 0x2d) {
    pbVar23 = pbVar2;
  }
  uVar12 = (int)(char)*pbVar23 - 0x30;
  if (uVar12 == 0) {
    uVar14 = 0;
    bVar8 = false;
    uVar17 = 0;
    bVar9 = false;
    pbVar21 = pbVar23 + 1;
    dVar25 = 0.0;
    goto LAB_00d2ca70;
  }
  if ((int)(char)*pbVar23 - 0x31U < 9) {
    pbVar21 = pbVar23 + 1;
    uVar13 = (uint)*pbVar21;
    bVar19 = *pbVar21 - 0x30;
    if (bVar5 == 0x2d) {
      if (bVar19 < 10) {
        uVar17 = 0;
        do {
          if ((0xccccccb < uVar12) &&
             ((uVar10 = uVar12, uVar12 != 0xccccccc || (uVar10 = 0xccccccc, '8' < (char)uVar13))))
          goto LAB_00d2c8f4;
          pbVar21 = pbVar23 + uVar17 + 2;
          uVar12 = (uVar12 * 10 + (int)(char)uVar13) - 0x30;
          uVar13 = (uint)*pbVar21;
          uVar17 = uVar17 + 1;
        } while (uVar13 - 0x30 < 10);
LAB_00d2c97c:
        dVar25 = 0.0;
        uVar14 = 0;
        bVar8 = false;
        bVar9 = false;
        pbVar21 = pbVar23 + uVar17 + 1;
        goto LAB_00d2ca70;
      }
    }
    else if (bVar19 < 10) {
      uVar17 = 0;
      do {
        if (0x19999998 < uVar12) {
          uVar10 = uVar12;
          if (uVar12 != 0x19999999) goto LAB_00d2c8f4;
          if ('5' < (char)uVar13) {
            uVar10 = 0x19999999;
            goto LAB_00d2c8f4;
          }
        }
        pbVar21 = pbVar23 + uVar17 + 2;
        uVar12 = (uVar12 * 10 + (int)(char)uVar13) - 0x30;
        uVar13 = (uint)*pbVar21;
        uVar17 = uVar17 + 1;
      } while (uVar13 - 0x30 < 10);
      goto LAB_00d2c97c;
    }
    dVar25 = 0.0;
    uVar14 = 0;
    bVar8 = false;
    uVar17 = 0;
    bVar9 = false;
    goto LAB_00d2ca70;
  }
  lVar15 = (long)pbVar23 - lVar22;
  uVar16 = 3;
  pbVar21 = pbVar23;
LAB_00d2cd88:
  *(undefined4 *)(this + 0x30) = uVar16;
  *(long *)(this + 0x38) = lVar15;
LAB_00d2cd28:
  *(byte **)param_1 = pbVar21;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(long *)(param_1 + 0x10) = lVar22;
  return;
LAB_00d2c8f4:
  uVar12 = uVar10;
  bVar19 = *pbVar21;
  uVar14 = (ulong)uVar12;
  if (bVar5 == 0x2d) {
    if (9 < (byte)(bVar19 - 0x30)) goto LAB_00d2cdec;
    pbVar23 = pbVar21 + 1;
    do {
      pbVar20 = pbVar23;
      if ((0xccccccccccccccb < uVar14) && ((uVar14 != 0xccccccccccccccc || ('8' < (char)bVar19))))
      goto LAB_00d2ca00;
      iVar18 = (int)(char)bVar19;
      pbVar23 = pbVar20 + 1;
      bVar19 = *pbVar20;
      uVar14 = (ulong)(iVar18 - 0x30) + uVar14 * 10;
      uVar17 = (ulong)((int)uVar17 + 1);
      pbVar21 = pbVar20;
    } while (bVar19 - 0x30 < 10);
  }
  else {
    if (9 < (byte)(bVar19 - 0x30)) {
LAB_00d2cdec:
      dVar25 = 0.0;
      bVar8 = false;
      goto LAB_00d2ca6c;
    }
    pbVar23 = pbVar21 + 1;
    do {
      pbVar20 = pbVar23;
      if ((0x1999999999999998 < uVar14) && ((uVar14 != 0x1999999999999999 || ('5' < (char)bVar19))))
      goto LAB_00d2ca00;
      iVar18 = (int)(char)bVar19;
      pbVar23 = pbVar20 + 1;
      bVar19 = *pbVar20;
      uVar14 = (ulong)(iVar18 - 0x30) + uVar14 * 10;
      uVar17 = (ulong)((int)uVar17 + 1);
      pbVar21 = pbVar20;
    } while (bVar19 - 0x30 < 10);
  }
  dVar25 = 0.0;
  bVar8 = false;
  pbVar21 = pbVar23 + -1;
LAB_00d2ca6c:
  bVar9 = true;
LAB_00d2ca70:
  bVar19 = *pbVar21;
  if (bVar19 != 0x2e) {
    iVar18 = 0;
    iVar1 = 0;
    if (bVar19 == 0x65) {
LAB_00d2cb7c:
      if (!bVar9) {
        uVar14 = (ulong)uVar12;
      }
      bVar19 = pbVar21[1];
      if (!bVar8) {
        dVar25 = (double)uVar14;
      }
      lVar15 = 1;
      if (bVar19 == 0x2b || bVar19 == 0x2d) {
        lVar15 = 2;
      }
      pbVar23 = pbVar21 + 2;
      if (bVar19 != 0x2b && bVar19 != 0x2d) {
        pbVar23 = pbVar21 + 1;
      }
      uVar13 = (int)(char)pbVar21[lVar15] - 0x30;
      if (9 < uVar13) {
        lVar15 = (long)pbVar23 - lVar22;
        uVar16 = 0xf;
        pbVar21 = pbVar23;
        goto LAB_00d2cd88;
      }
      pbVar21 = pbVar23 + 1;
      if (bVar19 != 0x2d) {
        do {
          if (9 < (int)(char)*pbVar21 - 0x30U) goto LAB_00d2cc8c;
          uVar13 = ((int)(char)*pbVar21 + uVar13 * 10) - 0x30;
          pbVar21 = pbVar21 + 1;
        } while ((int)uVar13 <= 0x134 - iVar18);
        goto LAB_00d2cc7c;
      }
      bVar6 = *pbVar21;
      while (bVar6 - 0x30 < 10) {
        uVar13 = (uVar13 * 10 + (int)(char)bVar6) - 0x30;
        pbVar21 = pbVar21 + 1;
        if (0xccccccb < (int)uVar13) {
          bVar6 = *pbVar21;
          while (bVar6 - 0x30 < 10) {
            pbVar21 = pbVar21 + 1;
            bVar6 = *pbVar21;
          }
        }
        bVar6 = *pbVar21;
      }
LAB_00d2cc8c:
      uVar12 = -uVar13;
      if (bVar19 != 0x2d) {
        uVar12 = uVar13;
      }
    }
    else {
LAB_00d2cdbc:
      iVar18 = iVar1;
      if (bVar19 == 0x45) goto LAB_00d2cb7c;
      if (!bVar8) {
        if (bVar9) {
          if (bVar5 != 0x2d) {
            uVar17 = GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                     ::Uint64((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                               *)param_2,uVar14);
          }
          else {
            uVar17 = GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                     ::Int64((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                              *)param_2,-uVar14);
          }
        }
        else if (bVar5 != 0x2d) {
          uVar17 = GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                   ::Uint((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                           *)param_2,uVar12);
        }
        else {
          uVar17 = GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                   ::Int((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                          *)param_2,-uVar12);
        }
        if ((uVar17 & 1) == 0) {
          *(undefined4 *)(this + 0x30) = 0x10;
          *(long *)(this + 0x38) = (long)pbVar2 - lVar22;
        }
        goto LAB_00d2cd28;
      }
      uVar12 = 0;
    }
    iVar18 = uVar12 + iVar18;
    if (iVar18 < -0x134) {
      dVar26 = 0.0;
      if (-0x269 < iVar18) {
        dVar26 = (dVar25 / 1e+308) /
                 *(double *)(internal::Pow10(int)::e + (-0x134 - (long)iVar18) * 8);
      }
    }
    else if (iVar18 < 0) {
      dVar26 = dVar25 / *(double *)(internal::Pow10(int)::e + (long)iVar18 * -8);
    }
    else {
      dVar26 = dVar25 * *(double *)(internal::Pow10(int)::e + (long)iVar18 * 8);
    }
    pdVar24 = *(double **)(param_2 + 0x40);
    pdVar4 = *(double **)(param_2 + 0x48);
    dVar25 = -dVar26;
    if (bVar5 != 0x2d) {
      dVar25 = dVar26;
    }
    if (pdVar4 < pdVar24 + 3) {
      __ptr = *(void **)(param_2 + 0x38);
      if (__ptr == (void *)0x0) {
        if (*(long *)(param_2 + 0x28) == 0) {
          pvVar11 = operator_new(1);
          *(void **)(param_2 + 0x28) = pvVar11;
          *(void **)(param_2 + 0x30) = pvVar11;
        }
        uVar17 = *(ulong *)(param_2 + 0x50);
      }
      else {
        uVar17 = (long)pdVar4 + (((ulong)((long)pdVar4 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
      }
      uVar14 = ((long)pdVar24 - (long)__ptr) + 0x18;
      if (uVar14 <= uVar17) {
        uVar14 = uVar17;
      }
      if (uVar14 == 0) {
        free(__ptr);
        pvVar11 = (void *)0x0;
      }
      else {
        pvVar11 = realloc(__ptr,uVar14);
      }
      pdVar24 = (double *)((long)pvVar11 + ((long)pdVar24 - (long)__ptr));
      *(void **)(param_2 + 0x38) = pvVar11;
      *(double **)(param_2 + 0x40) = pdVar24;
      *(ulong *)(param_2 + 0x48) = (long)pvVar11 + uVar14;
    }
    *(double **)(param_2 + 0x40) = pdVar24 + 3;
    pdVar24[1] = 0.0;
    pdVar24[2] = 1.3140351748525322e-298;
    *pdVar24 = dVar25;
    goto LAB_00d2cd28;
  }
  pbVar23 = pbVar21 + 1;
  bVar19 = *pbVar23;
  if ((int)(char)bVar19 - 0x30U < 10) {
    if (bVar8) {
      iVar18 = 0;
    }
    else {
      if (!bVar9) {
        uVar14 = (ulong)uVar12;
      }
      iVar18 = 0;
      if ((uVar14 >> 0x35 == 0) && ((char)bVar19 < ':')) {
        pbVar21 = pbVar21 + 2;
        iVar1 = -1;
        do {
          iVar18 = iVar1;
          pbVar23 = pbVar21;
          iVar1 = (int)(char)bVar19;
          bVar19 = *pbVar23;
          uVar14 = (ulong)(iVar1 - 0x30) + uVar14 * 10;
          uVar13 = (uint)uVar17;
          if (uVar14 != 0) {
            uVar13 = uVar13 + 1;
          }
          uVar17 = (ulong)uVar13;
        } while ((('/' < (char)bVar19) && (uVar14 >> 0x35 == 0)) &&
                (pbVar21 = pbVar23 + 1, iVar1 = iVar18 + -1, (char)bVar19 < ':'));
      }
      dVar25 = (double)uVar14;
    }
    bVar19 = *pbVar23;
    pbVar21 = pbVar23;
    while (bVar19 - 0x30 < 10) {
      if ((int)uVar17 < 0x11) {
        dVar25 = dVar25 * 10.0 + (double)((char)bVar19 + -0x30);
        iVar18 = iVar18 + -1;
        if (0.0 < dVar25) {
          uVar17 = (ulong)((int)uVar17 + 1);
        }
      }
      pbVar21 = pbVar21 + 1;
      bVar19 = *pbVar21;
    }
    bVar8 = true;
    iVar1 = iVar18;
    if (bVar19 != 0x65) goto LAB_00d2cdbc;
    goto LAB_00d2cb7c;
  }
  lVar15 = (long)pbVar23 - lVar22;
  uVar16 = 0xe;
  pbVar21 = pbVar23;
  goto LAB_00d2cd88;
LAB_00d2ca00:
  uVar13 = (uint)*pbVar21;
  dVar25 = (double)uVar14;
  if (9 < *pbVar21 - 0x30) {
LAB_00d2ca68:
    bVar8 = true;
    goto LAB_00d2ca6c;
  }
  do {
    pbVar21 = pbVar21 + 1;
    cVar7 = (char)uVar13;
    uVar13 = (uint)*pbVar21;
    dVar25 = dVar25 * 10.0 + (double)(cVar7 + -0x30);
    if (9 < uVar13 - 0x30) goto LAB_00d2ca68;
  } while (dVar25 < 1.7976931348623158e+307);
LAB_00d2cc7c:
  *(undefined4 *)(this + 0x30) = 0xd;
  *(long *)(this + 0x38) = (long)pbVar2 - lVar22;
  goto LAB_00d2cd28;
}

