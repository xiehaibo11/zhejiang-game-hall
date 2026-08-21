
/* cocos2d::PUVortexAffectorTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUVortexAffectorTranslator::translateChildProperty
          (PUVortexAffectorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

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
  PUVortexAffector *this_01;
  ulong uVar9;
  float local_78 [4];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
                    /* try { // try from 00e30df4 to 00f30dff has its CatchHandler @ 00e30e2c */
  uVar9 = (ulong)((byte)PVar2 >> 1);
  this_01 = *(PUVortexAffector **)(*(long *)(param_2 + 0x28) + 0x30);
                    /* try { // try from 00e30e00 to 00f30e77 has its CatchHandler @ 00e30c8c */
  __n = uVar9;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x1c8] >> 1);
  if ((token[0x1c8] & 1) != 0) {
    sVar1 = token._464_8_;
  }
  if (__n == sVar1) {
    pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar7 = param_2 + 0x39;
    }
                    /* catch() { ... } // from try @ 00e30df4 with catch @ 00e30e2c */
    pPVar6 = (PUAbstractNode *)(token + 0x1c9);
    if ((token[0x1c8] & 1) != 0) {
      pPVar6 = (PUAbstractNode *)token._472_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar7 = param_2 + 0x39;
        uVar8 = uVar9;
        do {
                    /* catch() { ... } // from try @ 00e30d00 with catch @ 00e30e44 */
          if (*pPVar7 != *pPVar6) goto LAB_00e30e78;
          uVar8 = uVar8 - 1;
          pPVar7 = pPVar7 + 1;
          pPVar6 = pPVar6 + 1;
        } while (uVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e30e78;
    uVar5 = 0x1789258;
LAB_00e30f7c:
    uVar9 = PUScriptTranslator::passValidateProperty
                      ((PUScriptTranslator *)this,param_1,param_2,uVar5,6);
    if ((uVar9 & 1) != 0) {
      Vec3::Vec3((Vec3 *)local_78);
      uVar9 = PUScriptTranslator::getVector3
                        ((PUScriptTranslator *)this,*(undefined8 *)(param_2 + 0x60),param_2 + 0x58,
                         local_78,3);
      if ((uVar9 & 1) != 0) {
        PUVortexAffector::setRotationVector(this_01,(Vec3 *)local_78);
        uVar5 = 1;
        goto LAB_00e3114c;
      }
    }
  }
  else {
LAB_00e30e78:
    sVar1 = (ulong)(token[0x1f38] >> 1);
    if ((token[0x1f38] & 1) != 0) {
      sVar1 = token._8000_8_;
    }
    if (__n == sVar1) {
      pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar7 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x1f39);
      if ((token[0x1f38] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._8008_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar7 = param_2 + 0x39;
          uVar8 = uVar9;
          do {
            if (*pPVar7 != *pPVar6) goto LAB_00e30f08;
            uVar8 = uVar8 - 1;
            pPVar7 = pPVar7 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar8 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e30f08;
      uVar5 = 0x178afc8;
      goto LAB_00e30f7c;
    }
LAB_00e30f08:
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
            if (*pPVar7 != *pPVar6) goto LAB_00e30fdc;
            uVar8 = uVar8 - 1;
            pPVar7 = pPVar7 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar8 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e30fdc;
      uVar9 = PUScriptTranslator::passValidateProperty
                        ((PUScriptTranslator *)this,param_1,param_2,0x1789228,0);
      uVar5 = 0;
                    /* catch() { ... } // from try @ 00e310d0 with catch @ 00e31070 */
      if ((uVar9 & 1) == 0) goto LAB_00e3114c;
      local_78[0] = 0.0;
      uVar9 = PUScriptTranslator::getFloat
                        (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),local_78);
      if ((uVar9 & 1) == 0) goto LAB_00e31148;
      this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
      if (this_00 != (PUDynamicAttributeFixed *)0x0) {
        PUDynamicAttributeFixed::PUDynamicAttributeFixed(this_00);
                    /* try { // try from 00e310ac to 00f310b3 has its CatchHandler @ 00e31154 */
      }
LAB_00e31120:
      (**(code **)(*(long *)this_00 + 0x28))(local_78[0],this_00);
      PUVortexAffector::setRotationSpeed(this_01,(PUDynamicAttribute *)this_00);
      uVar5 = 1;
                    /* catch() { ... } // from try @ 00e310cc with catch @ 00e31144 */
      goto LAB_00e3114c;
    }
LAB_00e30fdc:
    sVar1 = (ulong)(token[0x1f50] >> 1);
    if ((token[0x1f50] & 1) != 0) {
      sVar1 = token._8024_8_;
    }
    if (__n == sVar1) {
      pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar7 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x1f51);
      if ((token[0x1f50] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._8032_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar7 = param_2 + 0x39;
          do {
            if (*pPVar7 != *pPVar6) goto LAB_00e31148;
            uVar9 = uVar9 - 1;
            pPVar7 = pPVar7 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e31148;
                    /* try { // try from 00e310cc to 00f310cf has its CatchHandler @ 00e31144 */
                    /* try { // try from 00e310d0 to 00f3116f has its CatchHandler @ 00e31070 */
      uVar9 = PUScriptTranslator::passValidateProperty
                        ((PUScriptTranslator *)this,param_1,param_2,0x178afe0,0);
      uVar5 = 0;
      if ((uVar9 & 1) == 0) goto LAB_00e3114c;
      local_78[0] = 0.0;
      uVar9 = PUScriptTranslator::getFloat
                        (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),local_78);
      if ((uVar9 & 1) != 0) {
        this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
        if (this_00 != (PUDynamicAttributeFixed *)0x0) {
          PUDynamicAttributeFixed::PUDynamicAttributeFixed(this_00);
        }
        goto LAB_00e31120;
      }
    }
  }
LAB_00e31148:
  uVar5 = 0;
LAB_00e3114c:
                    /* catch() { ... } // from try @ 00e310ac with catch @ 00e31154 */
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

