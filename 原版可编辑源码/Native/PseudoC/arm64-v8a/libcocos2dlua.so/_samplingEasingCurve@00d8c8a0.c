
/* dragonBones::JSONDataParser::_samplingEasingCurve(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, std::__ndk1::vector<float,
   std::__ndk1::allocator<float> >&) */

void __thiscall
dragonBones::JSONDataParser::_samplingEasingCurve
          (JSONDataParser *this,GenericValue *param_1,vector *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ushort uVar5;
  double *pdVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  lVar3 = *(long *)param_2;
  lVar11 = *(long *)(param_2 + 8) - lVar3;
  if (lVar11 != 0) {
    iVar4 = *(int *)param_1;
    uVar8 = lVar11 >> 2;
    uVar9 = 0xfffffffe;
    uVar7 = 0;
    do {
      uVar2 = uVar7 + 1;
      lVar11 = *(long *)(param_1 + 8);
      fVar12 = (float)uVar2 / (float)(uVar8 + 1);
      uVar9 = uVar9 - 6;
      do {
        uVar10 = uVar9;
        uVar1 = uVar10 + 0xc;
        dVar13 = 1.0;
        if ((int)uVar1 < iVar4) {
          pdVar6 = (double *)(lVar11 + (ulong)uVar1 * 0x18);
          uVar5 = *(ushort *)((long)pdVar6 + 0x16);
          if ((uVar5 >> 9 & 1) == 0) {
            if ((uVar5 >> 5 & 1) == 0) {
                    /* try { // try from 00d8c92c to 00e8c937 has its CatchHandler @ 00d8cb48 */
              if ((uVar5 >> 6 & 1) == 0) {
                if ((uVar5 >> 7 & 1) == 0) {
                  dVar13 = (double)(ulong)*pdVar6;
                }
                else {
                  dVar13 = (double)(long)*pdVar6;
                }
              }
              else {
                dVar13 = (double)NEON_ucvtf((ulong)*(uint *)pdVar6);
                    /* try { // try from 00d8c958 to 00e8c963 has its CatchHandler @ 00d8cbec */
              }
            }
            else {
              dVar13 = (double)(long)*(int *)pdVar6;
            }
          }
          else {
            dVar13 = *pdVar6;
          }
        }
        uVar9 = uVar10 + 6;
      } while (dVar13 < (double)fVar12);
      dVar13 = 0.0;
      dVar14 = 0.0;
      if (-1 < (int)uVar9 && (int)uVar1 < iVar4) {
        pdVar6 = (double *)(lVar11 + (ulong)uVar9 * 0x18);
        uVar5 = *(ushort *)((long)pdVar6 + 0x16);
        if ((uVar5 >> 9 & 1) == 0) {
          if ((uVar5 >> 5 & 1) == 0) {
            if ((uVar5 >> 6 & 1) == 0) {
              if ((uVar5 >> 7 & 1) == 0) {
                dVar13 = (double)(ulong)*pdVar6;
              }
              else {
                dVar13 = (double)(long)*pdVar6;
              }
            }
            else {
              dVar13 = (double)NEON_ucvtf((ulong)*(uint *)pdVar6);
            }
          }
          else {
            dVar13 = (double)(long)*(int *)pdVar6;
          }
        }
        else {
          dVar13 = *pdVar6;
        }
        pdVar6 = (double *)(lVar11 + (ulong)(uVar10 + 7) * 0x18);
        uVar5 = *(ushort *)((long)pdVar6 + 0x16);
        if ((uVar5 >> 9 & 1) == 0) {
          if ((uVar5 >> 5 & 1) == 0) {
            if ((uVar5 >> 6 & 1) == 0) {
              if ((uVar5 >> 7 & 1) == 0) {
                dVar14 = (double)(ulong)*pdVar6;
              }
              else {
                dVar14 = (double)(long)*pdVar6;
              }
            }
            else {
              dVar14 = (double)NEON_ucvtf((ulong)*(uint *)pdVar6);
            }
          }
          else {
            dVar14 = (double)(long)*(int *)pdVar6;
          }
        }
        else {
          dVar14 = *pdVar6;
                    /* try { // try from 00d8ca00 to 00e8cacf has its CatchHandler @ 00d8cbc8 */
        }
      }
      pdVar6 = (double *)(lVar11 + (ulong)(uVar10 + 8) * 0x18);
      uVar5 = *(ushort *)((long)pdVar6 + 0x16);
      if ((uVar5 >> 9 & 1) == 0) {
        if ((uVar5 >> 5 & 1) == 0) {
          if ((uVar5 >> 6 & 1) == 0) {
            if ((uVar5 >> 7 & 1) == 0) {
              dVar15 = (double)(ulong)*pdVar6;
            }
            else {
              dVar15 = (double)(long)*pdVar6;
            }
          }
          else {
            dVar15 = (double)NEON_ucvtf((ulong)*(uint *)pdVar6);
          }
        }
        else {
          dVar15 = (double)(long)*(int *)pdVar6;
        }
      }
      else {
        dVar15 = *pdVar6;
      }
      pdVar6 = (double *)(lVar11 + (ulong)(uVar10 + 9) * 0x18);
      uVar5 = *(ushort *)((long)pdVar6 + 0x16);
      if ((uVar5 >> 9 & 1) == 0) {
        if ((uVar5 >> 5 & 1) == 0) {
          if ((uVar5 >> 6 & 1) == 0) {
            if ((uVar5 >> 7 & 1) == 0) {
              dVar16 = (double)(ulong)*pdVar6;
            }
            else {
              dVar16 = (double)(long)*pdVar6;
            }
          }
          else {
            dVar16 = (double)NEON_ucvtf((ulong)*(uint *)pdVar6);
          }
        }
        else {
          dVar16 = (double)(long)*(int *)pdVar6;
        }
      }
      else {
        dVar16 = *pdVar6;
      }
      pdVar6 = (double *)(lVar11 + (ulong)(uVar10 + 10) * 0x18);
      uVar5 = *(ushort *)((long)pdVar6 + 0x16);
      if ((uVar5 >> 9 & 1) == 0) {
        if ((uVar5 >> 5 & 1) == 0) {
          if ((uVar5 >> 6 & 1) == 0) {
            if ((uVar5 >> 7 & 1) == 0) {
              dVar17 = (double)(ulong)*pdVar6;
            }
            else {
              dVar17 = (double)(long)*pdVar6;
            }
          }
          else {
            dVar17 = (double)NEON_ucvtf((ulong)*(uint *)pdVar6);
          }
        }
        else {
          dVar17 = (double)(long)*(int *)pdVar6;
        }
      }
      else {
        dVar17 = *pdVar6;
      }
      pdVar6 = (double *)(lVar11 + (ulong)(uVar10 + 0xb) * 0x18);
      uVar5 = *(ushort *)((long)pdVar6 + 0x16);
      if ((uVar5 >> 9 & 1) == 0) {
        if ((uVar5 >> 5 & 1) == 0) {
          if ((uVar5 >> 6 & 1) == 0) {
            if ((uVar5 >> 7 & 1) == 0) {
                    /* try { // try from 00d8cb34 to 00e8cb3b has its CatchHandler @ 00d8cb40 */
              dVar18 = (double)(ulong)*pdVar6;
            }
            else {
                    /* catch() { ... } // from try @ 00d8bfbc with catch @ 00d8cb60 */
              dVar18 = (double)(long)*pdVar6;
            }
          }
          else {
            dVar18 = (double)NEON_ucvtf((ulong)*(uint *)pdVar6);
                    /* catch() { ... } // from try @ 00d8c2b8 with catch @ 00d8cb5c */
          }
        }
        else {
                    /* catch() { ... } // from try @ 00d8c2e4 with catch @ 00d8cb44 */
                    /* catch() { ... } // from try @ 00d8c304 with catch @ 00d8cb48
                       catch() { ... } // from try @ 00d8c92c with catch @ 00d8cb48 */
                    /* catch() { ... } // from try @ 00d8c2c8 with catch @ 00d8cb4c */
          dVar18 = (double)(long)*(int *)pdVar6;
        }
      }
      else {
                    /* try { // try from 00d8cb3c to 00e8ccbb has its CatchHandler @ 00d8b890 */
        dVar18 = *pdVar6;
                    /* catch() { ... } // from try @ 00d8cb34 with catch @ 00d8cb40 */
      }
                    /* catch() { ... } // from try @ 00d8b930 with catch @ 00d8cb64 */
      dVar19 = 1.0;
                    /* catch() { ... } // from try @ 00d8b928 with catch @ 00d8cb68 */
      dVar20 = 1.0;
                    /* catch() { ... } // from try @ 00d8b920 with catch @ 00d8cb6c */
      if (-1 < (int)uVar9 && (int)uVar1 < iVar4) {
                    /* catch() { ... } // from try @ 00d8b918 with catch @ 00d8cb70 */
                    /* catch() { ... } // from try @ 00d8b910 with catch @ 00d8cb74 */
        pdVar6 = (double *)(lVar11 + (ulong)(uVar10 + 0xc) * 0x18);
                    /* catch() { ... } // from try @ 00d8b908 with catch @ 00d8cb78 */
        uVar5 = *(ushort *)((long)pdVar6 + 0x16);
                    /* catch() { ... } // from try @ 00d8b8fc with catch @ 00d8cb7c */
        if ((uVar5 >> 9 & 1) == 0) {
          if ((uVar5 >> 5 & 1) == 0) {
            if ((uVar5 >> 6 & 1) == 0) {
                    /* catch() { ... } // from try @ 00d8c4d8 with catch @ 00d8cb8c */
              if ((uVar5 >> 7 & 1) == 0) {
                dVar19 = (double)(ulong)*pdVar6;
              }
              else {
                dVar19 = (double)(long)*pdVar6;
              }
            }
            else {
              dVar19 = (double)NEON_ucvtf((ulong)*(uint *)pdVar6);
            }
          }
          else {
            dVar19 = (double)(long)*(int *)pdVar6;
          }
        }
        else {
          dVar19 = *pdVar6;
        }
        pdVar6 = (double *)(lVar11 + (ulong)(uVar10 + 0xd) * 0x18);
                    /* catch() { ... } // from try @ 00d8ca00 with catch @ 00d8cbc8 */
        uVar5 = *(ushort *)((long)pdVar6 + 0x16);
                    /* catch() { ... } // from try @ 00d8c420 with catch @ 00d8cbcc */
        if ((uVar5 >> 9 & 1) == 0) {
          if ((uVar5 >> 5 & 1) == 0) {
            if ((uVar5 >> 6 & 1) == 0) {
              if ((uVar5 >> 7 & 1) == 0) {
                dVar20 = (double)(ulong)*pdVar6;
              }
              else {
                dVar20 = (double)(long)*pdVar6;
              }
            }
            else {
              dVar20 = (double)NEON_ucvtf((ulong)*(uint *)pdVar6);
            }
          }
          else {
                    /* catch() { ... } // from try @ 00d8c338 with catch @ 00d8cbf0 */
                    /* catch() { ... } // from try @ 00d8c358 with catch @ 00d8cbf4 */
            dVar20 = (double)(long)*(int *)pdVar6;
          }
        }
        else {
          dVar20 = *pdVar6;
                    /* catch() { ... } // from try @ 00d8c958 with catch @ 00d8cbec */
        }
      }
      fVar21 = 0.0;
                    /* catch() { ... } // from try @ 00d8c55c with catch @ 00d8cc24 */
      fVar26 = 1.0;
      do {
                    /* catch() { ... } // from try @ 00d8c57c with catch @ 00d8cc28 */
                    /* catch() { ... } // from try @ 00d8c020 with catch @ 00d8cc2c */
        fVar28 = (fVar21 + fVar26) * 0.5;
                    /* catch() { ... } // from try @ 00d8b9b8 with catch @ 00d8cc30 */
        fVar22 = 1.0 - fVar28;
        fVar23 = fVar22 * fVar22 * fVar22;
        fVar24 = fVar28 * 3.0 * fVar22 * fVar22;
        fVar25 = fVar28 * fVar28 * fVar28;
        fVar22 = fVar28 * fVar28 * fVar22 * 3.0;
                    /* catch() { ... } // from try @ 00d8b9cc with catch @ 00d8cc5c */
                    /* catch() { ... } // from try @ 00d8c760 with catch @ 00d8cc6c */
        fVar27 = fVar25 * (float)dVar19 +
                 fVar22 * (float)dVar17 + fVar23 * (float)dVar13 + fVar24 * (float)dVar15;
                    /* catch() { ... } // from try @ 00d8c850 with catch @ 00d8cc70 */
                    /* catch() { ... } // from try @ 00d8c198 with catch @ 00d8cc74 */
                    /* catch() { ... } // from try @ 00d8c684 with catch @ 00d8cc78 */
        if (fVar12 - fVar27 <= 0.0) {
                    /* catch() { ... } // from try @ 00d8c780 with catch @ 00d8cc7c */
          fVar26 = fVar28;
          fVar28 = fVar21;
        }
        fVar21 = fVar28;
                    /* catch() { ... } // from try @ 00d8c870 with catch @ 00d8cc80 */
                    /* catch() { ... } // from try @ 00d8c664 with catch @ 00d8cc84 */
                    /* catch() { ... } // from try @ 00d8c1b8 with catch @ 00d8cc88 */
                    /* catch() { ... } // from try @ 00d8c0a4 with catch @ 00d8cc8c */
      } while (0.0001 < fVar26 - fVar21);
                    /* catch() { ... } // from try @ 00d8c0c4 with catch @ 00d8cc90 */
      fVar12 = fVar25 * (float)dVar20 +
               fVar22 * (float)dVar18 + fVar23 * (float)dVar14 + fVar24 * (float)dVar16;
      *(float *)(this + 0xe4) = fVar27;
      *(float *)(this + 0xe8) = fVar12;
      *(float *)(lVar3 + uVar7 * 4) = fVar12;
      uVar7 = uVar2;
    } while (uVar2 < uVar8);
  }
  return;
}

