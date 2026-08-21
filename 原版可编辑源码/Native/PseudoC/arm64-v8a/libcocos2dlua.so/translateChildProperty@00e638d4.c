
/* cocos2d::PUDoPlacementParticleEventHandlerTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUDoPlacementParticleEventHandlerTranslator::translateChildProperty
          (PUDoPlacementParticleEventHandlerTranslator *this,PUScriptCompiler *param_1,
          PUAbstractNode *param_2)

{
  size_t __n;
  size_t sVar1;
  PUAbstractNode PVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  PUAbstractNode *pPVar6;
  PUAbstractNode *pPVar7;
  ulong uVar8;
  PUDoPlacementParticleEventHandler *this_00;
  ulong uVar9;
  ulong local_80 [2];
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
  uVar9 = (ulong)((byte)PVar2 >> 1);
  this_00 = *(PUDoPlacementParticleEventHandler **)(*(long *)(param_2 + 0x28) + 0x30);
  __n = uVar9;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x20d0] >> 1);
  if ((token[0x20d0] & 1) != 0) {
    sVar1 = token._8408_8_;
  }
  if (__n == sVar1) {
    pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar7 = param_2 + 0x39;
    }
    pPVar6 = (PUAbstractNode *)(token + 0x20d1);
    if ((token[0x20d0] & 1) != 0) {
      pPVar6 = (PUAbstractNode *)token._8416_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar7 = param_2 + 0x39;
        uVar8 = uVar9;
        do {
          if (*pPVar7 != *pPVar6) goto LAB_00e639bc;
          uVar8 = uVar8 - 1;
          pPVar7 = pPVar7 + 1;
          pPVar6 = pPVar6 + 1;
        } while (uVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e639bc;
    uVar9 = PUScriptTranslator::passValidateProperty
                      ((PUScriptTranslator *)this,param_1,param_2,0x178b160,4);
    if ((uVar9 & 1) != 0) {
      local_80[1] = 0;
      local_70 = (void *)0x0;
      local_80[0] = 0;
      uVar9 = PUScriptTranslator::getString
                        (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                         (basic_string *)local_80);
      if ((uVar9 & 1) != 0) {
        PUDoPlacementParticleEventHandler::setForceEmitterName(this_00,(basic_string *)local_80);
        if ((local_80[0] & 1) != 0) {
          operator_delete(local_70);
        }
        uVar5 = 1;
        goto LAB_00e642f8;
      }
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
    }
  }
  else {
LAB_00e639bc:
    sVar1 = (ulong)(token[0x20e8] >> 1);
    if ((token[0x20e8] & 1) != 0) {
      sVar1 = token._8432_8_;
    }
    if (__n == sVar1) {
      pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar7 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x20e9);
      if ((token[0x20e8] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._8440_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar7 = param_2 + 0x39;
          uVar8 = uVar9;
          do {
            if (*pPVar7 != *pPVar6) goto LAB_00e63aa4;
            uVar8 = uVar8 - 1;
            pPVar7 = pPVar7 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar8 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e63aa4;
      uVar9 = PUScriptTranslator::passValidateProperty
                        ((PUScriptTranslator *)this,param_1,param_2,0x178b178,2);
      if ((uVar9 & 1) != 0) {
        local_80[0] = local_80[0] & 0xffffffff00000000;
        uVar9 = PUScriptTranslator::getUInt
                          (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),(uint *)local_80);
        if ((uVar9 & 1) != 0) {
          uVar5 = 1;
          *(undefined4 *)(this_00 + 0x90) = (undefined4)local_80[0];
          goto LAB_00e642f8;
        }
      }
    }
    else {
LAB_00e63aa4:
      sVar1 = (ulong)(token[0x2100] >> 1);
      if ((token[0x2100] & 1) != 0) {
        sVar1 = token._8456_8_;
      }
      if (__n == sVar1) {
        pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar2 & 1) == 0) {
          pPVar7 = param_2 + 0x39;
        }
        pPVar6 = (PUAbstractNode *)(token + 0x2101);
        if ((token[0x2100] & 1) != 0) {
          pPVar6 = (PUAbstractNode *)token._8464_8_;
        }
        if (((byte)PVar2 & 1) == 0) {
          if (__n != 0) {
            pPVar7 = param_2 + 0x39;
            uVar8 = uVar9;
            do {
              if (*pPVar7 != *pPVar6) goto LAB_00e63b74;
              uVar8 = uVar8 - 1;
              pPVar7 = pPVar7 + 1;
              pPVar6 = pPVar6 + 1;
            } while (uVar8 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e63b74;
        uVar9 = PUScriptTranslator::passValidateProperty
                          ((PUScriptTranslator *)this,param_1,param_2,0x178b190,1);
        if (((uVar9 & 1) != 0) &&
           (uVar9 = PUScriptTranslator::getBoolean
                              (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                               (bool *)local_80), (uVar9 & 1) != 0)) {
          uVar5 = 1;
          this_00[0xb8] = local_80[0]._0_1_;
          goto LAB_00e642f8;
        }
      }
      else {
LAB_00e63b74:
        sVar1 = (ulong)(token[0x2118] >> 1);
        if ((token[0x2118] & 1) != 0) {
          sVar1 = token._8480_8_;
        }
        if (__n == sVar1) {
          pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
          if (((byte)PVar2 & 1) == 0) {
            pPVar7 = param_2 + 0x39;
          }
          pPVar6 = (PUAbstractNode *)(token + 0x2119);
          if ((token[0x2118] & 1) != 0) {
            pPVar6 = (PUAbstractNode *)token._8488_8_;
          }
          if (((byte)PVar2 & 1) == 0) {
            if (__n != 0) {
              pPVar7 = param_2 + 0x39;
              uVar8 = uVar9;
              do {
                if (*pPVar7 != *pPVar6) goto LAB_00e63c54;
                uVar8 = uVar8 - 1;
                pPVar7 = pPVar7 + 1;
                pPVar6 = pPVar6 + 1;
              } while (uVar8 != 0);
            }
          }
          else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e63c54;
          uVar9 = PUScriptTranslator::passValidateProperty
                            ((PUScriptTranslator *)this,param_1,param_2,0x178b1a8,1);
          if (((uVar9 & 1) != 0) &&
             (uVar9 = PUScriptTranslator::getBoolean
                                (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                                 (bool *)local_80), (uVar9 & 1) != 0)) {
            uVar5 = 1;
            this_00[0xb9] = local_80[0]._0_1_;
            goto LAB_00e642f8;
          }
        }
        else {
LAB_00e63c54:
          sVar1 = (ulong)(token[0x2130] >> 1);
          if ((token[0x2130] & 1) != 0) {
            sVar1 = token._8504_8_;
          }
          if (__n == sVar1) {
            pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
            if (((byte)PVar2 & 1) == 0) {
              pPVar7 = param_2 + 0x39;
            }
            pPVar6 = (PUAbstractNode *)(token + 0x2131);
            if ((token[0x2130] & 1) != 0) {
              pPVar6 = (PUAbstractNode *)token._8512_8_;
            }
            if (((byte)PVar2 & 1) == 0) {
              if (__n != 0) {
                pPVar7 = param_2 + 0x39;
                uVar8 = uVar9;
                do {
                  if (*pPVar7 != *pPVar6) goto LAB_00e63d20;
                  uVar8 = uVar8 - 1;
                  pPVar7 = pPVar7 + 1;
                  pPVar6 = pPVar6 + 1;
                } while (uVar8 != 0);
              }
            }
            else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0))
            goto LAB_00e63d20;
            uVar9 = PUScriptTranslator::passValidateProperty
                              ((PUScriptTranslator *)this,param_1,param_2,0x178b1c0,1);
            if (((uVar9 & 1) != 0) &&
               (uVar9 = PUScriptTranslator::getBoolean
                                  (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                                   (bool *)local_80), (uVar9 & 1) != 0)) {
              uVar5 = 1;
              this_00[0xba] = local_80[0]._0_1_;
              goto LAB_00e642f8;
            }
          }
          else {
LAB_00e63d20:
            sVar1 = (ulong)(token[0x2148] >> 1);
            if ((token[0x2148] & 1) != 0) {
              sVar1 = token._8528_8_;
            }
            if (__n == sVar1) {
              pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
              if (((byte)PVar2 & 1) == 0) {
                pPVar7 = param_2 + 0x39;
              }
              pPVar6 = (PUAbstractNode *)(token + 0x2149);
              if ((token[0x2148] & 1) != 0) {
                pPVar6 = (PUAbstractNode *)token._8536_8_;
              }
              if (((byte)PVar2 & 1) == 0) {
                if (__n != 0) {
                  pPVar7 = param_2 + 0x39;
                  uVar8 = uVar9;
                  do {
                    if (*pPVar7 != *pPVar6) goto LAB_00e63dec;
                    uVar8 = uVar8 - 1;
                    pPVar7 = pPVar7 + 1;
                    pPVar6 = pPVar6 + 1;
                  } while (uVar8 != 0);
                }
              }
              else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0))
              goto LAB_00e63dec;
              uVar9 = PUScriptTranslator::passValidateProperty
                                ((PUScriptTranslator *)this,param_1,param_2,0x178b1d8,1);
              if (((uVar9 & 1) != 0) &&
                 (uVar9 = PUScriptTranslator::getBoolean
                                    (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                                     (bool *)local_80), (uVar9 & 1) != 0)) {
                uVar5 = 1;
                this_00[0xbb] = local_80[0]._0_1_;
                goto LAB_00e642f8;
              }
            }
            else {
LAB_00e63dec:
              sVar1 = (ulong)(token[0x2160] >> 1);
              if ((token[0x2160] & 1) != 0) {
                sVar1 = token._8552_8_;
              }
              if (__n == sVar1) {
                pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
                if (((byte)PVar2 & 1) == 0) {
                  pPVar7 = param_2 + 0x39;
                }
                pPVar6 = (PUAbstractNode *)(token + 0x2161);
                if ((token[0x2160] & 1) != 0) {
                  pPVar6 = (PUAbstractNode *)token._8560_8_;
                }
                if (((byte)PVar2 & 1) == 0) {
                  if (__n != 0) {
                    pPVar7 = param_2 + 0x39;
                    uVar8 = uVar9;
                    do {
                      if (*pPVar7 != *pPVar6) goto LAB_00e63eb8;
                      uVar8 = uVar8 - 1;
                      pPVar7 = pPVar7 + 1;
                      pPVar6 = pPVar6 + 1;
                    } while (uVar8 != 0);
                  }
                }
                else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0))
                goto LAB_00e63eb8;
                uVar9 = PUScriptTranslator::passValidateProperty
                                  ((PUScriptTranslator *)this,param_1,param_2,0x178b1f0,1);
                if (((uVar9 & 1) != 0) &&
                   (uVar9 = PUScriptTranslator::getBoolean
                                      (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                                       (bool *)local_80), (uVar9 & 1) != 0)) {
                  uVar5 = 1;
                  this_00[0xbc] = local_80[0]._0_1_;
                  goto LAB_00e642f8;
                }
              }
              else {
LAB_00e63eb8:
                sVar1 = (ulong)(token[0x2178] >> 1);
                if ((token[0x2178] & 1) != 0) {
                  sVar1 = token._8576_8_;
                }
                if (__n == sVar1) {
                  pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
                  if (((byte)PVar2 & 1) == 0) {
                    pPVar7 = param_2 + 0x39;
                  }
                  pPVar6 = (PUAbstractNode *)(token + 0x2179);
                  if ((token[0x2178] & 1) != 0) {
                    pPVar6 = (PUAbstractNode *)token._8584_8_;
                  }
                  if (((byte)PVar2 & 1) == 0) {
                    if (__n != 0) {
                      pPVar7 = param_2 + 0x39;
                      uVar8 = uVar9;
                      do {
                        if (*pPVar7 != *pPVar6) goto LAB_00e63f84;
                        uVar8 = uVar8 - 1;
                        pPVar7 = pPVar7 + 1;
                        pPVar6 = pPVar6 + 1;
                      } while (uVar8 != 0);
                    }
                  }
                  else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0))
                  goto LAB_00e63f84;
                  uVar9 = PUScriptTranslator::passValidateProperty
                                    ((PUScriptTranslator *)this,param_1,param_2,0x178b208,1);
                  if (((uVar9 & 1) != 0) &&
                     (uVar9 = PUScriptTranslator::getBoolean
                                        (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                                         (bool *)local_80), (uVar9 & 1) != 0)) {
                    uVar5 = 1;
                    this_00[0xbd] = local_80[0]._0_1_;
                    goto LAB_00e642f8;
                  }
                }
                else {
LAB_00e63f84:
                  sVar1 = (ulong)(token[0x2190] >> 1);
                  if ((token[0x2190] & 1) != 0) {
                    sVar1 = token._8600_8_;
                  }
                  if (__n == sVar1) {
                    pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
                    if (((byte)PVar2 & 1) == 0) {
                      pPVar7 = param_2 + 0x39;
                    }
                    pPVar6 = (PUAbstractNode *)(token + 0x2191);
                    if ((token[0x2190] & 1) != 0) {
                      pPVar6 = (PUAbstractNode *)token._8608_8_;
                    }
                    if (((byte)PVar2 & 1) == 0) {
                      if (__n != 0) {
                        pPVar7 = param_2 + 0x39;
                        uVar8 = uVar9;
                        do {
                          if (*pPVar7 != *pPVar6) goto LAB_00e64050;
                          uVar8 = uVar8 - 1;
                          pPVar7 = pPVar7 + 1;
                          pPVar6 = pPVar6 + 1;
                        } while (uVar8 != 0);
                      }
                    }
                    else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0))
                    goto LAB_00e64050;
                    uVar9 = PUScriptTranslator::passValidateProperty
                                      ((PUScriptTranslator *)this,param_1,param_2,0x178b220,1);
                    if (((uVar9 & 1) != 0) &&
                       (uVar9 = PUScriptTranslator::getBoolean
                                          (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                                           (bool *)local_80), (uVar9 & 1) != 0)) {
                      uVar5 = 1;
                      this_00[0xbe] = local_80[0]._0_1_;
                      goto LAB_00e642f8;
                    }
                  }
                  else {
LAB_00e64050:
                    sVar1 = (ulong)(token[0x21a8] >> 1);
                    if ((token[0x21a8] & 1) != 0) {
                      sVar1 = token._8624_8_;
                    }
                    if (__n == sVar1) {
                      pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
                      if (((byte)PVar2 & 1) == 0) {
                        pPVar7 = param_2 + 0x39;
                      }
                      pPVar6 = (PUAbstractNode *)(token + 0x21a9);
                      if ((token[0x21a8] & 1) != 0) {
                        pPVar6 = (PUAbstractNode *)token._8632_8_;
                      }
                      if (((byte)PVar2 & 1) == 0) {
                        if (__n != 0) {
                          pPVar7 = param_2 + 0x39;
                          uVar8 = uVar9;
                          do {
                            if (*pPVar7 != *pPVar6) goto LAB_00e6411c;
                            uVar8 = uVar8 - 1;
                            pPVar7 = pPVar7 + 1;
                            pPVar6 = pPVar6 + 1;
                          } while (uVar8 != 0);
                        }
                      }
                      else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0))
                      goto LAB_00e6411c;
                      uVar9 = PUScriptTranslator::passValidateProperty
                                        ((PUScriptTranslator *)this,param_1,param_2,0x178b238,1);
                      if (((uVar9 & 1) != 0) &&
                         (uVar9 = PUScriptTranslator::getBoolean
                                            (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                                             (bool *)local_80), (uVar9 & 1) != 0)) {
                        uVar5 = 1;
                        this_00[0xbf] = local_80[0]._0_1_;
                        goto LAB_00e642f8;
                      }
                    }
                    else {
LAB_00e6411c:
                      sVar1 = (ulong)(token[0x21c0] >> 1);
                      if ((token[0x21c0] & 1) != 0) {
                        sVar1 = token._8648_8_;
                      }
                      if (__n == sVar1) {
                        pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
                        if (((byte)PVar2 & 1) == 0) {
                          pPVar7 = param_2 + 0x39;
                        }
                        pPVar6 = (PUAbstractNode *)(token + 0x21c1);
                        if ((token[0x21c0] & 1) != 0) {
                          pPVar6 = (PUAbstractNode *)token._8656_8_;
                        }
                        if (((byte)PVar2 & 1) == 0) {
                          if (__n != 0) {
                            pPVar7 = param_2 + 0x39;
                            uVar8 = uVar9;
                            do {
                              if (*pPVar7 != *pPVar6) goto LAB_00e641e8;
                              uVar8 = uVar8 - 1;
                              pPVar7 = pPVar7 + 1;
                              pPVar6 = pPVar6 + 1;
                            } while (uVar8 != 0);
                          }
                        }
                        else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0))
                        goto LAB_00e641e8;
                        uVar9 = PUScriptTranslator::passValidateProperty
                                          ((PUScriptTranslator *)this,param_1,param_2,0x178b250,1);
                        if (((uVar9 & 1) != 0) &&
                           (uVar9 = PUScriptTranslator::getBoolean
                                              (*(PUAbstractNode **)
                                                (*(long *)(param_2 + 0x60) + 0x10),(bool *)local_80)
                           , (uVar9 & 1) != 0)) {
                          uVar5 = 1;
                          this_00[0xc0] = local_80[0]._0_1_;
                          goto LAB_00e642f8;
                        }
                      }
                      else {
LAB_00e641e8:
                        sVar1 = (ulong)(token[0x21d8] >> 1);
                        if ((token[0x21d8] & 1) != 0) {
                          sVar1 = token._8672_8_;
                        }
                        if (__n == sVar1) {
                          pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
                          if (((byte)PVar2 & 1) == 0) {
                            pPVar7 = param_2 + 0x39;
                          }
                          pPVar6 = (PUAbstractNode *)(token + 0x21d9);
                          if ((token[0x21d8] & 1) != 0) {
                            pPVar6 = (PUAbstractNode *)token._8680_8_;
                          }
                          if (((byte)PVar2 & 1) == 0) {
                            if (__n != 0) {
                              pPVar7 = param_2 + 0x39;
                              do {
                                if (*pPVar7 != *pPVar6) goto LAB_00e642f4;
                                uVar9 = uVar9 - 1;
                                pPVar7 = pPVar7 + 1;
                                pPVar6 = pPVar6 + 1;
                              } while (uVar9 != 0);
                            }
                          }
                          else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0))
                          goto LAB_00e642f4;
                          uVar9 = PUScriptTranslator::passValidateProperty
                                            ((PUScriptTranslator *)this,param_1,param_2,0x178b268,1)
                          ;
                          if (((uVar9 & 1) != 0) &&
                             (uVar9 = PUScriptTranslator::getBoolean
                                                (*(PUAbstractNode **)
                                                  (*(long *)(param_2 + 0x60) + 0x10),
                                                 (bool *)local_80), (uVar9 & 1) != 0)) {
                            uVar5 = 1;
                            this_00[0xc1] = local_80[0]._0_1_;
                            goto LAB_00e642f8;
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
LAB_00e642f4:
  uVar5 = 0;
LAB_00e642f8:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

