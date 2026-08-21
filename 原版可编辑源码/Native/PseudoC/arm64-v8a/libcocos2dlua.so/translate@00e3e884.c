
/* cocos2d::PUDynamicAttributeTranslator::translate(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUDynamicAttributeTranslator::translate
          (PUDynamicAttributeTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  PUAbstractNode PVar4;
  size_t sVar5;
  long lVar6;
  char *pcVar7;
  size_t sVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar9;
  int iVar10;
  PUDynamicAttributeRandom *this_00;
  ulong uVar11;
  PUAbstractNode *pPVar12;
  char *pcVar13;
  PUAbstractNode *pPVar14;
  size_t sVar15;
  PUAbstractNode *pPVar16;
  PUAbstractNode *pPVar17;
  ulong uVar18;
  undefined8 local_98;
  size_t local_90;
  char *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
                    /* try { // try from 00e3e8bc to 00f3e953 has its CatchHandler @ 00e3e9cc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_80,(basic_string *)(param_2 + 0x60));
  bVar9 = local_80[0];
  sVar15 = (size_t)((byte)local_80[0] >> 1);
  sVar2 = sVar15;
  if (((byte)local_80[0] & 1) != 0) {
    sVar2 = local_78;
  }
  sVar5 = (ulong)(token[0xcd8] >> 1);
  if ((token[0xcd8] & 1) != 0) {
    sVar5 = token._3296_8_;
  }
  if (sVar2 == sVar5) {
    pcVar13 = (char *)((ulong)local_80 | 1);
    pcVar3 = pcVar13;
    if (((byte)local_80[0] & 1) != 0) {
      pcVar3 = local_70;
    }
    pcVar1 = token + 0xcd9;
    if ((token[0xcd8] & 1) != 0) {
      pcVar1 = (char *)token._3304_8_;
    }
    sVar5 = sVar15;
    sVar8 = sVar2;
    if (((byte)local_80[0] & 1) == 0) {
      while (sVar8 != 0) {
        if (*pcVar13 != *pcVar1) goto LAB_00e3e968;
        pcVar13 = pcVar13 + 1;
        pcVar1 = pcVar1 + 1;
        sVar5 = sVar5 - 1;
        sVar8 = sVar5;
      }
    }
    else if ((sVar2 != 0) && (iVar10 = memcmp(pcVar3,pcVar1,sVar2), iVar10 != 0)) goto LAB_00e3e968;
    this_00 = operator_new(0x38,(nothrow_t *)&std::nothrow);
    if (this_00 != (PUDynamicAttributeRandom *)0x0) {
      PUDynamicAttributeRandom::PUDynamicAttributeRandom(this_00);
    }
    goto LAB_00e3ebb0;
  }
LAB_00e3e968:
  sVar5 = (ulong)(token[0xcf0] >> 1);
  if ((token[0xcf0] & 1) != 0) {
    sVar5 = token._3320_8_;
  }
  if (sVar2 == sVar5) {
    pcVar13 = (char *)((ulong)local_80 | 1);
    pcVar3 = pcVar13;
    if (((byte)bVar9 & 1) != 0) {
      pcVar3 = local_70;
    }
    pcVar1 = token + 0xcf1;
    if ((token[0xcf0] & 1) != 0) {
      pcVar1 = (char *)token._3328_8_;
    }
    sVar5 = sVar15;
    sVar8 = sVar2;
    if (((byte)bVar9 & 1) == 0) {
      while (sVar8 != 0) {
        if (*pcVar13 != *pcVar1) goto LAB_00e3ea10;
        pcVar13 = pcVar13 + 1;
                    /* catch() { ... } // from try @ 00e3e8bc with catch @ 00e3e9cc */
        pcVar1 = pcVar1 + 1;
        sVar5 = sVar5 - 1;
                    /* catch() { ... } // from try @ 00e3e7d4 with catch @ 00e3e9d0 */
        sVar8 = sVar5;
      }
    }
    else if ((sVar2 != 0) && (iVar10 = memcmp(pcVar3,pcVar1,sVar2), iVar10 != 0)) goto LAB_00e3ea10;
    this_00 = operator_new(200,(nothrow_t *)&std::nothrow);
    if (this_00 != (PUDynamicAttributeRandom *)0x0) {
      PUDynamicAttributeCurved::PUDynamicAttributeCurved((PUDynamicAttributeCurved *)this_00);
    }
    goto LAB_00e3ebb0;
  }
LAB_00e3ea10:
  sVar5 = (ulong)(token[0xd08] >> 1);
  if ((token[0xd08] & 1) != 0) {
    sVar5 = token._3344_8_;
  }
  if (sVar2 == sVar5) {
    pcVar13 = (char *)((ulong)local_80 | 1);
    pcVar3 = pcVar13;
    if (((byte)bVar9 & 1) != 0) {
      pcVar3 = local_70;
    }
    pcVar1 = token + 0xd09;
    if ((token[0xd08] & 1) != 0) {
      pcVar1 = (char *)token._3352_8_;
    }
    sVar5 = sVar15;
    sVar8 = sVar2;
    if (((byte)bVar9 & 1) == 0) {
      while (sVar8 != 0) {
        if (*pcVar13 != *pcVar1) goto LAB_00e3eab8;
        pcVar13 = pcVar13 + 1;
        pcVar1 = pcVar1 + 1;
        sVar5 = sVar5 - 1;
        sVar8 = sVar5;
      }
    }
    else if ((sVar2 != 0) && (iVar10 = memcmp(pcVar3,pcVar1,sVar2), iVar10 != 0)) goto LAB_00e3eab8;
    this_00 = operator_new(200,(nothrow_t *)&std::nothrow);
    if (this_00 != (PUDynamicAttributeRandom *)0x0) {
      PUDynamicAttributeCurved::PUDynamicAttributeCurved((PUDynamicAttributeCurved *)this_00);
    }
    goto LAB_00e3ebb0;
  }
LAB_00e3eab8:
  sVar5 = (ulong)(token[0xcc0] >> 1);
  if ((token[0xcc0] & 1) != 0) {
    sVar5 = token._3272_8_;
  }
  if (sVar2 == sVar5) {
    pcVar13 = (char *)((ulong)local_80 | 1);
    pcVar3 = pcVar13;
    if (((byte)bVar9 & 1) != 0) {
      pcVar3 = local_70;
    }
    pcVar1 = token + 0xcc1;
    if ((token[0xcc0] & 1) != 0) {
      pcVar1 = (char *)token._3280_8_;
    }
    if (((byte)bVar9 & 1) == 0) {
      while (sVar2 != 0) {
        if (*pcVar13 != *pcVar1) goto LAB_00e3eb5c;
        pcVar13 = pcVar13 + 1;
        pcVar1 = pcVar1 + 1;
        sVar15 = sVar15 - 1;
        sVar2 = sVar15;
      }
    }
    else if ((sVar2 != 0) && (iVar10 = memcmp(pcVar3,pcVar1,sVar2), iVar10 != 0)) goto LAB_00e3eb5c;
    this_00 = operator_new(0x40,(nothrow_t *)&std::nothrow);
    if (this_00 != (PUDynamicAttributeRandom *)0x0) {
      PUDynamicAttributeOscillate::PUDynamicAttributeOscillate
                ((PUDynamicAttributeOscillate *)this_00);
    }
  }
  else {
LAB_00e3eb5c:
    this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
    if (this_00 != (PUDynamicAttributeRandom *)0x0) {
      PUDynamicAttributeFixed::PUDynamicAttributeFixed((PUDynamicAttributeFixed *)this_00);
    }
  }
LAB_00e3ebb0:
  *(PUDynamicAttributeRandom **)(this + 8) = this_00;
  pPVar17 = *(PUAbstractNode **)(param_2 + 0xb8);
                    /* try { // try from 00e3ebc0 to 00f3ec0b has its CatchHandler @ 00e3ebc0
                       catch() { ... } // from try @ 00e3ebc0 with catch @ 00e3ebc0
                       catch() { ... } // from try @ 00e3ed44 with catch @ 00e3ebc0 */
  if (pPVar17 != param_2 + 0xb0) {
    pcVar13 = (char *)((ulong)&local_98 | 1);
    do {
      pPVar16 = *(PUAbstractNode **)(pPVar17 + 0x10);
      if (*(int *)(pPVar16 + 0x24) == 2) {
        PUScriptTranslator::processNode((PUScriptTranslator *)this,param_1,pPVar16);
      }
      else if (*(int *)(pPVar16 + 0x24) == 3) {
                    /* try { // try from 00e3ec0c to 00f3ec23 has its CatchHandler @ 00e3edcc */
        PVar4 = pPVar16[0x38];
        uVar18 = (ulong)((byte)PVar4 >> 1);
        sVar2 = uVar18;
        if (((byte)PVar4 & 1) != 0) {
          sVar2 = *(size_t *)(pPVar16 + 0x40);
        }
        sVar15 = (ulong)(token[0xc18] >> 1);
        if ((token[0xc18] & 1) != 0) {
          sVar15 = token._3104_8_;
        }
        if (sVar2 == sVar15) {
          pPVar14 = *(PUAbstractNode **)(pPVar16 + 0x48);
          if (((byte)PVar4 & 1) == 0) {
            pPVar14 = pPVar16 + 0x39;
          }
          pPVar12 = (PUAbstractNode *)(token + 0xc19);
          if ((token[0xc18] & 1) != 0) {
            pPVar12 = (PUAbstractNode *)token._3112_8_;
          }
          if (((byte)PVar4 & 1) == 0) {
            if (sVar2 != 0) {
              pPVar14 = pPVar16 + 0x39;
              uVar11 = uVar18;
              do {
                if (*pPVar14 != *pPVar12) goto LAB_00e3ecb0;
                uVar11 = uVar11 - 1;
                pPVar14 = pPVar14 + 1;
                pPVar12 = pPVar12 + 1;
              } while (uVar11 != 0);
            }
          }
          else if ((sVar2 != 0) && (iVar10 = memcmp(pPVar14,pPVar12,sVar2), iVar10 != 0))
          goto LAB_00e3ecb0;
                    /* try { // try from 00e3ed20 to 00f3ed27 has its CatchHandler @ 00e3ed9c */
          iVar10 = PUDynamicAttribute::getType(*(PUDynamicAttribute **)(this + 8));
                    /* try { // try from 00e3ed3c to 00f3ed43 has its CatchHandler @ 00e3ed98 */
                    /* try { // try from 00e3ed44 to 00f3ede7 has its CatchHandler @ 00e3ebc0 */
          if ((iVar10 == 1) &&
             (uVar18 = PUScriptTranslator::passValidateProperty
                                 ((PUScriptTranslator *)this,param_1,pPVar16,0x1789ca8,0),
             (uVar18 & 1) != 0)) {
            local_98 = local_98 & 0xffffffff00000000;
            uVar18 = PUScriptTranslator::getFloat
                               (*(PUAbstractNode **)(*(long *)(pPVar16 + 0x60) + 0x10),
                                (float *)&local_98);
            if ((uVar18 & 1) != 0) {
              PUDynamicAttributeRandom::setMin
                        (*(PUDynamicAttributeRandom **)(this + 8),(float)local_98);
            }
          }
        }
        else {
LAB_00e3ecb0:
                    /* try { // try from 00e3ecb4 to 00f3ecef has its CatchHandler @ 00e3ed98 */
          sVar15 = (ulong)(token[0xc30] >> 1);
          if ((token[0xc30] & 1) != 0) {
            sVar15 = token._3128_8_;
          }
          if (sVar2 == sVar15) {
            pPVar14 = *(PUAbstractNode **)(pPVar16 + 0x48);
            if (((byte)PVar4 & 1) == 0) {
              pPVar14 = pPVar16 + 0x39;
            }
            pPVar12 = (PUAbstractNode *)(token + 0xc31);
            if ((token[0xc30] & 1) != 0) {
              pPVar12 = (PUAbstractNode *)token._3136_8_;
            }
            if (((byte)PVar4 & 1) == 0) {
              if (sVar2 != 0) {
                pPVar14 = pPVar16 + 0x39;
                uVar11 = uVar18;
                do {
                    /* try { // try from 00e3ecf8 to 00f3ed0f has its CatchHandler @ 00e3ed94 */
                  if (*pPVar14 != *pPVar12) goto LAB_00e3ed84;
                  uVar11 = uVar11 - 1;
                  pPVar14 = pPVar14 + 1;
                  pPVar12 = pPVar12 + 1;
                } while (uVar11 != 0);
              }
            }
            else if ((sVar2 != 0) && (iVar10 = memcmp(pPVar14,pPVar12,sVar2), iVar10 != 0))
            goto LAB_00e3ed84;
            iVar10 = PUDynamicAttribute::getType(*(PUDynamicAttribute **)(this + 8));
            if ((iVar10 == 1) &&
               (uVar18 = PUScriptTranslator::passValidateProperty
                                   ((PUScriptTranslator *)this,param_1,pPVar16,0x1789cc0,0),
               (uVar18 & 1) != 0)) {
              local_98 = local_98 & 0xffffffff00000000;
              uVar18 = PUScriptTranslator::getFloat
                                 (*(PUAbstractNode **)(*(long *)(pPVar16 + 0x60) + 0x10),
                                  (float *)&local_98);
              if ((uVar18 & 1) != 0) {
                PUDynamicAttributeRandom::setMax
                          (*(PUDynamicAttributeRandom **)(this + 8),(float)local_98);
              }
            }
          }
          else {
LAB_00e3ed84:
            sVar15 = (ulong)(token[0xc00] >> 1);
                    /* catch() { ... } // from try @ 00e3ecf8 with catch @ 00e3ed94 */
            if ((token[0xc00] & 1) != 0) {
              sVar15 = token._3080_8_;
            }
                    /* catch() { ... } // from try @ 00e3ecb4 with catch @ 00e3ed98
                       catch() { ... } // from try @ 00e3ed3c with catch @ 00e3ed98 */
                    /* catch() { ... } // from try @ 00e3ec90 with catch @ 00e3ed9c
                       catch() { ... } // from try @ 00e3ed20 with catch @ 00e3ed9c */
            if (sVar2 == sVar15) {
              pPVar14 = *(PUAbstractNode **)(pPVar16 + 0x48);
              if (((byte)PVar4 & 1) == 0) {
                pPVar14 = pPVar16 + 0x39;
              }
              pPVar12 = (PUAbstractNode *)(token + 0xc01);
              if ((token[0xc00] & 1) != 0) {
                pPVar12 = (PUAbstractNode *)token._3088_8_;
              }
              if (((byte)PVar4 & 1) == 0) {
                if (sVar2 != 0) {
                  pPVar14 = pPVar16 + 0x39;
                  uVar11 = uVar18;
                  do {
                    /* catch() { ... } // from try @ 00e3ec0c with catch @ 00e3edcc */
                    if (*pPVar14 != *pPVar12) goto LAB_00e3ee58;
                    uVar11 = uVar11 - 1;
                    pPVar14 = pPVar14 + 1;
                    pPVar12 = pPVar12 + 1;
                    /* try { // try from 00e3ede8 to 00f3ee57 has its CatchHandler @ 00e3ede8
                       catch(type#1 @ 00000000) { ... } // from try @ 00e3ede8 with catch @ 00e3ede8
                       catch(type#1 @ 00000000) { ... } // from try @ 00e3ef40 with catch @ 00e3ede8
                        */
                  } while (uVar11 != 0);
                }
              }
              else if ((sVar2 != 0) && (iVar10 = memcmp(pPVar14,pPVar12,sVar2), iVar10 != 0))
              goto LAB_00e3ee58;
              iVar10 = PUDynamicAttribute::getType(*(PUDynamicAttribute **)(this + 8));
              if ((iVar10 == 2) &&
                 (uVar18 = PUScriptTranslator::passValidateProperty
                                     ((PUScriptTranslator *)this,param_1,pPVar16,0x1789c90,5),
                 (uVar18 & 1) != 0)) {
                local_98 = 0;
                uVar18 = PUScriptTranslator::getVector2
                                   ((PUScriptTranslator *)this,*(undefined8 *)(pPVar16 + 0x60),
                                    pPVar16 + 0x58,&local_98,2);
                if ((uVar18 & 1) != 0) {
                  (**(code **)(**(long **)(this + 8) + 0x28))((float)local_98,local_98._4_4_);
                }
              }
            }
            else {
LAB_00e3ee58:
                    /* try { // try from 00e3ee58 to 00f3ee63 has its CatchHandler @ 00e3eea4 */
              sVar15 = (ulong)(token[0xc48] >> 1);
              if ((token[0xc48] & 1) != 0) {
                sVar15 = token._3152_8_;
              }
              if (sVar2 == sVar15) {
                pPVar14 = *(PUAbstractNode **)(pPVar16 + 0x48);
                if (((byte)PVar4 & 1) == 0) {
                  pPVar14 = pPVar16 + 0x39;
                }
                pPVar12 = (PUAbstractNode *)(token + 0xc49);
                if ((token[0xc48] & 1) != 0) {
                  pPVar12 = (PUAbstractNode *)token._3160_8_;
                }
                if (((byte)PVar4 & 1) == 0) {
                  if (sVar2 != 0) {
                    pPVar14 = pPVar16 + 0x39;
                    uVar11 = uVar18;
                    do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3ee58 with catch @ 00e3eea4
                        */
                      if (*pPVar14 != *pPVar12) goto LAB_00e3ef3c;
                      uVar11 = uVar11 - 1;
                      pPVar14 = pPVar14 + 1;
                      pPVar12 = pPVar12 + 1;
                    /* try { // try from 00e3eebc to 00f3eebf has its CatchHandler @ 00e3ef74 */
                    } while (uVar11 != 0);
                  }
                }
                else if ((sVar2 != 0) && (iVar10 = memcmp(pPVar14,pPVar12,sVar2), iVar10 != 0))
                goto LAB_00e3ef3c;
                iVar10 = PUDynamicAttribute::getType(*(PUDynamicAttribute **)(this + 8));
                    /* try { // try from 00e3efc0 to 00f3efc3 has its CatchHandler @ 00e3f004 */
                if ((iVar10 == 3) &&
                   (uVar18 = PUScriptTranslator::passValidateProperty
                                       ((PUScriptTranslator *)this,param_1,pPVar16,0x1789cd8,0),
                   (uVar18 & 1) != 0)) {
                  local_98 = local_98 & 0xffffffff00000000;
                  uVar18 = PUScriptTranslator::getFloat
                                     (*(PUAbstractNode **)(*(long *)(pPVar16 + 0x60) + 0x10),
                                      (float *)&local_98);
                  if ((uVar18 & 1) != 0) {
                    PUDynamicAttributeOscillate::setFrequency
                              (*(PUDynamicAttributeOscillate **)(this + 8),(float)local_98);
                  }
                }
              }
              else {
LAB_00e3ef3c:
                    /* try { // try from 00e3ef3c to 00f3ef3f has its CatchHandler @ 00e3ef88 */
                    /* try { // try from 00e3ef40 to 00f3ef9b has its CatchHandler @ 00e3ede8 */
                sVar15 = (ulong)(token[0xc60] >> 1);
                if ((token[0xc60] & 1) != 0) {
                  sVar15 = token._3176_8_;
                }
                if (sVar2 == sVar15) {
                  pPVar14 = *(PUAbstractNode **)(pPVar16 + 0x48);
                  if (((byte)PVar4 & 1) == 0) {
                    pPVar14 = pPVar16 + 0x39;
                  }
                  pPVar12 = (PUAbstractNode *)(token + 0xc61);
                  if ((token[0xc60] & 1) != 0) {
                    pPVar12 = (PUAbstractNode *)token._3184_8_;
                  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3eebc with catch @ 00e3ef74
                        */
                  if (((byte)PVar4 & 1) == 0) {
                    if (sVar2 != 0) {
                      pPVar14 = pPVar16 + 0x39;
                      uVar11 = uVar18;
                      do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3ef3c with catch @ 00e3ef88
                        */
                        if (*pPVar14 != *pPVar12) goto LAB_00e3f010;
                        uVar11 = uVar11 - 1;
                        pPVar14 = pPVar14 + 1;
                        pPVar12 = pPVar12 + 1;
                      } while (uVar11 != 0);
                    }
                  }
                  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3efc0 with catch @ 00e3f004
                        */
                    if ((sVar2 != 0) && (iVar10 = memcmp(pPVar14,pPVar12,sVar2), iVar10 != 0))
                    goto LAB_00e3f010;
                  }
                  iVar10 = PUDynamicAttribute::getType(*(PUDynamicAttribute **)(this + 8));
                  if ((iVar10 == 3) &&
                     (uVar18 = PUScriptTranslator::passValidateProperty
                                         ((PUScriptTranslator *)this,param_1,pPVar16,0x1789cf0,0),
                     (uVar18 & 1) != 0)) {
                    local_98 = local_98 & 0xffffffff00000000;
                    /* try { // try from 00e3f0b0 to 00f3f0b3 has its CatchHandler @ 00e3f0f4 */
                    uVar18 = PUScriptTranslator::getFloat
                                       (*(PUAbstractNode **)(*(long *)(pPVar16 + 0x60) + 0x10),
                                        (float *)&local_98);
                    if ((uVar18 & 1) != 0) {
                      PUDynamicAttributeOscillate::setPhase
                                (*(PUDynamicAttributeOscillate **)(this + 8),(float)local_98);
                    }
                  }
                }
                else {
LAB_00e3f010:
                  sVar15 = (ulong)(token[0xc78] >> 1);
                  if ((token[0xc78] & 1) != 0) {
                    sVar15 = token._3200_8_;
                  }
                  if (sVar2 == sVar15) {
                    pPVar14 = *(PUAbstractNode **)(pPVar16 + 0x48);
                    if (((byte)PVar4 & 1) == 0) {
                      pPVar14 = pPVar16 + 0x39;
                    }
                    pPVar12 = (PUAbstractNode *)(token + 0xc79);
                    if ((token[0xc78] & 1) != 0) {
                      pPVar12 = (PUAbstractNode *)token._3208_8_;
                    }
                    if (((byte)PVar4 & 1) == 0) {
                      if (sVar2 != 0) {
                        pPVar14 = pPVar16 + 0x39;
                        uVar11 = uVar18;
                        do {
                          if (*pPVar14 != *pPVar12) goto LAB_00e3f0e4;
                          uVar11 = uVar11 - 1;
                          pPVar14 = pPVar14 + 1;
                          pPVar12 = pPVar12 + 1;
                        } while (uVar11 != 0);
                      }
                    }
                    else if ((sVar2 != 0) && (iVar10 = memcmp(pPVar14,pPVar12,sVar2), iVar10 != 0))
                    goto LAB_00e3f0e4;
                    /* try { // try from 00e3f150 to 00f3f153 has its CatchHandler @ 00e3f390 */
                    iVar10 = PUDynamicAttribute::getType(*(PUDynamicAttribute **)(this + 8));
                    if ((iVar10 == 3) &&
                       (uVar18 = PUScriptTranslator::passValidateProperty
                                           ((PUScriptTranslator *)this,param_1,pPVar16,0x1789d08,0),
                       (uVar18 & 1) != 0)) {
                    /* try { // try from 00e3f180 to 00f3f183 has its CatchHandler @ 00e3f38c */
                      local_98 = local_98 & 0xffffffff00000000;
                      uVar18 = PUScriptTranslator::getFloat
                                         (*(PUAbstractNode **)(*(long *)(pPVar16 + 0x60) + 0x10),
                                          (float *)&local_98);
                      if ((uVar18 & 1) != 0) {
                    /* try { // try from 00e3f1a0 to 00f3f1a3 has its CatchHandler @ 00e3f35c */
                        PUDynamicAttributeOscillate::setBase
                                  (*(PUDynamicAttributeOscillate **)(this + 8),(float)local_98);
                      }
                    }
                  }
                  else {
LAB_00e3f0e4:
                    sVar15 = (ulong)(token[0xc90] >> 1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3f0b0 with catch @ 00e3f0f4
                        */
                    if ((token[0xc90] & 1) != 0) {
                      sVar15 = token._3224_8_;
                    }
                    if (sVar2 == sVar15) {
                      pPVar14 = *(PUAbstractNode **)(pPVar16 + 0x48);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3f1c8 with catch @ 00e3f108
                        */
                      if (((byte)PVar4 & 1) == 0) {
                        pPVar14 = pPVar16 + 0x39;
                      }
                      pPVar12 = (PUAbstractNode *)(token + 0xc91);
                      if ((token[0xc90] & 1) != 0) {
                        pPVar12 = (PUAbstractNode *)token._3232_8_;
                      }
                      if (((byte)PVar4 & 1) == 0) {
                        if (sVar2 != 0) {
                          pPVar14 = pPVar16 + 0x39;
                          uVar11 = uVar18;
                          do {
                            if (*pPVar14 != *pPVar12) goto LAB_00e3f1b8;
                            uVar11 = uVar11 - 1;
                            pPVar14 = pPVar14 + 1;
                            pPVar12 = pPVar12 + 1;
                          } while (uVar11 != 0);
                        }
                      }
                      else if ((sVar2 != 0) && (iVar10 = memcmp(pPVar14,pPVar12,sVar2), iVar10 != 0)
                              ) goto LAB_00e3f1b8;
                      iVar10 = PUDynamicAttribute::getType(*(PUDynamicAttribute **)(this + 8));
                      if ((iVar10 == 3) &&
                         (uVar18 = PUScriptTranslator::passValidateProperty
                                             ((PUScriptTranslator *)this,param_1,pPVar16,0x1789d20,0
                                             ), (uVar18 & 1) != 0)) {
                        local_98 = local_98 & 0xffffffff00000000;
                        uVar18 = PUScriptTranslator::getFloat
                                           (*(PUAbstractNode **)(*(long *)(pPVar16 + 0x60) + 0x10),
                                            (float *)&local_98);
                        if ((uVar18 & 1) != 0) {
                          PUDynamicAttributeOscillate::setAmplitude
                                    (*(PUDynamicAttributeOscillate **)(this + 8),(float)local_98);
                        }
                      }
                    }
                    else {
LAB_00e3f1b8:
                    /* try { // try from 00e3f1bc to 00f3f1c7 has its CatchHandler @ 00e3f388 */
                      sVar15 = (ulong)(token[0xca8] >> 1);
                    /* try { // try from 00e3f1c8 to 00f3f29b has its CatchHandler @ 00e3f108 */
                      if ((token[0xca8] & 1) != 0) {
                        sVar15 = token._3248_8_;
                      }
                      if (sVar2 == sVar15) {
                        pPVar14 = *(PUAbstractNode **)(pPVar16 + 0x48);
                        if (((byte)PVar4 & 1) == 0) {
                          pPVar14 = pPVar16 + 0x39;
                        }
                        pPVar12 = (PUAbstractNode *)(token + 0xca9);
                        if ((token[0xca8] & 1) != 0) {
                          pPVar12 = (PUAbstractNode *)token._3256_8_;
                        }
                        if (((byte)PVar4 & 1) == 0) {
                          if (sVar2 != 0) {
                            pPVar14 = pPVar16 + 0x39;
                            do {
                              if (*pPVar14 != *pPVar12) goto LAB_00e3f288;
                              uVar18 = uVar18 - 1;
                              pPVar14 = pPVar14 + 1;
                              pPVar12 = pPVar12 + 1;
                            } while (uVar18 != 0);
                          }
                        }
                        else if ((sVar2 != 0) &&
                                (iVar10 = memcmp(pPVar14,pPVar12,sVar2), iVar10 != 0))
                        goto LAB_00e3f288;
                        iVar10 = PUDynamicAttribute::getType(*(PUDynamicAttribute **)(this + 8));
                        if ((iVar10 == 3) &&
                           (uVar18 = PUScriptTranslator::passValidateProperty
                                               ((PUScriptTranslator *)this,param_1,pPVar16,0x1789d38
                                                ,4), (uVar18 & 1) != 0)) {
                          local_90 = 0;
                          local_88 = (char *)0x0;
                          local_98 = 0;
                          uVar11 = PUScriptTranslator::getString
                                             (*(PUAbstractNode **)(*(long *)(pPVar16 + 0x60) + 0x10)
                                              ,(basic_string *)&local_98);
                          uVar18 = local_98;
                          if ((uVar11 & 1) != 0) {
                            sVar15 = local_98 >> 1 & 0x7f;
                            sVar2 = sVar15;
                            if ((local_98 & 1) != 0) {
                              sVar2 = local_90;
                            }
                            sVar5 = (ulong)(token[0xd20] >> 1);
                            if ((token[0xd20] & 1) != 0) {
                              sVar5 = token._3368_8_;
                            }
                            if (sVar2 == sVar5) {
                    /* try { // try from 00e3f31c to 00f3f31f has its CatchHandler @ 00e3f360 */
                              pcVar3 = pcVar13;
                              if ((local_98 & 1) != 0) {
                                pcVar3 = local_88;
                              }
                              pcVar1 = token + 0xd21;
                              if ((token[0xd20] & 1) != 0) {
                                pcVar1 = (char *)token._3376_8_;
                              }
                              pcVar7 = pcVar13;
                              sVar5 = sVar15;
                              sVar8 = sVar2;
                              if ((local_98 & 1) == 0) {
                                while (sVar8 != 0) {
                                  if (*pcVar7 != *pcVar1) goto LAB_00e3f37c;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3f1a0 with catch @ 00e3f35c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3f31c with catch @ 00e3f360
                        */
                                  pcVar1 = pcVar1 + 1;
                                  sVar5 = sVar5 - 1;
                                  pcVar7 = pcVar7 + 1;
                                  sVar8 = sVar5;
                                }
                              }
                              else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3f29c with catch @ 00e3f374
                        */
                                if ((sVar2 != 0) &&
                                   (iVar10 = memcmp(pcVar3,pcVar1,sVar2), iVar10 != 0))
                                goto LAB_00e3f37c;
                              }
                              PUDynamicAttributeOscillate::setOscillationType
                                        (*(PUDynamicAttributeOscillate **)(this + 8),0);
                            }
                            else {
LAB_00e3f37c:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3f1bc with catch @ 00e3f388
                        */
                              sVar5 = (ulong)(token[0xd38] >> 1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3f180 with catch @ 00e3f38c
                        */
                              if ((token[0xd38] & 1) != 0) {
                                sVar5 = token._3392_8_;
                              }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3f150 with catch @ 00e3f390
                        */
                              if (sVar2 == sVar5) {
                                pcVar3 = pcVar13;
                                if ((uVar18 & 1) != 0) {
                                  pcVar3 = local_88;
                                }
                                pcVar1 = token + 0xd39;
                                if ((token[0xd38] & 1) != 0) {
                                  pcVar1 = (char *)token._3400_8_;
                                }
                                pcVar7 = pcVar13;
                                if ((uVar18 & 1) == 0) {
                                  while (sVar2 != 0) {
                                    if (*pcVar7 != *pcVar1) goto LAB_00e3f418;
                                    pcVar1 = pcVar1 + 1;
                                    sVar15 = sVar15 - 1;
                                    pcVar7 = pcVar7 + 1;
                                    sVar2 = sVar15;
                                  }
                                }
                                else if ((sVar2 != 0) &&
                                        (iVar10 = memcmp(pcVar3,pcVar1,sVar2), iVar10 != 0))
                                goto LAB_00e3f418;
                                PUDynamicAttributeOscillate::setOscillationType
                                          (*(PUDynamicAttributeOscillate **)(this + 8),1);
                              }
                            }
                          }
LAB_00e3f418:
                          if ((local_98 & 1) != 0) {
                            operator_delete(local_88);
                          }
                        }
                      }
                      else {
LAB_00e3f288:
                        PUScriptTranslator::errorUnexpectedProperty
                                  ((PUScriptCompiler *)this,(PUPropertyAbstractNode *)param_1);
                    /* try { // try from 00e3f29c to 00f3f29f has its CatchHandler @ 00e3f374 */
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
                    /* try { // try from 00e3ec90 to 00f3eca7 has its CatchHandler @ 00e3ed9c */
        PUScriptTranslator::errorUnexpectedToken((PUScriptCompiler *)this,(PUAbstractNode *)param_1)
        ;
      }
      pPVar17 = *(PUAbstractNode **)(pPVar17 + 8);
    } while (pPVar17 != param_2 + 0xb0);
    this_00 = *(PUDynamicAttributeRandom **)(this + 8);
  }
  *(PUDynamicAttributeRandom **)(param_2 + 0x30) = this_00;
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

