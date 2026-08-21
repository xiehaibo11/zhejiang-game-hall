
/* cocos2d::PUBoxColliderTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

uint __thiscall
cocos2d::PUBoxColliderTranslator::translateChildProperty
          (PUBoxColliderTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  size_t __n;
  size_t sVar1;
  PUAbstractNode PVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  PUAbstractNode *pPVar6;
  undefined8 uVar7;
  PUAbstractNode *pPVar8;
  ulong uVar9;
  PUBoxCollider *this_00;
  ulong uVar10;
  float local_70 [2];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
                    /* try { // try from 00e23fa0 to 00f23fa7 has its CatchHandler @ 00e241ac */
  uVar10 = (ulong)((byte)PVar2 >> 1);
                    /* try { // try from 00e23fa8 to 00f24023 has its CatchHandler @ 00e23df4 */
  this_00 = *(PUBoxCollider **)(*(long *)(param_2 + 0x28) + 0x30);
  __n = uVar10;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x120] >> 1);
  if ((token[0x120] & 1) != 0) {
    sVar1 = token._296_8_;
  }
  if (__n == sVar1) {
    pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar8 = param_2 + 0x39;
    }
    pPVar6 = (PUAbstractNode *)(token + 0x121);
    if ((token[0x120] & 1) != 0) {
      pPVar6 = (PUAbstractNode *)token._304_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar8 = param_2 + 0x39;
        uVar9 = uVar10;
        do {
          if (*pPVar8 != *pPVar6) goto LAB_00e24028;
          uVar9 = uVar9 - 1;
          pPVar8 = pPVar8 + 1;
          pPVar6 = pPVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    else {
                    /* try { // try from 00e24024 to 00f2402b has its CatchHandler @ 00e24194 */
      if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e24028;
    }
    uVar7 = 0x17891b0;
LAB_00e2412c:
    uVar10 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,uVar7,0);
    uVar5 = 0;
    if ((uVar10 & 1) == 0) goto LAB_00e244b8;
    local_70[0] = 0.0;
    uVar10 = PUScriptTranslator::getFloat
                       (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),local_70);
    if ((uVar10 & 1) != 0) {
      PUBoxCollider::setWidth(this_00,local_70[0]);
      uVar5 = 1;
      goto LAB_00e244b8;
    }
  }
  else {
LAB_00e24028:
                    /* try { // try from 00e2402c to 00f2407b has its CatchHandler @ 00e23df4 */
    sVar1 = (ulong)(token[0x15c0] >> 1);
    if ((token[0x15c0] & 1) != 0) {
      sVar1 = token._5576_8_;
    }
    if (__n == sVar1) {
      pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar8 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x15c1);
      if ((token[0x15c0] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._5584_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar8 = param_2 + 0x39;
          uVar9 = uVar10;
          do {
                    /* try { // try from 00e2407c to 00f24087 has its CatchHandler @ 00e241c0 */
            if (*pPVar8 != *pPVar6) goto LAB_00e240b8;
            uVar9 = uVar9 - 1;
            pPVar8 = pPVar8 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar9 != 0);
        }
      }
      else {
                    /* try { // try from 00e240a8 to 00f24183 has its CatchHandler @ 00e23df4 */
        if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e240b8;
      }
      uVar7 = 0x178a650;
      goto LAB_00e2412c;
    }
LAB_00e240b8:
    sVar1 = (ulong)(token[0x138] >> 1);
    if ((token[0x138] & 1) != 0) {
      sVar1 = token._320_8_;
    }
    if (__n == sVar1) {
      pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar8 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x139);
      if ((token[0x138] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._328_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar8 = param_2 + 0x39;
          uVar9 = uVar10;
          do {
            if (*pPVar8 != *pPVar6) goto LAB_00e24184;
            uVar9 = uVar9 - 1;
            pPVar8 = pPVar8 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e24184;
      uVar7 = 0x17891c8;
LAB_00e24288:
      uVar10 = PUScriptTranslator::passValidateProperty
                         ((PUScriptTranslator *)this,param_1,param_2,uVar7,0);
      uVar5 = 0;
      if ((uVar10 & 1) == 0) goto LAB_00e244b8;
      local_70[0] = 0.0;
                    /* catch() { ... } // from try @ 00e23e38 with catch @ 00e242ac */
      uVar10 = PUScriptTranslator::getFloat
                         (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),local_70);
      if ((uVar10 & 1) != 0) {
                    /* try { // try from 00e242c0 to 00f24303 has its CatchHandler @ 00e242c0
                       catch() { ... } // from try @ 00e242c0 with catch @ 00e242c0
                       catch() { ... } // from try @ 00e24314 with catch @ 00e242c0
                       catch() { ... } // from try @ 00e244a8 with catch @ 00e242c0
                       catch() { ... } // from try @ 00e24530 with catch @ 00e242c0
                       catch() { ... } // from try @ 00e246b4 with catch @ 00e242c0 */
        PUBoxCollider::setHeight(this_00,local_70[0]);
        uVar5 = 1;
        goto LAB_00e244b8;
      }
    }
    else {
LAB_00e24184:
                    /* try { // try from 00e24184 to 00f2418b has its CatchHandler @ 00e241ac */
                    /* try { // try from 00e2418c to 00f24193 has its CatchHandler @ 00e24194 */
                    /* catch() { ... } // from try @ 00e24024 with catch @ 00e24194
                       catch() { ... } // from try @ 00e2418c with catch @ 00e24194
                       try { // try from 00e24194 to 00f242bf has its CatchHandler @ 00e23df4 */
      sVar1 = (ulong)(token[0x15d8] >> 1);
      if ((token[0x15d8] & 1) != 0) {
        sVar1 = token._5600_8_;
      }
      if (__n == sVar1) {
        pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
                    /* catch() { ... } // from try @ 00e23fa0 with catch @ 00e241ac
                       catch() { ... } // from try @ 00e24184 with catch @ 00e241ac */
        if (((byte)PVar2 & 1) == 0) {
          pPVar8 = param_2 + 0x39;
        }
                    /* catch() { ... } // from try @ 00e2407c with catch @ 00e241c0 */
        pPVar6 = (PUAbstractNode *)(token + 0x15d9);
        if ((token[0x15d8] & 1) != 0) {
          pPVar6 = (PUAbstractNode *)token._5608_8_;
        }
        if (((byte)PVar2 & 1) == 0) {
          if (__n != 0) {
            pPVar8 = param_2 + 0x39;
                    /* catch() { ... } // from try @ 00e23ea0 with catch @ 00e241d4 */
            uVar9 = uVar10;
            do {
                    /* catch() { ... } // from try @ 00e23e70 with catch @ 00e241d8 */
              if (*pPVar8 != *pPVar6) goto LAB_00e24214;
                    /* catch() { ... } // from try @ 00e23f18 with catch @ 00e241e8
                       catch() { ... } // from try @ 00e2409c with catch @ 00e241e8 */
              uVar9 = uVar9 - 1;
              pPVar8 = pPVar8 + 1;
              pPVar6 = pPVar6 + 1;
            } while (uVar9 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e24214;
        uVar7 = 0x178a668;
        goto LAB_00e24288;
      }
LAB_00e24214:
      sVar1 = (ulong)(token[0x150] >> 1);
      if ((token[0x150] & 1) != 0) {
        sVar1 = token._344_8_;
      }
      if (__n == sVar1) {
        pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar2 & 1) == 0) {
          pPVar8 = param_2 + 0x39;
        }
        pPVar6 = (PUAbstractNode *)(token + 0x151);
        if ((token[0x150] & 1) != 0) {
          pPVar6 = (PUAbstractNode *)token._352_8_;
        }
        if (((byte)PVar2 & 1) == 0) {
          if (__n != 0) {
            pPVar8 = param_2 + 0x39;
            uVar9 = uVar10;
            do {
              if (*pPVar8 != *pPVar6) goto LAB_00e242e0;
              uVar9 = uVar9 - 1;
              pPVar8 = pPVar8 + 1;
              pPVar6 = pPVar6 + 1;
            } while (uVar9 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e242e0;
        uVar7 = 0x17891e0;
LAB_00e243ec:
        uVar10 = PUScriptTranslator::passValidateProperty
                           ((PUScriptTranslator *)this,param_1,param_2,uVar7,0);
        uVar5 = 0;
        if ((uVar10 & 1) == 0) goto LAB_00e244b8;
        local_70[0] = 0.0;
                    /* try { // try from 00e24418 to 00f24467 has its CatchHandler @ 00e24728 */
        uVar10 = PUScriptTranslator::getFloat
                           (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),local_70);
        if ((uVar10 & 1) != 0) {
          PUBoxCollider::setDepth(this_00,local_70[0]);
          uVar5 = 1;
          goto LAB_00e244b8;
        }
      }
      else {
LAB_00e242e0:
        sVar1 = (ulong)(token[0x15f0] >> 1);
        if ((token[0x15f0] & 1) != 0) {
          sVar1 = token._5624_8_;
        }
        if (__n == sVar1) {
                    /* try { // try from 00e24304 to 00f24313 has its CatchHandler @ 00e246c0 */
          pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
                    /* try { // try from 00e24314 to 00f2437f has its CatchHandler @ 00e242c0 */
          if (((byte)PVar2 & 1) == 0) {
            pPVar8 = param_2 + 0x39;
          }
          pPVar6 = (PUAbstractNode *)(token + 0x15f1);
          if ((token[0x15f0] & 1) != 0) {
            pPVar6 = (PUAbstractNode *)token._5632_8_;
          }
          if (((byte)PVar2 & 1) == 0) {
            if (__n != 0) {
              pPVar8 = param_2 + 0x39;
              uVar9 = uVar10;
              do {
                if (*pPVar8 != *pPVar6) goto LAB_00e24370;
                uVar9 = uVar9 - 1;
                pPVar8 = pPVar8 + 1;
                pPVar6 = pPVar6 + 1;
              } while (uVar9 != 0);
            }
          }
          else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e24370;
          uVar7 = 0x178a680;
          goto LAB_00e243ec;
        }
LAB_00e24370:
                    /* try { // try from 00e24380 to 00f2438b has its CatchHandler @ 00e24718 */
        sVar1 = (ulong)(token[0x1728] >> 1);
        if ((token[0x1728] & 1) != 0) {
          sVar1 = token._5936_8_;
        }
        if (__n != sVar1) {
LAB_00e24444:
          PUBaseColliderTranslator::PUBaseColliderTranslator((PUBaseColliderTranslator *)local_70);
          uVar5 = PUBaseColliderTranslator::translateChildProperty
                            ((PUBaseColliderTranslator *)local_70,param_1,param_2);
          PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)local_70);
          goto LAB_00e244b8;
        }
        pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar2 & 1) == 0) {
          pPVar8 = param_2 + 0x39;
        }
        pPVar6 = (PUAbstractNode *)(token + 0x1729);
                    /* try { // try from 00e243b0 to 00f243bf has its CatchHandler @ 00e24714 */
        if ((token[0x1728] & 1) != 0) {
          pPVar6 = (PUAbstractNode *)token._5944_8_;
        }
        if (((byte)PVar2 & 1) == 0) {
          if (__n != 0) {
            pPVar8 = param_2 + 0x39;
            do {
              if (*pPVar8 != *pPVar6) goto LAB_00e24444;
              uVar10 = uVar10 - 1;
              pPVar8 = pPVar8 + 1;
              pPVar6 = pPVar6 + 1;
            } while (uVar10 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e24444;
        uVar10 = PUScriptTranslator::passValidateProperty
                           ((PUScriptTranslator *)this,param_1,param_2,0x178a7b8,1);
        if (((uVar10 & 1) != 0) &&
           (uVar10 = PUScriptTranslator::getBoolean
                               (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                                (bool *)local_70), (uVar10 & 1) != 0)) {
                    /* try { // try from 00e244a0 to 00f244a7 has its CatchHandler @ 00e246ec */
                    /* try { // try from 00e244a8 to 00f24527 has its CatchHandler @ 00e242c0 */
          PUBoxCollider::setInnerCollision(this_00,(bool)local_70[0]._0_1_);
          uVar5 = 1;
          goto LAB_00e244b8;
        }
      }
    }
  }
  uVar5 = 0;
LAB_00e244b8:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5 & 1;
}

