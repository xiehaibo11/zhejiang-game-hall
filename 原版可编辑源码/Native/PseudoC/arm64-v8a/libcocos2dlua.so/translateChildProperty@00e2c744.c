
/* cocos2d::PUScaleAffectorTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUScaleAffectorTranslator::translateChildProperty
          (PUScaleAffectorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  size_t __n;
  size_t sVar1;
  PUAbstractNode PVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  PUDynamicAttributeFixed *pPVar6;
  PUAbstractNode *pPVar7;
  PUAbstractNode *pPVar8;
  ulong uVar9;
  PUScaleAffector *this_00;
  ulong uVar10;
  float local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
  uVar10 = (ulong)((byte)PVar2 >> 1);
                    /* catch() { ... } // from try @ 00e2ce98 with catch @ 00e2c7a0 */
  this_00 = *(PUScaleAffector **)(*(long *)(param_2 + 0x28) + 0x30);
  __n = uVar10;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x1ce0] >> 1);
  if ((token[0x1ce0] & 1) != 0) {
    sVar1 = token._7400_8_;
  }
  if (__n == sVar1) {
    pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar8 = param_2 + 0x39;
    }
    pPVar7 = (PUAbstractNode *)(token + 0x1ce1);
    if ((token[0x1ce0] & 1) != 0) {
      pPVar7 = (PUAbstractNode *)token._7408_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar8 = param_2 + 0x39;
        uVar9 = uVar10;
        do {
          if (*pPVar8 != *pPVar7) goto LAB_00e2c82c;
          uVar9 = uVar9 - 1;
          pPVar8 = pPVar8 + 1;
          pPVar7 = pPVar7 + 1;
        } while (uVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar7,__n), iVar4 != 0)) goto LAB_00e2c82c;
    uVar10 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,0x178ad70,0);
    uVar5 = 0;
    if ((uVar10 & 1) == 0) goto LAB_00e2cc90;
    local_6c = 0.0;
    uVar10 = PUScriptTranslator::getFloat
                       (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_6c);
    if ((uVar10 & 1) != 0) {
      pPVar6 = operator_new(0x30,(nothrow_t *)&std::nothrow);
      if (pPVar6 != (PUDynamicAttributeFixed *)0x0) {
        PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar6);
      }
      (**(code **)(*(long *)pPVar6 + 0x28))(local_6c,pPVar6);
      PUScaleAffector::setDynScaleXYZ(this_00,(PUDynamicAttribute *)pPVar6);
      goto LAB_00e2cc84;
    }
    goto LAB_00e2cc8c;
  }
LAB_00e2c82c:
  sVar1 = (ulong)(token[0x1cf8] >> 1);
  if ((token[0x1cf8] & 1) != 0) {
    sVar1 = token._7424_8_;
  }
  if (__n == sVar1) {
    pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar8 = param_2 + 0x39;
    }
    pPVar7 = (PUAbstractNode *)(token + 0x1cf9);
    if ((token[0x1cf8] & 1) != 0) {
      pPVar7 = (PUAbstractNode *)token._7432_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar8 = param_2 + 0x39;
        uVar9 = uVar10;
        do {
          if (*pPVar8 != *pPVar7) goto LAB_00e2c938;
          uVar9 = uVar9 - 1;
          pPVar8 = pPVar8 + 1;
          pPVar7 = pPVar7 + 1;
        } while (uVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar7,__n), iVar4 != 0)) goto LAB_00e2c938;
    uVar10 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,0x178ad88,0);
    uVar5 = 0;
    if ((uVar10 & 1) == 0) goto LAB_00e2cc90;
    local_6c = 0.0;
    uVar10 = PUScriptTranslator::getFloat
                       (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_6c);
    if ((uVar10 & 1) == 0) goto LAB_00e2cc8c;
    pPVar6 = operator_new(0x30,(nothrow_t *)&std::nothrow);
    if (pPVar6 != (PUDynamicAttributeFixed *)0x0) {
      PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar6);
    }
    (**(code **)(*(long *)pPVar6 + 0x28))(local_6c,pPVar6);
    PUScaleAffector::setDynScaleX(this_00,(PUDynamicAttribute *)pPVar6);
  }
  else {
LAB_00e2c938:
    sVar1 = (ulong)(token[0x1d10] >> 1);
    if ((token[0x1d10] & 1) != 0) {
      sVar1 = token._7448_8_;
    }
    if (__n == sVar1) {
      pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar8 = param_2 + 0x39;
      }
      pPVar7 = (PUAbstractNode *)(token + 0x1d11);
      if ((token[0x1d10] & 1) != 0) {
        pPVar7 = (PUAbstractNode *)token._7456_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar8 = param_2 + 0x39;
          uVar9 = uVar10;
          do {
            if (*pPVar8 != *pPVar7) goto LAB_00e2ca44;
            uVar9 = uVar9 - 1;
            pPVar8 = pPVar8 + 1;
            pPVar7 = pPVar7 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar7,__n), iVar4 != 0)) goto LAB_00e2ca44;
      uVar10 = PUScriptTranslator::passValidateProperty
                         ((PUScriptTranslator *)this,param_1,param_2,0x178ada0,0);
      uVar5 = 0;
      if ((uVar10 & 1) == 0) goto LAB_00e2cc90;
      local_6c = 0.0;
      uVar10 = PUScriptTranslator::getFloat
                         (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_6c);
      if ((uVar10 & 1) == 0) goto LAB_00e2cc8c;
      pPVar6 = operator_new(0x30,(nothrow_t *)&std::nothrow);
      if (pPVar6 != (PUDynamicAttributeFixed *)0x0) {
        PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar6);
      }
      (**(code **)(*(long *)pPVar6 + 0x28))(local_6c,pPVar6);
      PUScaleAffector::setDynScaleY(this_00,(PUDynamicAttribute *)pPVar6);
    }
    else {
LAB_00e2ca44:
      sVar1 = (ulong)(token[0x1d28] >> 1);
      if ((token[0x1d28] & 1) != 0) {
        sVar1 = token._7472_8_;
      }
      if (__n != sVar1) {
LAB_00e2cb50:
        sVar1 = (ulong)(token[0x438] >> 1);
        if ((token[0x438] & 1) != 0) {
          sVar1 = token._1088_8_;
        }
        if (__n == sVar1) {
          pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
          if (((byte)PVar2 & 1) == 0) {
            pPVar8 = param_2 + 0x39;
          }
          pPVar7 = (PUAbstractNode *)(token + 0x439);
          if ((token[0x438] & 1) != 0) {
            pPVar7 = (PUAbstractNode *)token._1096_8_;
          }
          if (((byte)PVar2 & 1) == 0) {
            if (__n != 0) {
              pPVar8 = param_2 + 0x39;
              do {
                if (*pPVar8 != *pPVar7) goto LAB_00e2cc8c;
                uVar10 = uVar10 - 1;
                pPVar8 = pPVar8 + 1;
                pPVar7 = pPVar7 + 1;
              } while (uVar10 != 0);
            }
          }
          else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar7,__n), iVar4 != 0)) goto LAB_00e2cc8c;
          uVar10 = PUScriptTranslator::passValidateProperty
                             ((PUScriptTranslator *)this,param_1,param_2,0x17894c8,1);
          if (((uVar10 & 1) != 0) &&
             (uVar10 = PUScriptTranslator::getBoolean
                                 (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                                  (bool *)&local_6c), (uVar10 & 1) != 0)) {
            this_00[0xd5] = local_6c._0_1_;
            goto LAB_00e2cc84;
          }
        }
LAB_00e2cc8c:
        uVar5 = 0;
        goto LAB_00e2cc90;
      }
      pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar8 = param_2 + 0x39;
      }
      pPVar7 = (PUAbstractNode *)(token + 0x1d29);
      if ((token[0x1d28] & 1) != 0) {
        pPVar7 = (PUAbstractNode *)token._7480_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar8 = param_2 + 0x39;
          uVar9 = uVar10;
          do {
            if (*pPVar8 != *pPVar7) goto LAB_00e2cb50;
            uVar9 = uVar9 - 1;
            pPVar8 = pPVar8 + 1;
            pPVar7 = pPVar7 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar7,__n), iVar4 != 0)) goto LAB_00e2cb50;
      uVar10 = PUScriptTranslator::passValidateProperty
                         ((PUScriptTranslator *)this,param_1,param_2,0x178adb8,0);
      uVar5 = 0;
      if ((uVar10 & 1) == 0) goto LAB_00e2cc90;
      local_6c = 0.0;
      uVar10 = PUScriptTranslator::getFloat
                         (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_6c);
      if ((uVar10 & 1) == 0) goto LAB_00e2cc8c;
      pPVar6 = operator_new(0x30,(nothrow_t *)&std::nothrow);
      if (pPVar6 != (PUDynamicAttributeFixed *)0x0) {
        PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar6);
      }
      (**(code **)(*(long *)pPVar6 + 0x28))(local_6c,pPVar6);
      PUScaleAffector::setDynScaleZ(this_00,(PUDynamicAttribute *)pPVar6);
    }
  }
LAB_00e2cc84:
  uVar5 = 1;
LAB_00e2cc90:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

