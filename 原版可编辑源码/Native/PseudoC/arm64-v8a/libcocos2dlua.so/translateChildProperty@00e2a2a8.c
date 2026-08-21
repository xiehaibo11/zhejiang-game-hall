
/* cocos2d::PUParticleFollowerTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUParticleFollowerTranslator::translateChildProperty
          (PUParticleFollowerTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

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
  PUParticleFollower *this_00;
  ulong uVar10;
  float local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
  uVar10 = (ulong)((byte)PVar2 >> 1);
  this_00 = *(PUParticleFollower **)(*(long *)(param_2 + 0x28) + 0x30);
  __n = uVar10;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x1bc0] >> 1);
  if ((token[0x1bc0] & 1) != 0) {
    sVar1 = token._7112_8_;
  }
  if (__n == sVar1) {
    pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar8 = param_2 + 0x39;
    }
    pPVar6 = (PUAbstractNode *)(token + 0x1bc1);
    if ((token[0x1bc0] & 1) != 0) {
      pPVar6 = (PUAbstractNode *)token._7120_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar8 = param_2 + 0x39;
        uVar9 = uVar10;
        do {
          if (*pPVar8 != *pPVar6) goto LAB_00e2a390;
          uVar9 = uVar9 - 1;
          pPVar8 = pPVar8 + 1;
          pPVar6 = pPVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e2a390;
    lVar7 = 0x1bc0;
LAB_00e2a49c:
    uVar10 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,token + lVar7,0);
    uVar5 = 0;
    if ((uVar10 & 1) == 0) goto LAB_00e2a5e0;
    local_6c = 0.0;
    uVar10 = PUScriptTranslator::getFloat
                       (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_6c);
    if ((uVar10 & 1) != 0) {
      PUParticleFollower::setMinDistance(this_00,local_6c);
      uVar5 = 1;
      goto LAB_00e2a5e0;
    }
  }
  else {
LAB_00e2a390:
    sVar1 = (ulong)(token[0x1b90] >> 1);
    if ((token[0x1b90] & 1) != 0) {
      sVar1 = token._7064_8_;
    }
    if (__n == sVar1) {
      pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar8 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x1b91);
      if ((token[0x1b90] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._7072_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar8 = param_2 + 0x39;
          uVar9 = uVar10;
          do {
            if (*pPVar8 != *pPVar6) goto LAB_00e2a420;
            uVar9 = uVar9 - 1;
            pPVar8 = pPVar8 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e2a420;
      lVar7 = 0x1b90;
      goto LAB_00e2a49c;
    }
LAB_00e2a420:
    sVar1 = (ulong)(token[0x1ba8] >> 1);
    if ((token[0x1ba8] & 1) != 0) {
      sVar1 = token._7088_8_;
    }
    if (__n == sVar1) {
      pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar8 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x1ba9);
      if ((token[0x1ba8] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._7096_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar8 = param_2 + 0x39;
          uVar9 = uVar10;
          do {
            if (*pPVar8 != *pPVar6) goto LAB_00e2a4fc;
            uVar9 = uVar9 - 1;
            pPVar8 = pPVar8 + 1;
            pPVar6 = pPVar6 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e2a4fc;
      lVar7 = 0x1ba8;
LAB_00e2a58c:
      uVar10 = PUScriptTranslator::passValidateProperty
                         ((PUScriptTranslator *)this,param_1,param_2,token + lVar7,0);
      uVar5 = 0;
      if ((uVar10 & 1) == 0) goto LAB_00e2a5e0;
      local_6c = 0.0;
      uVar10 = PUScriptTranslator::getFloat
                         (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_6c);
      if ((uVar10 & 1) != 0) {
        PUParticleFollower::setMaxDistance(this_00,local_6c);
        uVar5 = 1;
        goto LAB_00e2a5e0;
      }
    }
    else {
LAB_00e2a4fc:
      sVar1 = (ulong)(token[0x1b78] >> 1);
      if ((token[0x1b78] & 1) != 0) {
        sVar1 = token._7040_8_;
      }
      if (__n == sVar1) {
        pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar2 & 1) == 0) {
          pPVar8 = param_2 + 0x39;
        }
        pPVar6 = (PUAbstractNode *)(token + 0x1b79);
        if ((token[0x1b78] & 1) != 0) {
          pPVar6 = (PUAbstractNode *)token._7048_8_;
        }
        if (((byte)PVar2 & 1) == 0) {
          if (__n != 0) {
            pPVar8 = param_2 + 0x39;
            do {
              if (*pPVar8 != *pPVar6) goto LAB_00e2a5dc;
              uVar10 = uVar10 - 1;
              pPVar8 = pPVar8 + 1;
              pPVar6 = pPVar6 + 1;
            } while (uVar10 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pPVar8,pPVar6,__n), iVar4 != 0)) goto LAB_00e2a5dc;
        lVar7 = 0x1b78;
        goto LAB_00e2a58c;
      }
    }
  }
LAB_00e2a5dc:
  uVar5 = 0;
LAB_00e2a5e0:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

