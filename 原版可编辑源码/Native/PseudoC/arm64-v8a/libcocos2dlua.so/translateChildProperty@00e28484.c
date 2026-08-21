
/* cocos2d::PUInterParticleColliderTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUInterParticleColliderTranslator::translateChildProperty
          (PUInterParticleColliderTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2
          )

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
  long lVar12;
  char *pcVar13;
  PUAbstractNode *pPVar14;
  PUParticle3DInterParticleCollider *this_00;
  size_t sVar15;
  ulong uVar16;
  ulong uVar17;
  ulong local_80;
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  PVar4 = param_2[0x38];
  uVar17 = (ulong)((byte)PVar4 >> 1);
  this_00 = *(PUParticle3DInterParticleCollider **)(*(long *)(param_2 + 0x28) + 0x30);
  sVar2 = uVar17;
  if (((byte)PVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x40);
  }
  sVar15 = (ulong)(token[0x1a40] >> 1);
  if ((token[0x1a40] & 1) != 0) {
    sVar15 = token._6728_8_;
  }
  if (sVar2 == sVar15) {
    pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar4 & 1) == 0) {
      pPVar14 = param_2 + 0x39;
    }
    pPVar11 = (PUAbstractNode *)(token + 0x1a41);
    if ((token[0x1a40] & 1) != 0) {
      pPVar11 = (PUAbstractNode *)token._6736_8_;
    }
    if (((byte)PVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pPVar14 = param_2 + 0x39;
        uVar10 = uVar17;
        do {
          if (*pPVar14 != *pPVar11) goto LAB_00e2856c;
          uVar10 = uVar10 - 1;
          pPVar14 = pPVar14 + 1;
          pPVar11 = pPVar11 + 1;
                    /* try { // try from 00e28554 to 00f2855b has its CatchHandler @ 00e28ab0 */
        } while (uVar10 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0)) goto LAB_00e2856c;
    lVar12 = 0x1a40;
LAB_00e28678:
    uVar17 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,token + lVar12,0);
    uVar9 = 0;
    if ((uVar17 & 1) == 0) goto LAB_00e28a24;
    local_80 = local_80 & 0xffffffff00000000;
    uVar17 = PUScriptTranslator::getFloat
                       (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),(float *)&local_80);
    if ((uVar17 & 1) != 0) {
      PUParticle3DInterParticleCollider::setAdjustment(this_00,(float)local_80);
      uVar9 = 1;
      goto LAB_00e28a24;
    }
  }
  else {
LAB_00e2856c:
    sVar15 = (ulong)(token[0x1a70] >> 1);
    if ((token[0x1a70] & 1) != 0) {
      sVar15 = token._6776_8_;
    }
    if (sVar2 == sVar15) {
                    /* try { // try from 00e28590 to 00f28597 has its CatchHandler @ 00e28a7c */
      pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar4 & 1) == 0) {
        pPVar14 = param_2 + 0x39;
      }
                    /* try { // try from 00e285a8 to 00f285af has its CatchHandler @ 00e28aac */
      pPVar11 = (PUAbstractNode *)(token + 0x1a71);
      if ((token[0x1a70] & 1) != 0) {
        pPVar11 = (PUAbstractNode *)token._6784_8_;
      }
      if (((byte)PVar4 & 1) == 0) {
        if (sVar2 != 0) {
          pPVar14 = param_2 + 0x39;
          uVar10 = uVar17;
          do {
            if (*pPVar14 != *pPVar11) goto LAB_00e285fc;
            uVar10 = uVar10 - 1;
            pPVar14 = pPVar14 + 1;
            pPVar11 = pPVar11 + 1;
          } while (uVar10 != 0);
        }
      }
      else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0))
      goto LAB_00e285fc;
      lVar12 = 0x1a70;
      goto LAB_00e28678;
    }
LAB_00e285fc:
    sVar15 = (ulong)(token[0x1a58] >> 1);
    if ((token[0x1a58] & 1) != 0) {
      sVar15 = token._6752_8_;
    }
    if (sVar2 == sVar15) {
      pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar4 & 1) == 0) {
        pPVar14 = param_2 + 0x39;
      }
      pPVar11 = (PUAbstractNode *)(token + 0x1a59);
      if ((token[0x1a58] & 1) != 0) {
        pPVar11 = (PUAbstractNode *)token._6760_8_;
      }
      if (((byte)PVar4 & 1) == 0) {
        if (sVar2 != 0) {
          pPVar14 = param_2 + 0x39;
          uVar10 = uVar17;
          do {
            if (*pPVar14 != *pPVar11) goto LAB_00e286d8;
            uVar10 = uVar10 - 1;
            pPVar14 = pPVar14 + 1;
            pPVar11 = pPVar11 + 1;
          } while (uVar10 != 0);
        }
      }
      else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0))
      goto LAB_00e286d8;
      uVar17 = PUScriptTranslator::passValidateProperty
                         ((PUScriptTranslator *)this,param_1,param_2,0x178aae8,4);
      if ((uVar17 & 1) != 0) {
        local_78 = 0;
        local_70 = (char *)0x0;
        local_80 = 0;
        uVar10 = PUScriptTranslator::getString
                           (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                            (basic_string *)&local_80);
        uVar17 = local_80;
        uVar16 = local_80 & 0xff;
        if ((uVar10 & 1) != 0) {
          sVar15 = local_80 >> 1 & 0x7f;
          sVar2 = sVar15;
          if ((local_80 & 1) != 0) {
            sVar2 = local_78;
          }
          sVar5 = (ulong)(token[0x1aa0] >> 1);
          if ((token[0x1aa0] & 1) != 0) {
            sVar5 = token._6824_8_;
          }
          if (sVar2 == sVar5) {
            pcVar13 = (char *)((ulong)&local_80 | 1);
            pcVar3 = pcVar13;
            if ((local_80 & 1) != 0) {
              pcVar3 = local_70;
            }
            pcVar1 = token + 0x1aa1;
            if ((token[0x1aa0] & 1) != 0) {
              pcVar1 = (char *)token._6832_8_;
            }
            sVar5 = sVar15;
            sVar7 = sVar2;
            if ((local_80 & 1) == 0) {
              while (sVar7 != 0) {
                if (*pcVar13 != *pcVar1) goto LAB_00e28904;
                pcVar13 = pcVar13 + 1;
                pcVar1 = pcVar1 + 1;
                sVar5 = sVar5 - 1;
                sVar7 = sVar5;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e28904;
            PUParticle3DInterParticleCollider::setInterParticleCollisionResponse(this_00,0);
          }
          else {
LAB_00e28904:
            sVar5 = (ulong)(token[0x1ab8] >> 1);
            if ((token[0x1ab8] & 1) != 0) {
              sVar5 = token._6848_8_;
            }
            if (sVar2 != sVar5) goto LAB_00e28a14;
            pcVar13 = (char *)((ulong)&local_80 | 1);
            pcVar3 = pcVar13;
            if ((uVar17 & 1) != 0) {
              pcVar3 = local_70;
            }
            pcVar1 = token + 0x1ab9;
            if ((token[0x1ab8] & 1) != 0) {
              pcVar1 = (char *)token._6856_8_;
            }
            if ((uVar17 & 1) == 0) {
              while (sVar2 != 0) {
                if (*pcVar13 != *pcVar1) goto LAB_00e28a20;
                pcVar13 = pcVar13 + 1;
                pcVar1 = pcVar1 + 1;
                sVar15 = sVar15 - 1;
                sVar2 = sVar15;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e28a18;
                    /* catch() { ... } // from try @ 00e28404 with catch @ 00e28a74 */
                    /* catch() { ... } // from try @ 00e28590 with catch @ 00e28a7c */
            PUParticle3DInterParticleCollider::setInterParticleCollisionResponse(this_00,1);
          }
LAB_00e28aa0:
          if ((local_80 & 1) != 0) {
                    /* catch() { ... } // from try @ 00e281c0 with catch @ 00e28aa8 */
                    /* catch() { ... } // from try @ 00e285a8 with catch @ 00e28aac */
            operator_delete(local_70);
          }
                    /* catch() { ... } // from try @ 00e28554 with catch @ 00e28ab0 */
          uVar9 = 1;
                    /* catch() { ... } // from try @ 00e28978 with catch @ 00e28ab4 */
          goto LAB_00e28a24;
        }
LAB_00e28a14:
        if ((uVar16 & 1) != 0) {
LAB_00e28a18:
          operator_delete(local_70);
        }
      }
    }
    else {
LAB_00e286d8:
                    /* try { // try from 00e286e8 to 00f286f3 has its CatchHandler @ 00e28a94 */
      sVar15 = (ulong)(token[0x1a88] >> 1);
      if ((token[0x1a88] & 1) != 0) {
        sVar15 = token._6800_8_;
      }
      if (sVar2 == sVar15) {
        pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar4 & 1) == 0) {
          pPVar14 = param_2 + 0x39;
        }
        pPVar11 = (PUAbstractNode *)(token + 0x1a89);
        if ((token[0x1a88] & 1) != 0) {
          pPVar11 = (PUAbstractNode *)token._6808_8_;
        }
        if (((byte)PVar4 & 1) == 0) {
          if (sVar2 != 0) {
            pPVar14 = param_2 + 0x39;
            do {
              if (*pPVar14 != *pPVar11) goto LAB_00e28a20;
              uVar17 = uVar17 - 1;
              pPVar14 = pPVar14 + 1;
              pPVar11 = pPVar11 + 1;
            } while (uVar17 != 0);
          }
        }
        else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0))
        goto LAB_00e28a20;
        uVar17 = PUScriptTranslator::passValidateProperty
                           ((PUScriptTranslator *)this,param_1,param_2,0x178ab18,4);
        if ((uVar17 & 1) != 0) {
          local_78 = 0;
          local_70 = (char *)0x0;
          local_80 = 0;
          uVar10 = PUScriptTranslator::getString
                             (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                              (basic_string *)&local_80);
          uVar17 = local_80;
          uVar16 = local_80 & 0xff;
          if ((uVar10 & 1) == 0) goto LAB_00e28a14;
          sVar15 = local_80 >> 1 & 0x7f;
          sVar2 = sVar15;
          if ((local_80 & 1) != 0) {
            sVar2 = local_78;
          }
          sVar5 = (ulong)(token[0x1aa0] >> 1);
          if ((token[0x1aa0] & 1) != 0) {
            sVar5 = token._6824_8_;
          }
          if (sVar2 == sVar5) {
            pcVar13 = (char *)((ulong)&local_80 | 1);
            pcVar3 = pcVar13;
            if ((local_80 & 1) != 0) {
              pcVar3 = local_70;
            }
            pcVar1 = token + 0x1aa1;
            if ((token[0x1aa0] & 1) != 0) {
              pcVar1 = (char *)token._6832_8_;
            }
            sVar5 = sVar15;
            sVar7 = sVar2;
            if ((local_80 & 1) == 0) {
              while (sVar7 != 0) {
                if (*pcVar13 != *pcVar1) goto LAB_00e2899c;
                pcVar13 = pcVar13 + 1;
                pcVar1 = pcVar1 + 1;
                sVar5 = sVar5 - 1;
                sVar7 = sVar5;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e2899c;
            PUParticle3DInterParticleCollider::setInterParticleCollisionResponse(this_00,0);
          }
          else {
LAB_00e2899c:
                    /* try { // try from 00e289a0 to 00f28ac7 has its CatchHandler @ 00e27c78 */
            sVar5 = (ulong)(token[0x1ab8] >> 1);
            if ((token[0x1ab8] & 1) != 0) {
              sVar5 = token._6848_8_;
            }
            if (sVar2 != sVar5) goto LAB_00e28a14;
            pcVar13 = (char *)((ulong)&local_80 | 1);
            pcVar3 = pcVar13;
            if ((uVar17 & 1) != 0) {
              pcVar3 = local_70;
            }
            pcVar1 = token + 0x1ab9;
            if ((token[0x1ab8] & 1) != 0) {
              pcVar1 = (char *)token._6856_8_;
            }
            if ((uVar17 & 1) == 0) {
              while (sVar2 != 0) {
                if (*pcVar13 != *pcVar1) goto LAB_00e28a20;
                pcVar13 = pcVar13 + 1;
                pcVar1 = pcVar1 + 1;
                sVar15 = sVar15 - 1;
                sVar2 = sVar15;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e28a18;
                    /* catch() { ... } // from try @ 00e286e8 with catch @ 00e28a94 */
            PUParticle3DInterParticleCollider::setInterParticleCollisionResponse(this_00,1);
          }
          goto LAB_00e28aa0;
        }
      }
    }
  }
LAB_00e28a20:
  uVar9 = 0;
LAB_00e28a24:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
                    /* catch() { ... } // from try @ 00e27cfc with catch @ 00e28a48 */
  return;
}

