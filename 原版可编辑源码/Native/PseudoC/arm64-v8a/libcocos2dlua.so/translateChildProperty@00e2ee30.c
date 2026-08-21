
/* cocos2d::PUTextureAnimatorTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUTextureAnimatorTranslator::translateChildProperty
          (PUTextureAnimatorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  PUAbstractNode PVar4;
  size_t sVar5;
  long lVar6;
  size_t sVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  PUAbstractNode *pPVar11;
  long lVar12;
  char *pcVar13;
  PUAbstractNode *pPVar14;
  PUTextureAnimator *this_00;
  size_t sVar15;
  ulong uVar16;
  ulong local_80;
  size_t local_78;
  char *local_70;
  long local_68;
  
                    /* try { // try from 00e2ee50 to 00f2ee57 has its CatchHandler @ 00e2f21c */
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
                    /* try { // try from 00e2ee58 to 00f2ee93 has its CatchHandler @ 00e2edb4 */
  PVar4 = param_2[0x38];
  uVar16 = (ulong)((byte)PVar4 >> 1);
  this_00 = *(PUTextureAnimator **)(*(long *)(param_2 + 0x28) + 0x30);
                    /* try { // try from 00e2ee94 to 00f2eea3 has its CatchHandler @ 00e2f238 */
  sVar2 = uVar16;
  if (((byte)PVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x40);
  }
  sVar15 = (ulong)(token[0x108] >> 1);
  if ((token[0x108] & 1) != 0) {
    sVar15 = token._272_8_;
  }
                    /* try { // try from 00e2eea4 to 00f2f257 has its CatchHandler @ 00e2edb4 */
  if (sVar2 == sVar15) {
    pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar4 & 1) == 0) {
      pPVar14 = param_2 + 0x39;
    }
    pPVar11 = (PUAbstractNode *)(token + 0x109);
    if ((token[0x108] & 1) != 0) {
      pPVar11 = (PUAbstractNode *)token._280_8_;
    }
    if (((byte)PVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pPVar14 = param_2 + 0x39;
        uVar10 = uVar16;
        do {
          if (*pPVar14 != *pPVar11) goto LAB_00e2ef0c;
          uVar10 = uVar10 - 1;
          pPVar14 = pPVar14 + 1;
          pPVar11 = pPVar11 + 1;
        } while (uVar10 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0)) goto LAB_00e2ef0c;
    uVar9 = 0x1789198;
LAB_00e2f01c:
    uVar16 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,uVar9,0);
    uVar9 = 0;
    if ((uVar16 & 1) == 0) goto LAB_00e2f60c;
    local_80 = local_80 & 0xffffffff00000000;
    uVar16 = PUScriptTranslator::getFloat
                       (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),(float *)&local_80);
    if ((uVar16 & 1) != 0) {
      PUTextureAnimator::setAnimationTimeStep(this_00,(float)local_80);
      uVar9 = 1;
      goto LAB_00e2f60c;
    }
  }
  else {
LAB_00e2ef0c:
    sVar15 = (ulong)(token[0x1de8] >> 1);
    if ((token[0x1de8] & 1) != 0) {
      sVar15 = token._7664_8_;
    }
    if (sVar2 == sVar15) {
      pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar4 & 1) == 0) {
        pPVar14 = param_2 + 0x39;
      }
      pPVar11 = (PUAbstractNode *)(token + 0x1de9);
      if ((token[0x1de8] & 1) != 0) {
        pPVar11 = (PUAbstractNode *)token._7672_8_;
      }
      if (((byte)PVar4 & 1) == 0) {
        if (sVar2 != 0) {
          pPVar14 = param_2 + 0x39;
          uVar10 = uVar16;
          do {
            if (*pPVar14 != *pPVar11) goto LAB_00e2ef9c;
            uVar10 = uVar10 - 1;
            pPVar14 = pPVar14 + 1;
            pPVar11 = pPVar11 + 1;
          } while (uVar10 != 0);
        }
      }
      else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0))
      goto LAB_00e2ef9c;
      uVar9 = 0x178ae78;
      goto LAB_00e2f01c;
    }
LAB_00e2ef9c:
    sVar15 = (ulong)(token[0x1e30] >> 1);
    if ((token[0x1e30] & 1) != 0) {
      sVar15 = token._7736_8_;
    }
    if (sVar2 == sVar15) {
      pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar4 & 1) == 0) {
        pPVar14 = param_2 + 0x39;
      }
      pPVar11 = (PUAbstractNode *)(token + 0x1e31);
      if ((token[0x1e30] & 1) != 0) {
        pPVar11 = (PUAbstractNode *)token._7744_8_;
      }
      if (((byte)PVar4 & 1) == 0) {
        if (sVar2 != 0) {
          pPVar14 = param_2 + 0x39;
          uVar10 = uVar16;
          do {
            if (*pPVar14 != *pPVar11) goto LAB_00e2f078;
            uVar10 = uVar10 - 1;
            pPVar14 = pPVar14 + 1;
            pPVar11 = pPVar11 + 1;
          } while (uVar10 != 0);
        }
      }
      else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0))
      goto LAB_00e2f078;
      lVar12 = 0x1e30;
LAB_00e2f184:
      uVar16 = PUScriptTranslator::passValidateProperty
                         ((PUScriptTranslator *)this,param_1,param_2,token + lVar12,2);
      if ((uVar16 & 1) != 0) {
        local_80 = local_80 & 0xffffffff00000000;
        uVar16 = PUScriptTranslator::getUInt
                           (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),(uint *)&local_80
                           );
        if ((uVar16 & 1) != 0) {
          PUTextureAnimator::setTextureCoordsStart(this_00,(ushort)local_80);
          uVar9 = 1;
          goto LAB_00e2f60c;
        }
      }
    }
    else {
LAB_00e2f078:
      sVar15 = (ulong)(token[0x1e00] >> 1);
      if ((token[0x1e00] & 1) != 0) {
        sVar15 = token._7688_8_;
      }
      if (sVar2 == sVar15) {
        pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar4 & 1) == 0) {
          pPVar14 = param_2 + 0x39;
        }
        pPVar11 = (PUAbstractNode *)(token + 0x1e01);
        if ((token[0x1e00] & 1) != 0) {
          pPVar11 = (PUAbstractNode *)token._7696_8_;
        }
        if (((byte)PVar4 & 1) == 0) {
          if (sVar2 != 0) {
            pPVar14 = param_2 + 0x39;
            uVar10 = uVar16;
            do {
              if (*pPVar14 != *pPVar11) goto LAB_00e2f108;
              uVar10 = uVar10 - 1;
              pPVar14 = pPVar14 + 1;
              pPVar11 = pPVar11 + 1;
            } while (uVar10 != 0);
          }
        }
        else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0))
        goto LAB_00e2f108;
        lVar12 = 0x1e00;
        goto LAB_00e2f184;
      }
LAB_00e2f108:
      sVar15 = (ulong)(token[0x1e48] >> 1);
      if ((token[0x1e48] & 1) != 0) {
        sVar15 = token._7760_8_;
      }
      if (sVar2 == sVar15) {
        pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar4 & 1) == 0) {
          pPVar14 = param_2 + 0x39;
        }
        pPVar11 = (PUAbstractNode *)(token + 0x1e49);
        if ((token[0x1e48] & 1) != 0) {
          pPVar11 = (PUAbstractNode *)token._7768_8_;
        }
        if (((byte)PVar4 & 1) == 0) {
          if (sVar2 != 0) {
            pPVar14 = param_2 + 0x39;
            uVar10 = uVar16;
            do {
              if (*pPVar14 != *pPVar11) goto LAB_00e2f1dc;
              uVar10 = uVar10 - 1;
              pPVar14 = pPVar14 + 1;
              pPVar11 = pPVar11 + 1;
            } while (uVar10 != 0);
          }
        }
        else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0))
        goto LAB_00e2f1dc;
        lVar12 = 0x1e48;
LAB_00e2f2e8:
        uVar16 = PUScriptTranslator::passValidateProperty
                           ((PUScriptTranslator *)this,param_1,param_2,token + lVar12,2);
        if ((uVar16 & 1) != 0) {
          local_80 = local_80 & 0xffffffff00000000;
          uVar16 = PUScriptTranslator::getUInt
                             (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                              (uint *)&local_80);
          if ((uVar16 & 1) != 0) {
            PUTextureAnimator::setTextureCoordsEnd(this_00,(ushort)local_80);
            uVar9 = 1;
            goto LAB_00e2f60c;
          }
        }
      }
      else {
LAB_00e2f1dc:
        sVar15 = (ulong)(token[0x1e18] >> 1);
        if ((token[0x1e18] & 1) != 0) {
          sVar15 = token._7712_8_;
        }
        if (sVar2 == sVar15) {
          pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
          if (((byte)PVar4 & 1) == 0) {
            pPVar14 = param_2 + 0x39;
          }
          pPVar11 = (PUAbstractNode *)(token + 0x1e19);
                    /* catch() { ... } // from try @ 00e2ee50 with catch @ 00e2f21c */
          if ((token[0x1e18] & 1) != 0) {
            pPVar11 = (PUAbstractNode *)token._7720_8_;
          }
          if (((byte)PVar4 & 1) == 0) {
            if (sVar2 != 0) {
              pPVar14 = param_2 + 0x39;
              uVar10 = uVar16;
              do {
                    /* catch() { ... } // from try @ 00e2ee94 with catch @ 00e2f238 */
                    /* catch() { ... } // from try @ 00e2ee10 with catch @ 00e2f23c */
                if (*pPVar14 != *pPVar11) goto LAB_00e2f26c;
                uVar10 = uVar10 - 1;
                pPVar14 = pPVar14 + 1;
                pPVar11 = pPVar11 + 1;
              } while (uVar10 != 0);
            }
          }
          else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0))
          goto LAB_00e2f26c;
          lVar12 = 0x1e18;
          goto LAB_00e2f2e8;
        }
LAB_00e2f26c:
        sVar15 = (ulong)(token[0x1e60] >> 1);
        if ((token[0x1e60] & 1) != 0) {
          sVar15 = token._7784_8_;
        }
        if (sVar2 == sVar15) {
          pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
          if (((byte)PVar4 & 1) == 0) {
            pPVar14 = param_2 + 0x39;
          }
          pPVar11 = (PUAbstractNode *)(token + 0x1e61);
          if ((token[0x1e60] & 1) != 0) {
            pPVar11 = (PUAbstractNode *)token._7792_8_;
          }
          if (((byte)PVar4 & 1) == 0) {
            if (sVar2 != 0) {
              pPVar14 = param_2 + 0x39;
              uVar10 = uVar16;
              do {
                if (*pPVar14 != *pPVar11) goto LAB_00e2f340;
                uVar10 = uVar10 - 1;
                pPVar14 = pPVar14 + 1;
                pPVar11 = pPVar11 + 1;
              } while (uVar10 != 0);
            }
          }
          else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0))
          goto LAB_00e2f340;
          uVar16 = PUScriptTranslator::passValidateProperty
                             ((PUScriptTranslator *)this,param_1,param_2,0x178aef0,4);
          if ((uVar16 & 1) != 0) {
            local_78 = 0;
            local_70 = (char *)0x0;
            local_80 = 0;
            uVar10 = PUScriptTranslator::getString
                               (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                                (basic_string *)&local_80);
            uVar16 = local_80;
            if ((uVar10 & 1) != 0) {
              sVar15 = local_80 >> 1 & 0x7f;
              sVar2 = sVar15;
              if ((local_80 & 1) != 0) {
                sVar2 = local_78;
              }
              sVar5 = (ulong)(token[0x1e90] >> 1);
              if ((token[0x1e90] & 1) != 0) {
                sVar5 = token._7832_8_;
              }
              if (sVar2 == sVar5) {
                pcVar13 = (char *)((ulong)&local_80 | 1);
                pcVar3 = pcVar13;
                if ((local_80 & 1) != 0) {
                  pcVar3 = local_70;
                }
                pcVar1 = token + 0x1e91;
                if ((token[0x1e90] & 1) != 0) {
                  pcVar1 = (char *)token._7840_8_;
                }
                sVar5 = sVar15;
                sVar7 = sVar2;
                if ((local_80 & 1) == 0) {
                  while (sVar7 != 0) {
                    if (*pcVar13 != *pcVar1) goto LAB_00e2f4e8;
                    pcVar13 = pcVar13 + 1;
                    pcVar1 = pcVar1 + 1;
                    sVar5 = sVar5 - 1;
                    sVar7 = sVar5;
                  }
                }
                else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
                goto LAB_00e2f4e8;
                PUTextureAnimator::setTextureAnimationType(this_00,0);
              }
              else {
LAB_00e2f4e8:
                sVar5 = (ulong)(token[0x1ea8] >> 1);
                if ((token[0x1ea8] & 1) != 0) {
                  sVar5 = token._7856_8_;
                }
                if (sVar2 == sVar5) {
                  pcVar13 = (char *)((ulong)&local_80 | 1);
                  pcVar3 = pcVar13;
                  if ((uVar16 & 1) != 0) {
                    pcVar3 = local_70;
                  }
                  pcVar1 = token + 0x1ea9;
                  if ((token[0x1ea8] & 1) != 0) {
                    pcVar1 = (char *)token._7864_8_;
                  }
                  sVar5 = sVar15;
                  sVar7 = sVar2;
                  if ((uVar16 & 1) == 0) {
                    while (sVar7 != 0) {
                      if (*pcVar13 != *pcVar1) goto LAB_00e2f584;
                      pcVar13 = pcVar13 + 1;
                      pcVar1 = pcVar1 + 1;
                      sVar5 = sVar5 - 1;
                      sVar7 = sVar5;
                    }
                  }
                  else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
                  goto LAB_00e2f584;
                  PUTextureAnimator::setTextureAnimationType(this_00,1);
                }
                else {
LAB_00e2f584:
                  sVar5 = (ulong)(token[0x1ec0] >> 1);
                  if ((token[0x1ec0] & 1) != 0) {
                    sVar5 = token._7880_8_;
                  }
                  if (sVar2 != sVar5) goto LAB_00e2f5fc;
                  pcVar13 = (char *)((ulong)&local_80 | 1);
                  pcVar3 = pcVar13;
                  if ((uVar16 & 1) != 0) {
                    pcVar3 = local_70;
                  }
                  pcVar1 = token + 0x1ec1;
                  if ((token[0x1ec0] & 1) != 0) {
                    pcVar1 = (char *)token._7888_8_;
                  }
                  if ((uVar16 & 1) == 0) {
                    while (sVar2 != 0) {
                    /* try { // try from 00e2f5e4 to 00f2f783 has its CatchHandler @ 00e2f5e4
                       catch() { ... } // from try @ 00e2f5e4 with catch @ 00e2f5e4
                       catch() { ... } // from try @ 00e2f794 with catch @ 00e2f5e4
                       catch() { ... } // from try @ 00e2f7e0 with catch @ 00e2f5e4 */
                      if (*pcVar13 != *pcVar1) goto LAB_00e2f608;
                      pcVar13 = pcVar13 + 1;
                      pcVar1 = pcVar1 + 1;
                      sVar15 = sVar15 - 1;
                      sVar2 = sVar15;
                    }
                  }
                  else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
                  goto LAB_00e2f600;
                  PUTextureAnimator::setTextureAnimationType(this_00,2);
                }
              }
              if ((local_80 & 1) != 0) {
                operator_delete(local_70);
              }
              uVar9 = 1;
              goto LAB_00e2f60c;
            }
LAB_00e2f5fc:
            if ((uVar16 & 1) != 0) {
LAB_00e2f600:
              operator_delete(local_70);
            }
          }
        }
        else {
LAB_00e2f340:
          sVar15 = (ulong)(token[0x1e78] >> 1);
          if ((token[0x1e78] & 1) != 0) {
            sVar15 = token._7808_8_;
          }
          if (sVar2 == sVar15) {
            pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
            if (((byte)PVar4 & 1) == 0) {
              pPVar14 = param_2 + 0x39;
            }
            pPVar11 = (PUAbstractNode *)(token + 0x1e79);
            if ((token[0x1e78] & 1) != 0) {
              pPVar11 = (PUAbstractNode *)token._7816_8_;
            }
            if (((byte)PVar4 & 1) == 0) {
              if (sVar2 != 0) {
                pPVar14 = param_2 + 0x39;
                do {
                  if (*pPVar14 != *pPVar11) goto LAB_00e2f608;
                  uVar16 = uVar16 - 1;
                  pPVar14 = pPVar14 + 1;
                  pPVar11 = pPVar11 + 1;
                } while (uVar16 != 0);
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0))
            goto LAB_00e2f608;
            uVar16 = PUScriptTranslator::passValidateProperty
                               ((PUScriptTranslator *)this,param_1,param_2,0x178af08,1);
            if (((uVar16 & 1) != 0) &&
               (uVar16 = PUScriptTranslator::getBoolean
                                   (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                                    (bool *)&local_80), (uVar16 & 1) != 0)) {
              PUTextureAnimator::setStartRandom(this_00,(bool)local_80._0_1_);
              uVar9 = 1;
              goto LAB_00e2f60c;
            }
          }
        }
      }
    }
  }
LAB_00e2f608:
  uVar9 = 0;
LAB_00e2f60c:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

