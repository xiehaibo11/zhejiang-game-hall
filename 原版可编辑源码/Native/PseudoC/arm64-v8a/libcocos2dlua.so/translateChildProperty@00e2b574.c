
/* cocos2d::PURandomiserTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PURandomiserTranslator::translateChildProperty
          (PURandomiserTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

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
  PURandomiser *this_00;
  ulong uVar10;
  float local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
  uVar10 = (ulong)((byte)PVar2 >> 1);
  this_00 = *(PURandomiser **)(*(long *)(param_2 + 0x28) + 0x30);
  __n = uVar10;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x1c50] >> 1);
  if ((token[0x1c50] & 1) != 0) {
    sVar1 = token._7256_8_;
  }
                    /* try { // try from 00e2b5ec to 00f2b5f7 has its CatchHandler @ 00e2b6ec */
  if (__n == sVar1) {
                    /* try { // try from 00e2b5f8 to 00f2b6af has its CatchHandler @ 00e2b538 */
    pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar8 = param_2 + 0x39;
    }
    pPVar6 = (PUAbstractNode *)(token + 0x1c51);
    if ((token[0x1c50] & 1) != 0) {
      pPVar6 = (PUAbstractNode *)token._7264_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar8 = param_2 + 0x39;
        uVar9 = uVar10;
        do {
          if (*pPVar8 != *pPVar6) goto LAB_00e2b65c;
          uVar9 = uVar9 - 1;
          pPVar8 = pPVar8 + 1;
          pPVar6 = pPVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e2b65c;
    lVar7 = 0x1c50;
LAB_00e2b768:
    uVar10 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,token + lVar7,0);
    uVar5 = 0;
    if ((uVar10 & 1) == 0) goto LAB_00e2bcd8;
    local_6c = 0.0;
    uVar10 = PUScriptTranslator::getFloat
                       (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_6c);
    if ((uVar10 & 1) != 0) {
      PURandomiser::setMaxDeviationX(this_00,local_6c);
      uVar5 = 1;
      goto LAB_00e2bcd8;
    }
  }
  else {
LAB_00e2b65c:
    sVar1 = (ulong)(token[0x1c08] >> 1);
    if ((token[0x1c08] & 1) != 0) {
      sVar1 = token._7184_8_;
    }
    if (__n == sVar1) {
      pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar8 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x1c09);
      if ((token[0x1c08] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._7192_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar8 = param_2 + 0x39;
          uVar9 = uVar10;
          do {
                    /* try { // try from 00e2b6b0 to 00f2b6bb has its CatchHandler @ 00e2b6f4 */
                    /* try { // try from 00e2b6bc to 00f2b6fb has its CatchHandler @ 00e2b538 */
            if (*pPVar8 != *pPVar6) goto LAB_00e2b6ec;
            uVar9 = uVar9 - 1;
            pPVar8 = pPVar8 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e2b6ec;
      lVar7 = 0x1c08;
      goto LAB_00e2b768;
    }
LAB_00e2b6ec:
                    /* catch() { ... } // from try @ 00e2b5ec with catch @ 00e2b6ec */
                    /* catch() { ... } // from try @ 00e2b6b0 with catch @ 00e2b6f4 */
                    /* catch() { ... } // from try @ 00e2b748 with catch @ 00e2b6fc */
    sVar1 = (ulong)(token[0x1c68] >> 1);
    if ((token[0x1c68] & 1) != 0) {
      sVar1 = token._7280_8_;
    }
    if (__n == sVar1) {
      pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar8 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x1c69);
      if ((token[0x1c68] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._7288_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar8 = param_2 + 0x39;
                    /* try { // try from 00e2b73c to 00f2b747 has its CatchHandler @ 00e2b7c0 */
          uVar9 = uVar10;
          do {
                    /* try { // try from 00e2b748 to 00f2b7f3 has its CatchHandler @ 00e2b6fc */
            if (*pPVar8 != *pPVar6) goto LAB_00e2b7c8;
            uVar9 = uVar9 - 1;
            pPVar8 = pPVar8 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar9 != 0);
        }
      }
      else {
                    /* catch() { ... } // from try @ 00e2b73c with catch @ 00e2b7c0 */
        if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e2b7c8;
      }
      lVar7 = 0x1c68;
LAB_00e2b8d4:
      uVar10 = PUScriptTranslator::passValidateProperty
                         ((PUScriptTranslator *)this,param_1,param_2,token + lVar7,0);
      uVar5 = 0;
      if ((uVar10 & 1) == 0) goto LAB_00e2bcd8;
      local_6c = 0.0;
      uVar10 = PUScriptTranslator::getFloat
                         (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_6c);
      if ((uVar10 & 1) != 0) {
        PURandomiser::setMaxDeviationY(this_00,local_6c);
                    /* catch() { ... } // from try @ 00e2b870 with catch @ 00e2b91c */
        uVar5 = 1;
        goto LAB_00e2bcd8;
      }
    }
    else {
LAB_00e2b7c8:
      sVar1 = (ulong)(token[0x1c20] >> 1);
      if ((token[0x1c20] & 1) != 0) {
        sVar1 = token._7208_8_;
      }
      if (__n == sVar1) {
        pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
                    /* catch() { ... } // from try @ 00e2b87c with catch @ 00e2b7f4 */
        if (((byte)PVar2 & 1) == 0) {
          pPVar8 = param_2 + 0x39;
        }
        pPVar6 = (PUAbstractNode *)(token + 0x1c21);
        if ((token[0x1c20] & 1) != 0) {
          pPVar6 = (PUAbstractNode *)token._7216_8_;
        }
        if (((byte)PVar2 & 1) == 0) {
          if (__n != 0) {
            pPVar8 = param_2 + 0x39;
            uVar9 = uVar10;
            do {
              if (*pPVar8 != *pPVar6) goto LAB_00e2b858;
              uVar9 = uVar9 - 1;
              pPVar8 = pPVar8 + 1;
              pPVar6 = pPVar6 + 1;
            } while (uVar9 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e2b858;
        lVar7 = 0x1c20;
        goto LAB_00e2b8d4;
      }
LAB_00e2b858:
      sVar1 = (ulong)(token[0x1c80] >> 1);
                    /* try { // try from 00e2b870 to 00f2b87b has its CatchHandler @ 00e2b91c */
      if ((token[0x1c80] & 1) != 0) {
        sVar1 = token._7304_8_;
      }
      if (__n == sVar1) {
                    /* try { // try from 00e2b87c to 00f2b927 has its CatchHandler @ 00e2b7f4 */
        pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar2 & 1) == 0) {
          pPVar8 = param_2 + 0x39;
        }
        pPVar6 = (PUAbstractNode *)(token + 0x1c81);
        if ((token[0x1c80] & 1) != 0) {
          pPVar6 = (PUAbstractNode *)token._7312_8_;
        }
        if (((byte)PVar2 & 1) == 0) {
          if (__n != 0) {
            pPVar8 = param_2 + 0x39;
            uVar9 = uVar10;
            do {
              if (*pPVar8 != *pPVar6) goto LAB_00e2b934;
              uVar9 = uVar9 - 1;
              pPVar8 = pPVar8 + 1;
              pPVar6 = pPVar6 + 1;
            } while (uVar9 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e2b934;
        lVar7 = 0x1c80;
LAB_00e2ba34:
        uVar10 = PUScriptTranslator::passValidateProperty
                           ((PUScriptTranslator *)this,param_1,param_2,token + lVar7,0);
        uVar5 = 0;
        if ((uVar10 & 1) == 0) goto LAB_00e2bcd8;
        local_6c = 0.0;
        uVar10 = PUScriptTranslator::getFloat
                           (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_6c);
        if ((uVar10 & 1) != 0) {
          PURandomiser::setMaxDeviationZ(this_00,local_6c);
          uVar5 = 1;
          goto LAB_00e2bcd8;
        }
      }
      else {
LAB_00e2b934:
        sVar1 = (ulong)(token[0x1c38] >> 1);
        if ((token[0x1c38] & 1) != 0) {
          sVar1 = token._7232_8_;
        }
        if (__n == sVar1) {
          pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
          if (((byte)PVar2 & 1) == 0) {
            pPVar8 = param_2 + 0x39;
          }
          pPVar6 = (PUAbstractNode *)(token + 0x1c39);
          if ((token[0x1c38] & 1) != 0) {
            pPVar6 = (PUAbstractNode *)token._7240_8_;
          }
          if (((byte)PVar2 & 1) == 0) {
            if (__n != 0) {
              pPVar8 = param_2 + 0x39;
              uVar9 = uVar10;
              do {
                if (*pPVar8 != *pPVar6) goto LAB_00e2b9c4;
                uVar9 = uVar9 - 1;
                pPVar8 = pPVar8 + 1;
                pPVar6 = pPVar6 + 1;
              } while (uVar9 != 0);
            }
          }
          else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e2b9c4;
          lVar7 = 0x1c38;
          goto LAB_00e2ba34;
        }
LAB_00e2b9c4:
        sVar1 = (ulong)(token[0x108] >> 1);
        if ((token[0x108] & 1) != 0) {
          sVar1 = token._272_8_;
        }
        if (__n == sVar1) {
          pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
          if (((byte)PVar2 & 1) == 0) {
            pPVar8 = param_2 + 0x39;
          }
          pPVar6 = (PUAbstractNode *)(token + 0x109);
          if ((token[0x108] & 1) != 0) {
            pPVar6 = (PUAbstractNode *)token._280_8_;
          }
          if (((byte)PVar2 & 1) == 0) {
            if (__n != 0) {
              pPVar8 = param_2 + 0x39;
              uVar9 = uVar10;
              do {
                if (*pPVar8 != *pPVar6) goto LAB_00e2ba94;
                uVar9 = uVar9 - 1;
                pPVar8 = pPVar8 + 1;
                pPVar6 = pPVar6 + 1;
              } while (uVar9 != 0);
            }
          }
          else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e2ba94;
          uVar5 = 0x1789198;
LAB_00e2bba4:
          uVar10 = PUScriptTranslator::passValidateProperty
                             ((PUScriptTranslator *)this,param_1,param_2,uVar5,0);
          uVar5 = 0;
          if ((uVar10 & 1) == 0) goto LAB_00e2bcd8;
          local_6c = 0.0;
          uVar10 = PUScriptTranslator::getFloat
                             (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_6c);
          if ((uVar10 & 1) != 0) {
            PURandomiser::setTimeStep(this_00,local_6c);
            uVar5 = 1;
            goto LAB_00e2bcd8;
          }
        }
        else {
LAB_00e2ba94:
          sVar1 = (ulong)(token[0x1c98] >> 1);
          if ((token[0x1c98] & 1) != 0) {
            sVar1 = token._7328_8_;
          }
          if (__n == sVar1) {
            pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
            if (((byte)PVar2 & 1) == 0) {
              pPVar8 = param_2 + 0x39;
            }
            pPVar6 = (PUAbstractNode *)(token + 0x1c99);
            if ((token[0x1c98] & 1) != 0) {
              pPVar6 = (PUAbstractNode *)token._7336_8_;
            }
            if (((byte)PVar2 & 1) == 0) {
              if (__n != 0) {
                pPVar8 = param_2 + 0x39;
                uVar9 = uVar10;
                do {
                  if (*pPVar8 != *pPVar6) goto LAB_00e2bb24;
                  uVar9 = uVar9 - 1;
                  pPVar8 = pPVar8 + 1;
                  pPVar6 = pPVar6 + 1;
                } while (uVar9 != 0);
              }
            }
            else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0))
            goto LAB_00e2bb24;
            uVar5 = 0x178ad28;
            goto LAB_00e2bba4;
          }
LAB_00e2bb24:
          sVar1 = (ulong)(token[0x1cc8] >> 1);
          if ((token[0x1cc8] & 1) != 0) {
            sVar1 = token._7376_8_;
          }
          if (__n == sVar1) {
            pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
            if (((byte)PVar2 & 1) == 0) {
              pPVar8 = param_2 + 0x39;
            }
            pPVar6 = (PUAbstractNode *)(token + 0x1cc9);
            if ((token[0x1cc8] & 1) != 0) {
              pPVar6 = (PUAbstractNode *)token._7384_8_;
            }
            if (((byte)PVar2 & 1) == 0) {
              if (__n != 0) {
                pPVar8 = param_2 + 0x39;
                uVar9 = uVar10;
                do {
                  if (*pPVar8 != *pPVar6) goto LAB_00e2bc00;
                  uVar9 = uVar9 - 1;
                  pPVar8 = pPVar8 + 1;
                  pPVar6 = pPVar6 + 1;
                } while (uVar9 != 0);
              }
            }
            else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0))
            goto LAB_00e2bc00;
            lVar7 = 0x1cc8;
LAB_00e2bc90:
            uVar10 = PUScriptTranslator::passValidateProperty
                               ((PUScriptTranslator *)this,param_1,param_2,token + lVar7,1);
            if (((uVar10 & 1) != 0) &&
               (uVar10 = PUScriptTranslator::getBoolean
                                   (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                                    (bool *)&local_6c), (uVar10 & 1) != 0)) {
              PURandomiser::setRandomDirection(this_00,local_6c._0_1_);
              uVar5 = 1;
              goto LAB_00e2bcd8;
            }
          }
          else {
LAB_00e2bc00:
            sVar1 = (ulong)(token[0x1cb0] >> 1);
            if ((token[0x1cb0] & 1) != 0) {
              sVar1 = token._7352_8_;
            }
            if (__n == sVar1) {
              pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
              if (((byte)PVar2 & 1) == 0) {
                pPVar8 = param_2 + 0x39;
              }
              pPVar6 = (PUAbstractNode *)(token + 0x1cb1);
              if ((token[0x1cb0] & 1) != 0) {
                pPVar6 = (PUAbstractNode *)token._7360_8_;
              }
              if (((byte)PVar2 & 1) == 0) {
                if (__n != 0) {
                  pPVar8 = param_2 + 0x39;
                  do {
                    if (*pPVar8 != *pPVar6) goto LAB_00e2bcd4;
                    uVar10 = uVar10 - 1;
                    pPVar8 = pPVar8 + 1;
                    pPVar6 = pPVar6 + 1;
                  } while (uVar10 != 0);
                }
              }
              else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0))
              goto LAB_00e2bcd4;
              lVar7 = 0x1cb0;
              goto LAB_00e2bc90;
            }
          }
        }
      }
    }
  }
LAB_00e2bcd4:
  uVar5 = 0;
LAB_00e2bcd8:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
                    /* catch() { ... } // from try @ 00e2c048 with catch @ 00e2bd04 */
  return;
}

