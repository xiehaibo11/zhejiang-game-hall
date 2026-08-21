
/* v8::internal::Uri::Encode(v8::internal::Isolate*, v8::internal::Handle<v8::internal::String>,
   bool) */

undefined8 v8::internal::Uri::Encode(Isolate *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined6 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  ulong *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  char *pcVar16;
  char *pcVar17;
  long lVar18;
  size_t sVar19;
  char *pcVar20;
  char cVar21;
  undefined1 auVar23 [16];
  undefined8 local_80;
  long lStack_78;
  uint local_68;
  int local_64;
  char cVar22;
  
  puVar6 = (undefined8 *)String::Flatten(param_1,param_2,0);
  local_80 = (char *)*puVar6;
  iVar3 = *(int *)(local_80 + 7);
  if (iVar3 == 0) {
    pcVar20 = (char *)0x0;
    pcVar7 = (char *)0x0;
  }
  else {
    pcVar7 = operator_new((long)iVar3);
    local_80 = (char *)*puVar6;
    pcVar20 = pcVar7 + iVar3;
  }
  auVar23 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_80);
  pcVar16 = pcVar7;
  if (0 < iVar3) {
    iVar13 = 0;
    pcVar17 = pcVar7;
    do {
      if ((auVar23._8_8_ & 0xffffffff00000000) == 0x100000000) {
        uVar14 = (uint)*(byte *)(auVar23._0_8_ + (long)iVar13);
      }
      else {
        uVar14 = (uint)*(ushort *)(auVar23._0_8_ + (long)iVar13 * 2);
      }
      if ((uVar14 & 0xfc00) == 0xd800) {
        iVar13 = iVar13 + 1;
        if (iVar13 < iVar3) {
          local_80 = (char *)*puVar6;
          local_68 = (uint)*(ushort *)
                            (((ulong)local_80 & 0xffffffff00000000 | (ulong)*(uint *)(local_80 + -1)
                             ) + 7);
          local_64 = iVar13;
          uVar5 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                            (&local_68,&local_80,&local_64);
          if ((uVar5 >> 10 & 0x3f) == 0x37) {
            uVar14 = (uVar14 & 0x3ff) * 0x400 + 0x10000;
            uVar1 = uVar14 | uVar5 & 0x3ff;
            local_80 = (char *)((ulong)local_80 & 0xffffffff00000000);
            if (uVar1 < 0x80) {
              local_80 = (char *)CONCAT71(local_80._1_7_,(char)uVar5);
              lVar18 = 1;
            }
            else {
              lVar18 = 4;
              uVar11 = CONCAT62(local_80._2_6_,
                                CONCAT11((char)(uVar14 >> 0xc),(char)(uVar14 >> 0x12))) &
                       0xffffffffffff3fff;
              local_80._3_5_ = (undefined5)(uVar11 >> 0x18);
              uVar11 = CONCAT53(local_80._3_5_,CONCAT12((char)(uVar1 >> 6),(short)uVar11)) &
                       0xffffffffff3fffff;
              local_80._4_4_ = (undefined4)(uVar11 >> 0x20);
              local_80 = (char *)(CONCAT44(local_80._4_4_,CONCAT13((char)uVar5,(int3)uVar11)) &
                                  0xffffffff3fffffff | 0x808080f0);
            }
            pbVar15 = (byte *)&local_80;
            do {
              bVar2 = *pbVar15;
              if (pcVar16 < pcVar20) {
                *pcVar16 = '%';
                pcVar7 = pcVar17;
              }
              else {
                sVar19 = (long)pcVar16 - (long)pcVar17;
                uVar11 = sVar19 + 1;
                if ((long)uVar11 < 0) goto LAB_015c53c0;
                uVar12 = ((long)pcVar20 - (long)pcVar17) * 2;
                if (uVar11 <= uVar12) {
                  uVar11 = uVar12;
                }
                if (0x3ffffffffffffffe < (ulong)((long)pcVar20 - (long)pcVar17)) {
                  uVar11 = 0x7fffffffffffffff;
                }
                if (uVar11 == 0) {
                  pcVar7 = (char *)0x0;
                }
                else {
                  pcVar7 = operator_new(uVar11);
                }
                pcVar16 = pcVar7 + sVar19;
                pcVar20 = pcVar7 + uVar11;
                *pcVar16 = '%';
                if (0 < (long)sVar19) {
                  memcpy(pcVar7,pcVar17,sVar19);
                }
                if (pcVar17 != (char *)0x0) {
                  operator_delete(pcVar17);
                }
              }
              pcVar17 = pcVar16 + 1;
              cVar22 = '0';
              cVar21 = '0';
              if (0x9f < bVar2) {
                cVar22 = '7';
              }
              cVar22 = cVar22 + (bVar2 >> 4);
              if (pcVar17 < pcVar20) {
                pcVar16 = pcVar16 + 2;
                *pcVar17 = cVar22;
                pcVar8 = pcVar7;
              }
              else {
                sVar19 = (long)pcVar17 - (long)pcVar7;
                uVar11 = sVar19 + 1;
                if ((long)uVar11 < 0) goto LAB_015c53c0;
                uVar12 = ((long)pcVar20 - (long)pcVar7) * 2;
                if (uVar11 <= uVar12) {
                  uVar11 = uVar12;
                }
                if (0x3ffffffffffffffe < (ulong)((long)pcVar20 - (long)pcVar7)) {
                  uVar11 = 0x7fffffffffffffff;
                }
                if (uVar11 == 0) {
                  pcVar8 = (char *)0x0;
                }
                else {
                  pcVar8 = operator_new(uVar11);
                }
                pcVar20 = pcVar8 + uVar11;
                pcVar16 = pcVar8 + sVar19 + 1;
                pcVar8[sVar19] = cVar22;
                if (0 < (long)sVar19) {
                  memcpy(pcVar8,pcVar7,sVar19);
                }
                if (pcVar7 != (char *)0x0) {
                  operator_delete(pcVar7);
                }
              }
              if (9 < (bVar2 & 0xf)) {
                cVar21 = '7';
              }
              cVar21 = cVar21 + (bVar2 & 0xf);
              if (pcVar16 < pcVar20) {
                *pcVar16 = cVar21;
                pcVar17 = pcVar8;
              }
              else {
                sVar19 = (long)pcVar16 - (long)pcVar8;
                uVar11 = sVar19 + 1;
                if ((long)uVar11 < 0) goto LAB_015c53c0;
                uVar12 = ((long)pcVar20 - (long)pcVar8) * 2;
                if (uVar11 <= uVar12) {
                  uVar11 = uVar12;
                }
                if (0x3ffffffffffffffe < (ulong)((long)pcVar20 - (long)pcVar8)) {
                  uVar11 = 0x7fffffffffffffff;
                }
                if (uVar11 == 0) {
                  pcVar17 = (char *)0x0;
                }
                else {
                  pcVar17 = operator_new(uVar11);
                }
                pcVar16 = pcVar17 + sVar19;
                pcVar20 = pcVar17 + uVar11;
                *pcVar16 = cVar21;
                if (0 < (long)sVar19) {
                  memcpy(pcVar17,pcVar8,sVar19);
                }
                if (pcVar8 != (char *)0x0) {
                  operator_delete(pcVar8);
                }
              }
              pcVar16 = pcVar16 + 1;
              lVar18 = lVar18 + -1;
              pbVar15 = pbVar15 + 1;
              pcVar7 = pcVar17;
            } while (lVar18 != 0);
            goto LAB_015c4c88;
          }
        }
LAB_015c52d4:
        uVar11 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
        uVar11 = uVar11 | *(uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(param_1 +
                                                                                      0x2bc8) - 1))
                                                       + 0x13)) + 0x3b3);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)(param_1 + 0x95a0);
          if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
            puVar9 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)(param_1 + 0x95a0) = puVar9 + 1;
          *puVar9 = uVar11;
        }
        else {
          puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
        }
        puVar6 = (undefined8 *)Factory::NewError((Factory *)param_1,puVar9,0x154,0,0,0);
        Isolate::Throw(param_1,*puVar6,0);
        uVar10 = 0;
        if (pcVar17 == (char *)0x0) {
          return 0;
        }
        goto LAB_015c533c;
      }
      if ((uVar14 & 0xfc00) == 0xdc00) goto LAB_015c52d4;
      cVar22 = (char)uVar14;
      if (((((uVar14 - 0x30 < 10) || ((uVar14 | 0x20) - 0x61 < 0x1a)) ||
           ((uVar14 - 0x21 < 0x3f &&
            ((1L << ((ulong)(uVar14 - 0x21) & 0x3f) & 0x40000000000033c1U) != 0)))) ||
          (uVar14 == 0x7e)) ||
         ((((param_3 & 1) != 0 && (uVar14 - 0x23 < 0x1e)) &&
          ((1 << (ulong)(uVar14 - 0x23 & 0x1f) & 0x3580130bU) != 0)))) {
        if (pcVar16 < pcVar20) {
          *pcVar16 = cVar22;
          pcVar7 = pcVar17;
          pcVar16 = pcVar16 + 1;
        }
        else {
          sVar19 = (long)pcVar16 - (long)pcVar17;
          uVar11 = sVar19 + 1;
          if ((long)uVar11 < 0) {
LAB_015c53c0:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar12 = ((long)pcVar20 - (long)pcVar17) * 2;
          if (uVar11 <= uVar12) {
            uVar11 = uVar12;
          }
          if (0x3ffffffffffffffe < (ulong)((long)pcVar20 - (long)pcVar17)) {
            uVar11 = 0x7fffffffffffffff;
          }
          if (uVar11 == 0) {
            pcVar7 = (char *)0x0;
          }
          else {
            pcVar7 = operator_new(uVar11);
          }
          pcVar20 = pcVar7 + uVar11;
          pcVar16 = pcVar7 + sVar19 + 1;
          pcVar7[sVar19] = cVar22;
          if (0 < (long)sVar19) {
            memcpy(pcVar7,pcVar17,sVar19);
          }
          if (pcVar17 != (char *)0x0) {
            operator_delete(pcVar17);
          }
        }
      }
      else {
        uVar4 = (undefined6)((ulong)local_80 >> 0x10);
        if (uVar14 < 0x80) {
          local_80 = (char *)(CONCAT71((int7)((ulong)local_80 >> 8),cVar22) & 0xffffffff000000ff);
          lVar18 = 1;
        }
        else if (uVar14 < 0x800) {
          local_80 = (char *)(CONCAT62(uVar4,CONCAT11(cVar22,(char)(uVar14 >> 6))) &
                              0xffffffff00003fff | 0x80c0);
          lVar18 = 2;
        }
        else {
          lVar18 = 3;
          uVar11 = CONCAT62(uVar4,CONCAT11((char)(uVar14 >> 6),(char)(uVar14 >> 0xc))) &
                   0xffffffff00003fff;
          local_80._3_5_ = (undefined5)(uVar11 >> 0x18);
          local_80 = (char *)(CONCAT53(local_80._3_5_,CONCAT12(cVar22,(short)uVar11)) &
                              0xffffffffff3fffff | 0x8080e0);
        }
        pbVar15 = (byte *)&local_80;
        do {
          bVar2 = *pbVar15;
          if (pcVar16 < pcVar20) {
            *pcVar16 = '%';
            pcVar7 = pcVar17;
          }
          else {
            sVar19 = (long)pcVar16 - (long)pcVar17;
            uVar11 = sVar19 + 1;
            if ((long)uVar11 < 0) goto LAB_015c53c0;
            uVar12 = ((long)pcVar20 - (long)pcVar17) * 2;
            if (uVar11 <= uVar12) {
              uVar11 = uVar12;
            }
            if (0x3ffffffffffffffe < (ulong)((long)pcVar20 - (long)pcVar17)) {
              uVar11 = 0x7fffffffffffffff;
            }
            if (uVar11 == 0) {
              pcVar7 = (char *)0x0;
            }
            else {
              pcVar7 = operator_new(uVar11);
            }
            pcVar16 = pcVar7 + sVar19;
            pcVar20 = pcVar7 + uVar11;
            *pcVar16 = '%';
            if (0 < (long)sVar19) {
              memcpy(pcVar7,pcVar17,sVar19);
            }
            if (pcVar17 != (char *)0x0) {
              operator_delete(pcVar17);
            }
          }
          pcVar17 = pcVar16 + 1;
          cVar22 = '0';
          cVar21 = '0';
          if (0x9f < bVar2) {
            cVar22 = '7';
          }
          cVar22 = cVar22 + (bVar2 >> 4);
          if (pcVar17 < pcVar20) {
            pcVar16 = pcVar16 + 2;
            *pcVar17 = cVar22;
            pcVar8 = pcVar7;
          }
          else {
            sVar19 = (long)pcVar17 - (long)pcVar7;
            uVar11 = sVar19 + 1;
            if ((long)uVar11 < 0) goto LAB_015c53c0;
            uVar12 = ((long)pcVar20 - (long)pcVar7) * 2;
            if (uVar11 <= uVar12) {
              uVar11 = uVar12;
            }
            if (0x3ffffffffffffffe < (ulong)((long)pcVar20 - (long)pcVar7)) {
              uVar11 = 0x7fffffffffffffff;
            }
            if (uVar11 == 0) {
              pcVar8 = (char *)0x0;
            }
            else {
              pcVar8 = operator_new(uVar11);
            }
            pcVar20 = pcVar8 + uVar11;
            pcVar16 = pcVar8 + sVar19 + 1;
            pcVar8[sVar19] = cVar22;
            if (0 < (long)sVar19) {
              memcpy(pcVar8,pcVar7,sVar19);
            }
            if (pcVar7 != (char *)0x0) {
              operator_delete(pcVar7);
            }
          }
          if (9 < (bVar2 & 0xf)) {
            cVar21 = '7';
          }
          cVar21 = cVar21 + (bVar2 & 0xf);
          if (pcVar16 < pcVar20) {
            *pcVar16 = cVar21;
            pcVar17 = pcVar8;
          }
          else {
            sVar19 = (long)pcVar16 - (long)pcVar8;
            uVar11 = sVar19 + 1;
            if ((long)uVar11 < 0) goto LAB_015c53c0;
            uVar12 = ((long)pcVar20 - (long)pcVar8) * 2;
            if (uVar11 <= uVar12) {
              uVar11 = uVar12;
            }
            if (0x3ffffffffffffffe < (ulong)((long)pcVar20 - (long)pcVar8)) {
              uVar11 = 0x7fffffffffffffff;
            }
            if (uVar11 == 0) {
              pcVar17 = (char *)0x0;
            }
            else {
              pcVar17 = operator_new(uVar11);
            }
            pcVar16 = pcVar17 + sVar19;
            pcVar20 = pcVar17 + uVar11;
            *pcVar16 = cVar21;
            if (0 < (long)sVar19) {
              memcpy(pcVar17,pcVar8,sVar19);
            }
            if (pcVar8 != (char *)0x0) {
              operator_delete(pcVar8);
            }
          }
          pcVar16 = pcVar16 + 1;
          lVar18 = lVar18 + -1;
          pbVar15 = pbVar15 + 1;
          pcVar7 = pcVar17;
        } while (lVar18 != 0);
      }
LAB_015c4c88:
      iVar13 = iVar13 + 1;
      pcVar17 = pcVar7;
    } while (iVar13 < iVar3);
  }
  lStack_78 = (long)((int)pcVar16 - (int)pcVar7);
  local_80 = pcVar7;
  uVar10 = Factory::NewStringFromOneByte(param_1,&local_80,0);
  pcVar17 = pcVar7;
  if (pcVar7 != (char *)0x0) {
LAB_015c533c:
    operator_delete(pcVar17);
  }
  return uVar10;
}

