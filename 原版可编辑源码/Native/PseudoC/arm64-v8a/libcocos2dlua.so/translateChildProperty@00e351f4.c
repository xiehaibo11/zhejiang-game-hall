
/* cocos2d::PUCircleEmitterTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUCircleEmitterTranslator::translateChildProperty
          (PUCircleEmitterTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  size_t __n;
  size_t sVar1;
  PUAbstractNode PVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  PUAbstractNode *pPVar6;
  long lVar7;
  PUAbstractNode *pPVar8;
  ulong uVar9;
  PUCircleEmitter *this_00;
  ulong uVar10;
  float local_78 [4];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
  uVar10 = (ulong)((byte)PVar2 >> 1);
  this_00 = *(PUCircleEmitter **)(*(long *)(param_2 + 0x28) + 0x30);
  __n = uVar10;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x2a0] >> 1);
  if ((token[0x2a0] & 1) != 0) {
    sVar1 = token._680_8_;
  }
  if (__n == sVar1) {
    pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar8 = param_2 + 0x39;
    }
    pPVar6 = (PUAbstractNode *)(token + 0x2a1);
    if ((token[0x2a0] & 1) != 0) {
      pPVar6 = (PUAbstractNode *)token._688_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar8 = param_2 + 0x39;
        uVar9 = uVar10;
        do {
          if (*pPVar8 != *pPVar6) goto LAB_00e352d0;
          uVar9 = uVar9 - 1;
          pPVar8 = pPVar8 + 1;
          pPVar6 = pPVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e352d0;
    uVar5 = 0x1789330;
LAB_00e353d4:
    uVar10 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,uVar5,0);
    uVar5 = 0;
    if ((uVar10 & 1) == 0) goto LAB_00e35910;
    local_78[0] = 0.0;
    uVar10 = PUScriptTranslator::getFloat
                       (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),local_78);
    if ((uVar10 & 1) != 0) {
      PUCircleEmitter::setRadius(this_00,local_78[0]);
      uVar5 = 1;
      goto LAB_00e35910;
    }
  }
  else {
LAB_00e352d0:
    sVar1 = (ulong)(token[0x1320] >> 1);
    if ((token[0x1320] & 1) != 0) {
      sVar1 = token._4904_8_;
    }
    if (__n == sVar1) {
      pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar8 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x1321);
      if ((token[0x1320] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._4912_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar8 = param_2 + 0x39;
          uVar9 = uVar10;
          do {
            if (*pPVar8 != *pPVar6) goto LAB_00e35360;
            uVar9 = uVar9 - 1;
            pPVar8 = pPVar8 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e35360;
      uVar5 = 0x178a3b0;
      goto LAB_00e353d4;
    }
LAB_00e35360:
    sVar1 = (ulong)(token[0x1f8] >> 1);
    if ((token[0x1f8] & 1) != 0) {
      sVar1 = token._512_8_;
    }
    if (__n == sVar1) {
      pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar8 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x1f9);
      if ((token[0x1f8] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._520_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar8 = param_2 + 0x39;
          uVar9 = uVar10;
          do {
            if (*pPVar8 != *pPVar6) goto LAB_00e35430;
            uVar9 = uVar9 - 1;
            pPVar8 = pPVar8 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e35430;
      uVar5 = 0x1789288;
LAB_00e35534:
      uVar10 = PUScriptTranslator::passValidateProperty
                         ((PUScriptTranslator *)this,param_1,param_2,uVar5,0);
      uVar5 = 0;
      if ((uVar10 & 1) == 0) goto LAB_00e35910;
      local_78[0] = 0.0;
      uVar10 = PUScriptTranslator::getFloat
                         (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),local_78);
      if ((uVar10 & 1) != 0) {
        PUCircleEmitter::setStep(this_00,local_78[0]);
        uVar5 = 1;
        goto LAB_00e35910;
      }
    }
    else {
LAB_00e35430:
      sVar1 = (ulong)(token[0x1338] >> 1);
      if ((token[0x1338] & 1) != 0) {
        sVar1 = token._4928_8_;
      }
      if (__n == sVar1) {
        pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar2 & 1) == 0) {
          pPVar8 = param_2 + 0x39;
        }
        pPVar6 = (PUAbstractNode *)(token + 0x1339);
        if ((token[0x1338] & 1) != 0) {
          pPVar6 = (PUAbstractNode *)token._4936_8_;
        }
        if (((byte)PVar2 & 1) == 0) {
          if (__n != 0) {
            pPVar8 = param_2 + 0x39;
            uVar9 = uVar10;
            do {
              if (*pPVar8 != *pPVar6) goto LAB_00e354c0;
              uVar9 = uVar9 - 1;
              pPVar8 = pPVar8 + 1;
              pPVar6 = pPVar6 + 1;
            } while (uVar9 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e354c0;
        uVar5 = 0x178a3c8;
        goto LAB_00e35534;
      }
LAB_00e354c0:
      sVar1 = (ulong)(token[0x8e8] >> 1);
      if ((token[0x8e8] & 1) != 0) {
        sVar1 = token._2288_8_;
      }
      if (__n == sVar1) {
        pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar2 & 1) == 0) {
          pPVar8 = param_2 + 0x39;
        }
        pPVar6 = (PUAbstractNode *)(token + 0x8e9);
        if ((token[0x8e8] & 1) != 0) {
          pPVar6 = (PUAbstractNode *)token._2296_8_;
        }
        if (((byte)PVar2 & 1) == 0) {
          if (__n != 0) {
            pPVar8 = param_2 + 0x39;
            uVar9 = uVar10;
            do {
              if (*pPVar8 != *pPVar6) goto LAB_00e35590;
              uVar9 = uVar9 - 1;
              pPVar8 = pPVar8 + 1;
              pPVar6 = pPVar6 + 1;
            } while (uVar9 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e35590;
        uVar5 = 0x1789978;
LAB_00e356a0:
        uVar10 = PUScriptTranslator::passValidateProperty
                           ((PUScriptTranslator *)this,param_1,param_2,uVar5,0);
        uVar5 = 0;
        if ((uVar10 & 1) == 0) goto LAB_00e35910;
        local_78[0] = 0.0;
        uVar10 = PUScriptTranslator::getFloat
                           (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),local_78);
        if ((uVar10 & 1) != 0) {
          PUCircleEmitter::setCircleAngle(this_00,local_78[0]);
          uVar5 = 1;
          goto LAB_00e35910;
        }
      }
      else {
LAB_00e35590:
        sVar1 = (ulong)(token[0x1350] >> 1);
        if ((token[0x1350] & 1) != 0) {
          sVar1 = token._4952_8_;
        }
        if (__n == sVar1) {
          pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
          if (((byte)PVar2 & 1) == 0) {
            pPVar8 = param_2 + 0x39;
          }
          pPVar6 = (PUAbstractNode *)(token + 0x1351);
          if ((token[0x1350] & 1) != 0) {
            pPVar6 = (PUAbstractNode *)token._4960_8_;
          }
          if (((byte)PVar2 & 1) == 0) {
            if (__n != 0) {
              pPVar8 = param_2 + 0x39;
              uVar9 = uVar10;
              do {
                    /* catch() { ... } // from try @ 00e35790 with catch @ 00e355f0
                       catch() { ... } // from try @ 00e36080 with catch @ 00e355f0
                       catch() { ... } // from try @ 00e36318 with catch @ 00e355f0
                       catch() { ... } // from try @ 00e363d0 with catch @ 00e355f0
                       catch() { ... } // from try @ 00e36478 with catch @ 00e355f0
                       catch() { ... } // from try @ 00e36628 with catch @ 00e355f0
                       catch() { ... } // from try @ 00e368b4 with catch @ 00e355f0
                       catch() { ... } // from try @ 00e368c0 with catch @ 00e355f0 */
                if (*pPVar8 != *pPVar6) goto LAB_00e35620;
                uVar9 = uVar9 - 1;
                pPVar8 = pPVar8 + 1;
                pPVar6 = pPVar6 + 1;
              } while (uVar9 != 0);
            }
          }
          else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e35620;
          uVar5 = 0x178a3e0;
          goto LAB_00e356a0;
        }
LAB_00e35620:
        sVar1 = (ulong)(token[0x1380] >> 1);
        if ((token[0x1380] & 1) != 0) {
          sVar1 = token._5000_8_;
        }
        if (__n == sVar1) {
          pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
          if (((byte)PVar2 & 1) == 0) {
            pPVar8 = param_2 + 0x39;
          }
          pPVar6 = (PUAbstractNode *)(token + 0x1381);
          if ((token[0x1380] & 1) != 0) {
            pPVar6 = (PUAbstractNode *)token._5008_8_;
          }
          if (((byte)PVar2 & 1) == 0) {
            if (__n != 0) {
              pPVar8 = param_2 + 0x39;
              uVar9 = uVar10;
              do {
                    /* try { // try from 00e35678 to 00f35683 has its CatchHandler @ 00e369ac */
                if (*pPVar8 != *pPVar6) goto LAB_00e356fc;
                uVar9 = uVar9 - 1;
                pPVar8 = pPVar8 + 1;
                pPVar6 = pPVar6 + 1;
              } while (uVar9 != 0);
            }
          }
          else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e356fc;
          lVar7 = 0x1380;
LAB_00e357fc:
          uVar10 = PUScriptTranslator::passValidateProperty
                             ((PUScriptTranslator *)this,param_1,param_2,token + lVar7,1);
          if (((uVar10 & 1) != 0) &&
             (uVar10 = PUScriptTranslator::getBoolean
                                 (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                                  (bool *)local_78), (uVar10 & 1) != 0)) {
                    /* try { // try from 00e3582c to 00f3584f has its CatchHandler @ 00e36a3c */
            PUCircleEmitter::setRandom(this_00,(bool)local_78[0]._0_1_);
            uVar5 = 1;
            goto LAB_00e35910;
          }
        }
        else {
LAB_00e356fc:
          sVar1 = (ulong)(token[0x1368] >> 1);
          if ((token[0x1368] & 1) != 0) {
            sVar1 = token._4976_8_;
          }
          if (__n == sVar1) {
            pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
            if (((byte)PVar2 & 1) == 0) {
              pPVar8 = param_2 + 0x39;
            }
            pPVar6 = (PUAbstractNode *)(token + 0x1369);
            if ((token[0x1368] & 1) != 0) {
              pPVar6 = (PUAbstractNode *)token._4984_8_;
            }
            if (((byte)PVar2 & 1) == 0) {
              if (__n != 0) {
                pPVar8 = param_2 + 0x39;
                uVar9 = uVar10;
                do {
                  if (*pPVar8 != *pPVar6) goto LAB_00e3578c;
                  uVar9 = uVar9 - 1;
                  pPVar8 = pPVar8 + 1;
                  pPVar6 = pPVar6 + 1;
                } while (uVar9 != 0);
              }
            }
            else {
                    /* try { // try from 00e35788 to 00f3578f has its CatchHandler @ 00e369a0 */
              if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e3578c;
            }
            lVar7 = 0x1368;
            goto LAB_00e357fc;
          }
LAB_00e3578c:
                    /* try { // try from 00e35790 to 00f3582b has its CatchHandler @ 00e355f0 */
          sVar1 = (ulong)(token[0x1e0] >> 1);
          if ((token[0x1e0] & 1) != 0) {
            sVar1 = token._488_8_;
          }
          if (__n == sVar1) {
            pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
            if (((byte)PVar2 & 1) == 0) {
              pPVar8 = param_2 + 0x39;
            }
            pPVar6 = (PUAbstractNode *)(token + 0x1e1);
            if ((token[0x1e0] & 1) != 0) {
              pPVar6 = (PUAbstractNode *)token._496_8_;
            }
            if (((byte)PVar2 & 1) == 0) {
              if (__n != 0) {
                pPVar8 = param_2 + 0x39;
                uVar9 = uVar10;
                do {
                  if (*pPVar8 != *pPVar6) goto LAB_00e35850;
                  uVar9 = uVar9 - 1;
                  pPVar8 = pPVar8 + 1;
                  pPVar6 = pPVar6 + 1;
                } while (uVar9 != 0);
              }
            }
            else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0))
            goto LAB_00e35850;
LAB_00e358d4:
            Vec3::Vec3((Vec3 *)local_78);
            uVar10 = PUScriptTranslator::getVector3
                               ((PUScriptTranslator *)this,*(undefined8 *)(param_2 + 0x60),
                                param_2 + 0x58,local_78,3);
            if ((uVar10 & 1) != 0) {
              PUCircleEmitter::setNormal(this_00,(Vec3 *)local_78);
              uVar5 = 1;
              goto LAB_00e35910;
            }
          }
          else {
LAB_00e35850:
                    /* try { // try from 00e35850 to 00f3586f has its CatchHandler @ 00e36a2c */
            sVar1 = (ulong)(token[0x1398] >> 1);
            if ((token[0x1398] & 1) != 0) {
              sVar1 = token._5024_8_;
            }
            if (__n == sVar1) {
              pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
                    /* try { // try from 00e3587c to 00f3588f has its CatchHandler @ 00e36a3c */
              if (((byte)PVar2 & 1) == 0) {
                pPVar8 = param_2 + 0x39;
              }
              pPVar6 = (PUAbstractNode *)(token + 0x1399);
                    /* try { // try from 00e35890 to 00f3589b has its CatchHandler @ 00e36a18 */
              if ((token[0x1398] & 1) != 0) {
                pPVar6 = (PUAbstractNode *)token._5032_8_;
              }
              if (((byte)PVar2 & 1) == 0) {
                if (__n != 0) {
                  pPVar8 = param_2 + 0x39;
                  do {
                    if (*pPVar8 != *pPVar6) goto LAB_00e3590c;
                    uVar10 = uVar10 - 1;
                    pPVar8 = pPVar8 + 1;
                    pPVar6 = pPVar6 + 1;
                  } while (uVar10 != 0);
                }
              }
              else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0))
              goto LAB_00e3590c;
              goto LAB_00e358d4;
            }
          }
        }
      }
    }
  }
LAB_00e3590c:
  uVar5 = 0;
LAB_00e35910:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

