
/* cocos2d::PUTextureRotatorTranslator::translateChildObject(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

undefined4 __thiscall
cocos2d::PUTextureRotatorTranslator::translateChildObject
          (PUTextureRotatorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  size_t __n;
  size_t sVar1;
  PUAbstractNode PVar2;
  long lVar3;
  int iVar4;
  PUAbstractNode *pPVar5;
  PUAbstractNode *pPVar6;
  ulong uVar7;
  undefined4 uVar8;
  PUTextureRotator *this_00;
  ulong uVar9;
  PUDynamicAttributeTranslator aPStack_78 [16];
  long local_68;
  
                    /* try { // try from 00e30138 to 00f30207 has its CatchHandler @ 00e2f8cc */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this_00 = *(PUTextureRotator **)(*(long *)(param_2 + 0x28) + 0x30);
  PUDynamicAttributeTranslator::PUDynamicAttributeTranslator(aPStack_78);
  PVar2 = param_2[0x78];
                    /* catch() { ... } // from try @ 00e30128 with catch @ 00e30180 */
                    /* catch() { ... } // from try @ 00e30120 with catch @ 00e30190 */
  uVar9 = (ulong)((byte)PVar2 >> 1);
  __n = uVar9;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x80);
  }
                    /* catch() { ... } // from try @ 00e3006c with catch @ 00e301a0 */
  sVar1 = (ulong)(token[0x198] >> 1);
                    /* catch() { ... } // from try @ 00e30030 with catch @ 00e301a4 */
  if ((token[0x198] & 1) != 0) {
    sVar1 = token._416_8_;
  }
                    /* catch() { ... } // from try @ 00e2fff4 with catch @ 00e301a8 */
                    /* catch() { ... } // from try @ 00e2ffb8 with catch @ 00e301ac */
  if (__n == sVar1) {
                    /* catch() { ... } // from try @ 00e2ff70 with catch @ 00e301b0 */
    pPVar6 = *(PUAbstractNode **)(param_2 + 0x88);
                    /* catch() { ... } // from try @ 00e2ff28 with catch @ 00e301b4 */
                    /* catch() { ... } // from try @ 00e2fed0 with catch @ 00e301b8 */
                    /* catch() { ... } // from try @ 00e2fe94 with catch @ 00e301bc */
                    /* catch() { ... } // from try @ 00e2fe50 with catch @ 00e301c0 */
    if (((byte)PVar2 & 1) == 0) {
      pPVar6 = param_2 + 0x79;
    }
                    /* catch() { ... } // from try @ 00e2fe00 with catch @ 00e301c4 */
    pPVar5 = (PUAbstractNode *)(token + 0x199);
                    /* catch() { ... } // from try @ 00e2fdbc with catch @ 00e301c8 */
    if ((token[0x198] & 1) != 0) {
      pPVar5 = (PUAbstractNode *)token._424_8_;
    }
                    /* catch() { ... } // from try @ 00e2fcf0 with catch @ 00e301cc */
    if (((byte)PVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 00e2fc04 with catch @ 00e301d0 */
      if (__n != 0) {
        pPVar6 = param_2 + 0x79;
        uVar7 = uVar9;
        do {
                    /* catch() { ... } // from try @ 00e300a0 with catch @ 00e301e4 */
          if (*pPVar6 != *pPVar5) goto LAB_00e30210;
          uVar7 = uVar7 - 1;
          pPVar6 = pPVar6 + 1;
          pPVar5 = pPVar5 + 1;
        } while (uVar7 != 0);
      }
    }
    else {
                    /* try { // try from 00e30208 to 00f30283 has its CatchHandler @ 00e30208
                       catch() { ... } // from try @ 00e30208 with catch @ 00e30208
                       catch() { ... } // from try @ 00e30308 with catch @ 00e30208 */
      if ((__n != 0) && (iVar4 = memcmp(pPVar6,pPVar5,__n), iVar4 != 0)) goto LAB_00e30210;
    }
    PUDynamicAttributeTranslator::translate(aPStack_78,param_1,param_2);
    PUTextureRotator::setRotationSpeed(this_00,*(PUDynamicAttribute **)(param_2 + 0x30));
  }
  else {
LAB_00e30210:
    sVar1 = (ulong)(token[0x1ef0] >> 1);
    if ((token[0x1ef0] & 1) != 0) {
      sVar1 = token._7928_8_;
    }
    if (__n == sVar1) {
      pPVar6 = *(PUAbstractNode **)(param_2 + 0x88);
      if (((byte)PVar2 & 1) == 0) {
        pPVar6 = param_2 + 0x79;
      }
      pPVar5 = (PUAbstractNode *)(token + 0x1ef1);
      if ((token[0x1ef0] & 1) != 0) {
        pPVar5 = (PUAbstractNode *)token._7936_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar6 = param_2 + 0x79;
          uVar7 = uVar9;
          do {
            if (*pPVar6 != *pPVar5) goto LAB_00e302b8;
            uVar7 = uVar7 - 1;
            pPVar6 = pPVar6 + 1;
            pPVar5 = pPVar5 + 1;
          } while (uVar7 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar6,pPVar5,__n), iVar4 != 0)) goto LAB_00e302b8;
      PUDynamicAttributeTranslator::translate(aPStack_78,param_1,param_2);
      PUTextureRotator::setRotationSpeed(this_00,*(PUDynamicAttribute **)(param_2 + 0x30));
    }
    else {
LAB_00e302b8:
      sVar1 = (ulong)(token[0x1b0] >> 1);
                    /* try { // try from 00e302c8 to 00f302ef has its CatchHandler @ 00e30358 */
      if ((token[0x1b0] & 1) != 0) {
        sVar1 = token._440_8_;
      }
      if (__n == sVar1) {
        pPVar6 = *(PUAbstractNode **)(param_2 + 0x88);
        if (((byte)PVar2 & 1) == 0) {
          pPVar6 = param_2 + 0x79;
        }
        pPVar5 = (PUAbstractNode *)(token + 0x1b1);
        if ((token[0x1b0] & 1) != 0) {
          pPVar5 = (PUAbstractNode *)token._448_8_;
        }
                    /* try { // try from 00e302f0 to 00f302fb has its CatchHandler @ 00e30348 */
        if (((byte)PVar2 & 1) == 0) {
          if (__n != 0) {
            pPVar6 = param_2 + 0x79;
                    /* try { // try from 00e302fc to 00f30307 has its CatchHandler @ 00e30344 */
            uVar7 = uVar9;
            do {
                    /* try { // try from 00e30308 to 00f3036f has its CatchHandler @ 00e30208 */
              if (*pPVar6 != *pPVar5) goto LAB_00e30354;
              uVar7 = uVar7 - 1;
              pPVar6 = pPVar6 + 1;
              pPVar5 = pPVar5 + 1;
            } while (uVar7 != 0);
          }
        }
        else {
                    /* catch() { ... } // from try @ 00e302fc with catch @ 00e30344 */
                    /* catch() { ... } // from try @ 00e302f0 with catch @ 00e30348 */
          if ((__n != 0) && (iVar4 = memcmp(pPVar6,pPVar5,__n), iVar4 != 0)) goto LAB_00e30354;
        }
        PUDynamicAttributeTranslator::translate(aPStack_78,param_1,param_2);
        PUTextureRotator::setRotation(this_00,*(PUDynamicAttribute **)(param_2 + 0x30));
      }
      else {
LAB_00e30354:
                    /* catch() { ... } // from try @ 00e302c8 with catch @ 00e30358 */
                    /* catch() { ... } // from try @ 00e30284 with catch @ 00e3035c */
        sVar1 = (ulong)(token[0x1f08] >> 1);
        if ((token[0x1f08] & 1) != 0) {
          sVar1 = token._7952_8_;
        }
        if (__n != sVar1) {
LAB_00e303f8:
          uVar8 = 0;
          goto LAB_00e30420;
        }
        pPVar6 = *(PUAbstractNode **)(param_2 + 0x88);
        if (((byte)PVar2 & 1) == 0) {
          pPVar6 = param_2 + 0x79;
        }
        pPVar5 = (PUAbstractNode *)(token + 0x1f09);
        if ((token[0x1f08] & 1) != 0) {
          pPVar5 = (PUAbstractNode *)token._7960_8_;
        }
        if (((byte)PVar2 & 1) == 0) {
          if (__n != 0) {
            pPVar6 = param_2 + 0x79;
            do {
              if (*pPVar6 != *pPVar5) goto LAB_00e303f8;
              uVar9 = uVar9 - 1;
              pPVar6 = pPVar6 + 1;
              pPVar5 = pPVar5 + 1;
            } while (uVar9 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pPVar6,pPVar5,__n), iVar4 != 0)) goto LAB_00e303f8;
        PUDynamicAttributeTranslator::translate(aPStack_78,param_1,param_2);
        PUTextureRotator::setRotation(this_00,*(PUDynamicAttribute **)(param_2 + 0x30));
      }
    }
  }
  uVar8 = 1;
LAB_00e30420:
  PUDynamicAttributeTranslator::~PUDynamicAttributeTranslator(aPStack_78);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

