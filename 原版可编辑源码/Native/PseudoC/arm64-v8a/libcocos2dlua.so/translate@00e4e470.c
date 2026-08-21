
/* cocos2d::PUObserverTranslator::translate(cocos2d::PUScriptCompiler*, cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUObserverTranslator::translate
          (PUObserverTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  size_t sVar1;
  PUAbstractNode PVar2;
  byte bVar3;
  size_t sVar4;
  long lVar5;
  char *pcVar6;
  size_t sVar7;
  int iVar8;
  PUObserverManager *pPVar9;
  long *plVar10;
  long lVar11;
  PUParticleSystem3D *this_00;
  ulong uVar12;
  char *pcVar13;
  char *pcVar14;
  void *pvVar15;
  long lVar16;
  char *pcVar17;
  size_t sVar18;
  PUAbstractNode *pPVar19;
  ulong uVar20;
  ulong local_b0;
  size_t local_a8;
  char *local_a0;
  ulong local_98;
  ulong local_90;
  char *local_88;
  ulong local_80;
  ulong local_78;
  char *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar16 = *(long *)(param_2 + 0x28);
  local_78 = 0;
  local_70 = (char *)0x0;
  local_80 = 0;
  PVar2 = param_2[0x60];
  if (((byte)PVar2 & 1) == 0) {
    if ((byte)PVar2 >> 1 == 0) goto LAB_00e4ecb0;
  }
  else if (*(long *)(param_2 + 0x68) == 0) goto LAB_00e4ecb0;
  if ((PUAbstractNode *)&local_80 != param_2 + 0x60) {
    uVar20 = *(ulong *)(param_2 + 0x68);
    pPVar19 = *(PUAbstractNode **)(param_2 + 0x70);
    if (((byte)PVar2 & 1) == 0) {
      pPVar19 = param_2 + 0x61;
      uVar20 = (ulong)((byte)PVar2 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_80,(char *)pPVar19,uVar20);
  }
  pPVar9 = (PUObserverManager *)PUObserverManager::Instance();
  plVar10 = (long *)PUObserverManager::getTranslator(pPVar9,(basic_string *)&local_80);
  if (plVar10 != (long *)0x0) {
    pPVar9 = (PUObserverManager *)PUObserverManager::Instance();
    lVar11 = PUObserverManager::createObserver(pPVar9,(basic_string *)&local_80);
    *(long *)(this + 8) = lVar11;
    if (lVar11 != 0) {
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (lVar11 + 0x30) !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          &local_80) {
        uVar20 = local_80 >> 1 & 0x7f;
        pcVar17 = (char *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          uVar20 = local_78;
          pcVar17 = local_70;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (lVar11 + 0x30),pcVar17,uVar20);
      }
      if ((lVar16 != 0) &&
         (this_00 = *(PUParticleSystem3D **)(lVar16 + 0x30), this_00 != (PUParticleSystem3D *)0x0))
      {
        PUParticleSystem3D::addObserver(this_00,*(PUObserver **)(this + 8));
      }
      local_90 = 0;
      local_88 = (char *)0x0;
      local_98 = 0;
      if (*(long *)(param_2 + 0xd8) != 0) {
        PUScriptTranslator::getString
                  (*(PUAbstractNode **)(*(long *)(param_2 + 0xd0) + 0x10),(basic_string *)&local_98)
        ;
        if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (*(long *)(this + 8) + 0x48) !=
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            &local_98) {
          uVar20 = local_98 >> 1 & 0x7f;
          pcVar17 = (char *)((ulong)&local_98 | 1);
          if ((local_98 & 1) != 0) {
            uVar20 = local_90;
            pcVar17 = local_88;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(*(long *)(this + 8) + 0x48),pcVar17,uVar20);
        }
      }
      pPVar19 = *(PUAbstractNode **)(param_2 + 0xb8);
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(this + 8);
      if (pPVar19 != param_2 + 0xb0) {
        pcVar17 = (char *)((ulong)&local_b0 | 1);
        do {
          lVar16 = *(long *)(pPVar19 + 0x10);
          if (*(int *)(lVar16 + 0x24) == 2) {
            uVar20 = (**(code **)(*plVar10 + 0x20))(plVar10,param_1,lVar16);
            if ((uVar20 & 1) == 0) {
              PUScriptTranslator::processNode
                        ((PUScriptTranslator *)this,param_1,*(PUAbstractNode **)(pPVar19 + 0x10));
            }
          }
          else if (*(int *)(lVar16 + 0x24) == 3) {
            bVar3 = *(byte *)(lVar16 + 0x38);
            uVar20 = (ulong)(bVar3 >> 1);
            sVar1 = uVar20;
            if ((bVar3 & 1) != 0) {
              sVar1 = *(size_t *)(lVar16 + 0x40);
            }
            sVar18 = (ulong)(token[0x2b8] >> 1);
            if ((token[0x2b8] & 1) != 0) {
              sVar18 = token._704_8_;
            }
            if (sVar1 == sVar18) {
              pvVar15 = *(void **)(lVar16 + 0x48);
              if ((bVar3 & 1) == 0) {
                pvVar15 = (void *)(lVar16 + 0x39);
              }
              pcVar13 = token + 0x2b9;
              if ((token[0x2b8] & 1) != 0) {
                pcVar13 = (char *)token._712_8_;
              }
              if ((bVar3 & 1) == 0) {
                if (sVar1 != 0) {
                  pcVar14 = (char *)(lVar16 + 0x39);
                  uVar12 = uVar20;
                  do {
                    if (*pcVar14 != *pcVar13) goto LAB_00e4e6f4;
                    uVar12 = uVar12 - 1;
                    pcVar14 = pcVar14 + 1;
                    pcVar13 = pcVar13 + 1;
                  } while (uVar12 != 0);
                }
              }
              else if ((sVar1 != 0) && (iVar8 = memcmp(pvVar15,pcVar13,sVar1), iVar8 != 0))
              goto LAB_00e4e6f4;
              uVar20 = PUScriptTranslator::passValidateProperty
                                 ((PUScriptTranslator *)this,param_1,lVar16,0x1789348,1);
              if (((uVar20 & 1) != 0) &&
                 (uVar20 = PUScriptTranslator::getBoolean
                                     (*(PUAbstractNode **)(*(long *)(lVar16 + 0x60) + 0x10),
                                      (bool *)&local_b0), (uVar20 & 1) != 0)) {
                (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),local_b0 & 0xff);
              }
            }
            else {
LAB_00e4e6f4:
              sVar18 = (ulong)(token[0xb58] >> 1);
              if ((token[0xb58] & 1) != 0) {
                sVar18 = token._2912_8_;
              }
              if (sVar1 == sVar18) {
                pvVar15 = *(void **)(lVar16 + 0x48);
                if ((bVar3 & 1) == 0) {
                  pvVar15 = (void *)(lVar16 + 0x39);
                }
                pcVar13 = token + 0xb59;
                if ((token[0xb58] & 1) != 0) {
                  pcVar13 = (char *)token._2920_8_;
                }
                if ((bVar3 & 1) == 0) {
                  if (sVar1 != 0) {
                    pcVar14 = (char *)(lVar16 + 0x39);
                    uVar12 = uVar20;
                    do {
                      if (*pcVar14 != *pcVar13) goto LAB_00e4e7c0;
                      uVar12 = uVar12 - 1;
                      pcVar14 = pcVar14 + 1;
                      pcVar13 = pcVar13 + 1;
                    } while (uVar12 != 0);
                  }
                }
                else if ((sVar1 != 0) && (iVar8 = memcmp(pvVar15,pcVar13,sVar1), iVar8 != 0))
                goto LAB_00e4e7c0;
                uVar20 = PUScriptTranslator::passValidateProperty
                                   ((PUScriptTranslator *)this,param_1,lVar16,0x1789be8,4);
                if ((uVar20 & 1) != 0) {
                  local_a8 = 0;
                  local_a0 = (char *)0x0;
                  local_b0 = 0;
                  uVar12 = PUScriptTranslator::getString
                                     (*(PUAbstractNode **)(*(long *)(lVar16 + 0x60) + 0x10),
                                      (basic_string *)&local_b0);
                  uVar20 = local_b0;
                  if ((uVar12 & 1) != 0) {
                    sVar18 = local_b0 >> 1 & 0x7f;
                    sVar1 = sVar18;
                    if ((local_b0 & 1) != 0) {
                      sVar1 = local_a8;
                    }
                    sVar4 = (ulong)(token[0x348] >> 1);
                    if ((token[0x348] & 1) != 0) {
                      sVar4 = token._848_8_;
                    }
                    if (sVar1 == sVar4) {
                      pcVar13 = pcVar17;
                      if ((local_b0 & 1) != 0) {
                        pcVar13 = local_a0;
                      }
                      pcVar14 = token + 0x349;
                      if ((token[0x348] & 1) != 0) {
                        pcVar14 = (char *)token._856_8_;
                      }
                      pcVar6 = pcVar17;
                      sVar4 = sVar18;
                      sVar7 = sVar1;
                      if ((local_b0 & 1) == 0) {
                        while (sVar7 != 0) {
                          if (*pcVar6 != *pcVar14) goto LAB_00e4ea4c;
                          pcVar14 = pcVar14 + 1;
                          sVar4 = sVar4 - 1;
                          pcVar6 = pcVar6 + 1;
                          sVar7 = sVar4;
                        }
                      }
                      else if ((sVar1 != 0) && (iVar8 = memcmp(pcVar13,pcVar14,sVar1), iVar8 != 0))
                      goto LAB_00e4ea4c;
                      PUObserver::setParticleTypeToObserve(*(PUObserver **)(this + 8),0);
                    }
                    else {
LAB_00e4ea4c:
                      sVar4 = (ulong)(token[0x360] >> 1);
                      if ((token[0x360] & 1) != 0) {
                        sVar4 = token._872_8_;
                      }
                      if (sVar1 == sVar4) {
                        pcVar13 = pcVar17;
                        if ((uVar20 & 1) != 0) {
                          pcVar13 = local_a0;
                        }
                        pcVar14 = token + 0x361;
                        if ((token[0x360] & 1) != 0) {
                          pcVar14 = (char *)token._880_8_;
                        }
                        pcVar6 = pcVar17;
                        sVar4 = sVar18;
                        sVar7 = sVar1;
                        if ((uVar20 & 1) == 0) {
                          while (sVar7 != 0) {
                            if (*pcVar6 != *pcVar14) goto LAB_00e4ead8;
                            pcVar14 = pcVar14 + 1;
                            sVar4 = sVar4 - 1;
                            pcVar6 = pcVar6 + 1;
                            sVar7 = sVar4;
                          }
                        }
                        else if ((sVar1 != 0) && (iVar8 = memcmp(pcVar13,pcVar14,sVar1), iVar8 != 0)
                                ) goto LAB_00e4ead8;
                        PUObserver::setParticleTypeToObserve(*(PUObserver **)(this + 8),2);
                      }
                      else {
LAB_00e4ead8:
                        sVar4 = (ulong)(token[0x378] >> 1);
                        if ((token[0x378] & 1) != 0) {
                          sVar4 = token._896_8_;
                        }
                        if (sVar1 == sVar4) {
                          pcVar13 = pcVar17;
                          if ((uVar20 & 1) != 0) {
                            pcVar13 = local_a0;
                          }
                          pcVar14 = token + 0x379;
                          if ((token[0x378] & 1) != 0) {
                            pcVar14 = (char *)token._904_8_;
                          }
                          pcVar6 = pcVar17;
                          sVar4 = sVar18;
                          sVar7 = sVar1;
                          if ((uVar20 & 1) == 0) {
                            while (sVar7 != 0) {
                              if (*pcVar6 != *pcVar14) goto LAB_00e4eb64;
                              pcVar14 = pcVar14 + 1;
                              sVar4 = sVar4 - 1;
                              pcVar6 = pcVar6 + 1;
                              sVar7 = sVar4;
                            }
                          }
                          else if ((sVar1 != 0) &&
                                  (iVar8 = memcmp(pcVar13,pcVar14,sVar1), iVar8 != 0))
                          goto LAB_00e4eb64;
                          PUObserver::setParticleTypeToObserve(*(PUObserver **)(this + 8),3);
                        }
                        else {
LAB_00e4eb64:
                          sVar4 = (ulong)(token[0x390] >> 1);
                          if ((token[0x390] & 1) != 0) {
                            sVar4 = token._920_8_;
                          }
                          if (sVar1 == sVar4) {
                            pcVar13 = pcVar17;
                            if ((uVar20 & 1) != 0) {
                              pcVar13 = local_a0;
                            }
                            pcVar14 = token + 0x391;
                            if ((token[0x390] & 1) != 0) {
                              pcVar14 = (char *)token._928_8_;
                            }
                            pcVar6 = pcVar17;
                            sVar4 = sVar18;
                            sVar7 = sVar1;
                            if ((uVar20 & 1) == 0) {
                              while (sVar7 != 0) {
                                if (*pcVar6 != *pcVar14) goto LAB_00e4ebf0;
                                pcVar14 = pcVar14 + 1;
                                sVar4 = sVar4 - 1;
                                pcVar6 = pcVar6 + 1;
                                sVar7 = sVar4;
                              }
                            }
                            else if ((sVar1 != 0) &&
                                    (iVar8 = memcmp(pcVar13,pcVar14,sVar1), iVar8 != 0))
                            goto LAB_00e4ebf0;
                            PUObserver::setParticleTypeToObserve(*(PUObserver **)(this + 8),1);
                          }
                          else {
LAB_00e4ebf0:
                            sVar4 = (ulong)(token[0x3a8] >> 1);
                            if ((token[0x3a8] & 1) != 0) {
                              sVar4 = token._944_8_;
                            }
                            if (sVar1 == sVar4) {
                              pcVar13 = pcVar17;
                              if ((uVar20 & 1) != 0) {
                                pcVar13 = local_a0;
                              }
                              pcVar14 = token + 0x3a9;
                              if ((token[0x3a8] & 1) != 0) {
                                pcVar14 = (char *)token._952_8_;
                              }
                              pcVar6 = pcVar17;
                              if ((uVar20 & 1) == 0) {
                                while (sVar1 != 0) {
                                  if (*pcVar6 != *pcVar14) goto LAB_00e4ec84;
                                  pcVar14 = pcVar14 + 1;
                                  sVar18 = sVar18 - 1;
                                  pcVar6 = pcVar6 + 1;
                                  sVar1 = sVar18;
                                }
                              }
                              else if ((sVar1 != 0) &&
                                      (iVar8 = memcmp(pcVar13,pcVar14,sVar1), iVar8 != 0))
                              goto LAB_00e4ec84;
                              PUObserver::setParticleTypeToObserve(*(PUObserver **)(this + 8),4);
                            }
                          }
                        }
                      }
                    }
                  }
LAB_00e4ec84:
                  if ((local_b0 & 1) != 0) {
                    operator_delete(local_a0);
                  }
                }
              }
              else {
LAB_00e4e7c0:
                sVar18 = (ulong)(token[0xb70] >> 1);
                if ((token[0xb70] & 1) != 0) {
                  sVar18 = token._2936_8_;
                }
                if (sVar1 == sVar18) {
                  pvVar15 = *(void **)(lVar16 + 0x48);
                  if ((bVar3 & 1) == 0) {
                    pvVar15 = (void *)(lVar16 + 0x39);
                  }
                  pcVar13 = token + 0xb71;
                  if ((token[0xb70] & 1) != 0) {
                    pcVar13 = (char *)token._2944_8_;
                  }
                  if ((bVar3 & 1) == 0) {
                    if (sVar1 != 0) {
                      pcVar14 = (char *)(lVar16 + 0x39);
                      uVar12 = uVar20;
                      do {
                        if (*pcVar14 != *pcVar13) goto LAB_00e4e8fc;
                        uVar12 = uVar12 - 1;
                        pcVar14 = pcVar14 + 1;
                        pcVar13 = pcVar13 + 1;
                      } while (uVar12 != 0);
                    }
                  }
                  else if ((sVar1 != 0) && (iVar8 = memcmp(pvVar15,pcVar13,sVar1), iVar8 != 0))
                  goto LAB_00e4e8fc;
                  uVar20 = PUScriptTranslator::passValidateProperty
                                     ((PUScriptTranslator *)this,param_1,lVar16,0x1789c00,0);
                  if (((uVar20 & 1) != 0) &&
                     (uVar20 = PUScriptTranslator::getFloat
                                         (*(PUAbstractNode **)(*(long *)(lVar16 + 0x60) + 0x10),
                                          (float *)&local_b0), (uVar20 & 1) != 0)) {
                    PUObserver::setObserverInterval(*(PUObserver **)(this + 8),(float)local_b0);
                  }
                }
                else {
LAB_00e4e8fc:
                  sVar18 = (ulong)(token[0xb88] >> 1);
                  if ((token[0xb88] & 1) != 0) {
                    sVar18 = token._2960_8_;
                  }
                  if (sVar1 == sVar18) {
                    pvVar15 = *(void **)(lVar16 + 0x48);
                    if ((bVar3 & 1) == 0) {
                      pvVar15 = (void *)(lVar16 + 0x39);
                    }
                    pcVar13 = token + 0xb89;
                    if ((token[0xb88] & 1) != 0) {
                      pcVar13 = (char *)token._2968_8_;
                    }
                    if ((bVar3 & 1) == 0) {
                      if (sVar1 != 0) {
                        pcVar14 = (char *)(lVar16 + 0x39);
                        do {
                          if (*pcVar14 != *pcVar13) goto LAB_00e4e9bc;
                          uVar20 = uVar20 - 1;
                          pcVar14 = pcVar14 + 1;
                          pcVar13 = pcVar13 + 1;
                        } while (uVar20 != 0);
                      }
                    }
                    else if ((sVar1 != 0) && (iVar8 = memcmp(pvVar15,pcVar13,sVar1), iVar8 != 0))
                    goto LAB_00e4e9bc;
                    uVar20 = PUScriptTranslator::passValidateProperty
                                       ((PUScriptTranslator *)this,param_1,lVar16,0x1789c18,1);
                    if (((uVar20 & 1) != 0) &&
                       (uVar20 = PUScriptTranslator::getBoolean
                                           (*(PUAbstractNode **)(*(long *)(lVar16 + 0x60) + 0x10),
                                            (bool *)&local_b0), (uVar20 & 1) != 0)) {
                      PUObserver::setObserveUntilEvent
                                (*(PUObserver **)(this + 8),(bool)local_b0._0_1_);
                    }
                  }
                  else {
LAB_00e4e9bc:
                    uVar20 = (**(code **)(*plVar10 + 0x18))(plVar10,param_1,lVar16);
                    if ((uVar20 & 1) == 0) {
                      PUScriptTranslator::errorUnexpectedProperty
                                ((PUScriptCompiler *)this,(PUPropertyAbstractNode *)param_1);
                    }
                  }
                }
              }
            }
          }
          else {
            PUScriptTranslator::errorUnexpectedToken
                      ((PUScriptCompiler *)this,(PUAbstractNode *)param_1);
          }
          pPVar19 = *(PUAbstractNode **)(pPVar19 + 8);
        } while (pPVar19 != param_2 + 0xb0);
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
    }
  }
LAB_00e4ecb0:
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

