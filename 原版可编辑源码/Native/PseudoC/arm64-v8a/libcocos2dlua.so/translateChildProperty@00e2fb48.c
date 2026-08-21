
/* cocos2d::PUTextureRotatorTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUTextureRotatorTranslator::translateChildProperty
          (PUTextureRotatorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

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
  PUTextureRotator *this_00;
  ulong uVar10;
  float local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
  uVar10 = (ulong)((byte)PVar2 >> 1);
  this_00 = *(PUTextureRotator **)(*(long *)(param_2 + 0x28) + 0x30);
  __n = uVar10;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0xd8] >> 1);
  if ((token[0xd8] & 1) != 0) {
    sVar1 = token._224_8_;
  }
  if (__n == sVar1) {
    pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar8 = param_2 + 0x39;
    }
    pPVar7 = (PUAbstractNode *)(token + 0xd9);
    if ((token[0xd8] & 1) != 0) {
      pPVar7 = (PUAbstractNode *)token._232_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar8 = param_2 + 0x39;
        uVar9 = uVar10;
        do {
          if (*pPVar8 != *pPVar7) goto LAB_00e2fc24;
          uVar9 = uVar9 - 1;
                    /* try { // try from 00e2fc04 to 00f2fc0b has its CatchHandler @ 00e301d0 */
          pPVar8 = pPVar8 + 1;
          pPVar7 = pPVar7 + 1;
                    /* try { // try from 00e2fc0c to 00f2fcef has its CatchHandler @ 00e2f8cc */
        } while (uVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar7,__n), iVar4 != 0)) goto LAB_00e2fc24;
    uVar5 = 0x1789168;
LAB_00e2fd28:
    uVar10 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,uVar5,1);
    if (((uVar10 & 1) != 0) &&
       (uVar10 = PUScriptTranslator::getBoolean
                           (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),(bool *)&local_6c
                           ), (uVar10 & 1) != 0)) {
      PUTextureRotator::setUseOwnRotationSpeed(this_00,local_6c._0_1_);
      uVar5 = 1;
      goto LAB_00e300d4;
    }
  }
  else {
LAB_00e2fc24:
    sVar1 = (ulong)(token[0x1ed8] >> 1);
    if ((token[0x1ed8] & 1) != 0) {
      sVar1 = token._7904_8_;
    }
    if (__n == sVar1) {
      pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar8 = param_2 + 0x39;
      }
      pPVar7 = (PUAbstractNode *)(token + 0x1ed9);
      if ((token[0x1ed8] & 1) != 0) {
        pPVar7 = (PUAbstractNode *)token._7912_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar8 = param_2 + 0x39;
          uVar9 = uVar10;
          do {
            if (*pPVar8 != *pPVar7) goto LAB_00e2fcb4;
            uVar9 = uVar9 - 1;
            pPVar8 = pPVar8 + 1;
            pPVar7 = pPVar7 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar7,__n), iVar4 != 0)) goto LAB_00e2fcb4;
      uVar5 = 0x178af68;
      goto LAB_00e2fd28;
    }
LAB_00e2fcb4:
    sVar1 = (ulong)(token[0x198] >> 1);
    if ((token[0x198] & 1) != 0) {
      sVar1 = token._416_8_;
    }
    if (__n == sVar1) {
      pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar8 = param_2 + 0x39;
      }
      pPVar7 = (PUAbstractNode *)(token + 0x199);
      if ((token[0x198] & 1) != 0) {
        pPVar7 = (PUAbstractNode *)token._424_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
                    /* try { // try from 00e2fcf0 to 00f2fcf7 has its CatchHandler @ 00e301cc */
        if (__n != 0) {
          pPVar8 = param_2 + 0x39;
                    /* try { // try from 00e2fcf8 to 00f2fdbb has its CatchHandler @ 00e2f8cc */
          uVar9 = uVar10;
          do {
            if (*pPVar8 != *pPVar7) goto LAB_00e2fd78;
            uVar9 = uVar9 - 1;
            pPVar8 = pPVar8 + 1;
            pPVar7 = pPVar7 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar7,__n), iVar4 != 0)) goto LAB_00e2fd78;
                    /* try { // try from 00e2fe00 to 00f2fe0b has its CatchHandler @ 00e301c4 */
      uVar10 = PUScriptTranslator::passValidateProperty
                         ((PUScriptTranslator *)this,param_1,param_2,0x1789228,0);
                    /* try { // try from 00e2fe0c to 00f2fe4f has its CatchHandler @ 00e2f8cc */
      uVar5 = 0;
      if ((uVar10 & 1) == 0) goto LAB_00e300d4;
      local_6c = 0.0;
      uVar10 = PUScriptTranslator::getFloat
                         (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_6c);
      if ((uVar10 & 1) != 0) {
        pPVar6 = operator_new(0x30,(nothrow_t *)&std::nothrow);
        if (pPVar6 != (PUDynamicAttributeFixed *)0x0) {
          PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar6);
        }
LAB_00e2ff2c:
                    /* try { // try from 00e2ff34 to 00f2ff6f has its CatchHandler @ 00e2f8cc */
        (**(code **)(*(long *)pPVar6 + 0x28))(local_6c,pPVar6);
        PUTextureRotator::setRotationSpeed(this_00,(PUDynamicAttribute *)pPVar6);
        uVar5 = 1;
        goto LAB_00e300d4;
      }
    }
    else {
LAB_00e2fd78:
      sVar1 = (ulong)(token[0x1ef0] >> 1);
      if ((token[0x1ef0] & 1) != 0) {
        sVar1 = token._7928_8_;
      }
      if (__n == sVar1) {
        pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar2 & 1) == 0) {
          pPVar8 = param_2 + 0x39;
        }
        pPVar7 = (PUAbstractNode *)(token + 0x1ef1);
        if ((token[0x1ef0] & 1) != 0) {
          pPVar7 = (PUAbstractNode *)token._7936_8_;
        }
                    /* try { // try from 00e2fdbc to 00f2fdc7 has its CatchHandler @ 00e301c8 */
        if (((byte)PVar2 & 1) == 0) {
          if (__n != 0) {
            pPVar8 = param_2 + 0x39;
                    /* try { // try from 00e2fdc8 to 00f2fdff has its CatchHandler @ 00e2f8cc */
            uVar9 = uVar10;
            do {
              if (*pPVar8 != *pPVar7) goto LAB_00e2fe60;
              uVar9 = uVar9 - 1;
              pPVar8 = pPVar8 + 1;
              pPVar7 = pPVar7 + 1;
            } while (uVar9 != 0);
          }
        }
        else {
                    /* try { // try from 00e2fe50 to 00f2fe5b has its CatchHandler @ 00e301c0 */
                    /* try { // try from 00e2fe5c to 00f2fe93 has its CatchHandler @ 00e2f8cc */
          if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar7,__n), iVar4 != 0)) goto LAB_00e2fe60;
        }
                    /* try { // try from 00e2fed0 to 00f2fedb has its CatchHandler @ 00e301b8 */
                    /* try { // try from 00e2fedc to 00f2ff27 has its CatchHandler @ 00e2f8cc */
        uVar10 = PUScriptTranslator::passValidateProperty
                           ((PUScriptTranslator *)this,param_1,param_2,0x178af80,0);
        uVar5 = 0;
        if ((uVar10 & 1) == 0) goto LAB_00e300d4;
        local_6c = 0.0;
        uVar10 = PUScriptTranslator::getFloat
                           (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_6c);
        if ((uVar10 & 1) != 0) {
          pPVar6 = operator_new(0x30,(nothrow_t *)&std::nothrow);
          if (pPVar6 != (PUDynamicAttributeFixed *)0x0) {
                    /* try { // try from 00e2ff28 to 00f2ff33 has its CatchHandler @ 00e301b4 */
            PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar6);
          }
          goto LAB_00e2ff2c;
        }
      }
      else {
LAB_00e2fe60:
        sVar1 = (ulong)(token[0x1b0] >> 1);
        if ((token[0x1b0] & 1) != 0) {
          sVar1 = token._440_8_;
        }
        if (__n == sVar1) {
          pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
          if (((byte)PVar2 & 1) == 0) {
            pPVar8 = param_2 + 0x39;
          }
          pPVar7 = (PUAbstractNode *)(token + 0x1b1);
                    /* try { // try from 00e2fe94 to 00f2fe9f has its CatchHandler @ 00e301bc */
          if ((token[0x1b0] & 1) != 0) {
            pPVar7 = (PUAbstractNode *)token._448_8_;
          }
          if (((byte)PVar2 & 1) == 0) {
            if (__n != 0) {
                    /* try { // try from 00e2fea0 to 00f2fecf has its CatchHandler @ 00e2f8cc */
              pPVar8 = param_2 + 0x39;
              uVar9 = uVar10;
              do {
                if (*pPVar8 != *pPVar7) goto LAB_00e2ff64;
                uVar9 = uVar9 - 1;
                pPVar8 = pPVar8 + 1;
                pPVar7 = pPVar7 + 1;
              } while (uVar9 != 0);
            }
          }
          else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar7,__n), iVar4 != 0)) goto LAB_00e2ff64;
          uVar10 = PUScriptTranslator::passValidateProperty
                             ((PUScriptTranslator *)this,param_1,param_2,0x1789240,0);
                    /* try { // try from 00e2fff4 to 00f2ffff has its CatchHandler @ 00e301a8 */
          uVar5 = 0;
          if ((uVar10 & 1) == 0) goto LAB_00e300d4;
          local_6c = 0.0;
                    /* try { // try from 00e30000 to 00f3002f has its CatchHandler @ 00e2f8cc */
          uVar10 = PUScriptTranslator::getFloat
                             (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_6c);
          if ((uVar10 & 1) == 0) goto LAB_00e300d0;
          pPVar6 = operator_new(0x30,(nothrow_t *)&std::nothrow);
          if (pPVar6 != (PUDynamicAttributeFixed *)0x0) {
                    /* try { // try from 00e30030 to 00f3003b has its CatchHandler @ 00e301a4 */
            PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar6);
          }
LAB_00e300a8:
                    /* try { // try from 00e300b8 to 00f3011f has its CatchHandler @ 00e2f8cc */
          (**(code **)(*(long *)pPVar6 + 0x28))(local_6c,pPVar6);
          PUTextureRotator::setRotation(this_00,(PUDynamicAttribute *)pPVar6);
          uVar5 = 1;
          goto LAB_00e300d4;
        }
LAB_00e2ff64:
                    /* try { // try from 00e2ff70 to 00f2ff7b has its CatchHandler @ 00e301b0 */
        sVar1 = (ulong)(token[0x1f08] >> 1);
                    /* try { // try from 00e2ff7c to 00f2ffb7 has its CatchHandler @ 00e2f8cc */
        if ((token[0x1f08] & 1) != 0) {
          sVar1 = token._7952_8_;
        }
        if (__n == sVar1) {
          pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
          if (((byte)PVar2 & 1) == 0) {
            pPVar8 = param_2 + 0x39;
          }
          pPVar7 = (PUAbstractNode *)(token + 0x1f09);
          if ((token[0x1f08] & 1) != 0) {
            pPVar7 = (PUAbstractNode *)token._7960_8_;
          }
          if (((byte)PVar2 & 1) == 0) {
            if (__n != 0) {
              pPVar8 = param_2 + 0x39;
              do {
                    /* try { // try from 00e2ffb8 to 00f2ffc3 has its CatchHandler @ 00e301ac */
                if (*pPVar8 != *pPVar7) goto LAB_00e300d0;
                    /* try { // try from 00e2ffc4 to 00f2fff3 has its CatchHandler @ 00e2f8cc */
                uVar10 = uVar10 - 1;
                pPVar8 = pPVar8 + 1;
                pPVar7 = pPVar7 + 1;
              } while (uVar10 != 0);
            }
          }
          else {
                    /* try { // try from 00e3003c to 00f3006b has its CatchHandler @ 00e2f8cc */
            if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar7,__n), iVar4 != 0)) goto LAB_00e300d0;
          }
          uVar10 = PUScriptTranslator::passValidateProperty
                             ((PUScriptTranslator *)this,param_1,param_2,0x178af98,0);
          uVar5 = 0;
                    /* try { // try from 00e3006c to 00f30077 has its CatchHandler @ 00e301a0 */
          if ((uVar10 & 1) == 0) goto LAB_00e300d4;
          local_6c = 0.0;
                    /* try { // try from 00e30078 to 00f3009f has its CatchHandler @ 00e2f8cc */
          uVar10 = PUScriptTranslator::getFloat
                             (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_6c);
          if ((uVar10 & 1) != 0) {
            pPVar6 = operator_new(0x30,(nothrow_t *)&std::nothrow);
            if (pPVar6 != (PUDynamicAttributeFixed *)0x0) {
                    /* try { // try from 00e300a0 to 00f300b7 has its CatchHandler @ 00e301e4 */
              PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar6);
            }
            goto LAB_00e300a8;
          }
        }
      }
    }
  }
LAB_00e300d0:
  uVar5 = 0;
LAB_00e300d4:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

