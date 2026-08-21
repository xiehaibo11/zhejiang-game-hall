
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
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  double *pdVar11;
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
  lVar10 = *(long *)(param_2 + 8) - lVar3;
  if (lVar10 != 0) {
    iVar4 = *(int *)param_1;
    uVar7 = lVar10 >> 2;
    uVar8 = 0xfffffffe;
    uVar6 = 0;
    do {
      uVar2 = uVar6 + 1;
      lVar10 = *(long *)(param_1 + 8);
      fVar12 = (float)uVar2 / (float)(uVar7 + 1);
      uVar8 = uVar8 - 6;
      do {
        uVar9 = uVar8;
        uVar1 = uVar9 + 0xc;
        dVar13 = 1.0;
        if ((int)uVar1 < iVar4) {
          pdVar11 = (double *)(lVar10 + (ulong)uVar1 * 0x18);
          uVar5 = *(ushort *)((long)pdVar11 + 0x16);
          if ((uVar5 >> 9 & 1) == 0) {
            if ((uVar5 >> 5 & 1) == 0) {
              if ((uVar5 >> 6 & 1) == 0) {
                if ((uVar5 >> 7 & 1) == 0) {
                  dVar13 = (double)(ulong)*pdVar11;
                }
                else {
                  dVar13 = (double)(long)*pdVar11;
                }
              }
              else {
                dVar13 = (double)NEON_ucvtf((ulong)*(uint *)pdVar11);
              }
            }
            else {
              dVar13 = (double)(long)*(int *)pdVar11;
            }
          }
          else {
            dVar13 = *pdVar11;
          }
        }
        uVar8 = uVar9 + 6;
      } while (dVar13 < (double)fVar12);
      dVar13 = 0.0;
      dVar14 = 0.0;
      if (-1 < (int)uVar8 && (int)uVar1 < iVar4) {
        pdVar11 = (double *)(lVar10 + (ulong)uVar8 * 0x18);
        uVar5 = *(ushort *)((long)pdVar11 + 0x16);
        if ((uVar5 >> 9 & 1) == 0) {
          if ((uVar5 >> 5 & 1) == 0) {
            if ((uVar5 >> 6 & 1) == 0) {
              if ((uVar5 >> 7 & 1) == 0) {
                dVar13 = (double)(ulong)*pdVar11;
              }
              else {
                dVar13 = (double)(long)*pdVar11;
              }
            }
            else {
              dVar13 = (double)NEON_ucvtf((ulong)*(uint *)pdVar11);
            }
          }
          else {
            dVar13 = (double)(long)*(int *)pdVar11;
          }
        }
        else {
          dVar13 = *pdVar11;
        }
        pdVar11 = (double *)(lVar10 + (ulong)(uVar9 + 7) * 0x18);
        uVar5 = *(ushort *)((long)pdVar11 + 0x16);
        if ((uVar5 >> 9 & 1) == 0) {
          if ((uVar5 >> 5 & 1) == 0) {
            if ((uVar5 >> 6 & 1) == 0) {
              if ((uVar5 >> 7 & 1) == 0) {
                dVar14 = (double)(ulong)*pdVar11;
              }
              else {
                dVar14 = (double)(long)*pdVar11;
              }
            }
            else {
              dVar14 = (double)NEON_ucvtf((ulong)*(uint *)pdVar11);
            }
          }
          else {
            dVar14 = (double)(long)*(int *)pdVar11;
          }
        }
        else {
          dVar14 = *pdVar11;
        }
      }
      pdVar11 = (double *)(lVar10 + (ulong)(uVar9 + 8) * 0x18);
      uVar5 = *(ushort *)((long)pdVar11 + 0x16);
      if ((uVar5 >> 9 & 1) == 0) {
        if ((uVar5 >> 5 & 1) == 0) {
          if ((uVar5 >> 6 & 1) == 0) {
            if ((uVar5 >> 7 & 1) == 0) {
              dVar15 = (double)(ulong)*pdVar11;
            }
            else {
              dVar15 = (double)(long)*pdVar11;
            }
          }
          else {
            dVar15 = (double)NEON_ucvtf((ulong)*(uint *)pdVar11);
          }
        }
        else {
          dVar15 = (double)(long)*(int *)pdVar11;
        }
      }
      else {
        dVar15 = *pdVar11;
      }
      pdVar11 = (double *)(lVar10 + (ulong)(uVar9 + 9) * 0x18);
      uVar5 = *(ushort *)((long)pdVar11 + 0x16);
      if ((uVar5 >> 9 & 1) == 0) {
        if ((uVar5 >> 5 & 1) == 0) {
          if ((uVar5 >> 6 & 1) == 0) {
            if ((uVar5 >> 7 & 1) == 0) {
              dVar16 = (double)(ulong)*pdVar11;
            }
            else {
              dVar16 = (double)(long)*pdVar11;
            }
          }
          else {
            dVar16 = (double)NEON_ucvtf((ulong)*(uint *)pdVar11);
          }
        }
        else {
          dVar16 = (double)(long)*(int *)pdVar11;
        }
      }
      else {
        dVar16 = *pdVar11;
      }
      pdVar11 = (double *)(lVar10 + (ulong)(uVar9 + 10) * 0x18);
      uVar5 = *(ushort *)((long)pdVar11 + 0x16);
      if ((uVar5 >> 9 & 1) == 0) {
        if ((uVar5 >> 5 & 1) == 0) {
          if ((uVar5 >> 6 & 1) == 0) {
            if ((uVar5 >> 7 & 1) == 0) {
              dVar17 = (double)(ulong)*pdVar11;
            }
            else {
              dVar17 = (double)(long)*pdVar11;
            }
          }
          else {
            dVar17 = (double)NEON_ucvtf((ulong)*(uint *)pdVar11);
          }
        }
        else {
          dVar17 = (double)(long)*(int *)pdVar11;
        }
      }
      else {
        dVar17 = *pdVar11;
      }
      pdVar11 = (double *)(lVar10 + (ulong)(uVar9 + 0xb) * 0x18);
      uVar5 = *(ushort *)((long)pdVar11 + 0x16);
      if ((uVar5 >> 9 & 1) == 0) {
        if ((uVar5 >> 5 & 1) == 0) {
          if ((uVar5 >> 6 & 1) == 0) {
            if ((uVar5 >> 7 & 1) == 0) {
              dVar18 = (double)(ulong)*pdVar11;
            }
            else {
              dVar18 = (double)(long)*pdVar11;
            }
          }
          else {
            dVar18 = (double)NEON_ucvtf((ulong)*(uint *)pdVar11);
          }
        }
        else {
          dVar18 = (double)(long)*(int *)pdVar11;
        }
      }
      else {
        dVar18 = *pdVar11;
      }
      dVar19 = 1.0;
      dVar20 = 1.0;
      if (-1 < (int)uVar8 && (int)uVar1 < iVar4) {
        pdVar11 = (double *)(lVar10 + (ulong)(uVar9 + 0xc) * 0x18);
        uVar5 = *(ushort *)((long)pdVar11 + 0x16);
        if ((uVar5 >> 9 & 1) == 0) {
          if ((uVar5 >> 5 & 1) == 0) {
            if ((uVar5 >> 6 & 1) == 0) {
              if ((uVar5 >> 7 & 1) == 0) {
                dVar19 = (double)(ulong)*pdVar11;
              }
              else {
                dVar19 = (double)(long)*pdVar11;
              }
            }
            else {
              dVar19 = (double)NEON_ucvtf((ulong)*(uint *)pdVar11);
            }
          }
          else {
            dVar19 = (double)(long)*(int *)pdVar11;
          }
        }
        else {
          dVar19 = *pdVar11;
        }
        pdVar11 = (double *)(lVar10 + (ulong)(uVar9 + 0xd) * 0x18);
        uVar5 = *(ushort *)((long)pdVar11 + 0x16);
        if ((uVar5 >> 9 & 1) == 0) {
          if ((uVar5 >> 5 & 1) == 0) {
            if ((uVar5 >> 6 & 1) == 0) {
              if ((uVar5 >> 7 & 1) == 0) {
                dVar20 = (double)(ulong)*pdVar11;
              }
              else {
                dVar20 = (double)(long)*pdVar11;
              }
            }
            else {
              dVar20 = (double)NEON_ucvtf((ulong)*(uint *)pdVar11);
            }
          }
          else {
            dVar20 = (double)(long)*(int *)pdVar11;
          }
        }
        else {
          dVar20 = *pdVar11;
        }
      }
      fVar21 = 0.0;
      fVar26 = 1.0;
      do {
        fVar28 = (fVar21 + fVar26) * 0.5;
        fVar22 = 1.0 - fVar28;
        fVar23 = fVar22 * fVar22 * fVar22;
        fVar24 = fVar28 * 3.0 * fVar22 * fVar22;
        fVar25 = fVar28 * fVar28 * fVar28;
        fVar22 = fVar28 * fVar28 * fVar22 * 3.0;
        fVar27 = fVar25 * (float)dVar19 +
                 fVar22 * (float)dVar17 + fVar23 * (float)dVar13 + fVar24 * (float)dVar15;
        if (fVar12 - fVar27 <= 0.0) {
          fVar26 = fVar28;
          fVar28 = fVar21;
        }
        fVar21 = fVar28;
      } while (0.0001 < fVar26 - fVar21);
      fVar12 = fVar25 * (float)dVar20 +
               fVar22 * (float)dVar18 + fVar23 * (float)dVar14 + fVar24 * (float)dVar16;
      *(float *)(this + 0xe4) = fVar27;
      *(float *)(this + 0xe8) = fVar12;
      *(float *)(lVar3 + uVar6 * 4) = fVar12;
      uVar6 = uVar2;
    } while (uVar2 < uVar7);
  }
  return;
}

