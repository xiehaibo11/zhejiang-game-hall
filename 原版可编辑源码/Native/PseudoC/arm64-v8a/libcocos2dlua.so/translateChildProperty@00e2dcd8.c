
/* cocos2d::PUSineForceAffectorTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

uint __thiscall
cocos2d::PUSineForceAffectorTranslator::translateChildProperty
          (PUSineForceAffectorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  size_t __n;
  size_t sVar1;
  PUAbstractNode PVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  PUAbstractNode *pPVar6;
  long lVar7;
  PUAbstractNode *pPVar8;
  ulong uVar9;
  PUSineForceAffector *this_00;
  ulong uVar10;
  float local_70 [2];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
                    /* try { // try from 00e2dd20 to 00f2dd2f has its CatchHandler @ 00e2ddc8 */
  uVar10 = (ulong)((byte)PVar2 >> 1);
                    /* try { // try from 00e2dd30 to 00f2dde3 has its CatchHandler @ 00e2dcc0 */
  this_00 = *(PUSineForceAffector **)(*(long *)(param_2 + 0x28) + 0x30);
  __n = uVar10;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x1da0] >> 1);
  if ((token[0x1da0] & 1) != 0) {
    sVar1 = token._7592_8_;
  }
  if (__n == sVar1) {
    pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar8 = param_2 + 0x39;
    }
    pPVar6 = (PUAbstractNode *)(token + 0x1da1);
    if ((token[0x1da0] & 1) != 0) {
      pPVar6 = (PUAbstractNode *)token._7600_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar8 = param_2 + 0x39;
        uVar9 = uVar10;
        do {
          if (*pPVar8 != *pPVar6) goto LAB_00e2ddc0;
          uVar9 = uVar9 - 1;
          pPVar8 = pPVar8 + 1;
          pPVar6 = pPVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e2ddc0;
    lVar7 = 0x1da0;
LAB_00e2decc:
    uVar10 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,token + lVar7,0);
    uVar5 = 0;
    if ((uVar10 & 1) == 0) goto LAB_00e2e030;
    local_70[0] = 0.0;
    uVar10 = PUScriptTranslator::getFloat
                       (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),local_70);
    if ((uVar10 & 1) != 0) {
      PUSineForceAffector::setFrequencyMin(this_00,local_70[0]);
      uVar5 = 1;
      goto LAB_00e2e030;
    }
  }
  else {
LAB_00e2ddc0:
                    /* catch() { ... } // from try @ 00e2dd20 with catch @ 00e2ddc8 */
    sVar1 = (ulong)(token[0x1d70] >> 1);
    if ((token[0x1d70] & 1) != 0) {
      sVar1 = token._7544_8_;
    }
    if (__n == sVar1) {
      pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar8 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x1d71);
      if ((token[0x1d70] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._7552_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar8 = param_2 + 0x39;
          uVar9 = uVar10;
          do {
            if (*pPVar8 != *pPVar6) goto LAB_00e2de50;
            uVar9 = uVar9 - 1;
            pPVar8 = pPVar8 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e2de50;
      lVar7 = 0x1d70;
      goto LAB_00e2decc;
    }
LAB_00e2de50:
    sVar1 = (ulong)(token[0x1db8] >> 1);
    if ((token[0x1db8] & 1) != 0) {
      sVar1 = token._7616_8_;
    }
    if (__n == sVar1) {
      pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar8 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x1db9);
      if ((token[0x1db8] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._7624_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar8 = param_2 + 0x39;
          uVar9 = uVar10;
          do {
            if (*pPVar8 != *pPVar6) goto LAB_00e2df28;
            uVar9 = uVar9 - 1;
            pPVar8 = pPVar8 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e2df28;
      lVar7 = 0x1db8;
    }
    else {
LAB_00e2df28:
      sVar1 = (ulong)(token[0x1d88] >> 1);
      if ((token[0x1d88] & 1) != 0) {
        sVar1 = token._7568_8_;
      }
      if (__n != sVar1) {
LAB_00e2dfb4:
                    /* try { // try from 00e2dfb8 to 00f2dfbf has its CatchHandler @ 00e2e18c */
        PUBaseForceAffectorTranslator::PUBaseForceAffectorTranslator
                  ((PUBaseForceAffectorTranslator *)local_70);
        uVar5 = PUBaseForceAffectorTranslator::translateChildProperty
                          ((PUBaseForceAffectorTranslator *)local_70,param_1,param_2);
        PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)local_70);
        goto LAB_00e2e030;
      }
      pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
                    /* try { // try from 00e2df5c to 00f2dfb7 has its CatchHandler @ 00e2df5c
                       catch() { ... } // from try @ 00e2df5c with catch @ 00e2df5c
                       catch() { ... } // from try @ 00e2e024 with catch @ 00e2df5c */
      if (((byte)PVar2 & 1) == 0) {
        pPVar8 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x1d89);
      if ((token[0x1d88] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._7576_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar8 = param_2 + 0x39;
          do {
            if (*pPVar8 != *pPVar6) goto LAB_00e2dfb4;
            uVar10 = uVar10 - 1;
            pPVar8 = pPVar8 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar10 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e2dfb4;
      lVar7 = 0x1d88;
    }
                    /* try { // try from 00e2dfe0 to 00f2dfe3 has its CatchHandler @ 00e2e174 */
    uVar10 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,token + lVar7,0);
    uVar5 = 0;
    if ((uVar10 & 1) == 0) goto LAB_00e2e030;
    local_70[0] = 0.0;
    uVar10 = PUScriptTranslator::getFloat
                       (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),local_70);
    if ((uVar10 & 1) != 0) {
                    /* try { // try from 00e2e018 to 00f2e023 has its CatchHandler @ 00e2e038 */
      PUSineForceAffector::setFrequencyMax(this_00,local_70[0]);
                    /* try { // try from 00e2e024 to 00f2e1bb has its CatchHandler @ 00e2df5c */
      uVar5 = 1;
      goto LAB_00e2e030;
    }
  }
  uVar5 = 0;
LAB_00e2e030:
                    /* catch() { ... } // from try @ 00e2e018 with catch @ 00e2e038 */
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5 & 1;
}

