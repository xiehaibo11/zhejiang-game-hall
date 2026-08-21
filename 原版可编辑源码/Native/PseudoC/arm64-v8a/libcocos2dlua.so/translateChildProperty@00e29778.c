
/* cocos2d::PULineAffectorTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PULineAffectorTranslator::translateChildProperty
          (PULineAffectorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

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
  PULineAffector *this_00;
  ulong uVar10;
  float local_78 [4];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
  uVar10 = (ulong)((byte)PVar2 >> 1);
  this_00 = *(PULineAffector **)(*(long *)(param_2 + 0x28) + 0x30);
  __n = uVar10;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0xf0] >> 1);
  if ((token[0xf0] & 1) != 0) {
    sVar1 = token._248_8_;
  }
  if (__n == sVar1) {
    pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar8 = param_2 + 0x39;
    }
    pPVar6 = (PUAbstractNode *)(token + 0xf1);
    if ((token[0xf0] & 1) != 0) {
      pPVar6 = (PUAbstractNode *)token._256_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar8 = param_2 + 0x39;
        uVar9 = uVar10;
        do {
          if (*pPVar8 != *pPVar6) goto LAB_00e29854;
          uVar9 = uVar9 - 1;
          pPVar8 = pPVar8 + 1;
          pPVar6 = pPVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e29854;
    uVar5 = 0x1789180;
LAB_00e29958:
    uVar10 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,uVar5,0);
    uVar5 = 0;
    if ((uVar10 & 1) == 0) goto LAB_00e29d74;
    local_78[0] = 0.0;
    uVar10 = PUScriptTranslator::getFloat
                       (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),local_78);
    if ((uVar10 & 1) != 0) {
      PULineAffector::setMaxDeviation(this_00,local_78[0]);
      uVar5 = 1;
      goto LAB_00e29d74;
    }
  }
  else {
LAB_00e29854:
    sVar1 = (ulong)(token[0x1b18] >> 1);
    if ((token[0x1b18] & 1) != 0) {
      sVar1 = token._6944_8_;
    }
                    /* try { // try from 00e29874 to 00f2988b has its CatchHandler @ 00e29a94 */
    if (__n == sVar1) {
      pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
                    /* try { // try from 00e2988c to 00f29a83 has its CatchHandler @ 00e29444 */
      if (((byte)PVar2 & 1) == 0) {
        pPVar8 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x1b19);
      if ((token[0x1b18] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._6952_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar8 = param_2 + 0x39;
          uVar9 = uVar10;
          do {
            if (*pPVar8 != *pPVar6) goto LAB_00e298e4;
            uVar9 = uVar9 - 1;
            pPVar8 = pPVar8 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e298e4;
      uVar5 = 0x178aba8;
      goto LAB_00e29958;
    }
LAB_00e298e4:
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
            if (*pPVar8 != *pPVar6) goto LAB_00e299b4;
            uVar9 = uVar9 - 1;
            pPVar8 = pPVar8 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e299b4;
      uVar5 = 0x1789198;
LAB_00e29ac4:
      uVar10 = PUScriptTranslator::passValidateProperty
                         ((PUScriptTranslator *)this,param_1,param_2,uVar5,0);
      uVar5 = 0;
      if ((uVar10 & 1) == 0) goto LAB_00e29d74;
      local_78[0] = 0.0;
      uVar10 = PUScriptTranslator::getFloat
                         (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),local_78);
      if ((uVar10 & 1) != 0) {
        PULineAffector::setTimeStep(this_00,local_78[0]);
        uVar5 = 1;
        goto LAB_00e29d74;
      }
    }
    else {
LAB_00e299b4:
      sVar1 = (ulong)(token[0x1b30] >> 1);
      if ((token[0x1b30] & 1) != 0) {
        sVar1 = token._6968_8_;
      }
      if (__n == sVar1) {
        pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar2 & 1) == 0) {
          pPVar8 = param_2 + 0x39;
        }
        pPVar6 = (PUAbstractNode *)(token + 0x1b31);
        if ((token[0x1b30] & 1) != 0) {
          pPVar6 = (PUAbstractNode *)token._6976_8_;
        }
        if (((byte)PVar2 & 1) == 0) {
          if (__n != 0) {
            pPVar8 = param_2 + 0x39;
            uVar9 = uVar10;
            do {
              if (*pPVar8 != *pPVar6) goto LAB_00e29a44;
              uVar9 = uVar9 - 1;
              pPVar8 = pPVar8 + 1;
              pPVar6 = pPVar6 + 1;
            } while (uVar9 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e29a44;
        uVar5 = 0x178abc0;
        goto LAB_00e29ac4;
      }
LAB_00e29a44:
      sVar1 = (ulong)(token[0x1ae8] >> 1);
      if ((token[0x1ae8] & 1) != 0) {
        sVar1 = token._6896_8_;
      }
      if (__n == sVar1) {
        pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar2 & 1) == 0) {
          pPVar8 = param_2 + 0x39;
        }
        pPVar6 = (PUAbstractNode *)(token + 0x1ae9);
                    /* try { // try from 00e29a84 to 00f29a8b has its CatchHandler @ 00e29a90 */
        if ((token[0x1ae8] & 1) != 0) {
          pPVar6 = (PUAbstractNode *)token._6904_8_;
        }
        if (((byte)PVar2 & 1) == 0) {
                    /* try { // try from 00e29a8c to 00f29c4b has its CatchHandler @ 00e29444 */
          if (__n != 0) {
                    /* catch() { ... } // from try @ 00e29a84 with catch @ 00e29a90 */
            pPVar8 = param_2 + 0x39;
                    /* catch() { ... } // from try @ 00e29874 with catch @ 00e29a94 */
            uVar9 = uVar10;
            do {
              if (*pPVar8 != *pPVar6) goto LAB_00e29b20;
              uVar9 = uVar9 - 1;
              pPVar8 = pPVar8 + 1;
              pPVar6 = pPVar6 + 1;
            } while (uVar9 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e29b20;
        lVar7 = 0x1ae8;
LAB_00e29c2c:
        uVar10 = PUScriptTranslator::passValidateProperty
                           ((PUScriptTranslator *)this,param_1,param_2,token + lVar7,6);
        if ((uVar10 & 1) != 0) {
                    /* try { // try from 00e29c4c to 00f29c8f has its CatchHandler @ 00e29c4c
                       catch() { ... } // from try @ 00e29c4c with catch @ 00e29c4c
                       catch() { ... } // from try @ 00e29d08 with catch @ 00e29c4c */
          Vec3::Vec3((Vec3 *)local_78);
          uVar10 = PUScriptTranslator::getVector3
                             ((PUScriptTranslator *)this,*(undefined8 *)(param_2 + 0x60),
                              param_2 + 0x58,local_78,3);
          if ((uVar10 & 1) != 0) {
            PULineAffector::setEnd(this_00,(Vec3 *)local_78);
            uVar5 = 1;
            goto LAB_00e29d74;
          }
        }
      }
      else {
LAB_00e29b20:
        sVar1 = (ulong)(token[0x1b48] >> 1);
        if ((token[0x1b48] & 1) != 0) {
          sVar1 = token._6992_8_;
        }
        if (__n == sVar1) {
          pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
          if (((byte)PVar2 & 1) == 0) {
            pPVar8 = param_2 + 0x39;
          }
          pPVar6 = (PUAbstractNode *)(token + 0x1b49);
          if ((token[0x1b48] & 1) != 0) {
            pPVar6 = (PUAbstractNode *)token._7000_8_;
          }
          if (((byte)PVar2 & 1) == 0) {
            if (__n != 0) {
              pPVar8 = param_2 + 0x39;
              uVar9 = uVar10;
              do {
                    /* catch() { ... } // from try @ 00e294b4 with catch @ 00e29b80 */
                if (*pPVar8 != *pPVar6) goto LAB_00e29bb0;
                uVar9 = uVar9 - 1;
                pPVar8 = pPVar8 + 1;
                pPVar6 = pPVar6 + 1;
              } while (uVar9 != 0);
            }
          }
          else {
                    /* catch() { ... } // from try @ 00e29528 with catch @ 00e29ba4 */
                    /* catch() { ... } // from try @ 00e294bc with catch @ 00e29ba8 */
            if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e29bb0;
          }
          lVar7 = 0x1b48;
          goto LAB_00e29c2c;
        }
LAB_00e29bb0:
                    /* catch() { ... } // from try @ 00e296b0 with catch @ 00e29bb8 */
        sVar1 = (ulong)(token[0x1b00] >> 1);
        if ((token[0x1b00] & 1) != 0) {
          sVar1 = token._6920_8_;
        }
        if (__n == sVar1) {
          pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
          if (((byte)PVar2 & 1) == 0) {
            pPVar8 = param_2 + 0x39;
          }
          pPVar6 = (PUAbstractNode *)(token + 0x1b01);
          if ((token[0x1b00] & 1) != 0) {
            pPVar6 = (PUAbstractNode *)token._6928_8_;
          }
          if (((byte)PVar2 & 1) == 0) {
            if (__n != 0) {
              pPVar8 = param_2 + 0x39;
              uVar9 = uVar10;
              do {
                if (*pPVar8 != *pPVar6) goto LAB_00e29c90;
                uVar9 = uVar9 - 1;
                pPVar8 = pPVar8 + 1;
                pPVar6 = pPVar6 + 1;
              } while (uVar9 != 0);
            }
          }
          else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e29c90;
                    /* try { // try from 00e29d04 to 00f29d07 has its CatchHandler @ 00e29d28 */
          lVar7 = 0x1b00;
                    /* try { // try from 00e29d08 to 00f29ddf has its CatchHandler @ 00e29c4c */
LAB_00e29d20:
                    /* catch() { ... } // from try @ 00e29d04 with catch @ 00e29d28 */
          uVar10 = PUScriptTranslator::passValidateProperty
                             ((PUScriptTranslator *)this,param_1,param_2,token + lVar7,0);
                    /* catch() { ... } // from try @ 00e29cf8 with catch @ 00e29d3c */
          uVar5 = 0;
          if ((uVar10 & 1) == 0) goto LAB_00e29d74;
          local_78[0] = 0.0;
          uVar10 = PUScriptTranslator::getFloat
                             (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),local_78);
          if ((uVar10 & 1) != 0) {
            PULineAffector::setDrift(this_00,local_78[0]);
            uVar5 = 1;
            goto LAB_00e29d74;
          }
        }
        else {
LAB_00e29c90:
                    /* try { // try from 00e29c90 to 00f29c9b has its CatchHandler @ 00e29dc4 */
                    /* try { // try from 00e29ca0 to 00f29caf has its CatchHandler @ 00e29da4 */
          sVar1 = (ulong)(token[0x1b60] >> 1);
          if ((token[0x1b60] & 1) != 0) {
            sVar1 = token._7016_8_;
          }
          if (__n == sVar1) {
            pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
            if (((byte)PVar2 & 1) == 0) {
              pPVar8 = param_2 + 0x39;
            }
            pPVar6 = (PUAbstractNode *)(token + 0x1b61);
            if ((token[0x1b60] & 1) != 0) {
              pPVar6 = (PUAbstractNode *)token._7024_8_;
            }
            if (((byte)PVar2 & 1) == 0) {
                    /* try { // try from 00e29cd8 to 00f29cdf has its CatchHandler @ 00e29d84 */
              if (__n != 0) {
                pPVar8 = param_2 + 0x39;
                do {
                  if (*pPVar8 != *pPVar6) goto LAB_00e29d70;
                  uVar10 = uVar10 - 1;
                  pPVar8 = pPVar8 + 1;
                    /* try { // try from 00e29cf8 to 00f29cff has its CatchHandler @ 00e29d3c */
                  pPVar6 = pPVar6 + 1;
                } while (uVar10 != 0);
              }
            }
            else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0))
            goto LAB_00e29d70;
            lVar7 = 0x1b60;
            goto LAB_00e29d20;
          }
        }
      }
    }
  }
LAB_00e29d70:
  uVar5 = 0;
LAB_00e29d74:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00e29ca0 with catch @ 00e29da4 */
    __stack_chk_fail(uVar5);
  }
                    /* catch() { ... } // from try @ 00e29cd8 with catch @ 00e29d84 */
  return;
}

