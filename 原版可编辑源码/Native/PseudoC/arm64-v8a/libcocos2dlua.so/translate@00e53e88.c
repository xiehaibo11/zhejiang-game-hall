
/* cocos2d::PUTechniqueTranslator::translate(cocos2d::PUScriptCompiler*, cocos2d::PUAbstractNode*)
    */

void __thiscall
cocos2d::PUTechniqueTranslator::translate
          (PUTechniqueTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  size_t __n;
  char *pcVar1;
  size_t sVar2;
  PUAbstractNode PVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  PUMaterialCache *this_00;
  PUAbstractNode *pPVar8;
  PUAbstractNode *pPVar9;
  ulong uVar10;
  PUAbstractNode *pPVar11;
  long lVar12;
  PUAbstractNode *pPVar13;
  ulong uVar14;
  ulong local_80;
  ulong local_78;
  char *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar12 = *(long *)(param_2 + 0x28);
  plVar6 = (long *)PUParticleSystem3D::create();
  *(long **)(this + 8) = plVar6;
  if ((lVar12 != 0) && (plVar7 = *(long **)(lVar12 + 0x30), plVar7 != (long *)0x0)) {
    (**(code **)(*plVar7 + 0x208))(plVar7,plVar6);
    plVar6 = *(long **)(this + 8);
  }
  (**(code **)(*plVar6 + 0x2d0))(plVar6,param_2 + 0x60);
  pPVar13 = *(PUAbstractNode **)(param_2 + 0xb8);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(this + 8);
  if (pPVar13 != param_2 + 0xb0) {
    do {
      pPVar11 = *(PUAbstractNode **)(pPVar13 + 0x10);
      if (*(int *)(pPVar11 + 0x24) == 2) {
        PUScriptTranslator::processNode((PUScriptTranslator *)this,param_1,pPVar11);
      }
      else if (*(int *)(pPVar11 + 0x24) == 3) {
        PVar3 = pPVar11[0x38];
        uVar14 = (ulong)((byte)PVar3 >> 1);
        __n = uVar14;
        if (((byte)PVar3 & 1) != 0) {
          __n = *(size_t *)(pPVar11 + 0x40);
        }
        sVar2 = (ulong)(token[0x2b8] >> 1);
        if ((token[0x2b8] & 1) != 0) {
          sVar2 = token._704_8_;
        }
        if (__n == sVar2) {
          pPVar9 = *(PUAbstractNode **)(pPVar11 + 0x48);
          if (((byte)PVar3 & 1) == 0) {
            pPVar9 = pPVar11 + 0x39;
          }
          pPVar8 = (PUAbstractNode *)(token + 0x2b9);
          if ((token[0x2b8] & 1) != 0) {
            pPVar8 = (PUAbstractNode *)token._712_8_;
          }
          if (((byte)PVar3 & 1) == 0) {
            if (__n != 0) {
              pPVar9 = pPVar11 + 0x39;
              uVar10 = uVar14;
              do {
                if (*pPVar9 != *pPVar8) goto LAB_00e54014;
                uVar10 = uVar10 - 1;
                pPVar9 = pPVar9 + 1;
                pPVar8 = pPVar8 + 1;
              } while (uVar10 != 0);
            }
          }
          else if ((__n != 0) && (iVar5 = memcmp(pPVar9,pPVar8,__n), iVar5 != 0)) goto LAB_00e54014;
          uVar14 = PUScriptTranslator::passValidateProperty
                             ((PUScriptTranslator *)this,param_1,pPVar11,0x1789348,1);
                    /* try { // try from 00e540ac to 00f5412b has its CatchHandler @ 00e540ac
                       catch() { ... } // from try @ 00e540ac with catch @ 00e540ac
                       catch() { ... } // from try @ 00e54130 with catch @ 00e540ac */
          if (((uVar14 & 1) != 0) &&
             (uVar14 = PUScriptTranslator::getBoolean
                                 (*(PUAbstractNode **)(*(long *)(pPVar11 + 0x60) + 0x10),
                                  (bool *)&local_80), (uVar14 & 1) != 0)) {
            ParticleSystem3D::setEnabled(*(ParticleSystem3D **)(this + 8),(bool)local_80._0_1_);
          }
        }
        else {
LAB_00e54014:
          sVar2 = (ulong)(token[0x2d0] >> 1);
          if ((token[0x2d0] & 1) != 0) {
            sVar2 = token._728_8_;
          }
          if (__n == sVar2) {
            pPVar9 = *(PUAbstractNode **)(pPVar11 + 0x48);
            if (((byte)PVar3 & 1) == 0) {
              pPVar9 = pPVar11 + 0x39;
            }
            pPVar8 = (PUAbstractNode *)(token + 0x2d1);
            if ((token[0x2d0] & 1) != 0) {
              pPVar8 = (PUAbstractNode *)token._736_8_;
            }
            if (((byte)PVar3 & 1) == 0) {
              if (__n != 0) {
                pPVar9 = pPVar11 + 0x39;
                uVar10 = uVar14;
                do {
                  if (*pPVar9 != *pPVar8) goto LAB_00e540d0;
                  uVar10 = uVar10 - 1;
                  pPVar9 = pPVar9 + 1;
                  pPVar8 = pPVar8 + 1;
                } while (uVar10 != 0);
              }
            }
            else if ((__n != 0) && (iVar5 = memcmp(pPVar9,pPVar8,__n), iVar5 != 0))
            goto LAB_00e540d0;
            uVar14 = PUScriptTranslator::passValidateProperty
                               ((PUScriptTranslator *)this,param_1,pPVar11,0x1789360,6);
            if ((uVar14 & 1) != 0) {
              Vec3::Vec3((Vec3 *)&local_80);
              uVar14 = PUScriptTranslator::getVector3
                                 ((PUScriptTranslator *)this,*(undefined8 *)(pPVar11 + 0x60),
                                  pPVar11 + 0x58,&local_80,3);
              if ((uVar14 & 1) != 0) {
                (**(code **)(**(long **)(this + 8) + 0xf8))(*(long **)(this + 8),&local_80);
              }
            }
          }
          else {
LAB_00e540d0:
            sVar2 = (ulong)(token[0x2e8] >> 1);
            if ((token[0x2e8] & 1) != 0) {
              sVar2 = token._752_8_;
            }
            if (__n == sVar2) {
              pPVar9 = *(PUAbstractNode **)(pPVar11 + 0x48);
              if (((byte)PVar3 & 1) == 0) {
                pPVar9 = pPVar11 + 0x39;
              }
              pPVar8 = (PUAbstractNode *)(token + 0x2e9);
              if ((token[0x2e8] & 1) != 0) {
                pPVar8 = (PUAbstractNode *)token._760_8_;
              }
              if (((byte)PVar3 & 1) == 0) {
                if (__n != 0) {
                  pPVar9 = pPVar11 + 0x39;
                  uVar10 = uVar14;
                  do {
                    if (*pPVar9 != *pPVar8) goto LAB_00e541a4;
                    uVar10 = uVar10 - 1;
                    /* try { // try from 00e5412c to 00f5412f has its CatchHandler @ 00e54194 */
                    pPVar9 = pPVar9 + 1;
                    /* try { // try from 00e54130 to 00f541a7 has its CatchHandler @ 00e540ac */
                    pPVar8 = pPVar8 + 1;
                  } while (uVar10 != 0);
                }
              }
              else {
                    /* catch() { ... } // from try @ 00e5412c with catch @ 00e54194 */
                if ((__n != 0) && (iVar5 = memcmp(pPVar9,pPVar8,__n), iVar5 != 0))
                goto LAB_00e541a4;
              }
              uVar14 = PUScriptTranslator::passValidateProperty
                                 ((PUScriptTranslator *)this,param_1,pPVar11,0x1789378,1);
              if (((uVar14 & 1) != 0) &&
                 (uVar14 = PUScriptTranslator::getBoolean
                                     (*(PUAbstractNode **)(*(long *)(pPVar11 + 0x60) + 0x10),
                                      (bool *)&local_80), (uVar14 & 1) != 0)) {
                ParticleSystem3D::setKeepLocal
                          (*(ParticleSystem3D **)(this + 8),(bool)local_80._0_1_);
              }
            }
            else {
LAB_00e541a4:
              sVar2 = (ulong)(token[0x5a0] >> 1);
              if ((token[0x5a0] & 1) != 0) {
                sVar2 = token._1448_8_;
              }
              if (__n == sVar2) {
                pPVar9 = *(PUAbstractNode **)(pPVar11 + 0x48);
                if (((byte)PVar3 & 1) == 0) {
                  pPVar9 = pPVar11 + 0x39;
                }
                pPVar8 = (PUAbstractNode *)(token + 0x5a1);
                if ((token[0x5a0] & 1) != 0) {
                  pPVar8 = (PUAbstractNode *)token._1456_8_;
                }
                if (((byte)PVar3 & 1) == 0) {
                  if (__n != 0) {
                    pPVar9 = pPVar11 + 0x39;
                    uVar10 = uVar14;
                    do {
                      if (*pPVar9 != *pPVar8) goto LAB_00e54260;
                      uVar10 = uVar10 - 1;
                      pPVar9 = pPVar9 + 1;
                      pPVar8 = pPVar8 + 1;
                    } while (uVar10 != 0);
                  }
                }
                else if ((__n != 0) && (iVar5 = memcmp(pPVar9,pPVar8,__n), iVar5 != 0))
                goto LAB_00e54260;
                uVar14 = PUScriptTranslator::passValidateProperty
                                   ((PUScriptTranslator *)this,param_1,pPVar11,0x1789630,2);
                if ((uVar14 & 1) != 0) {
                  local_80 = local_80 & 0xffffffff00000000;
                  uVar14 = PUScriptTranslator::getUInt
                                     (*(PUAbstractNode **)(*(long *)(pPVar11 + 0x60) + 0x10),
                                      (uint *)&local_80);
                  if ((uVar14 & 1) != 0) {
                    ParticleSystem3D::setParticleQuota
                              (*(ParticleSystem3D **)(this + 8),(uint)(float)local_80);
                  }
                }
              }
              else {
LAB_00e54260:
                sVar2 = (ulong)(token[0x5b8] >> 1);
                if ((token[0x5b8] & 1) != 0) {
                  sVar2 = token._1472_8_;
                }
                if (__n == sVar2) {
                  pPVar9 = *(PUAbstractNode **)(pPVar11 + 0x48);
                  if (((byte)PVar3 & 1) == 0) {
                    pPVar9 = pPVar11 + 0x39;
                  }
                  pPVar8 = (PUAbstractNode *)(token + 0x5b9);
                  if ((token[0x5b8] & 1) != 0) {
                    pPVar8 = (PUAbstractNode *)token._1480_8_;
                  }
                  if (((byte)PVar3 & 1) == 0) {
                    if (__n != 0) {
                      pPVar9 = pPVar11 + 0x39;
                      uVar10 = uVar14;
                      do {
                        if (*pPVar9 != *pPVar8) goto LAB_00e54320;
                        uVar10 = uVar10 - 1;
                        pPVar9 = pPVar9 + 1;
                        pPVar8 = pPVar8 + 1;
                      } while (uVar10 != 0);
                    }
                  }
                  else if ((__n != 0) && (iVar5 = memcmp(pPVar9,pPVar8,__n), iVar5 != 0))
                  goto LAB_00e54320;
                    /* try { // try from 00e5439c to 00f5439f has its CatchHandler @ 00e543bc */
                    /* try { // try from 00e543a0 to 00f543cf has its CatchHandler @ 00e54370 */
                  uVar14 = PUScriptTranslator::passValidateProperty
                                     ((PUScriptTranslator *)this,param_1,pPVar11,0x1789648,2);
                  if ((uVar14 & 1) != 0) {
                    local_80 = local_80 & 0xffffffff00000000;
                    uVar14 = PUScriptTranslator::getUInt
                                       (*(PUAbstractNode **)(*(long *)(pPVar11 + 0x60) + 0x10),
                                        (uint *)&local_80);
                    /* catch() { ... } // from try @ 00e5439c with catch @ 00e543bc */
                    if ((uVar14 & 1) != 0) {
                      *(float *)(*(long *)(this + 8) + 0x400) = (float)local_80;
                    }
                  }
                }
                else {
LAB_00e54320:
                  sVar2 = (ulong)(token[0x5d0] >> 1);
                  if ((token[0x5d0] & 1) != 0) {
                    sVar2 = token._1496_8_;
                  }
                  if (__n == sVar2) {
                    pPVar9 = *(PUAbstractNode **)(pPVar11 + 0x48);
                    if (((byte)PVar3 & 1) == 0) {
                      pPVar9 = pPVar11 + 0x39;
                    }
                    pPVar8 = (PUAbstractNode *)(token + 0x5d1);
                    if ((token[0x5d0] & 1) != 0) {
                      pPVar8 = (PUAbstractNode *)token._1504_8_;
                    }
                    if (((byte)PVar3 & 1) == 0) {
                      if (__n != 0) {
                        pPVar9 = pPVar11 + 0x39;
                        uVar10 = uVar14;
                        do {
                    /* try { // try from 00e54370 to 00f5439b has its CatchHandler @ 00e54370
                       catch() { ... } // from try @ 00e54370 with catch @ 00e54370
                       catch() { ... } // from try @ 00e543a0 with catch @ 00e54370 */
                          if (*pPVar9 != *pPVar8) goto LAB_00e543e0;
                          uVar10 = uVar10 - 1;
                          pPVar9 = pPVar9 + 1;
                          pPVar8 = pPVar8 + 1;
                        } while (uVar10 != 0);
                      }
                    }
                    else if ((__n != 0) && (iVar5 = memcmp(pPVar9,pPVar8,__n), iVar5 != 0))
                    goto LAB_00e543e0;
                  }
                  else {
LAB_00e543e0:
                    sVar2 = (ulong)(token[0x5e8] >> 1);
                    if ((token[0x5e8] & 1) != 0) {
                      sVar2 = token._1520_8_;
                    }
                    if (__n == sVar2) {
                      pPVar9 = *(PUAbstractNode **)(pPVar11 + 0x48);
                      if (((byte)PVar3 & 1) == 0) {
                        pPVar9 = pPVar11 + 0x39;
                      }
                      pPVar8 = (PUAbstractNode *)(token + 0x5e9);
                      if ((token[0x5e8] & 1) != 0) {
                        pPVar8 = (PUAbstractNode *)token._1528_8_;
                      }
                      if (((byte)PVar3 & 1) == 0) {
                        if (__n != 0) {
                          pPVar9 = pPVar11 + 0x39;
                          uVar10 = uVar14;
                          do {
                            if (*pPVar9 != *pPVar8) goto LAB_00e5445c;
                            uVar10 = uVar10 - 1;
                            pPVar9 = pPVar9 + 1;
                            pPVar8 = pPVar8 + 1;
                          } while (uVar10 != 0);
                        }
                      }
                      else if ((__n != 0) && (iVar5 = memcmp(pPVar9,pPVar8,__n), iVar5 != 0))
                      goto LAB_00e5445c;
                      uVar14 = PUScriptTranslator::passValidateProperty
                                         ((PUScriptTranslator *)this,param_1,pPVar11,0x1789678,2);
                      if ((uVar14 & 1) != 0) {
                        local_80 = local_80 & 0xffffffff00000000;
                        uVar14 = PUScriptTranslator::getUInt
                                           (*(PUAbstractNode **)(*(long *)(pPVar11 + 0x60) + 0x10),
                                            (uint *)&local_80);
                        if ((uVar14 & 1) != 0) {
                          *(float *)(*(long *)(this + 8) + 0x404) = (float)local_80;
                        }
                      }
                    }
                    else {
LAB_00e5445c:
                      sVar2 = (ulong)(token[0x600] >> 1);
                      if ((token[0x600] & 1) != 0) {
                        sVar2 = token._1544_8_;
                      }
                      if (__n == sVar2) {
                        pPVar9 = *(PUAbstractNode **)(pPVar11 + 0x48);
                        if (((byte)PVar3 & 1) == 0) {
                          pPVar9 = pPVar11 + 0x39;
                        }
                        pPVar8 = (PUAbstractNode *)(token + 0x601);
                        if ((token[0x600] & 1) != 0) {
                          pPVar8 = (PUAbstractNode *)token._1552_8_;
                        }
                        if (((byte)PVar3 & 1) == 0) {
                          if (__n != 0) {
                            pPVar9 = pPVar11 + 0x39;
                            uVar10 = uVar14;
                            do {
                              if (*pPVar9 != *pPVar8) goto LAB_00e5451c;
                              uVar10 = uVar10 - 1;
                              pPVar9 = pPVar9 + 1;
                              pPVar8 = pPVar8 + 1;
                            } while (uVar10 != 0);
                          }
                        }
                        else if ((__n != 0) && (iVar5 = memcmp(pPVar9,pPVar8,__n), iVar5 != 0))
                        goto LAB_00e5451c;
                      }
                      else {
LAB_00e5451c:
                        sVar2 = (ulong)(token[0x270] >> 1);
                        if ((token[0x270] & 1) != 0) {
                          sVar2 = token._632_8_;
                        }
                        if (__n == sVar2) {
                          pPVar9 = *(PUAbstractNode **)(pPVar11 + 0x48);
                          if (((byte)PVar3 & 1) == 0) {
                            pPVar9 = pPVar11 + 0x39;
                          }
                          pPVar8 = (PUAbstractNode *)(token + 0x271);
                          if ((token[0x270] & 1) != 0) {
                            pPVar8 = (PUAbstractNode *)token._640_8_;
                          }
                          if (((byte)PVar3 & 1) == 0) {
                            if (__n != 0) {
                              pPVar9 = pPVar11 + 0x39;
                              uVar10 = uVar14;
                              do {
                                if (*pPVar9 != *pPVar8) goto LAB_00e54598;
                                uVar10 = uVar10 - 1;
                                pPVar9 = pPVar9 + 1;
                                pPVar8 = pPVar8 + 1;
                              } while (uVar10 != 0);
                            }
                          }
                          else if ((__n != 0) && (iVar5 = memcmp(pPVar9,pPVar8,__n), iVar5 != 0))
                          goto LAB_00e54598;
                          uVar14 = PUScriptTranslator::passValidateProperty
                                             ((PUScriptTranslator *)this,param_1,pPVar11,0x1789300,4
                                             );
                          if ((uVar14 & 1) != 0) {
                            local_78 = 0;
                            local_70 = (char *)0x0;
                            local_80 = 0;
                            uVar14 = PUScriptTranslator::getString
                                               (*(PUAbstractNode **)
                                                 (*(long *)(pPVar11 + 0x60) + 0x10),
                                                (basic_string *)&local_80);
                            if ((uVar14 & 1) != 0) {
                              if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                   *)(*(long *)(this + 8) + 0x478) !=
                                  (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                   *)&local_80) {
                                pcVar1 = (char *)((ulong)&local_80 | 1);
                                uVar14 = local_80 >> 1 & 0x7f;
                                if ((local_80 & 1) != 0) {
                                  pcVar1 = local_70;
                                  uVar14 = local_78;
                                }
                                std::__ndk1::
                                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                          *)(*(long *)(this + 8) + 0x478),pcVar1,uVar14);
                              }
                              this_00 = (PUMaterialCache *)PUMaterialCache::Instance();
                              lVar12 = PUMaterialCache::getMaterial
                                                 (this_00,(basic_string *)&local_80);
                              if (lVar12 != 0) {
                    /* try { // try from 00e54688 to 00f546a7 has its CatchHandler @ 00e5478c */
                                (**(code **)(**(long **)(this + 8) + 0x530))
                                          (*(long **)(this + 8),lVar12 + 0xa0);
                              }
                            }
                            if ((local_80 & 1) != 0) {
                              operator_delete(local_70);
                    /* try { // try from 00e546a8 to 00f5471b has its CatchHandler @ 00e5459c */
                            }
                          }
                        }
                        else {
LAB_00e54598:
                    /* try { // try from 00e5459c to 00f54687 has its CatchHandler @ 00e5459c
                       catch() { ... } // from try @ 00e5459c with catch @ 00e5459c
                       catch() { ... } // from try @ 00e546a8 with catch @ 00e5459c
                       catch() { ... } // from try @ 00e5473c with catch @ 00e5459c */
                          sVar2 = (ulong)(token[0x618] >> 1);
                          if ((token[0x618] & 1) != 0) {
                            sVar2 = token._1568_8_;
                          }
                          if (__n == sVar2) {
                            pPVar9 = *(PUAbstractNode **)(pPVar11 + 0x48);
                            if (((byte)PVar3 & 1) == 0) {
                              pPVar9 = pPVar11 + 0x39;
                            }
                            pPVar8 = (PUAbstractNode *)(token + 0x619);
                            if ((token[0x618] & 1) != 0) {
                              pPVar8 = (PUAbstractNode *)token._1576_8_;
                            }
                            if (((byte)PVar3 & 1) == 0) {
                              if (__n != 0) {
                                pPVar9 = pPVar11 + 0x39;
                                uVar10 = uVar14;
                                do {
                                  if (*pPVar9 != *pPVar8) goto LAB_00e546bc;
                                  uVar10 = uVar10 - 1;
                                  pPVar9 = pPVar9 + 1;
                                  pPVar8 = pPVar8 + 1;
                                } while (uVar10 != 0);
                              }
                            }
                            else if ((__n != 0) && (iVar5 = memcmp(pPVar9,pPVar8,__n), iVar5 != 0))
                            goto LAB_00e546bc;
                          }
                          else {
LAB_00e546bc:
                            sVar2 = (ulong)(token[0x630] >> 1);
                            if ((token[0x630] & 1) != 0) {
                              sVar2 = token._1592_8_;
                            }
                            if (__n == sVar2) {
                              pPVar9 = *(PUAbstractNode **)(pPVar11 + 0x48);
                              if (((byte)PVar3 & 1) == 0) {
                                pPVar9 = pPVar11 + 0x39;
                              }
                              pPVar8 = (PUAbstractNode *)(token + 0x631);
                              if ((token[0x630] & 1) != 0) {
                                pPVar8 = (PUAbstractNode *)token._1600_8_;
                              }
                              if (((byte)PVar3 & 1) == 0) {
                                if (__n != 0) {
                                  pPVar9 = pPVar11 + 0x39;
                                  uVar10 = uVar14;
                                  do {
                                    if (*pPVar9 != *pPVar8) goto LAB_00e54738;
                                    uVar10 = uVar10 - 1;
                                    pPVar9 = pPVar9 + 1;
                    /* try { // try from 00e5471c to 00f5473b has its CatchHandler @ 00e5477c */
                                    pPVar8 = pPVar8 + 1;
                                  } while (uVar10 != 0);
                                }
                              }
                              else if ((__n != 0) && (iVar5 = memcmp(pPVar9,pPVar8,__n), iVar5 != 0)
                                      ) goto LAB_00e54738;
                              uVar14 = PUScriptTranslator::passValidateProperty
                                                 ((PUScriptTranslator *)this,param_1,pPVar11,
                                                  0x17896c0,0);
                              if ((uVar14 & 1) != 0) {
                                local_80 = local_80 & 0xffffffff00000000;
                                uVar14 = PUScriptTranslator::getFloat
                                                   (*(PUAbstractNode **)
                                                     (*(long *)(pPVar11 + 0x60) + 0x10),
                                                    (float *)&local_80);
                                if ((uVar14 & 1) != 0) {
                                  PUParticleSystem3D::setDefaultWidth
                                            (*(PUParticleSystem3D **)(this + 8),(float)local_80);
                                }
                              }
                            }
                            else {
LAB_00e54738:
                    /* try { // try from 00e5473c to 00f547ab has its CatchHandler @ 00e5459c */
                              sVar2 = (ulong)(token[0x648] >> 1);
                              if ((token[0x648] & 1) != 0) {
                                sVar2 = token._1616_8_;
                              }
                              if (__n == sVar2) {
                                pPVar9 = *(PUAbstractNode **)(pPVar11 + 0x48);
                                if (((byte)PVar3 & 1) == 0) {
                                  pPVar9 = pPVar11 + 0x39;
                                }
                                pPVar8 = (PUAbstractNode *)(token + 0x649);
                                if ((token[0x648] & 1) != 0) {
                                  pPVar8 = (PUAbstractNode *)token._1624_8_;
                                }
                                if (((byte)PVar3 & 1) == 0) {
                                  if (__n != 0) {
                                    pPVar9 = pPVar11 + 0x39;
                    /* catch() { ... } // from try @ 00e5471c with catch @ 00e5477c */
                                    uVar10 = uVar14;
                                    do {
                    /* catch() { ... } // from try @ 00e54688 with catch @ 00e5478c */
                                      if (*pPVar9 != *pPVar8) goto LAB_00e547f8;
                                      uVar10 = uVar10 - 1;
                                      pPVar9 = pPVar9 + 1;
                                      pPVar8 = pPVar8 + 1;
                                    } while (uVar10 != 0);
                                  }
                                }
                                else if ((__n != 0) &&
                                        (iVar5 = memcmp(pPVar9,pPVar8,__n), iVar5 != 0))
                                goto LAB_00e547f8;
                                uVar14 = PUScriptTranslator::passValidateProperty
                                                   ((PUScriptTranslator *)this,param_1,pPVar11,
                                                    0x17896d8,0);
                                if ((uVar14 & 1) != 0) {
                                  local_80 = local_80 & 0xffffffff00000000;
                                  uVar14 = PUScriptTranslator::getFloat
                                                     (*(PUAbstractNode **)
                                                       (*(long *)(pPVar11 + 0x60) + 0x10),
                                                      (float *)&local_80);
                                  if ((uVar14 & 1) != 0) {
                                    PUParticleSystem3D::setDefaultHeight
                                              (*(PUParticleSystem3D **)(this + 8),(float)local_80);
                                  }
                                }
                              }
                              else {
LAB_00e547f8:
                                sVar2 = (ulong)(token[0x660] >> 1);
                                if ((token[0x660] & 1) != 0) {
                                  sVar2 = token._1640_8_;
                                }
                                if (__n == sVar2) {
                                  pPVar9 = *(PUAbstractNode **)(pPVar11 + 0x48);
                                  if (((byte)PVar3 & 1) == 0) {
                                    pPVar9 = pPVar11 + 0x39;
                                  }
                                  pPVar8 = (PUAbstractNode *)(token + 0x661);
                                  if ((token[0x660] & 1) != 0) {
                                    pPVar8 = (PUAbstractNode *)token._1648_8_;
                                  }
                                  if (((byte)PVar3 & 1) == 0) {
                                    if (__n != 0) {
                                      pPVar9 = pPVar11 + 0x39;
                                      uVar10 = uVar14;
                                      do {
                                        if (*pPVar9 != *pPVar8) goto LAB_00e548b8;
                                        uVar10 = uVar10 - 1;
                                        pPVar9 = pPVar9 + 1;
                                        pPVar8 = pPVar8 + 1;
                                      } while (uVar10 != 0);
                                    }
                                  }
                                  else if ((__n != 0) &&
                                          (iVar5 = memcmp(pPVar9,pPVar8,__n), iVar5 != 0))
                                  goto LAB_00e548b8;
                                  uVar14 = PUScriptTranslator::passValidateProperty
                                                     ((PUScriptTranslator *)this,param_1,pPVar11,
                                                      0x17896f0,0);
                                  if ((uVar14 & 1) != 0) {
                                    local_80 = local_80 & 0xffffffff00000000;
                                    uVar14 = PUScriptTranslator::getFloat
                                                       (*(PUAbstractNode **)
                                                         (*(long *)(pPVar11 + 0x60) + 0x10),
                                                        (float *)&local_80);
                                    if ((uVar14 & 1) != 0) {
                                      PUParticleSystem3D::setDefaultDepth
                                                (*(PUParticleSystem3D **)(this + 8),(float)local_80)
                                      ;
                                    }
                                  }
                                }
                                else {
LAB_00e548b8:
                                  sVar2 = (ulong)(token[0x678] >> 1);
                                  if ((token[0x678] & 1) != 0) {
                                    sVar2 = token._1664_8_;
                                  }
                                  if (__n == sVar2) {
                                    pPVar9 = *(PUAbstractNode **)(pPVar11 + 0x48);
                                    if (((byte)PVar3 & 1) == 0) {
                                      pPVar9 = pPVar11 + 0x39;
                                    }
                                    pPVar8 = (PUAbstractNode *)(token + 0x679);
                                    if ((token[0x678] & 1) != 0) {
                                      pPVar8 = (PUAbstractNode *)token._1672_8_;
                                    }
                                    if (((byte)PVar3 & 1) == 0) {
                                      if (__n != 0) {
                                        pPVar9 = pPVar11 + 0x39;
                                        uVar10 = uVar14;
                                        do {
                                          if (*pPVar9 != *pPVar8) goto LAB_00e54978;
                                          uVar10 = uVar10 - 1;
                                          pPVar9 = pPVar9 + 1;
                                          pPVar8 = pPVar8 + 1;
                                        } while (uVar10 != 0);
                                      }
                                    }
                                    else if ((__n != 0) &&
                                            (iVar5 = memcmp(pPVar9,pPVar8,__n), iVar5 != 0))
                                    goto LAB_00e54978;
                                  }
                                  else {
LAB_00e54978:
                                    sVar2 = (ulong)(token[0x690] >> 1);
                                    if ((token[0x690] & 1) != 0) {
                                      sVar2 = token._1688_8_;
                                    }
                                    if (__n == sVar2) {
                                      pPVar9 = *(PUAbstractNode **)(pPVar11 + 0x48);
                                      if (((byte)PVar3 & 1) == 0) {
                                        pPVar9 = pPVar11 + 0x39;
                                      }
                                      pPVar8 = (PUAbstractNode *)(token + 0x691);
                                      if ((token[0x690] & 1) != 0) {
                                        pPVar8 = (PUAbstractNode *)token._1696_8_;
                                      }
                                      if (((byte)PVar3 & 1) == 0) {
                                        if (__n != 0) {
                                          pPVar9 = pPVar11 + 0x39;
                                          uVar10 = uVar14;
                                          do {
                                            if (*pPVar9 != *pPVar8) goto LAB_00e549f4;
                                            uVar10 = uVar10 - 1;
                                            pPVar9 = pPVar9 + 1;
                                            pPVar8 = pPVar8 + 1;
                                          } while (uVar10 != 0);
                                        }
                                      }
                                      else if ((__n != 0) &&
                                              (iVar5 = memcmp(pPVar9,pPVar8,__n), iVar5 != 0))
                                      goto LAB_00e549f4;
                                    }
                                    else {
LAB_00e549f4:
                                      sVar2 = (ulong)(token[0x6a8] >> 1);
                                      if ((token[0x6a8] & 1) != 0) {
                                        sVar2 = token._1712_8_;
                                      }
                                      if (__n == sVar2) {
                                        pPVar9 = *(PUAbstractNode **)(pPVar11 + 0x48);
                                        if (((byte)PVar3 & 1) == 0) {
                                          pPVar9 = pPVar11 + 0x39;
                                        }
                                        pPVar8 = (PUAbstractNode *)(token + 0x6a9);
                                        if ((token[0x6a8] & 1) != 0) {
                                          pPVar8 = (PUAbstractNode *)token._1720_8_;
                                        }
                                        if (((byte)PVar3 & 1) == 0) {
                                          if (__n != 0) {
                                            pPVar9 = pPVar11 + 0x39;
                                            uVar10 = uVar14;
                                            do {
                                              if (*pPVar9 != *pPVar8) goto LAB_00e54a70;
                                              uVar10 = uVar10 - 1;
                                              pPVar9 = pPVar9 + 1;
                                              pPVar8 = pPVar8 + 1;
                                            } while (uVar10 != 0);
                                          }
                                        }
                                        else if ((__n != 0) &&
                                                (iVar5 = memcmp(pPVar9,pPVar8,__n), iVar5 != 0))
                                        goto LAB_00e54a70;
                                      }
                                      else {
LAB_00e54a70:
                                        sVar2 = (ulong)(token[0x6c0] >> 1);
                                        if ((token[0x6c0] & 1) != 0) {
                                          sVar2 = token._1736_8_;
                                        }
                                        if (__n == sVar2) {
                                          pPVar9 = *(PUAbstractNode **)(pPVar11 + 0x48);
                                          if (((byte)PVar3 & 1) == 0) {
                                            pPVar9 = pPVar11 + 0x39;
                                          }
                                          pPVar8 = (PUAbstractNode *)(token + 0x6c1);
                                          if ((token[0x6c0] & 1) != 0) {
                                            pPVar8 = (PUAbstractNode *)token._1744_8_;
                                          }
                                          if (((byte)PVar3 & 1) == 0) {
                                            if (__n != 0) {
                                              pPVar9 = pPVar11 + 0x39;
                                              uVar10 = uVar14;
                                              do {
                                                if (*pPVar9 != *pPVar8) goto LAB_00e54aec;
                                                uVar10 = uVar10 - 1;
                                                pPVar9 = pPVar9 + 1;
                                                pPVar8 = pPVar8 + 1;
                                              } while (uVar10 != 0);
                                            }
                                          }
                                          else if ((__n != 0) &&
                                                  (iVar5 = memcmp(pPVar9,pPVar8,__n), iVar5 != 0))
                                          goto LAB_00e54aec;
                                        }
                                        else {
LAB_00e54aec:
                                          sVar2 = (ulong)(token[0x6d8] >> 1);
                                          if ((token[0x6d8] & 1) != 0) {
                                            sVar2 = token._1760_8_;
                                          }
                                          if (__n == sVar2) {
                                            pPVar9 = *(PUAbstractNode **)(pPVar11 + 0x48);
                                            if (((byte)PVar3 & 1) == 0) {
                                              pPVar9 = pPVar11 + 0x39;
                                            }
                                            pPVar8 = (PUAbstractNode *)(token + 0x6d9);
                                            if ((token[0x6d8] & 1) != 0) {
                                              pPVar8 = (PUAbstractNode *)token._1768_8_;
                                            }
                                            if (((byte)PVar3 & 1) == 0) {
                                              if (__n != 0) {
                                                pPVar9 = pPVar11 + 0x39;
                                                uVar10 = uVar14;
                                                do {
                                                  if (*pPVar9 != *pPVar8) goto LAB_00e54b68;
                                                  uVar10 = uVar10 - 1;
                                                  pPVar9 = pPVar9 + 1;
                                                  pPVar8 = pPVar8 + 1;
                                                } while (uVar10 != 0);
                                              }
                                            }
                                            else if ((__n != 0) &&
                                                    (iVar5 = memcmp(pPVar9,pPVar8,__n), iVar5 != 0))
                                            goto LAB_00e54b68;
                                            uVar14 = PUScriptTranslator::passValidateProperty
                                                               ((PUScriptTranslator *)this,param_1,
                                                                pPVar11,0x1789768,0);
                                            if ((uVar14 & 1) != 0) {
                                              local_80 = local_80 & 0xffffffff00000000;
                                              uVar14 = PUScriptTranslator::getFloat
                                                                 (*(PUAbstractNode **)
                                                                   (*(long *)(pPVar11 + 0x60) + 0x10
                                                                   ),(float *)&local_80);
                                              if ((uVar14 & 1) != 0) {
                                                PUParticleSystem3D::setMaxVelocity
                                                          (*(PUParticleSystem3D **)(this + 8),
                                                           (float)local_80);
                                              }
                                            }
                                          }
                                          else {
LAB_00e54b68:
                                            sVar2 = (ulong)(token[0x420] >> 1);
                                            if ((token[0x420] & 1) != 0) {
                                              sVar2 = token._1064_8_;
                                            }
                                            if (__n == sVar2) {
                                              pPVar9 = *(PUAbstractNode **)(pPVar11 + 0x48);
                                              if (((byte)PVar3 & 1) == 0) {
                                                pPVar9 = pPVar11 + 0x39;
                                              }
                                              pPVar8 = (PUAbstractNode *)(token + 0x421);
                                              if ((token[0x420] & 1) != 0) {
                                                pPVar8 = (PUAbstractNode *)token._1072_8_;
                                              }
                                              if (((byte)PVar3 & 1) == 0) {
                                                if (__n != 0) {
                                                  pPVar11 = pPVar11 + 0x39;
                                                  do {
                                                    if (*pPVar11 != *pPVar8) goto LAB_00e54c24;
                                                    uVar14 = uVar14 - 1;
                                                    pPVar11 = pPVar11 + 1;
                                                    pPVar8 = pPVar8 + 1;
                                                  } while (uVar14 != 0);
                                                }
                                              }
                                              else if ((__n != 0) &&
                                                      (iVar5 = memcmp(pPVar9,pPVar8,__n), iVar5 != 0
                                                      )) goto LAB_00e54c24;
                                            }
                                            else {
LAB_00e54c24:
                                              PUScriptTranslator::errorUnexpectedProperty
                                                        ((PUScriptCompiler *)this,
                                                         (PUPropertyAbstractNode *)param_1);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        PUScriptTranslator::errorUnexpectedToken((PUScriptCompiler *)this,(PUAbstractNode *)param_1)
        ;
      }
      pPVar13 = *(PUAbstractNode **)(pPVar13 + 8);
    } while (pPVar13 != param_2 + 0xb0);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

