
/* cocos2d::PUBaseForceAffectorTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUBaseForceAffectorTranslator::translateChildProperty
          (PUBaseForceAffectorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

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
  PUBaseForceAffector *this_00;
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
                    /* try { // try from 00e22f98 to 00f22f9b has its CatchHandler @ 00e23514 */
  uVar17 = (ulong)((byte)PVar4 >> 1);
  this_00 = *(PUBaseForceAffector **)(*(long *)(param_2 + 0x28) + 0x30);
  sVar2 = uVar17;
  if (((byte)PVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x40);
  }
  sVar15 = (ulong)(token[0x17d0] >> 1);
  if ((token[0x17d0] & 1) != 0) {
    sVar15 = token._6104_8_;
  }
                    /* try { // try from 00e22fd8 to 00f22fdb has its CatchHandler @ 00e23510 */
  if (sVar2 == sVar15) {
                    /* try { // try from 00e22fdc to 00f23037 has its CatchHandler @ 00e22d88 */
    pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar4 & 1) == 0) {
      pPVar14 = param_2 + 0x39;
    }
    pPVar11 = (PUAbstractNode *)(token + 0x17d1);
    if ((token[0x17d0] & 1) != 0) {
      pPVar11 = (PUAbstractNode *)token._6112_8_;
    }
    if (((byte)PVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pPVar14 = param_2 + 0x39;
        uVar10 = uVar17;
        do {
          if (*pPVar14 != *pPVar11) goto LAB_00e23040;
          uVar10 = uVar10 - 1;
          pPVar14 = pPVar14 + 1;
          pPVar11 = pPVar11 + 1;
        } while (uVar10 != 0);
      }
    }
    else {
                    /* try { // try from 00e23038 to 00f2303b has its CatchHandler @ 00e234bc */
      if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0)) goto LAB_00e23040;
    }
    lVar12 = 0x17d0;
LAB_00e2314c:
    uVar17 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,token + lVar12,6);
    if ((uVar17 & 1) != 0) {
      Vec3::Vec3((Vec3 *)&local_80);
                    /* try { // try from 00e23174 to 00f23177 has its CatchHandler @ 00e2350c */
      uVar17 = PUScriptTranslator::getVector3
                         ((PUScriptTranslator *)this,*(undefined8 *)(param_2 + 0x60),param_2 + 0x58,
                          &local_80,3);
      if ((uVar17 & 1) != 0) {
        PUBaseForceAffector::setForceVector(this_00,(Vec3 *)&local_80);
        uVar9 = 1;
        goto LAB_00e234fc;
      }
    }
  }
  else {
LAB_00e23040:
    sVar15 = (ulong)(token[0x1800] >> 1);
    if ((token[0x1800] & 1) != 0) {
      sVar15 = token._6152_8_;
    }
    if (sVar2 == sVar15) {
      pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar4 & 1) == 0) {
        pPVar14 = param_2 + 0x39;
      }
      pPVar11 = (PUAbstractNode *)(token + 0x1801);
      if ((token[0x1800] & 1) != 0) {
        pPVar11 = (PUAbstractNode *)token._6160_8_;
      }
      if (((byte)PVar4 & 1) == 0) {
        if (sVar2 != 0) {
          pPVar14 = param_2 + 0x39;
          uVar10 = uVar17;
          do {
                    /* try { // try from 00e23098 to 00f230bb has its CatchHandler @ 00e23500 */
            if (*pPVar14 != *pPVar11) goto LAB_00e230d0;
            uVar10 = uVar10 - 1;
            pPVar14 = pPVar14 + 1;
            pPVar11 = pPVar11 + 1;
          } while (uVar10 != 0);
        }
      }
      else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0))
      goto LAB_00e230d0;
      lVar12 = 0x1800;
      goto LAB_00e2314c;
    }
LAB_00e230d0:
    sVar15 = (ulong)(token[0x17e8] >> 1);
    if ((token[0x17e8] & 1) != 0) {
      sVar15 = token._6128_8_;
    }
    if (sVar2 == sVar15) {
      pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar4 & 1) == 0) {
        pPVar14 = param_2 + 0x39;
      }
      pPVar11 = (PUAbstractNode *)(token + 0x17e9);
      if ((token[0x17e8] & 1) != 0) {
        pPVar11 = (PUAbstractNode *)token._6136_8_;
      }
      if (((byte)PVar4 & 1) == 0) {
        if (sVar2 != 0) {
          pPVar14 = param_2 + 0x39;
          uVar10 = uVar17;
          do {
            if (*pPVar14 != *pPVar11) goto LAB_00e231b0;
            uVar10 = uVar10 - 1;
            pPVar14 = pPVar14 + 1;
            pPVar11 = pPVar11 + 1;
          } while (uVar10 != 0);
        }
      }
      else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0))
      goto LAB_00e231b0;
                    /* try { // try from 00e23224 to 00f2322b has its CatchHandler @ 00e2353c */
      uVar17 = PUScriptTranslator::passValidateProperty
                         ((PUScriptTranslator *)this,param_1,param_2,0x178a878,4);
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
          sVar5 = (ulong)(token[0x1830] >> 1);
          if ((token[0x1830] & 1) != 0) {
            sVar5 = token._6200_8_;
          }
          if (sVar2 == sVar5) {
                    /* try { // try from 00e232a8 to 00f232d7 has its CatchHandler @ 00e23500 */
            pcVar13 = (char *)((ulong)&local_80 | 1);
            pcVar3 = pcVar13;
            if ((local_80 & 1) != 0) {
              pcVar3 = local_70;
            }
            pcVar1 = token + 0x1831;
            if ((token[0x1830] & 1) != 0) {
              pcVar1 = (char *)token._6208_8_;
            }
            sVar5 = sVar15;
            sVar7 = sVar2;
            if ((local_80 & 1) == 0) {
              while (sVar7 != 0) {
                if (*pcVar13 != *pcVar1) goto LAB_00e233dc;
                    /* try { // try from 00e232e0 to 00f232e3 has its CatchHandler @ 00e23490 */
                pcVar13 = pcVar13 + 1;
                pcVar1 = pcVar1 + 1;
                sVar5 = sVar5 - 1;
                sVar7 = sVar5;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e233dc;
            PUBaseForceAffector::setForceApplication(this_00,1);
          }
          else {
LAB_00e233dc:
            sVar5 = (ulong)(token[0x1848] >> 1);
            if ((token[0x1848] & 1) != 0) {
              sVar5 = token._6224_8_;
            }
            if (sVar2 != sVar5) goto LAB_00e234ec;
            pcVar13 = (char *)((ulong)&local_80 | 1);
            pcVar3 = pcVar13;
            if ((uVar17 & 1) != 0) {
              pcVar3 = local_70;
            }
            pcVar1 = token + 0x1849;
            if ((token[0x1848] & 1) != 0) {
              pcVar1 = (char *)token._6232_8_;
            }
            if ((uVar17 & 1) == 0) {
              while (sVar2 != 0) {
                if (*pcVar13 != *pcVar1) goto LAB_00e234f8;
                    /* try { // try from 00e23444 to 00f2354f has its CatchHandler @ 00e22d88 */
                pcVar13 = pcVar13 + 1;
                pcVar1 = pcVar1 + 1;
                sVar15 = sVar15 - 1;
                sVar2 = sVar15;
              }
            }
            else {
                    /* catch() { ... } // from try @ 00e23224 with catch @ 00e2353c */
              if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
              goto LAB_00e234f0;
            }
            PUBaseForceAffector::setForceApplication(this_00,0);
          }
LAB_00e23578:
          if ((local_80 & 1) != 0) {
            operator_delete(local_70);
          }
          uVar9 = 1;
          goto LAB_00e234fc;
        }
LAB_00e234ec:
        if ((uVar16 & 1) != 0) {
LAB_00e234f0:
          operator_delete(local_70);
        }
      }
    }
    else {
LAB_00e231b0:
                    /* try { // try from 00e231b4 to 00f231b7 has its CatchHandler @ 00e23508 */
      sVar15 = (ulong)(token[0x1818] >> 1);
      if ((token[0x1818] & 1) != 0) {
        sVar15 = token._6176_8_;
      }
      if (sVar2 == sVar15) {
        pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar4 & 1) == 0) {
          pPVar14 = param_2 + 0x39;
        }
        pPVar11 = (PUAbstractNode *)(token + 0x1819);
        if ((token[0x1818] & 1) != 0) {
          pPVar11 = (PUAbstractNode *)token._6184_8_;
        }
        if (((byte)PVar4 & 1) == 0) {
          if (sVar2 != 0) {
            pPVar14 = param_2 + 0x39;
            do {
              if (*pPVar14 != *pPVar11) goto LAB_00e234f8;
              uVar17 = uVar17 - 1;
              pPVar14 = pPVar14 + 1;
              pPVar11 = pPVar11 + 1;
            } while (uVar17 != 0);
          }
        }
        else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0))
        goto LAB_00e234f8;
        uVar17 = PUScriptTranslator::passValidateProperty
                           ((PUScriptTranslator *)this,param_1,param_2,0x178a8a8,4);
        if ((uVar17 & 1) != 0) {
          local_78 = 0;
          local_70 = (char *)0x0;
          local_80 = 0;
                    /* try { // try from 00e23334 to 00f23337 has its CatchHandler @ 00e23494 */
          uVar10 = PUScriptTranslator::getString
                             (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                              (basic_string *)&local_80);
          uVar17 = local_80;
          uVar16 = local_80 & 0xff;
          if ((uVar10 & 1) == 0) goto LAB_00e234ec;
          sVar15 = local_80 >> 1 & 0x7f;
          sVar2 = sVar15;
          if ((local_80 & 1) != 0) {
            sVar2 = local_78;
          }
          sVar5 = (ulong)(token[0x1830] >> 1);
          if ((token[0x1830] & 1) != 0) {
            sVar5 = token._6200_8_;
          }
          if (sVar2 == sVar5) {
            pcVar13 = (char *)((ulong)&local_80 | 1);
            pcVar3 = pcVar13;
            if ((local_80 & 1) != 0) {
              pcVar3 = local_70;
            }
                    /* try { // try from 00e23394 to 00f23443 has its CatchHandler @ 00e23504 */
            pcVar1 = token + 0x1831;
            if ((token[0x1830] & 1) != 0) {
              pcVar1 = (char *)token._6208_8_;
            }
            sVar5 = sVar15;
            sVar7 = sVar2;
            if ((local_80 & 1) == 0) {
              while (sVar7 != 0) {
                if (*pcVar13 != *pcVar1) goto LAB_00e23474;
                pcVar13 = pcVar13 + 1;
                pcVar1 = pcVar1 + 1;
                sVar5 = sVar5 - 1;
                sVar7 = sVar5;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e23474;
            PUBaseForceAffector::setForceApplication(this_00,1);
          }
          else {
LAB_00e23474:
            sVar5 = (ulong)(token[0x1848] >> 1);
            if ((token[0x1848] & 1) != 0) {
              sVar5 = token._6224_8_;
            }
                    /* catch() { ... } // from try @ 00e232e0 with catch @ 00e23490 */
                    /* catch() { ... } // from try @ 00e23334 with catch @ 00e23494 */
            if (sVar2 != sVar5) goto LAB_00e234ec;
            pcVar13 = (char *)((ulong)&local_80 | 1);
            pcVar3 = pcVar13;
            if ((uVar17 & 1) != 0) {
              pcVar3 = local_70;
            }
            pcVar1 = token + 0x1849;
                    /* catch() { ... } // from try @ 00e23038 with catch @ 00e234bc */
            if ((token[0x1848] & 1) != 0) {
              pcVar1 = (char *)token._6232_8_;
            }
            if ((uVar17 & 1) == 0) {
              while (sVar2 != 0) {
                if (*pcVar13 != *pcVar1) goto LAB_00e234f8;
                pcVar13 = pcVar13 + 1;
                pcVar1 = pcVar1 + 1;
                sVar15 = sVar15 - 1;
                    /* catch() { ... } // from try @ 00e22e84 with catch @ 00e234e4 */
                sVar2 = sVar15;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e234f0;
            PUBaseForceAffector::setForceApplication(this_00,0);
          }
          goto LAB_00e23578;
        }
      }
    }
  }
LAB_00e234f8:
  uVar9 = 0;
LAB_00e234fc:
                    /* catch() { ... } // from try @ 00e22e6c with catch @ 00e234fc */
                    /* catch() { ... } // from try @ 00e23098 with catch @ 00e23500
                       catch() { ... } // from try @ 00e232a8 with catch @ 00e23500 */
                    /* catch() { ... } // from try @ 00e23394 with catch @ 00e23504 */
                    /* catch() { ... } // from try @ 00e231b4 with catch @ 00e23508 */
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
                    /* catch() { ... } // from try @ 00e23174 with catch @ 00e2350c */
                    /* catch() { ... } // from try @ 00e22fd8 with catch @ 00e23510 */
                    /* catch() { ... } // from try @ 00e22f98 with catch @ 00e23514 */
  return;
}

