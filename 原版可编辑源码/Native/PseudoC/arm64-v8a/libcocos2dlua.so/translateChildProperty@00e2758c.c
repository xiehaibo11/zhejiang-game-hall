
/* cocos2d::PUGeometryRotatorTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUGeometryRotatorTranslator::translateChildProperty
          (PUGeometryRotatorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  size_t __n;
  size_t sVar1;
  PUAbstractNode PVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  PUDynamicAttributeFixed *this_00;
  PUAbstractNode *pPVar6;
  PUAbstractNode *pPVar7;
  ulong uVar8;
  PUGeometryRotator *this_01;
  ulong uVar9;
  float local_78 [4];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
  uVar9 = (ulong)((byte)PVar2 >> 1);
  this_01 = *(PUGeometryRotator **)(*(long *)(param_2 + 0x28) + 0x30);
  __n = uVar9;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0xd8] >> 1);
  if ((token[0xd8] & 1) != 0) {
    sVar1 = token._224_8_;
  }
  if (__n == sVar1) {
    pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar7 = param_2 + 0x39;
    }
    pPVar6 = (PUAbstractNode *)(token + 0xd9);
    if ((token[0xd8] & 1) != 0) {
      pPVar6 = (PUAbstractNode *)token._232_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar7 = param_2 + 0x39;
        uVar8 = uVar9;
        do {
          if (*pPVar7 != *pPVar6) goto LAB_00e27668;
          uVar8 = uVar8 - 1;
                    /* try { // try from 00e27648 to 00f2764f has its CatchHandler @ 00e27908 */
          pPVar7 = pPVar7 + 1;
          pPVar6 = pPVar6 + 1;
        } while (uVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e27668;
    uVar5 = 0x1789168;
LAB_00e2776c:
    uVar9 = PUScriptTranslator::passValidateProperty
                      ((PUScriptTranslator *)this,param_1,param_2,uVar5,1);
    if (((uVar9 & 1) != 0) &&
       (uVar9 = PUScriptTranslator::getBoolean
                          (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),(bool *)local_78),
       (uVar9 & 1) != 0)) {
      PUGeometryRotator::setUseOwnRotationSpeed(this_01,(bool)local_78[0]._0_1_);
      uVar5 = 1;
      goto LAB_00e27a90;
    }
  }
  else {
LAB_00e27668:
    sVar1 = (ulong)(token[0x19e0] >> 1);
    if ((token[0x19e0] & 1) != 0) {
      sVar1 = token._6632_8_;
    }
    if (__n == sVar1) {
      pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar7 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x19e1);
      if ((token[0x19e0] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._6640_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar7 = param_2 + 0x39;
          uVar8 = uVar9;
          do {
            if (*pPVar7 != *pPVar6) goto LAB_00e276f8;
            uVar8 = uVar8 - 1;
            pPVar7 = pPVar7 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar8 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e276f8;
                    /* try { // try from 00e27764 to 00f2776b has its CatchHandler @ 00e2790c */
      uVar5 = 0x178aa70;
      goto LAB_00e2776c;
    }
LAB_00e276f8:
    sVar1 = (ulong)(token[0x198] >> 1);
    if ((token[0x198] & 1) != 0) {
      sVar1 = token._416_8_;
    }
    if (__n == sVar1) {
      pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar7 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x199);
      if ((token[0x198] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._424_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar7 = param_2 + 0x39;
          uVar8 = uVar9;
          do {
                    /* try { // try from 00e27748 to 00f27753 has its CatchHandler @ 00e27910 */
            if (*pPVar7 != *pPVar6) goto LAB_00e277bc;
            uVar8 = uVar8 - 1;
            pPVar7 = pPVar7 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar8 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e277bc;
      uVar9 = PUScriptTranslator::passValidateProperty
                        ((PUScriptTranslator *)this,param_1,param_2,0x1789228,0);
                    /* try { // try from 00e27850 to 00f27867 has its CatchHandler @ 00e27928 */
      uVar5 = 0;
      if ((uVar9 & 1) == 0) goto LAB_00e27a90;
      local_78[0] = 0.0;
      uVar9 = PUScriptTranslator::getFloat
                        (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),local_78);
      if ((uVar9 & 1) != 0) {
                    /* try { // try from 00e27878 to 00f2787f has its CatchHandler @ 00e27924 */
        this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00e27880 to 00f27943 has its CatchHandler @ 00e26d1c */
        if (this_00 != (PUDynamicAttributeFixed *)0x0) {
          PUDynamicAttributeFixed::PUDynamicAttributeFixed(this_00);
        }
LAB_00e27970:
        (**(code **)(*(long *)this_00 + 0x28))(local_78[0],this_00);
        PUGeometryRotator::setRotationSpeed(this_01,(PUDynamicAttribute *)this_00);
        uVar5 = 1;
        goto LAB_00e27a90;
      }
    }
    else {
LAB_00e277bc:
      sVar1 = (ulong)(token[0x19f8] >> 1);
      if ((token[0x19f8] & 1) != 0) {
        sVar1 = token._6656_8_;
      }
      if (__n == sVar1) {
        pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar2 & 1) == 0) {
          pPVar7 = param_2 + 0x39;
        }
        pPVar6 = (PUAbstractNode *)(token + 0x19f9);
        if ((token[0x19f8] & 1) != 0) {
          pPVar6 = (PUAbstractNode *)token._6664_8_;
        }
        if (((byte)PVar2 & 1) == 0) {
          if (__n != 0) {
            pPVar7 = param_2 + 0x39;
            uVar8 = uVar9;
            do {
                    /* try { // try from 00e27810 to 00f27817 has its CatchHandler @ 00e27924 */
              if (*pPVar7 != *pPVar6) goto LAB_00e278a4;
              uVar8 = uVar8 - 1;
              pPVar7 = pPVar7 + 1;
              pPVar6 = pPVar6 + 1;
            } while (uVar8 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e278a4;
                    /* catch() { ... } // from try @ 00e27748 with catch @ 00e27910 */
                    /* catch() { ... } // from try @ 00e27810 with catch @ 00e27924
                       catch() { ... } // from try @ 00e27878 with catch @ 00e27924 */
                    /* catch() { ... } // from try @ 00e27850 with catch @ 00e27928 */
        uVar9 = PUScriptTranslator::passValidateProperty
                          ((PUScriptTranslator *)this,param_1,param_2,0x178aa88,0);
        uVar5 = 0;
        if ((uVar9 & 1) == 0) goto LAB_00e27a90;
        local_78[0] = 0.0;
                    /* catch() { ... } // from try @ 00e27a2c with catch @ 00e27944 */
        uVar9 = PUScriptTranslator::getFloat
                          (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),local_78);
        if ((uVar9 & 1) != 0) {
          this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
          if (this_00 != (PUDynamicAttributeFixed *)0x0) {
            PUDynamicAttributeFixed::PUDynamicAttributeFixed(this_00);
          }
          goto LAB_00e27970;
        }
      }
      else {
LAB_00e278a4:
        sVar1 = (ulong)(token[0x1c8] >> 1);
        if ((token[0x1c8] & 1) != 0) {
          sVar1 = token._464_8_;
        }
        if (__n == sVar1) {
          pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
          if (((byte)PVar2 & 1) == 0) {
            pPVar7 = param_2 + 0x39;
          }
          pPVar6 = (PUAbstractNode *)(token + 0x1c9);
          if ((token[0x1c8] & 1) != 0) {
            pPVar6 = (PUAbstractNode *)token._472_8_;
          }
          if (((byte)PVar2 & 1) == 0) {
            if (__n != 0) {
              pPVar7 = param_2 + 0x39;
              uVar8 = uVar9;
              do {
                if (*pPVar7 != *pPVar6) goto LAB_00e279a8;
                uVar8 = uVar8 - 1;
                pPVar7 = pPVar7 + 1;
                pPVar6 = pPVar6 + 1;
                    /* catch() { ... } // from try @ 00e27648 with catch @ 00e27908 */
              } while (uVar8 != 0);
            }
          }
          else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e279a8;
          uVar5 = 0x1789258;
                    /* try { // try from 00e27a20 to 00f27a2b has its CatchHandler @ 00e27a64 */
        }
        else {
LAB_00e279a8:
          sVar1 = (ulong)(token[0x1a10] >> 1);
          if ((token[0x1a10] & 1) != 0) {
            sVar1 = token._6680_8_;
          }
          if (__n != sVar1) goto LAB_00e27a8c;
          pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
          if (((byte)PVar2 & 1) == 0) {
            pPVar7 = param_2 + 0x39;
          }
          pPVar6 = (PUAbstractNode *)(token + 0x1a11);
          if ((token[0x1a10] & 1) != 0) {
            pPVar6 = (PUAbstractNode *)token._6688_8_;
          }
          if (((byte)PVar2 & 1) == 0) {
            if (__n != 0) {
              pPVar7 = param_2 + 0x39;
              do {
                if (*pPVar7 != *pPVar6) goto LAB_00e27a8c;
                uVar9 = uVar9 - 1;
                pPVar7 = pPVar7 + 1;
                pPVar6 = pPVar6 + 1;
              } while (uVar9 != 0);
            }
          }
          else {
                    /* try { // try from 00e27a2c to 00f27a6b has its CatchHandler @ 00e27944 */
            if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e27a8c;
          }
          uVar5 = 0x178aaa0;
        }
        uVar9 = PUScriptTranslator::passValidateProperty
                          ((PUScriptTranslator *)this,param_1,param_2,uVar5,6);
        if ((uVar9 & 1) != 0) {
          Vec3::Vec3((Vec3 *)local_78);
                    /* catch() { ... } // from try @ 00e27a20 with catch @ 00e27a64 */
          uVar9 = PUScriptTranslator::getVector3
                            ((PUScriptTranslator *)this,*(undefined8 *)(param_2 + 0x60),
                             param_2 + 0x58,local_78,3);
          if ((uVar9 & 1) != 0) {
            PUGeometryRotator::setRotationAxis(this_01,(Vec3 *)local_78);
                    /* try { // try from 00e27a84 to 00f27b0f has its CatchHandler @ 00e27a84
                       catch() { ... } // from try @ 00e27a84 with catch @ 00e27a84
                       catch() { ... } // from try @ 00e27b14 with catch @ 00e27a84 */
            uVar5 = 1;
            goto LAB_00e27a90;
          }
        }
      }
    }
  }
LAB_00e27a8c:
  uVar5 = 0;
LAB_00e27a90:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

