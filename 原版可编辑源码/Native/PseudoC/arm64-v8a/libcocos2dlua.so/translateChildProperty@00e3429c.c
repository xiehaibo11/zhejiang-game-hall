
/* cocos2d::CCPUBoxEmitterTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::CCPUBoxEmitterTranslator::translateChildProperty
          (CCPUBoxEmitterTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  size_t __n;
  size_t sVar1;
  PUAbstractNode PVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  PUAbstractNode *pPVar6;
  PUAbstractNode *pPVar7;
  ulong uVar8;
  CCPUBoxEmitter *this_00;
  ulong uVar9;
  float local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
  uVar9 = (ulong)((byte)PVar2 >> 1);
  this_00 = *(CCPUBoxEmitter **)(*(long *)(param_2 + 0x28) + 0x30);
  __n = uVar9;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x120] >> 1);
  if ((token[0x120] & 1) != 0) {
    sVar1 = token._296_8_;
  }
  if (__n == sVar1) {
    pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar7 = param_2 + 0x39;
    }
    pPVar6 = (PUAbstractNode *)(token + 0x121);
    if ((token[0x120] & 1) != 0) {
      pPVar6 = (PUAbstractNode *)token._304_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar7 = param_2 + 0x39;
        uVar8 = uVar9;
        do {
          if (*pPVar7 != *pPVar6) goto LAB_00e34378;
          uVar8 = uVar8 - 1;
          pPVar7 = pPVar7 + 1;
          pPVar6 = pPVar6 + 1;
        } while (uVar8 != 0);
      }
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e343c0 with catch @ 00e3436c
                        */
      if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e34378;
    }
    uVar5 = 0x17891b0;
LAB_00e3447c:
    uVar9 = PUScriptTranslator::passValidateProperty
                      ((PUScriptTranslator *)this,param_1,param_2,uVar5,0);
    uVar5 = 0;
    if ((uVar9 & 1) == 0) goto LAB_00e3471c;
    local_6c = 0.0;
    uVar9 = PUScriptTranslator::getFloat
                      (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_6c);
    if ((uVar9 & 1) != 0) {
      CCPUBoxEmitter::setWidth(this_00,local_6c);
      uVar5 = 1;
      goto LAB_00e3471c;
    }
  }
  else {
LAB_00e34378:
    sVar1 = (ulong)(token[0x12d8] >> 1);
    if ((token[0x12d8] & 1) != 0) {
      sVar1 = token._4832_8_;
    }
    if (__n == sVar1) {
      pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar7 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x12d9);
                    /* try { // try from 00e343b8 to 00f343bf has its CatchHandler @ 00e34534 */
      if ((token[0x12d8] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._4840_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
                    /* try { // try from 00e343c0 to 00f34537 has its CatchHandler @ 00e3436c */
        if (__n != 0) {
          pPVar7 = param_2 + 0x39;
          uVar8 = uVar9;
          do {
            if (*pPVar7 != *pPVar6) goto LAB_00e34408;
            uVar8 = uVar8 - 1;
            pPVar7 = pPVar7 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar8 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e34408;
      uVar5 = 0x178a368;
      goto LAB_00e3447c;
    }
LAB_00e34408:
    sVar1 = (ulong)(token[0x138] >> 1);
    if ((token[0x138] & 1) != 0) {
      sVar1 = token._320_8_;
    }
    if (__n == sVar1) {
      pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar7 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x139);
      if ((token[0x138] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._328_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar7 = param_2 + 0x39;
          uVar8 = uVar9;
          do {
            if (*pPVar7 != *pPVar6) goto LAB_00e344d8;
            uVar8 = uVar8 - 1;
            pPVar7 = pPVar7 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar8 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e344d8;
      uVar5 = 0x17891c8;
LAB_00e345dc:
      uVar9 = PUScriptTranslator::passValidateProperty
                        ((PUScriptTranslator *)this,param_1,param_2,uVar5,0);
      uVar5 = 0;
      if ((uVar9 & 1) == 0) goto LAB_00e3471c;
      local_6c = 0.0;
      uVar9 = PUScriptTranslator::getFloat
                        (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_6c);
      if ((uVar9 & 1) != 0) {
        CCPUBoxEmitter::setHeight(this_00,local_6c);
        uVar5 = 1;
        goto LAB_00e3471c;
      }
    }
    else {
LAB_00e344d8:
      sVar1 = (ulong)(token[0x12f0] >> 1);
      if ((token[0x12f0] & 1) != 0) {
        sVar1 = token._4856_8_;
      }
      if (__n == sVar1) {
        pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar2 & 1) == 0) {
          pPVar7 = param_2 + 0x39;
        }
        pPVar6 = (PUAbstractNode *)(token + 0x12f1);
        if ((token[0x12f0] & 1) != 0) {
          pPVar6 = (PUAbstractNode *)token._4864_8_;
        }
        if (((byte)PVar2 & 1) == 0) {
          if (__n != 0) {
            pPVar7 = param_2 + 0x39;
            uVar8 = uVar9;
            do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e343b8 with catch @ 00e34534
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e34590 with catch @ 00e34538
                       catch(type#1 @ 00000000) { ... } // from try @ 00e34750 with catch @ 00e34538
                        */
              if (*pPVar7 != *pPVar6) goto LAB_00e34568;
              uVar8 = uVar8 - 1;
              pPVar7 = pPVar7 + 1;
              pPVar6 = pPVar6 + 1;
            } while (uVar8 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e34568;
        uVar5 = 0x178a380;
        goto LAB_00e345dc;
      }
LAB_00e34568:
      sVar1 = (ulong)(token[0x150] >> 1);
      if ((token[0x150] & 1) != 0) {
        sVar1 = token._344_8_;
      }
      if (__n == sVar1) {
        pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
                    /* try { // try from 00e34588 to 00f3458f has its CatchHandler @ 00e3485c */
                    /* try { // try from 00e34590 to 00f346e7 has its CatchHandler @ 00e34538 */
        if (((byte)PVar2 & 1) == 0) {
          pPVar7 = param_2 + 0x39;
        }
        pPVar6 = (PUAbstractNode *)(token + 0x151);
        if ((token[0x150] & 1) != 0) {
          pPVar6 = (PUAbstractNode *)token._352_8_;
        }
        if (((byte)PVar2 & 1) == 0) {
          if (__n != 0) {
            pPVar7 = param_2 + 0x39;
            uVar8 = uVar9;
            do {
              if (*pPVar7 != *pPVar6) goto LAB_00e34638;
              uVar8 = uVar8 - 1;
              pPVar7 = pPVar7 + 1;
              pPVar6 = pPVar6 + 1;
            } while (uVar8 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e34638;
        uVar5 = 0x17891e0;
LAB_00e346cc:
        uVar9 = PUScriptTranslator::passValidateProperty
                          ((PUScriptTranslator *)this,param_1,param_2,uVar5,0);
        uVar5 = 0;
                    /* try { // try from 00e346e8 to 00f346ef has its CatchHandler @ 00e34848 */
        if ((uVar9 & 1) == 0) goto LAB_00e3471c;
        local_6c = 0.0;
        uVar9 = PUScriptTranslator::getFloat
                          (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_6c);
        if ((uVar9 & 1) != 0) {
          CCPUBoxEmitter::setDepth(this_00,local_6c);
          uVar5 = 1;
          goto LAB_00e3471c;
        }
      }
      else {
LAB_00e34638:
        sVar1 = (ulong)(token[0x1308] >> 1);
        if ((token[0x1308] & 1) != 0) {
          sVar1 = token._4880_8_;
        }
        if (__n == sVar1) {
          pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
          if (((byte)PVar2 & 1) == 0) {
            pPVar7 = param_2 + 0x39;
          }
          pPVar6 = (PUAbstractNode *)(token + 0x1309);
          if ((token[0x1308] & 1) != 0) {
            pPVar6 = (PUAbstractNode *)token._4888_8_;
          }
          if (((byte)PVar2 & 1) == 0) {
            if (__n != 0) {
              pPVar7 = param_2 + 0x39;
              do {
                if (*pPVar7 != *pPVar6) goto LAB_00e34718;
                uVar9 = uVar9 - 1;
                pPVar7 = pPVar7 + 1;
                pPVar6 = pPVar6 + 1;
              } while (uVar9 != 0);
            }
          }
          else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e34718;
          uVar5 = 0x178a398;
          goto LAB_00e346cc;
        }
      }
    }
  }
LAB_00e34718:
  uVar5 = 0;
LAB_00e3471c:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
                    /* try { // try from 00e34748 to 00f3474f has its CatchHandler @ 00e34830 */
  return;
}

