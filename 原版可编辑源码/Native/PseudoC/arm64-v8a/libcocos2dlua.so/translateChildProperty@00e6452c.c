
/* cocos2d::PUDoScaleEventHandlerTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUDoScaleEventHandlerTranslator::translateChildProperty
          (PUDoScaleEventHandlerTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  PUAbstractNode PVar4;
  size_t sVar5;
  long lVar6;
  size_t sVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  PUAbstractNode *pPVar11;
  char *pcVar12;
  PUAbstractNode *pPVar13;
  PUDoScaleEventHandler *this_00;
  size_t sVar14;
  ulong uVar15;
  undefined4 local_84;
  ulong local_80;
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  PVar4 = param_2[0x38];
  uVar15 = (ulong)((byte)PVar4 >> 1);
  this_00 = *(PUDoScaleEventHandler **)(*(long *)(param_2 + 0x28) + 0x30);
  sVar2 = uVar15;
  if (((byte)PVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x40);
  }
  sVar14 = (ulong)(token[0x21f0] >> 1);
  if ((token[0x21f0] & 1) != 0) {
    sVar14 = token._8696_8_;
  }
  if (sVar2 == sVar14) {
    pPVar13 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar4 & 1) == 0) {
      pPVar13 = param_2 + 0x39;
    }
    pPVar11 = (PUAbstractNode *)(token + 0x21f1);
    if ((token[0x21f0] & 1) != 0) {
      pPVar11 = (PUAbstractNode *)token._8704_8_;
    }
    if (((byte)PVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pPVar13 = param_2 + 0x39;
        uVar10 = uVar15;
        do {
          if (*pPVar13 != *pPVar11) goto LAB_00e64614;
          uVar10 = uVar10 - 1;
          pPVar13 = pPVar13 + 1;
          pPVar11 = pPVar11 + 1;
        } while (uVar10 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar13,pPVar11,sVar2), iVar8 != 0)) goto LAB_00e64614;
    uVar15 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,0x178b280,0);
    uVar9 = 0;
    if ((uVar15 & 1) == 0) goto LAB_00e64960;
    local_80 = local_80 & 0xffffffff00000000;
    uVar15 = PUScriptTranslator::getFloat
                       (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),(float *)&local_80);
    if ((uVar15 & 1) == 0) goto LAB_00e6495c;
    PUDoScaleEventHandler::setScaleFraction(this_00,(float)local_80);
LAB_00e649c4:
    uVar9 = 1;
  }
  else {
LAB_00e64614:
    sVar14 = (ulong)(token[0x2208] >> 1);
    if ((token[0x2208] & 1) != 0) {
      sVar14 = token._8720_8_;
    }
    if (sVar2 == sVar14) {
      pPVar13 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar4 & 1) == 0) {
        pPVar13 = param_2 + 0x39;
      }
      pPVar11 = (PUAbstractNode *)(token + 0x2209);
      if ((token[0x2208] & 1) != 0) {
        pPVar11 = (PUAbstractNode *)token._8728_8_;
      }
      if (((byte)PVar4 & 1) == 0) {
        if (sVar2 != 0) {
          pPVar13 = param_2 + 0x39;
          do {
            if (*pPVar13 != *pPVar11) goto LAB_00e6495c;
            uVar15 = uVar15 - 1;
            pPVar13 = pPVar13 + 1;
            pPVar11 = pPVar11 + 1;
          } while (uVar15 != 0);
        }
      }
      else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar13,pPVar11,sVar2), iVar8 != 0))
      goto LAB_00e6495c;
      uVar15 = PUScriptTranslator::passValidateProperty
                         ((PUScriptTranslator *)this,param_1,param_2,0x178b298,4);
      if ((uVar15 & 1) != 0) {
        local_78 = 0;
        local_70 = (char *)0x0;
        local_80 = 0;
        uVar10 = PUScriptTranslator::getString
                           (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                            (basic_string *)&local_80);
        uVar15 = local_80;
        if ((uVar10 & 1) != 0) {
          sVar14 = local_80 >> 1 & 0x7f;
          sVar2 = sVar14;
          if ((local_80 & 1) != 0) {
            sVar2 = local_78;
          }
          sVar5 = (ulong)(token[0x918] >> 1);
          if ((token[0x918] & 1) != 0) {
            sVar5 = token._2336_8_;
          }
          if (sVar2 == sVar5) {
            pcVar12 = (char *)((ulong)&local_80 | 1);
            pcVar3 = pcVar12;
            if ((local_80 & 1) != 0) {
              pcVar3 = local_70;
            }
            pcVar1 = token + 0x919;
            if ((token[0x918] & 1) != 0) {
              pcVar1 = (char *)token._2344_8_;
            }
            sVar5 = sVar14;
            sVar7 = sVar2;
            if ((local_80 & 1) == 0) {
              while (sVar7 != 0) {
                if (*pcVar12 != *pcVar1) goto LAB_00e647b8;
                pcVar12 = pcVar12 + 1;
                pcVar1 = pcVar1 + 1;
                sVar5 = sVar5 - 1;
                sVar7 = sVar5;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e647b8;
LAB_00e648b4:
            local_84 = 0;
            PUDoScaleEventHandler::setScaleType(this_00,(ScaleType *)&local_84);
          }
          else {
LAB_00e647b8:
            sVar5 = (ulong)(token[0x2220] >> 1);
            if ((token[0x2220] & 1) != 0) {
              sVar5 = token._8744_8_;
            }
            if (sVar2 == sVar5) {
              pcVar12 = (char *)((ulong)&local_80 | 1);
              pcVar3 = pcVar12;
              if ((uVar15 & 1) != 0) {
                pcVar3 = local_70;
              }
              pcVar1 = token + 0x2221;
              if ((token[0x2220] & 1) != 0) {
                pcVar1 = (char *)token._8752_8_;
              }
              sVar5 = sVar14;
              sVar7 = sVar2;
              if ((uVar15 & 1) == 0) {
                while (sVar7 != 0) {
                  if (*pcVar12 != *pcVar1) goto LAB_00e64844;
                  pcVar12 = pcVar12 + 1;
                  pcVar1 = pcVar1 + 1;
                  sVar5 = sVar5 - 1;
                  sVar7 = sVar5;
                }
              }
              else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
              goto LAB_00e64844;
              goto LAB_00e648b4;
            }
LAB_00e64844:
            sVar5 = (ulong)(token[0x168] >> 1);
            if ((token[0x168] & 1) != 0) {
              sVar5 = token._368_8_;
            }
            if (sVar2 == sVar5) {
              pcVar12 = (char *)((ulong)&local_80 | 1);
              pcVar3 = pcVar12;
              if ((uVar15 & 1) != 0) {
                pcVar3 = local_70;
              }
              pcVar1 = token + 0x169;
              if ((token[0x168] & 1) != 0) {
                pcVar1 = (char *)token._376_8_;
              }
              sVar5 = sVar14;
              sVar7 = sVar2;
              if ((uVar15 & 1) == 0) {
                while (sVar7 != 0) {
                  if (*pcVar12 != *pcVar1) goto LAB_00e648d8;
                  pcVar12 = pcVar12 + 1;
                  pcVar1 = pcVar1 + 1;
                  sVar5 = sVar5 - 1;
                  sVar7 = sVar5;
                }
              }
              else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
              goto LAB_00e648d8;
            }
            else {
LAB_00e648d8:
              sVar5 = (ulong)(token[0x2238] >> 1);
              if ((token[0x2238] & 1) != 0) {
                sVar5 = token._8768_8_;
              }
              if (sVar2 != sVar5) goto LAB_00e64950;
              pcVar12 = (char *)((ulong)&local_80 | 1);
              pcVar3 = pcVar12;
              if ((uVar15 & 1) != 0) {
                pcVar3 = local_70;
              }
              pcVar1 = token + 0x2239;
              if ((token[0x2238] & 1) != 0) {
                pcVar1 = (char *)token._8776_8_;
              }
              if ((uVar15 & 1) == 0) {
                while (sVar2 != 0) {
                  if (*pcVar12 != *pcVar1) goto LAB_00e6495c;
                  pcVar12 = pcVar12 + 1;
                  pcVar1 = pcVar1 + 1;
                  sVar14 = sVar14 - 1;
                  sVar2 = sVar14;
                }
              }
              else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
              goto LAB_00e64954;
            }
            local_84 = 1;
            PUDoScaleEventHandler::setScaleType(this_00,(ScaleType *)&local_84);
          }
          if ((local_80 & 1) != 0) {
            operator_delete(local_70);
          }
          goto LAB_00e649c4;
        }
LAB_00e64950:
        if ((uVar15 & 1) != 0) {
LAB_00e64954:
          operator_delete(local_70);
        }
      }
    }
LAB_00e6495c:
    uVar9 = 0;
  }
LAB_00e64960:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

