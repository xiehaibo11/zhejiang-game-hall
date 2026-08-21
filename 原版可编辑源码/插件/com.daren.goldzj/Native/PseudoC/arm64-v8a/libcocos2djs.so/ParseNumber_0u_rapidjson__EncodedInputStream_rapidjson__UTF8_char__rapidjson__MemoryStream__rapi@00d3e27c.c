
/* WARNING: Type propagation algorithm not settling */
/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::ParseNumber<0u, rapidjson::EncodedInputStream<rapidjson::UTF8<char>,
   rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>
   >(rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&) */

void __thiscall
rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
ParseNumber<0u,rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *this,
          EncodedInputStream *param_1,GenericDocument *param_2)

{
  ulong __size;
  double *pdVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  void *pvVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  undefined4 uVar12;
  byte *pbVar13;
  double *pdVar14;
  long lVar15;
  double *pdVar16;
  long *plVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  uint uVar21;
  int iVar22;
  byte *pbVar23;
  void *__ptr;
  double dVar24;
  double dVar25;
  
  plVar17 = *(long **)param_1;
  lVar15 = plVar17[1];
  pbVar18 = (byte *)plVar17[2];
  pbVar13 = (byte *)*plVar17;
  if ((pbVar18 == pbVar13) || (*pbVar13 != 0x2d)) {
    bVar2 = false;
    pbVar6 = pbVar13;
  }
  else {
    pbVar6 = pbVar13 + 1;
    bVar2 = true;
    *plVar17 = (long)pbVar6;
  }
  if (pbVar6 != pbVar18) {
    if (*pbVar6 == 0x30) {
      pbVar23 = pbVar6 + 1;
      pbVar20 = (byte *)0x0;
      uVar9 = 0;
      *plVar17 = (long)pbVar23;
LAB_00d3e4b8:
      bVar4 = false;
      bVar3 = false;
      uVar7 = 0;
      dVar24 = 0.0;
joined_r0x00d3e4c0:
      if (pbVar23 == pbVar18) {
        iVar22 = 0;
LAB_00d3e8ac:
        if (bVar3) {
LAB_00d3e5e4:
          iVar11 = 0;
          goto LAB_00d3e748;
        }
LAB_00d3e8b0:
        if (bVar4) {
LAB_00d3e8b4:
          if (bVar2) {
LAB_00d3e8b8:
            uVar7 = GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                    ::Int64((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                             *)param_2,-uVar7);
          }
          else {
LAB_00d3e954:
            uVar7 = GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                    ::Uint64((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                              *)param_2,uVar7);
          }
        }
        else {
LAB_00d3e8cc:
          if (bVar2) goto LAB_00d3e8d0;
LAB_00d3e8e4:
          uVar7 = GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                  ::Uint((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                          *)param_2,uVar9);
        }
joined_r0x00d3e8dc:
        if ((uVar7 & 1) != 0) {
          return;
        }
        uVar12 = 0x10;
        goto LAB_00d3e948;
      }
      if (*pbVar23 == 0x2e) {
        pbVar6 = pbVar23 + 1;
        *plVar17 = (long)pbVar6;
        if (pbVar6 != pbVar18) {
          bVar10 = *pbVar6;
          if ((int)(char)bVar10 - 0x30U < 10) {
            if (bVar3) {
              iVar22 = 0;
            }
            else {
              if (!bVar4) {
                uVar7 = (ulong)uVar9;
              }
              if ((char)bVar10 < 0x30) {
                iVar22 = 0;
              }
              else {
                iVar22 = 0;
                pbVar5 = pbVar6;
                pbVar23 = pbVar23 + 2;
                do {
                  if ((uVar7 >> 0x35 != 0) || ('9' < (char)bVar10)) {
                    pbVar6 = pbVar23 + -1;
                    break;
                  }
                  *plVar17 = (long)pbVar23;
                  iVar22 = iVar22 + -1;
                  uVar7 = (ulong)(pbVar23[-1] - 0x30) + uVar7 * 10;
                  uVar21 = (uint)pbVar20;
                  if (uVar7 != 0) {
                    uVar21 = uVar21 + 1;
                  }
                  pbVar20 = (byte *)(ulong)uVar21;
                  pbVar6 = pbVar18;
                  if (pbVar18 == pbVar23) break;
                  bVar10 = *pbVar23;
                  pbVar6 = pbVar5 + 1;
                  pbVar5 = pbVar6;
                  pbVar23 = pbVar23 + 1;
                } while ('/' < (char)bVar10);
              }
              dVar24 = (double)uVar7;
            }
            for (; pbVar6 != pbVar18; pbVar6 = pbVar6 + 1) {
              if (9 < *pbVar6 - 0x30) {
                bVar3 = true;
                pbVar23 = pbVar6;
                goto joined_r0x00d3e5f8;
              }
              if ((int)pbVar20 < 0x11) {
                *plVar17 = (long)(pbVar6 + 1);
                iVar22 = iVar22 + -1;
                dVar24 = dVar24 * 10.0 + (double)((char)*pbVar6 + -0x30);
                if (0.0 < dVar24) {
                  pbVar20 = (byte *)(ulong)((int)pbVar20 + 1);
                }
              }
              else {
                *plVar17 = (long)(pbVar6 + 1);
              }
            }
            goto LAB_00d3e5e4;
          }
        }
        lVar15 = (long)pbVar6 - lVar15;
        uVar12 = 0xe;
        goto LAB_00d3ea9c;
      }
      iVar22 = 0;
joined_r0x00d3e5f8:
      if (pbVar23 == pbVar18) goto LAB_00d3e8ac;
      if ((*pbVar23 != 0x65) && (*pbVar23 != 0x45)) {
        if (bVar3) goto LAB_00d3e5e4;
        goto LAB_00d3e8b0;
      }
      if (!bVar4) {
        uVar7 = (ulong)uVar9;
      }
      pbVar6 = pbVar23 + 1;
      if (!bVar3) {
        dVar24 = (double)uVar7;
      }
      *plVar17 = (long)pbVar6;
      if (pbVar6 != pbVar18) {
        if (*pbVar6 == 0x2b) {
          bVar3 = false;
LAB_00d3e640:
          pbVar6 = pbVar23 + 2;
          *plVar17 = (long)pbVar6;
        }
        else {
          if (*pbVar6 == 0x2d) {
            bVar3 = true;
            goto LAB_00d3e640;
          }
          bVar3 = false;
        }
        if ((pbVar6 != pbVar18) && (*pbVar6 - 0x30 < 10)) {
          pbVar20 = pbVar6 + 1;
          *plVar17 = (long)pbVar20;
          iVar19 = (char)*pbVar6 + -0x30;
          if (bVar3) {
            while ((pbVar20 != pbVar18 && (*pbVar20 - 0x30 < 10))) {
              pbVar13 = pbVar20 + 1;
              *plVar17 = (long)pbVar13;
              iVar19 = (int)(char)*pbVar20 + iVar19 * 10 + -0x30;
              pbVar20 = pbVar13;
              if (0xccccccb < iVar19) {
                while( true ) {
                  if (pbVar20 == pbVar18) goto LAB_00d3e740;
                  if (9 < *pbVar20 - 0x30) break;
                  *plVar17 = (long)(pbVar20 + 1);
                  pbVar20 = pbVar20 + 1;
                }
              }
            }
LAB_00d3e740:
            iVar11 = -iVar19;
            if (!bVar3) {
              iVar11 = iVar19;
            }
LAB_00d3e748:
            iVar11 = iVar11 + iVar22;
            if (iVar11 < -0x134) {
              dVar25 = 0.0;
              if (-0x269 < iVar11) {
                dVar25 = (dVar24 / 1e+308) / (double)(&internal::Pow10(int)::e)[-0x134 - iVar11];
              }
            }
            else if (iVar11 < 0) {
              dVar25 = dVar24 / (double)(&internal::Pow10(int)::e)[-(long)iVar11];
            }
            else {
              dVar25 = dVar24 * (double)(&internal::Pow10(int)::e)[iVar11];
            }
            pdVar14 = *(double **)(param_2 + 0x40);
            pdVar1 = *(double **)(param_2 + 0x48);
            dVar24 = -dVar25;
            if (!bVar2) {
              dVar24 = dVar25;
            }
            pdVar16 = pdVar14 + 3;
            if (pdVar1 < pdVar16) {
              __ptr = *(void **)(param_2 + 0x38);
              if (__ptr == (void *)0x0) {
                if (*(long *)(param_2 + 0x28) == 0) {
                  pvVar8 = operator_new(1);
                  *(void **)(param_2 + 0x28) = pvVar8;
                  *(void **)(param_2 + 0x30) = pvVar8;
                }
                uVar7 = *(ulong *)(param_2 + 0x50);
              }
              else {
                uVar7 = (long)pdVar1 +
                        (((ulong)((long)pdVar1 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
              }
              __size = ((long)pdVar14 - (long)__ptr) + 0x18;
              if (__size <= uVar7) {
                __size = uVar7;
              }
              if (__size == 0) {
                free(__ptr);
                pvVar8 = (void *)0x0;
              }
              else {
                pvVar8 = realloc(__ptr,__size);
              }
              pdVar14 = (double *)((long)pvVar8 + ((long)pdVar14 - (long)__ptr));
              *(ulong *)(param_2 + 0x48) = (long)pvVar8 + __size;
              pdVar16 = pdVar14 + 3;
              *(void **)(param_2 + 0x38) = pvVar8;
              *(double **)(param_2 + 0x40) = pdVar14;
            }
            *(double **)(param_2 + 0x40) = pdVar16;
            pdVar14[1] = 0.0;
            pdVar14[2] = 0.0;
            *pdVar14 = dVar24;
            *(undefined2 *)((long)pdVar14 + 0x16) = 0x216;
            return;
          }
          pbVar18 = pbVar18 + ~(ulong)pbVar6;
          do {
            if ((pbVar18 == (byte *)0x0) || (9 < *pbVar20 - 0x30)) goto LAB_00d3e740;
            *plVar17 = (long)(pbVar20 + 1);
            pbVar18 = pbVar18 + -1;
            iVar19 = (int)(char)*pbVar20 + iVar19 * 10 + -0x30;
            pbVar20 = pbVar20 + 1;
          } while (iVar19 <= 0x134 - iVar22);
LAB_00d3e944:
          uVar12 = 0xd;
LAB_00d3e948:
          *(undefined4 *)(this + 0x30) = uVar12;
          *(long *)(this + 0x38) = (long)pbVar13 - lVar15;
          return;
        }
      }
      lVar15 = (long)pbVar6 - lVar15;
      uVar12 = 0xf;
      goto LAB_00d3ea9c;
    }
    if (*pbVar6 - 0x31 < 9) {
      pbVar20 = pbVar6 + 1;
      *plVar17 = (long)pbVar20;
      uVar9 = (int)(char)*pbVar6 - 0x30;
      if (!bVar2) {
        if (pbVar20 != pbVar18) {
          pbVar20 = (byte *)0x0;
          do {
            pbVar23 = pbVar6 + (long)pbVar20;
            bVar10 = pbVar23[1];
            uVar21 = (uint)(char)bVar10;
            if (9 < (int)(char)bVar10 - 0x30U) {
              pbVar23 = pbVar23 + 1;
              goto LAB_00d3e4b8;
            }
            if (0x19999998 < uVar9) {
              if (uVar9 != 0x19999999) goto LAB_00d3e3fc;
              if ('5' < (char)bVar10) {
                uVar9 = 0x19999999;
                goto LAB_00d3e3fc;
              }
            }
            *plVar17 = (long)(pbVar6 + (long)pbVar20 + 2);
            pbVar20 = pbVar20 + 1;
            uVar9 = ((int)(char)pbVar23[1] + uVar9 * 10) - 0x30;
          } while (pbVar18 + ~(ulong)pbVar6 != pbVar20);
          goto LAB_00d3e8cc;
        }
        goto LAB_00d3e8e4;
      }
      if (pbVar20 != pbVar18) {
        pbVar20 = (byte *)0x0;
LAB_00d3e31c:
        pbVar23 = pbVar6 + (long)pbVar20;
        bVar10 = pbVar23[1];
        uVar21 = (uint)(char)bVar10;
        if (9 < (int)(char)bVar10 - 0x30U) {
          pbVar23 = pbVar23 + 1;
          goto LAB_00d3e4b8;
        }
        if (uVar9 < 0xccccccc) {
LAB_00d3e338:
          *plVar17 = (long)(pbVar6 + (long)pbVar20 + 2);
          pbVar20 = pbVar20 + 1;
          uVar9 = ((int)(char)pbVar23[1] + uVar9 * 10) - 0x30;
          if (pbVar18 + ~(ulong)pbVar6 == pbVar20) goto LAB_00d3e8cc;
          goto LAB_00d3e31c;
        }
        if (uVar9 != 0xccccccc) goto LAB_00d3e3fc;
        if ((char)bVar10 < '9') goto LAB_00d3e338;
        uVar21 = 0x39;
        uVar9 = 0xccccccc;
LAB_00d3e3fc:
        pbVar6 = pbVar6 + (long)pbVar20;
        pbVar23 = pbVar6 + 1;
        uVar7 = (ulong)uVar9;
        if (bVar2) {
          if (pbVar23 != pbVar18) {
            if (9 < uVar21 - 0x30) {
LAB_00d3ea14:
              dVar24 = 0.0;
              bVar3 = false;
              goto LAB_00d3e89c;
            }
            pbVar6 = pbVar6 + 2;
LAB_00d3e43c:
            if (uVar7 < 0xccccccccccccccc) {
LAB_00d3e444:
              *plVar17 = (long)pbVar6;
              uVar7 = (ulong)(pbVar6[-1] - 0x30) + uVar7 * 10;
              if (pbVar18 == pbVar6) goto LAB_00d3e8b4;
              pbVar23 = pbVar6 + 1;
              bVar10 = *pbVar6;
              uVar21 = (uint)bVar10;
              pbVar20 = (byte *)(ulong)((int)pbVar20 + 1);
              pbVar6 = pbVar23;
              if (9 < bVar10 - 0x30) goto LAB_00d3e894;
              goto LAB_00d3e43c;
            }
            if (uVar7 != 0xccccccccccccccc) goto LAB_00d3e820;
            if ((char)uVar21 < '9') goto LAB_00d3e444;
            uVar21 = 0x39;
            uVar7 = 0xccccccccccccccc;
LAB_00d3e820:
            dVar24 = (double)uVar7;
            if (pbVar6 + -1 != pbVar18) {
              uVar21 = uVar21 - 0x30 & 0xff;
              pbVar23 = pbVar6 + -1;
              while (uVar21 < 10) {
                if (1.7976931348623158e+307 <= dVar24) goto LAB_00d3e944;
                *plVar17 = (long)pbVar6;
                dVar24 = dVar24 * 10.0 + (double)(int)(pbVar6[-1] - 0x30);
                if (pbVar18 == pbVar6) goto LAB_00d3e96c;
                uVar21 = *pbVar6 - 0x30;
                pbVar23 = pbVar6;
                pbVar6 = pbVar6 + 1;
              }
              bVar3 = true;
              goto LAB_00d3e89c;
            }
LAB_00d3e96c:
            iVar22 = 0;
            goto LAB_00d3e5e4;
          }
          goto LAB_00d3e8b8;
        }
        if (pbVar23 != pbVar18) {
          if (9 < uVar21 - 0x30) goto LAB_00d3ea14;
          pbVar6 = pbVar6 + 2;
          do {
            if (0x1999999999999998 < uVar7) {
              if (uVar7 != 0x1999999999999999) goto LAB_00d3e820;
              if ('5' < (char)uVar21) {
                uVar7 = 0x1999999999999999;
                goto LAB_00d3e820;
              }
            }
            *plVar17 = (long)pbVar6;
            uVar7 = (ulong)(pbVar6[-1] - 0x30) + uVar7 * 10;
            if (pbVar18 == pbVar6) goto LAB_00d3e8b4;
            pbVar23 = pbVar6 + 1;
            uVar21 = (uint)*pbVar6;
            pbVar20 = (byte *)(ulong)((int)pbVar20 + 1);
            pbVar6 = pbVar23;
          } while (uVar21 - 0x30 < 10);
LAB_00d3e894:
          dVar24 = 0.0;
          bVar3 = false;
          pbVar23 = pbVar23 + -1;
LAB_00d3e89c:
          bVar4 = true;
          goto joined_r0x00d3e4c0;
        }
        goto LAB_00d3e954;
      }
LAB_00d3e8d0:
      uVar7 = GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
              ::Int((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                     *)param_2,-uVar9);
      goto joined_r0x00d3e8dc;
    }
  }
  lVar15 = (long)pbVar6 - lVar15;
  uVar12 = 3;
LAB_00d3ea9c:
  *(undefined4 *)(this + 0x30) = uVar12;
  *(long *)(this + 0x38) = lVar15;
  return;
}

