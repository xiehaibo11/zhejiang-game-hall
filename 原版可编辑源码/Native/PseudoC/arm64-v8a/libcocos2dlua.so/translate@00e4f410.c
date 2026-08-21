
/* cocos2d::PUMaterialPassTranslator::translate(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUMaterialPassTranslator::translate
          (PUMaterialPassTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  size_t sVar1;
  byte bVar2;
  size_t sVar3;
  long lVar4;
  char *pcVar5;
  size_t sVar6;
  ulong *puVar7;
  undefined **ppuVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 uVar13;
  void *pvVar14;
  ulong uVar15;
  long lVar16;
  undefined **ppuVar17;
  PUAbstractNode *pPVar18;
  long lVar19;
  size_t sVar20;
  ulong uVar21;
  float fVar22;
  long local_c8;
  float local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  long local_98;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e4f458 with catch @ 00e4f414
                        */
  lVar4 = tpidr_el0;
  local_98 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 00e4f44c to 00f4f457 has its CatchHandler @ 00e4f570 */
                    /* try { // try from 00e4f458 to 00f4f5b3 has its CatchHandler @ 00e4f414 */
  if (*(long *)(param_2 + 0x28) == 0) {
    local_c8 = *(long *)(param_2 + 0x30);
  }
  else {
    local_c8 = *(long *)(*(long *)(param_2 + 0x28) + 0x30);
    *(long *)(param_2 + 0x30) = local_c8;
  }
  pPVar18 = *(PUAbstractNode **)(param_2 + 0xb8);
  if (pPVar18 != param_2 + 0xb0) {
    pcVar11 = (char *)((ulong)&local_b0 | 1);
    do {
      lVar16 = *(long *)(pPVar18 + 0x10);
      if (*(int *)(lVar16 + 0x24) == 2) {
        bVar2 = *(byte *)(lVar16 + 0x78);
        uVar21 = (ulong)(bVar2 >> 1);
        sVar1 = uVar21;
        if ((bVar2 & 1) != 0) {
          sVar1 = *(size_t *)(lVar16 + 0x80);
        }
        sVar20 = (ulong)(DAT_0178f010 >> 1);
        if ((DAT_0178f010 & 1) != 0) {
          sVar20 = DAT_0178f018;
        }
        if (sVar1 == sVar20) {
          pvVar14 = *(void **)(lVar16 + 0x88);
          if ((bVar2 & 1) == 0) {
            pvVar14 = (void *)(lVar16 + 0x79);
          }
          pcVar10 = &DAT_0178f011;
          if ((DAT_0178f010 & 1) != 0) {
            pcVar10 = DAT_0178f020;
          }
          if ((bVar2 & 1) == 0) {
            if (sVar1 != 0) {
              pcVar12 = (char *)(lVar16 + 0x79);
              do {
                if (*pcVar12 != *pcVar10) goto LAB_00e4f508;
                uVar21 = uVar21 - 1;
                pcVar12 = pcVar12 + 1;
                pcVar10 = pcVar10 + 1;
              } while (uVar21 != 0);
            }
          }
          else if ((sVar1 != 0) && (iVar9 = memcmp(pvVar14,pcVar10,sVar1), iVar9 != 0))
          goto LAB_00e4f508;
          PUScriptTranslator::PUScriptTranslator((PUScriptTranslator *)&local_b0);
          local_b0 = &PTR__PUScriptTranslator_016f26e0;
          PUMaterialTextureUnitTranslator::translate
                    ((PUMaterialTextureUnitTranslator *)&local_b0,param_1,
                     *(PUAbstractNode **)(pPVar18 + 0x10));
          PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)&local_b0);
        }
      }
      else if (*(int *)(lVar16 + 0x24) == 3) {
        bVar2 = *(byte *)(lVar16 + 0x38);
        uVar21 = (ulong)(bVar2 >> 1);
        sVar1 = uVar21;
        if ((bVar2 & 1) != 0) {
          sVar1 = *(size_t *)(lVar16 + 0x40);
        }
        sVar20 = (ulong)(DAT_0178ef50 >> 1);
        if ((DAT_0178ef50 & 1) != 0) {
          sVar20 = DAT_0178ef58;
        }
        if (sVar1 == sVar20) {
          pvVar14 = *(void **)(lVar16 + 0x48);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e4f44c with catch @ 00e4f570
                        */
          if ((bVar2 & 1) == 0) {
            pvVar14 = (void *)(lVar16 + 0x39);
          }
          pcVar10 = &DAT_0178ef51;
          if ((DAT_0178ef50 & 1) != 0) {
            pcVar10 = DAT_0178ef60;
          }
          if ((bVar2 & 1) == 0) {
            if (sVar1 != 0) {
              pcVar12 = (char *)(lVar16 + 0x39);
              uVar15 = uVar21;
              do {
                if (*pcVar12 != *pcVar10) goto LAB_00e4f658;
                uVar15 = uVar15 - 1;
                pcVar12 = pcVar12 + 1;
                pcVar10 = pcVar10 + 1;
              } while (uVar15 != 0);
            }
          }
          else if ((sVar1 != 0) && (iVar9 = memcmp(pvVar14,pcVar10,sVar1), iVar9 != 0))
          goto LAB_00e4f658;
          uVar21 = PUScriptTranslator::passValidateProperty
                             ((PUScriptTranslator *)this,param_1,lVar16,&DAT_0178ef50,4);
          if ((uVar21 & 1) == 0) goto LAB_00e4f508;
          uStack_a8 = 0;
          local_a0 = (char *)0x0;
          local_b0 = (undefined **)0x0;
          uVar21 = PUScriptTranslator::getString
                             (*(PUAbstractNode **)(*(long *)(lVar16 + 0x60) + 0x10),
                              (basic_string *)&local_b0);
          ppuVar8 = local_b0;
          ppuVar17 = (undefined **)((ulong)local_b0 & 0xff);
          if ((uVar21 & 1) == 0) {
joined_r0x00e5001c:
            if (((ulong)ppuVar17 & 1) == 0) goto LAB_00e4f508;
          }
          else {
            sVar20 = (ulong)local_b0 >> 1 & 0x7f;
            sVar1 = sVar20;
            if (((ulong)local_b0 & 1) != 0) {
              sVar1 = uStack_a8;
            }
            sVar3 = (ulong)(DAT_0178f058 >> 1);
            if ((DAT_0178f058 & 1) != 0) {
              sVar3 = DAT_0178f060;
            }
            if (sVar1 == sVar3) {
              pcVar10 = pcVar11;
              if (((ulong)local_b0 & 1) != 0) {
                pcVar10 = local_a0;
              }
              pcVar12 = &DAT_0178f059;
              if ((DAT_0178f058 & 1) != 0) {
                pcVar12 = DAT_0178f068;
              }
              pcVar5 = pcVar11;
              sVar3 = sVar20;
              sVar6 = sVar1;
              if (((ulong)local_b0 & 1) == 0) {
                while (sVar6 != 0) {
                  if (*pcVar5 != *pcVar12) goto LAB_00e4fe7c;
                  pcVar12 = pcVar12 + 1;
                  sVar3 = sVar3 - 1;
                  pcVar5 = pcVar5 + 1;
                  sVar6 = sVar3;
                }
              }
              else if ((sVar1 != 0) && (iVar9 = memcmp(pcVar10,pcVar12,sVar1), iVar9 != 0))
              goto LAB_00e4fe7c;
              *(undefined1 *)(local_c8 + 0x58) = 1;
              goto joined_r0x00e5001c;
            }
LAB_00e4fe7c:
            sVar3 = (ulong)(DAT_0178f070 >> 1);
            if ((DAT_0178f070 & 1) != 0) {
              sVar3 = DAT_0178f078;
            }
            if (sVar1 != sVar3) goto joined_r0x00e5001c;
            pcVar10 = pcVar11;
            if (((ulong)ppuVar8 & 1) != 0) {
              pcVar10 = local_a0;
            }
            pcVar12 = &DAT_0178f071;
            if ((DAT_0178f070 & 1) != 0) {
              pcVar12 = DAT_0178f080;
            }
            pcVar5 = pcVar11;
            if (((ulong)ppuVar8 & 1) == 0) {
              while (sVar1 != 0) {
                if (*pcVar5 != *pcVar12) goto LAB_00e4f508;
                pcVar12 = pcVar12 + 1;
                sVar20 = sVar20 - 1;
                pcVar5 = pcVar5 + 1;
                sVar1 = sVar20;
              }
LAB_00e50014:
              *(undefined1 *)(local_c8 + 0x58) = 0;
              ppuVar17 = ppuVar8;
              goto joined_r0x00e5001c;
            }
            if ((sVar1 == 0) || (iVar9 = memcmp(pcVar10,pcVar12,sVar1), iVar9 == 0))
            goto LAB_00e50014;
          }
LAB_00e4ff10:
          operator_delete(local_a0);
        }
        else {
LAB_00e4f658:
          sVar20 = (ulong)(DAT_0178ef68 >> 1);
          if ((DAT_0178ef68 & 1) != 0) {
            sVar20 = DAT_0178ef70;
          }
          if (sVar1 == sVar20) {
            pvVar14 = *(void **)(lVar16 + 0x48);
            if ((bVar2 & 1) == 0) {
              pvVar14 = (void *)(lVar16 + 0x39);
            }
            pcVar10 = &DAT_0178ef69;
            if ((DAT_0178ef68 & 1) != 0) {
              pcVar10 = DAT_0178ef78;
            }
            if ((bVar2 & 1) == 0) {
              if (sVar1 != 0) {
                pcVar12 = (char *)(lVar16 + 0x39);
                uVar15 = uVar21;
                do {
                  if (*pcVar12 != *pcVar10) goto LAB_00e4f7f4;
                  uVar15 = uVar15 - 1;
                  pcVar12 = pcVar12 + 1;
                  pcVar10 = pcVar10 + 1;
                } while (uVar15 != 0);
              }
            }
            else if ((sVar1 != 0) && (iVar9 = memcmp(pvVar14,pcVar10,sVar1), iVar9 != 0))
            goto LAB_00e4f7f4;
            uVar21 = PUScriptTranslator::passValidateProperty
                               ((PUScriptTranslator *)this,param_1,lVar16,&DAT_0178ef68,7);
            if ((uVar21 & 1) == 0) goto LAB_00e4f508;
            Vec4::Vec4((Vec4 *)&local_b0);
            uVar21 = PUScriptTranslator::getVector4
                               ((PUScriptTranslator *)this,*(undefined8 *)(lVar16 + 0x60),
                                lVar16 + 0x58,&local_b0,4);
            puVar7 = (ulong *)(local_c8 + 0x5c);
joined_r0x00e4f994:
            if ((uVar21 & 1) != 0) {
              puVar7[1] = uStack_a8;
              *puVar7 = (ulong)local_b0;
            }
          }
          else {
LAB_00e4f7f4:
            sVar20 = (ulong)(DAT_0178ef80 >> 1);
            if ((DAT_0178ef80 & 1) != 0) {
              sVar20 = DAT_0178ef88;
            }
            if (sVar1 == sVar20) {
              pvVar14 = *(void **)(lVar16 + 0x48);
              if ((bVar2 & 1) == 0) {
                pvVar14 = (void *)(lVar16 + 0x39);
              }
              pcVar10 = &DAT_0178ef81;
              if ((DAT_0178ef80 & 1) != 0) {
                pcVar10 = DAT_0178ef90;
              }
              if ((bVar2 & 1) == 0) {
                if (sVar1 != 0) {
                  pcVar12 = (char *)(lVar16 + 0x39);
                  uVar15 = uVar21;
                  do {
                    if (*pcVar12 != *pcVar10) goto LAB_00e4f8d4;
                    uVar15 = uVar15 - 1;
                    pcVar12 = pcVar12 + 1;
                    pcVar10 = pcVar10 + 1;
                  } while (uVar15 != 0);
                }
              }
              else if ((sVar1 != 0) && (iVar9 = memcmp(pvVar14,pcVar10,sVar1), iVar9 != 0))
              goto LAB_00e4f8d4;
              uVar21 = PUScriptTranslator::passValidateProperty
                                 ((PUScriptTranslator *)this,param_1,lVar16,&DAT_0178ef68,7);
              if ((uVar21 & 1) == 0) goto LAB_00e4f508;
              Vec4::Vec4((Vec4 *)&local_b0);
              uVar21 = PUScriptTranslator::getVector4
                                 ((PUScriptTranslator *)this,*(undefined8 *)(lVar16 + 0x60),
                                  lVar16 + 0x58,&local_b0,4);
              puVar7 = (ulong *)(local_c8 + 0x6c);
              goto joined_r0x00e4f994;
            }
LAB_00e4f8d4:
            sVar20 = (ulong)(DAT_0178ef98 >> 1);
            if ((DAT_0178ef98 & 1) != 0) {
              sVar20 = DAT_0178efa0;
            }
            if (sVar1 != sVar20) {
LAB_00e4f9b4:
              sVar20 = (ulong)(DAT_0178efb0 >> 1);
              if ((DAT_0178efb0 & 1) != 0) {
                sVar20 = DAT_0178efb8;
              }
              if (sVar1 != sVar20) {
LAB_00e4fae4:
                sVar20 = (ulong)(DAT_0178efc8 >> 1);
                if ((DAT_0178efc8 & 1) != 0) {
                  sVar20 = DAT_0178efd0;
                }
                if (sVar1 != sVar20) {
LAB_00e4fbc8:
                  sVar20 = (ulong)(DAT_0178efe0 >> 1);
                  if ((DAT_0178efe0 & 1) != 0) {
                    sVar20 = DAT_0178efe8;
                  }
                  if (sVar1 == sVar20) {
                    pvVar14 = *(void **)(lVar16 + 0x48);
                    if ((bVar2 & 1) == 0) {
                      pvVar14 = (void *)(lVar16 + 0x39);
                    }
                    pcVar10 = &DAT_0178efe1;
                    if ((DAT_0178efe0 & 1) != 0) {
                      pcVar10 = DAT_0178eff0;
                    }
                    if ((bVar2 & 1) == 0) {
                      if (sVar1 != 0) {
                        pcVar12 = (char *)(lVar16 + 0x39);
                        uVar15 = uVar21;
                        do {
                          if (*pcVar12 != *pcVar10) goto LAB_00e4fd18;
                          uVar15 = uVar15 - 1;
                          pcVar12 = pcVar12 + 1;
                          pcVar10 = pcVar10 + 1;
                        } while (uVar15 != 0);
                      }
                    }
                    else if ((sVar1 != 0) && (iVar9 = memcmp(pvVar14,pcVar10,sVar1), iVar9 != 0))
                    goto LAB_00e4fd18;
                    uVar21 = PUScriptTranslator::passValidateProperty
                                       ((PUScriptTranslator *)this,param_1,lVar16,&DAT_0178efe0,4);
                    if ((uVar21 & 1) != 0) {
                      uStack_a8 = 0;
                      local_a0 = (char *)0x0;
                      local_b0 = (undefined **)0x0;
                      uVar21 = PUScriptTranslator::getString
                                         (*(PUAbstractNode **)(*(long *)(lVar16 + 0x60) + 0x10),
                                          (basic_string *)&local_b0);
                      ppuVar8 = local_b0;
                      ppuVar17 = (undefined **)((ulong)local_b0 & 0xff);
                      if ((uVar21 & 1) == 0) goto joined_r0x00e5001c;
                      sVar20 = (ulong)local_b0 >> 1 & 0x7f;
                      sVar1 = sVar20;
                      if (((ulong)local_b0 & 1) != 0) {
                        sVar1 = uStack_a8;
                      }
                      sVar3 = (ulong)(DAT_0178f058 >> 1);
                      if ((DAT_0178f058 & 1) != 0) {
                        sVar3 = DAT_0178f060;
                      }
                      if (sVar1 == sVar3) {
                        pcVar10 = pcVar11;
                        if (((ulong)local_b0 & 1) != 0) {
                          pcVar10 = local_a0;
                        }
                        pcVar12 = &DAT_0178f059;
                        if ((DAT_0178f058 & 1) != 0) {
                          pcVar12 = DAT_0178f068;
                        }
                        pcVar5 = pcVar11;
                        sVar3 = sVar20;
                        sVar6 = sVar1;
                        if (((ulong)local_b0 & 1) == 0) {
                          while (sVar6 != 0) {
                            if (*pcVar5 != *pcVar12) goto LAB_00e50188;
                            pcVar12 = pcVar12 + 1;
                            sVar3 = sVar3 - 1;
                            pcVar5 = pcVar5 + 1;
                            sVar6 = sVar3;
                          }
                        }
                        else if ((sVar1 != 0) && (iVar9 = memcmp(pcVar10,pcVar12,sVar1), iVar9 != 0)
                                ) goto LAB_00e50188;
                        *(undefined1 *)(local_c8 + 0xa8) = 1;
                      }
                      else {
LAB_00e50188:
                        sVar3 = (ulong)(DAT_0178f070 >> 1);
                        if ((DAT_0178f070 & 1) != 0) {
                          sVar3 = DAT_0178f078;
                        }
                        if (sVar1 != sVar3) goto joined_r0x00e5001c;
                        pcVar10 = pcVar11;
                        if (((ulong)ppuVar8 & 1) != 0) {
                          pcVar10 = local_a0;
                        }
                        pcVar12 = &DAT_0178f071;
                        if ((DAT_0178f070 & 1) != 0) {
                          pcVar12 = DAT_0178f080;
                        }
                        pcVar5 = pcVar11;
                        if (((ulong)ppuVar8 & 1) == 0) {
                          while (sVar1 != 0) {
                            if (*pcVar5 != *pcVar12) goto LAB_00e4f508;
                            pcVar12 = pcVar12 + 1;
                            sVar20 = sVar20 - 1;
                            pcVar5 = pcVar5 + 1;
                            sVar1 = sVar20;
                          }
                        }
                        else if ((sVar1 != 0) && (iVar9 = memcmp(pcVar10,pcVar12,sVar1), iVar9 != 0)
                                ) goto LAB_00e4ff10;
                        *(undefined1 *)(local_c8 + 0xa8) = 0;
                      }
                      goto joined_r0x00e50218;
                    }
                  }
                  else {
LAB_00e4fd18:
                    sVar20 = (ulong)(DAT_0178eff8 >> 1);
                    if ((DAT_0178eff8 & 1) != 0) {
                      sVar20 = DAT_0178f000;
                    }
                    if (sVar1 == sVar20) {
                      pvVar14 = *(void **)(lVar16 + 0x48);
                      if ((bVar2 & 1) == 0) {
                        pvVar14 = (void *)(lVar16 + 0x39);
                      }
                      pcVar10 = &DAT_0178eff9;
                      if ((DAT_0178eff8 & 1) != 0) {
                        pcVar10 = DAT_0178f008;
                      }
                      if ((bVar2 & 1) == 0) {
                        if (sVar1 != 0) {
                          pcVar12 = (char *)(lVar16 + 0x39);
                          do {
                            if (*pcVar12 != *pcVar10) goto LAB_00e4f508;
                            uVar21 = uVar21 - 1;
                            pcVar12 = pcVar12 + 1;
                            pcVar10 = pcVar10 + 1;
                          } while (uVar21 != 0);
                        }
                      }
                      else if ((sVar1 != 0) && (iVar9 = memcmp(pvVar14,pcVar10,sVar1), iVar9 != 0))
                      goto LAB_00e4f508;
                      uVar21 = PUScriptTranslator::passValidateProperty
                                         ((PUScriptTranslator *)this,param_1,lVar16,&DAT_0178eff8,4)
                      ;
                      if ((uVar21 & 1) != 0) {
                        uStack_a8 = 0;
                        local_a0 = (char *)0x0;
                        local_b0 = (undefined **)0x0;
                        uVar21 = PUScriptTranslator::getString
                                           (*(PUAbstractNode **)(*(long *)(lVar16 + 0x60) + 0x10),
                                            (basic_string *)&local_b0);
                        ppuVar8 = local_b0;
                        ppuVar17 = (undefined **)((ulong)local_b0 & 0xff);
                        if ((uVar21 & 1) == 0) goto joined_r0x00e5001c;
                        sVar20 = (ulong)local_b0 >> 1 & 0x7f;
                        sVar1 = sVar20;
                        if (((ulong)local_b0 & 1) != 0) {
                          sVar1 = uStack_a8;
                        }
                        sVar3 = (ulong)(DAT_0178f058 >> 1);
                        if ((DAT_0178f058 & 1) != 0) {
                          sVar3 = DAT_0178f060;
                        }
                        if (sVar1 != sVar3) {
LAB_00e502d4:
                          sVar3 = (ulong)(DAT_0178f070 >> 1);
                          if ((DAT_0178f070 & 1) != 0) {
                            sVar3 = DAT_0178f078;
                          }
                          if (sVar1 == sVar3) {
                            pcVar10 = pcVar11;
                            if (((ulong)ppuVar8 & 1) != 0) {
                              pcVar10 = local_a0;
                            }
                            pcVar12 = &DAT_0178f071;
                            if ((DAT_0178f070 & 1) != 0) {
                              pcVar12 = DAT_0178f080;
                            }
                            pcVar5 = pcVar11;
                            if (((ulong)ppuVar8 & 1) == 0) {
                              while (sVar1 != 0) {
                                if (*pcVar5 != *pcVar12) goto LAB_00e4f508;
                                pcVar12 = pcVar12 + 1;
                                sVar20 = sVar20 - 1;
                                pcVar5 = pcVar5 + 1;
                                sVar1 = sVar20;
                              }
                            }
                            else if ((sVar1 != 0) &&
                                    (iVar9 = memcmp(pcVar10,pcVar12,sVar1), iVar9 != 0))
                            goto LAB_00e4ff10;
                            *(undefined1 *)(local_c8 + 0xa9) = 0;
                            ppuVar17 = ppuVar8;
                          }
                          goto joined_r0x00e5001c;
                        }
                        pcVar10 = pcVar11;
                        if (((ulong)local_b0 & 1) != 0) {
                          pcVar10 = local_a0;
                        }
                        pcVar12 = &DAT_0178f059;
                        if ((DAT_0178f058 & 1) != 0) {
                          pcVar12 = DAT_0178f068;
                        }
                        pcVar5 = pcVar11;
                        sVar3 = sVar20;
                        sVar6 = sVar1;
                        if (((ulong)local_b0 & 1) == 0) {
                          while (sVar6 != 0) {
                            if (*pcVar5 != *pcVar12) goto LAB_00e502d4;
                            pcVar12 = pcVar12 + 1;
                            sVar3 = sVar3 - 1;
                            pcVar5 = pcVar5 + 1;
                            sVar6 = sVar3;
                          }
                        }
                        else if ((sVar1 != 0) && (iVar9 = memcmp(pcVar10,pcVar12,sVar1), iVar9 != 0)
                                ) goto LAB_00e502d4;
                        *(undefined1 *)(local_c8 + 0xa9) = 1;
                        goto joined_r0x00e50218;
                      }
                    }
                  }
                  goto LAB_00e4f508;
                }
                pvVar14 = *(void **)(lVar16 + 0x48);
                if ((bVar2 & 1) == 0) {
                  pvVar14 = (void *)(lVar16 + 0x39);
                }
                pcVar10 = &DAT_0178efc9;
                if ((DAT_0178efc8 & 1) != 0) {
                  pcVar10 = DAT_0178efd8;
                }
                if ((bVar2 & 1) == 0) {
                  if (sVar1 != 0) {
                    pcVar12 = (char *)(lVar16 + 0x39);
                    uVar15 = uVar21;
                    do {
                      if (*pcVar12 != *pcVar10) goto LAB_00e4fbc8;
                      uVar15 = uVar15 - 1;
                      pcVar12 = pcVar12 + 1;
                      pcVar10 = pcVar10 + 1;
                    } while (uVar15 != 0);
                  }
                }
                else if ((sVar1 != 0) && (iVar9 = memcmp(pvVar14,pcVar10,sVar1), iVar9 != 0))
                goto LAB_00e4fbc8;
                if (*(long *)(lVar16 + 0x68) == 0) goto LAB_00e4f508;
                uStack_a8 = 0;
                local_a0 = (char *)0x0;
                local_b0 = (undefined **)0x0;
                uVar21 = PUScriptTranslator::getString
                                   (*(PUAbstractNode **)(*(long *)(lVar16 + 0x60) + 0x10),
                                    (basic_string *)&local_b0);
                ppuVar8 = local_b0;
                if ((uVar21 & 1) != 0) {
                  sVar20 = (ulong)local_b0 >> 1 & 0x7f;
                  sVar1 = sVar20;
                  if (((ulong)local_b0 & 1) != 0) {
                    sVar1 = uStack_a8;
                  }
                  sVar3 = (ulong)(DAT_0178f088 >> 1);
                  if ((DAT_0178f088 & 1) != 0) {
                    sVar3 = DAT_0178f090;
                  }
                  if (sVar1 == sVar3) {
                    pcVar10 = pcVar11;
                    if (((ulong)local_b0 & 1) != 0) {
                      pcVar10 = local_a0;
                    }
                    pcVar12 = &DAT_0178f089;
                    if ((DAT_0178f088 & 1) != 0) {
                      pcVar12 = DAT_0178f098;
                    }
                    pcVar5 = pcVar11;
                    sVar3 = sVar20;
                    sVar6 = sVar1;
                    if (((ulong)local_b0 & 1) == 0) {
                      while (sVar6 != 0) {
                        if (*pcVar5 != *pcVar12) goto LAB_00e50034;
                        pcVar12 = pcVar12 + 1;
                        sVar3 = sVar3 - 1;
                        pcVar5 = pcVar5 + 1;
                        sVar6 = sVar3;
                      }
                    }
                    else if ((sVar1 != 0) && (iVar9 = memcmp(pcVar10,pcVar12,sVar1), iVar9 != 0))
                    goto LAB_00e50034;
                    *(undefined8 *)(local_c8 + 0xa0) = 0x100000001;
                  }
                  else {
LAB_00e50034:
                    sVar3 = (ulong)(DAT_0178f0a0 >> 1);
                    if ((DAT_0178f0a0 & 1) != 0) {
                      sVar3 = DAT_0178f0a8;
                    }
                    if (sVar1 == sVar3) {
                      pcVar10 = pcVar11;
                      if (((ulong)ppuVar8 & 1) != 0) {
                        pcVar10 = local_a0;
                      }
                      pcVar12 = &DAT_0178f0a1;
                      if ((DAT_0178f0a0 & 1) != 0) {
                        pcVar12 = DAT_0178f0b0;
                      }
                      pcVar5 = pcVar11;
                      sVar3 = sVar20;
                      sVar6 = sVar1;
                      if (((ulong)ppuVar8 & 1) == 0) {
                        while (sVar6 != 0) {
                          if (*pcVar5 != *pcVar12) goto LAB_00e500d8;
                          pcVar12 = pcVar12 + 1;
                          sVar3 = sVar3 - 1;
                          pcVar5 = pcVar5 + 1;
                          sVar6 = sVar3;
                        }
                      }
                      else if ((sVar1 != 0) && (iVar9 = memcmp(pcVar10,pcVar12,sVar1), iVar9 != 0))
                      goto LAB_00e500d8;
                      *(undefined8 *)(local_c8 + 0xa0) = 0x30300000302;
                    }
                    else {
LAB_00e500d8:
                      sVar3 = (ulong)(DAT_0178f0b8 >> 1);
                      if ((DAT_0178f0b8 & 1) != 0) {
                        sVar3 = DAT_0178f0c0;
                      }
                      if (sVar1 == sVar3) {
                        pcVar10 = pcVar11;
                        if (((ulong)ppuVar8 & 1) != 0) {
                          pcVar10 = local_a0;
                        }
                        pcVar12 = &DAT_0178f0b9;
                        if ((DAT_0178f0b8 & 1) != 0) {
                          pcVar12 = DAT_0178f0c8;
                        }
                        pcVar5 = pcVar11;
                        sVar3 = sVar20;
                        sVar6 = sVar1;
                        if (((ulong)ppuVar8 & 1) == 0) {
                          while (sVar6 != 0) {
                            if (*pcVar5 != *pcVar12) goto LAB_00e50230;
                            pcVar12 = pcVar12 + 1;
                            sVar3 = sVar3 - 1;
                            pcVar5 = pcVar5 + 1;
                            sVar6 = sVar3;
                          }
                        }
                        else if ((sVar1 != 0) && (iVar9 = memcmp(pcVar10,pcVar12,sVar1), iVar9 != 0)
                                ) goto LAB_00e50230;
                        *(undefined8 *)(local_c8 + 0xa0) = 0x30100000300;
                      }
                      else {
LAB_00e50230:
                        sVar3 = (ulong)(DAT_0178f0d0 >> 1);
                        if ((DAT_0178f0d0 & 1) != 0) {
                          sVar3 = DAT_0178f0d8;
                        }
                        if (sVar1 == sVar3) {
                          pcVar10 = pcVar11;
                          if (((ulong)ppuVar8 & 1) != 0) {
                            pcVar10 = local_a0;
                          }
                          pcVar12 = &DAT_0178f0d1;
                          if ((DAT_0178f0d0 & 1) != 0) {
                            pcVar12 = DAT_0178f0e0;
                          }
                          pcVar5 = pcVar11;
                          sVar3 = sVar20;
                          sVar6 = sVar1;
                          if (((ulong)ppuVar8 & 1) == 0) {
                            while (sVar6 != 0) {
                              if (*pcVar5 != *pcVar12) goto LAB_00e5039c;
                              pcVar12 = pcVar12 + 1;
                              sVar3 = sVar3 - 1;
                              pcVar5 = pcVar5 + 1;
                              sVar6 = sVar3;
                            }
                          }
                          else if ((sVar1 != 0) &&
                                  (iVar9 = memcmp(pcVar10,pcVar12,sVar1), iVar9 != 0))
                          goto LAB_00e5039c;
                          *(undefined8 *)(local_c8 + 0xa0) = 0x306;
                        }
                        else {
LAB_00e5039c:
                          sVar3 = (ulong)(DAT_0178f0e8 >> 1);
                          if ((DAT_0178f0e8 & 1) != 0) {
                            sVar3 = DAT_0178f0f0;
                          }
                          if (sVar1 == sVar3) {
                            pcVar10 = pcVar11;
                            if (((ulong)ppuVar8 & 1) != 0) {
                              pcVar10 = local_a0;
                            }
                            pcVar12 = &DAT_0178f0e9;
                            if ((DAT_0178f0e8 & 1) != 0) {
                              pcVar12 = DAT_0178f0f8;
                            }
                            pcVar5 = pcVar11;
                            sVar3 = sVar20;
                            sVar6 = sVar1;
                            if (((ulong)ppuVar8 & 1) == 0) {
                              while (sVar6 != 0) {
                                if (*pcVar5 != *pcVar12) goto LAB_00e50460;
                                pcVar12 = pcVar12 + 1;
                                sVar3 = sVar3 - 1;
                                pcVar5 = pcVar5 + 1;
                                sVar6 = sVar3;
                              }
                            }
                            else if ((sVar1 != 0) &&
                                    (iVar9 = memcmp(pcVar10,pcVar12,sVar1), iVar9 != 0))
                            goto LAB_00e50460;
                            *(undefined8 *)(local_c8 + 0xa0) = 1;
                          }
                          else {
LAB_00e50460:
                            sVar3 = (ulong)(DAT_0178f100 >> 1);
                            if ((DAT_0178f100 & 1) != 0) {
                              sVar3 = DAT_0178f108;
                            }
                            if (sVar1 == sVar3) {
                              pcVar10 = pcVar11;
                              if (((ulong)ppuVar8 & 1) != 0) {
                                pcVar10 = local_a0;
                              }
                              pcVar12 = &DAT_0178f101;
                              if ((DAT_0178f100 & 1) != 0) {
                                pcVar12 = DAT_0178f110;
                              }
                              pcVar5 = pcVar11;
                              sVar3 = sVar20;
                              sVar6 = sVar1;
                              if (((ulong)ppuVar8 & 1) == 0) {
                                while (sVar6 != 0) {
                                  if (*pcVar5 != *pcVar12) goto LAB_00e50504;
                                  pcVar12 = pcVar12 + 1;
                                  sVar3 = sVar3 - 1;
                                  pcVar5 = pcVar5 + 1;
                                  sVar6 = sVar3;
                                }
                              }
                              else if ((sVar1 != 0) &&
                                      (iVar9 = memcmp(pcVar10,pcVar12,sVar1), iVar9 != 0))
                              goto LAB_00e50504;
                              uVar13 = 0x300;
                            }
                            else {
LAB_00e50504:
                              sVar3 = (ulong)(DAT_0178f148 >> 1);
                              if ((DAT_0178f148 & 1) != 0) {
                                sVar3 = DAT_0178f150;
                              }
                              if (sVar1 != sVar3) goto LAB_00e505b0;
                              pcVar10 = pcVar11;
                              if (((ulong)ppuVar8 & 1) != 0) {
                                pcVar10 = local_a0;
                              }
                              pcVar12 = &DAT_0178f149;
                              if ((DAT_0178f148 & 1) != 0) {
                                pcVar12 = DAT_0178f158;
                              }
                              pcVar5 = pcVar11;
                              if (((ulong)ppuVar8 & 1) == 0) {
                                while (sVar1 != 0) {
                                  if (*pcVar5 != *pcVar12) goto LAB_00e505b0;
                                  pcVar12 = pcVar12 + 1;
                                  sVar20 = sVar20 - 1;
                                  pcVar5 = pcVar5 + 1;
                                  sVar1 = sVar20;
                                }
                              }
                              else if ((sVar1 != 0) &&
                                      (iVar9 = memcmp(pcVar10,pcVar12,sVar1), iVar9 != 0))
                              goto LAB_00e505b0;
                              uVar13 = 0x306;
                            }
                            *(undefined4 *)(local_c8 + 0xa0) = uVar13;
                          }
                        }
                      }
                    }
                  }
                }
LAB_00e505b0:
                ppuVar8 = local_b0;
                if ((*(long *)(lVar16 + 0x68) == 2) &&
                   (uVar21 = PUScriptTranslator::getString
                                       (*(PUAbstractNode **)(*(long *)(lVar16 + 0x58) + 0x10),
                                        (basic_string *)&local_b0), ppuVar17 = local_b0,
                   ppuVar8 = local_b0, (uVar21 & 1) != 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e5065c with catch @ 00e505ec
                       catch(type#1 @ 00000000) { ... } // from try @ 00e5068c with catch @ 00e505ec
                       catch(type#1 @ 00000000) { ... } // from try @ 00e506bc with catch @ 00e505ec
                       catch(type#1 @ 00000000) { ... } // from try @ 00e506e4 with catch @ 00e505ec
                       catch(type#1 @ 00000000) { ... } // from try @ 00e50710 with catch @ 00e505ec
                        */
                  sVar20 = (ulong)local_b0 >> 1 & 0x7f;
                  sVar1 = sVar20;
                  if (((ulong)local_b0 & 1) != 0) {
                    sVar1 = uStack_a8;
                  }
                  sVar3 = (ulong)(DAT_0178f118 >> 1);
                  if ((DAT_0178f118 & 1) != 0) {
                    sVar3 = DAT_0178f120;
                  }
                  if (sVar1 == sVar3) {
                    pcVar10 = pcVar11;
                    if (((ulong)local_b0 & 1) != 0) {
                      pcVar10 = local_a0;
                    }
                    pcVar12 = &DAT_0178f119;
                    if ((DAT_0178f118 & 1) != 0) {
                      pcVar12 = DAT_0178f128;
                    }
                    pcVar5 = pcVar11;
                    sVar3 = sVar20;
                    sVar6 = sVar1;
                    if (((ulong)local_b0 & 1) == 0) {
                      while (sVar6 != 0) {
                    /* try { // try from 00e50654 to 00f5065b has its CatchHandler @ 00e50750 */
                        if (*pcVar5 != *pcVar12) goto LAB_00e5067c;
                    /* try { // try from 00e5065c to 00f5067f has its CatchHandler @ 00e505ec */
                        pcVar12 = pcVar12 + 1;
                        sVar3 = sVar3 - 1;
                        pcVar5 = pcVar5 + 1;
                        sVar6 = sVar3;
                      }
                    }
                    else if ((sVar1 != 0) && (iVar9 = memcmp(pcVar10,pcVar12,sVar1), iVar9 != 0))
                    goto LAB_00e5067c;
                    /* try { // try from 00e50704 to 00f5070f has its CatchHandler @ 00e5074c */
                    uVar13 = 1;
                  }
                  else {
LAB_00e5067c:
                    /* try { // try from 00e50680 to 00f5068b has its CatchHandler @ 00e50750 */
                    /* try { // try from 00e5068c to 00f506b3 has its CatchHandler @ 00e505ec */
                    sVar3 = (ulong)(DAT_0178f130 >> 1);
                    if ((DAT_0178f130 & 1) != 0) {
                      sVar3 = DAT_0178f138;
                    }
                    if (sVar1 == sVar3) {
                    /* try { // try from 00e506b4 to 00f506bb has its CatchHandler @ 00e5074c */
                    /* try { // try from 00e506bc to 00f506db has its CatchHandler @ 00e505ec */
                      pcVar10 = pcVar11;
                      if (((ulong)ppuVar17 & 1) != 0) {
                        pcVar10 = local_a0;
                      }
                      pcVar12 = &DAT_0178f131;
                      if ((DAT_0178f130 & 1) != 0) {
                        pcVar12 = DAT_0178f140;
                      }
                      pcVar5 = pcVar11;
                      sVar3 = sVar20;
                      sVar6 = sVar1;
                      if (((ulong)ppuVar17 & 1) == 0) {
                    /* try { // try from 00e506dc to 00f506e3 has its CatchHandler @ 00e5074c */
                        while (sVar6 != 0) {
                    /* try { // try from 00e506e4 to 00f50703 has its CatchHandler @ 00e505ec */
                          if (*pcVar5 != *pcVar12) goto LAB_00e50720;
                          pcVar12 = pcVar12 + 1;
                          sVar3 = sVar3 - 1;
                          pcVar5 = pcVar5 + 1;
                          sVar6 = sVar3;
                        }
                      }
                      else {
                    /* try { // try from 00e50710 to 00f50753 has its CatchHandler @ 00e505ec */
                        if ((sVar1 != 0) && (iVar9 = memcmp(pcVar10,pcVar12,sVar1), iVar9 != 0))
                        goto LAB_00e50720;
                      }
                      *(undefined4 *)(local_c8 + 0xa4) = 0;
                      ppuVar8 = local_b0;
                      goto joined_r0x00e50218;
                    }
LAB_00e50720:
                    sVar3 = (ulong)(DAT_0178f100 >> 1);
                    if ((DAT_0178f100 & 1) != 0) {
                      sVar3 = DAT_0178f108;
                    }
                    if (sVar1 == sVar3) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e506b4 with catch @ 00e5074c
                       catch(type#1 @ 00000000) { ... } // from try @ 00e506dc with catch @ 00e5074c
                       catch(type#1 @ 00000000) { ... } // from try @ 00e50704 with catch @ 00e5074c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e50654 with catch @ 00e50750
                       catch(type#1 @ 00000000) { ... } // from try @ 00e50680 with catch @ 00e50750
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e507c4 with catch @ 00e50754
                       catch(type#1 @ 00000000) { ... } // from try @ 00e507f4 with catch @ 00e50754
                       catch(type#1 @ 00000000) { ... } // from try @ 00e50824 with catch @ 00e50754
                       catch(type#1 @ 00000000) { ... } // from try @ 00e5084c with catch @ 00e50754
                       catch(type#1 @ 00000000) { ... } // from try @ 00e50878 with catch @ 00e50754
                        */
                      pcVar10 = pcVar11;
                      if (((ulong)ppuVar17 & 1) != 0) {
                        pcVar10 = local_a0;
                      }
                      pcVar12 = &DAT_0178f101;
                      if ((DAT_0178f100 & 1) != 0) {
                        pcVar12 = DAT_0178f110;
                      }
                      pcVar5 = pcVar11;
                      sVar3 = sVar20;
                      sVar6 = sVar1;
                      if (((ulong)ppuVar17 & 1) == 0) {
                        while (sVar6 != 0) {
                          if (*pcVar5 != *pcVar12) goto LAB_00e507c4;
                          pcVar12 = pcVar12 + 1;
                          sVar3 = sVar3 - 1;
                          pcVar5 = pcVar5 + 1;
                          sVar6 = sVar3;
                        }
                      }
                      else {
                    /* try { // try from 00e507bc to 00f507c3 has its CatchHandler @ 00e508b8 */
                        if ((sVar1 != 0) && (iVar9 = memcmp(pcVar10,pcVar12,sVar1), iVar9 != 0))
                        goto LAB_00e507c4;
                      }
                    /* try { // try from 00e5084c to 00f5086b has its CatchHandler @ 00e50754 */
                      uVar13 = 0x300;
                    }
                    else {
LAB_00e507c4:
                    /* try { // try from 00e507c4 to 00f507e7 has its CatchHandler @ 00e50754 */
                      sVar3 = (ulong)(DAT_0178f148 >> 1);
                      if ((DAT_0178f148 & 1) != 0) {
                        sVar3 = DAT_0178f150;
                      }
                      ppuVar8 = local_b0;
                    /* try { // try from 00e507e8 to 00f507f3 has its CatchHandler @ 00e508b8 */
                      if (sVar1 != sVar3) goto joined_r0x00e50218;
                    /* try { // try from 00e507f4 to 00f5081b has its CatchHandler @ 00e50754 */
                      pcVar10 = pcVar11;
                      if (((ulong)ppuVar17 & 1) != 0) {
                        pcVar10 = local_a0;
                      }
                      pcVar12 = &DAT_0178f149;
                      if ((DAT_0178f148 & 1) != 0) {
                        pcVar12 = DAT_0178f158;
                      }
                      pcVar5 = pcVar11;
                      if (((ulong)ppuVar17 & 1) == 0) {
                        while (sVar1 != 0) {
                    /* try { // try from 00e50824 to 00f50843 has its CatchHandler @ 00e50754 */
                          if (*pcVar5 != *pcVar12) goto joined_r0x00e50218;
                          pcVar12 = pcVar12 + 1;
                          sVar20 = sVar20 - 1;
                          pcVar5 = pcVar5 + 1;
                          sVar1 = sVar20;
                        }
                      }
                      else if ((sVar1 != 0) &&
                              (iVar9 = memcmp(pcVar10,pcVar12,sVar1), ppuVar8 = local_b0, iVar9 != 0
                              )) goto joined_r0x00e50218;
                      uVar13 = 0x306;
                    }
                  }
                    /* try { // try from 00e5086c to 00f50877 has its CatchHandler @ 00e508b4 */
                  *(undefined4 *)(local_c8 + 0xa4) = uVar13;
                  ppuVar8 = local_b0;
                }
joined_r0x00e50218:
                if (((ulong)ppuVar8 & 1) != 0) goto LAB_00e4ff10;
                goto LAB_00e4f508;
              }
              pvVar14 = *(void **)(lVar16 + 0x48);
              if ((bVar2 & 1) == 0) {
                pvVar14 = (void *)(lVar16 + 0x39);
              }
              pcVar10 = &DAT_0178efb1;
              if ((DAT_0178efb0 & 1) != 0) {
                pcVar10 = DAT_0178efc0;
              }
              if ((bVar2 & 1) == 0) {
                if (sVar1 != 0) {
                  pcVar12 = (char *)(lVar16 + 0x39);
                  uVar15 = uVar21;
                  do {
                    if (*pcVar12 != *pcVar10) goto LAB_00e4fae4;
                    uVar15 = uVar15 - 1;
                    pcVar12 = pcVar12 + 1;
                    pcVar10 = pcVar10 + 1;
                  } while (uVar15 != 0);
                }
              }
              else if ((sVar1 != 0) && (iVar9 = memcmp(pvVar14,pcVar10,sVar1), iVar9 != 0))
              goto LAB_00e4fae4;
              uVar21 = PUScriptTranslator::passValidateProperty
                                 ((PUScriptTranslator *)this,param_1,lVar16,&DAT_0178ef68,7);
              if ((uVar21 & 1) == 0) goto LAB_00e4f508;
              Vec4::Vec4((Vec4 *)&local_b0);
              uVar21 = PUScriptTranslator::getVector4
                                 ((PUScriptTranslator *)this,*(undefined8 *)(lVar16 + 0x60),
                                  lVar16 + 0x58,&local_b0,4);
              puVar7 = (ulong *)(local_c8 + 0x8c);
              goto joined_r0x00e4f994;
            }
            pvVar14 = *(void **)(lVar16 + 0x48);
            if ((bVar2 & 1) == 0) {
              pvVar14 = (void *)(lVar16 + 0x39);
            }
            pcVar10 = &DAT_0178ef99;
            if ((DAT_0178ef98 & 1) != 0) {
              pcVar10 = DAT_0178efa8;
            }
            if ((bVar2 & 1) == 0) {
              if (sVar1 != 0) {
                pcVar12 = (char *)(lVar16 + 0x39);
                uVar15 = uVar21;
                do {
                  if (*pcVar12 != *pcVar10) goto LAB_00e4f9b4;
                  uVar15 = uVar15 - 1;
                  pcVar12 = pcVar12 + 1;
                  pcVar10 = pcVar10 + 1;
                } while (uVar15 != 0);
              }
            }
            else if ((sVar1 != 0) && (iVar9 = memcmp(pvVar14,pcVar10,sVar1), iVar9 != 0))
            goto LAB_00e4f9b4;
            lVar19 = *(long *)(lVar16 + 0x60);
            Vec4::Vec4((Vec4 *)&local_b0);
            if (lVar16 + 0x58 == lVar19) {
              fVar22 = 0.0;
            }
            else {
              iVar9 = 0;
              fVar22 = 0.0;
              do {
                local_b4 = 0.0;
                uVar21 = PUScriptTranslator::getFloat(*(PUAbstractNode **)(lVar19 + 0x10),&local_b4)
                ;
                if ((uVar21 & 1) != 0) {
                  switch(iVar9) {
                  case 0:
                    local_b0 = (undefined **)CONCAT44(local_b0._4_4_,local_b4);
                    break;
                  case 1:
                    local_b0 = (undefined **)CONCAT44(local_b4,(undefined4)local_b0);
                    break;
                  case 2:
                    uStack_a8 = CONCAT44(uStack_a8._4_4_,local_b4);
                    break;
                  case 3:
                    uStack_a8 = CONCAT44(local_b4,(undefined4)uStack_a8);
                    break;
                  case 4:
                    fVar22 = local_b4;
                  }
                }
                lVar19 = *(long *)(lVar19 + 8);
                iVar9 = iVar9 + 1;
              } while (lVar16 + 0x58 != lVar19);
            }
            *(size_t *)(local_c8 + 0x84) = uStack_a8;
            *(undefined ***)(local_c8 + 0x7c) = local_b0;
            *(float *)(local_c8 + 0x9c) = fVar22;
          }
          Vec4::~Vec4((Vec4 *)&local_b0);
        }
      }
LAB_00e4f508:
      pPVar18 = *(PUAbstractNode **)(pPVar18 + 8);
    } while (pPVar18 != param_2 + 0xb0);
  }
  if (*(long *)(lVar4 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e5081c with catch @ 00e508b4
                       catch(type#1 @ 00000000) { ... } // from try @ 00e50844 with catch @ 00e508b4
                       catch(type#1 @ 00000000) { ... } // from try @ 00e5086c with catch @ 00e508b4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e507bc with catch @ 00e508b8
                       catch(type#1 @ 00000000) { ... } // from try @ 00e507e8 with catch @ 00e508b8
                        */
  return;
}

