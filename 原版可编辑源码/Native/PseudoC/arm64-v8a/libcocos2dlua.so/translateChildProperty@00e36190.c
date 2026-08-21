
/* cocos2d::PULineEmitterTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PULineEmitterTranslator::translateChildProperty
          (PULineEmitterTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

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
  PULineEmitter *this_00;
  ulong uVar10;
  float local_78 [4];
  long local_68;
  
                    /* try { // try from 00e36198 to 00f361a7 has its CatchHandler @ 00e369f4 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
  uVar10 = (ulong)((byte)PVar2 >> 1);
  this_00 = *(PULineEmitter **)(*(long *)(param_2 + 0x28) + 0x30);
  __n = uVar10;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
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
    if ((token[0x1ae8] & 1) != 0) {
      pPVar6 = (PUAbstractNode *)token._6904_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar8 = param_2 + 0x39;
        uVar9 = uVar10;
        do {
          if (*pPVar8 != *pPVar6) goto LAB_00e36278;
          uVar9 = uVar9 - 1;
          pPVar8 = pPVar8 + 1;
          pPVar6 = pPVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e36278;
    lVar7 = 0x1ae8;
LAB_00e36378:
    uVar10 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,token + lVar7,6);
    if ((uVar10 & 1) != 0) {
      Vec3::Vec3((Vec3 *)local_78);
      uVar10 = PUScriptTranslator::getVector3
                         ((PUScriptTranslator *)this,*(undefined8 *)(param_2 + 0x60),param_2 + 0x58,
                          local_78,3);
      if ((uVar10 & 1) != 0) {
        PULineEmitter::setEnd(this_00,(Vec3 *)local_78);
        uVar5 = 1;
                    /* try { // try from 00e363c8 to 00f363cf has its CatchHandler @ 00e368e4 */
        goto LAB_00e36780;
      }
    }
  }
  else {
LAB_00e36278:
    sVar1 = (ulong)(token[0x13b0] >> 1);
    if ((token[0x13b0] & 1) != 0) {
      sVar1 = token._5048_8_;
    }
    if (__n == sVar1) {
      pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar8 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x13b1);
      if ((token[0x13b0] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._5056_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar8 = param_2 + 0x39;
          uVar9 = uVar10;
          do {
            if (*pPVar8 != *pPVar6) goto LAB_00e36308;
            uVar9 = uVar9 - 1;
            pPVar8 = pPVar8 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e36308;
      lVar7 = 0x13b0;
      goto LAB_00e36378;
    }
LAB_00e36308:
                    /* try { // try from 00e36310 to 00f36317 has its CatchHandler @ 00e368f4 */
    sVar1 = (ulong)(token[0x30] >> 1);
                    /* try { // try from 00e36318 to 00f36347 has its CatchHandler @ 00e355f0 */
    if ((token[0x30] & 1) != 0) {
      sVar1 = token._56_8_;
    }
    if (__n == sVar1) {
      pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar8 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x31);
      if ((token[0x30] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._64_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
                    /* try { // try from 00e36348 to 00f3634f has its CatchHandler @ 00e3690c */
          pPVar8 = param_2 + 0x39;
          uVar9 = uVar10;
          do {
            if (*pPVar8 != *pPVar6) goto LAB_00e363dc;
            uVar9 = uVar9 - 1;
            pPVar8 = pPVar8 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar9 != 0);
        }
      }
      else {
                    /* try { // try from 00e363d0 to 00f3646f has its CatchHandler @ 00e355f0 */
        if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e363dc;
      }
      uVar5 = 0x17890c0;
LAB_00e364e0:
      uVar10 = PUScriptTranslator::passValidateProperty
                         ((PUScriptTranslator *)this,param_1,param_2,uVar5,0);
      uVar5 = 0;
      if ((uVar10 & 1) == 0) goto LAB_00e36780;
      local_78[0] = 0.0;
      uVar10 = PUScriptTranslator::getFloat
                         (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),local_78);
      if ((uVar10 & 1) != 0) {
        PULineEmitter::setMaxIncrement(this_00,local_78[0]);
        uVar5 = 1;
        goto LAB_00e36780;
      }
    }
    else {
LAB_00e363dc:
      sVar1 = (ulong)(token[0x13c8] >> 1);
      if ((token[0x13c8] & 1) != 0) {
        sVar1 = token._5072_8_;
      }
      if (__n == sVar1) {
        pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar2 & 1) == 0) {
          pPVar8 = param_2 + 0x39;
        }
        pPVar6 = (PUAbstractNode *)(token + 0x13c9);
        if ((token[0x13c8] & 1) != 0) {
          pPVar6 = (PUAbstractNode *)token._5080_8_;
        }
        if (((byte)PVar2 & 1) == 0) {
          if (__n != 0) {
            pPVar8 = param_2 + 0x39;
            uVar9 = uVar10;
            do {
              if (*pPVar8 != *pPVar6) goto LAB_00e3646c;
              uVar9 = uVar9 - 1;
              pPVar8 = pPVar8 + 1;
              pPVar6 = pPVar6 + 1;
            } while (uVar9 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e3646c;
        uVar5 = 0x178a458;
        goto LAB_00e364e0;
      }
LAB_00e3646c:
                    /* try { // try from 00e36470 to 00f36477 has its CatchHandler @ 00e368d4 */
                    /* try { // try from 00e36478 to 00f364af has its CatchHandler @ 00e355f0 */
      sVar1 = (ulong)(token[0x48] >> 1);
      if ((token[0x48] & 1) != 0) {
        sVar1 = token._80_8_;
      }
      if (__n == sVar1) {
        pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar2 & 1) == 0) {
          pPVar8 = param_2 + 0x39;
        }
        pPVar6 = (PUAbstractNode *)(token + 0x49);
        if ((token[0x48] & 1) != 0) {
          pPVar6 = (PUAbstractNode *)token._88_8_;
        }
        if (((byte)PVar2 & 1) == 0) {
          if (__n != 0) {
            pPVar8 = param_2 + 0x39;
                    /* try { // try from 00e364b0 to 00f364fb has its CatchHandler @ 00e3691c */
            uVar9 = uVar10;
            do {
              if (*pPVar8 != *pPVar6) goto LAB_00e3653c;
              uVar9 = uVar9 - 1;
              pPVar8 = pPVar8 + 1;
              pPVar6 = pPVar6 + 1;
            } while (uVar9 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e3653c;
        uVar5 = 0x17890d8;
LAB_00e36640:
        uVar10 = PUScriptTranslator::passValidateProperty
                           ((PUScriptTranslator *)this,param_1,param_2,uVar5,0);
        uVar5 = 0;
        if ((uVar10 & 1) == 0) goto LAB_00e36780;
        local_78[0] = 0.0;
                    /* try { // try from 00e3666c to 00f3667f has its CatchHandler @ 00e369b8 */
        uVar10 = PUScriptTranslator::getFloat
                           (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),local_78);
        if ((uVar10 & 1) != 0) {
          PULineEmitter::setMinIncrement(this_00,local_78[0]);
          uVar5 = 1;
          goto LAB_00e36780;
        }
      }
      else {
LAB_00e3653c:
        sVar1 = (ulong)(token[0x13e0] >> 1);
        if ((token[0x13e0] & 1) != 0) {
          sVar1 = token._5096_8_;
        }
        if (__n == sVar1) {
          pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
          if (((byte)PVar2 & 1) == 0) {
            pPVar8 = param_2 + 0x39;
          }
          pPVar6 = (PUAbstractNode *)(token + 0x13e1);
          if ((token[0x13e0] & 1) != 0) {
            pPVar6 = (PUAbstractNode *)token._5104_8_;
          }
          if (((byte)PVar2 & 1) == 0) {
            if (__n != 0) {
              pPVar8 = param_2 + 0x39;
              uVar9 = uVar10;
              do {
                if (*pPVar8 != *pPVar6) goto LAB_00e365cc;
                uVar9 = uVar9 - 1;
                pPVar8 = pPVar8 + 1;
                pPVar6 = pPVar6 + 1;
              } while (uVar9 != 0);
            }
          }
          else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e365cc;
          uVar5 = 0x178a470;
          goto LAB_00e36640;
        }
LAB_00e365cc:
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
                    /* try { // try from 00e36620 to 00f36627 has its CatchHandler @ 00e368f8 */
                if (*pPVar8 != *pPVar6) goto LAB_00e3669c;
                uVar9 = uVar9 - 1;
                    /* try { // try from 00e36628 to 00f3666b has its CatchHandler @ 00e355f0 */
                pPVar8 = pPVar8 + 1;
                pPVar6 = pPVar6 + 1;
              } while (uVar9 != 0);
            }
          }
          else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e3669c;
          uVar5 = 0x1789180;
LAB_00e36730:
                    /* try { // try from 00e36738 to 00f3674f has its CatchHandler @ 00e369b4 */
          uVar10 = PUScriptTranslator::passValidateProperty
                             ((PUScriptTranslator *)this,param_1,param_2,uVar5,0);
          uVar5 = 0;
          if ((uVar10 & 1) == 0) goto LAB_00e36780;
          local_78[0] = 0.0;
          uVar10 = PUScriptTranslator::getFloat
                             (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),local_78);
          if ((uVar10 & 1) != 0) {
            PULineEmitter::setMaxDeviation(this_00,local_78[0]);
            uVar5 = 1;
            goto LAB_00e36780;
          }
        }
        else {
LAB_00e3669c:
                    /* try { // try from 00e366a8 to 00f366b7 has its CatchHandler @ 00e3697c */
          sVar1 = (ulong)(token[0x13f8] >> 1);
          if ((token[0x13f8] & 1) != 0) {
            sVar1 = token._5120_8_;
          }
          if (__n == sVar1) {
            pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
                    /* try { // try from 00e366c4 to 00f366cf has its CatchHandler @ 00e369b8 */
            if (((byte)PVar2 & 1) == 0) {
              pPVar8 = param_2 + 0x39;
            }
            pPVar6 = (PUAbstractNode *)(token + 0x13f9);
            if ((token[0x13f8] & 1) != 0) {
              pPVar6 = (PUAbstractNode *)token._5128_8_;
            }
            if (((byte)PVar2 & 1) == 0) {
              if (__n != 0) {
                pPVar8 = param_2 + 0x39;
                do {
                  if (*pPVar8 != *pPVar6) goto LAB_00e3677c;
                  uVar10 = uVar10 - 1;
                  pPVar8 = pPVar8 + 1;
                  pPVar6 = pPVar6 + 1;
                } while (uVar10 != 0);
              }
            }
            else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0))
            goto LAB_00e3677c;
            uVar5 = 0x178a488;
            goto LAB_00e36730;
          }
        }
      }
    }
  }
LAB_00e3677c:
  uVar5 = 0;
LAB_00e36780:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

