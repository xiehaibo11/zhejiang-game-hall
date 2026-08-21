
/* cocos2d::PUEmitterTranslator::translate(cocos2d::PUScriptCompiler*, cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUEmitterTranslator::translate
          (PUEmitterTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  PUAbstractNode PVar4;
  PUPropertyAbstractNode PVar5;
  size_t sVar6;
  long lVar7;
  char *pcVar8;
  size_t sVar9;
  int iVar10;
  PUEmitterManager *pPVar11;
  long *plVar12;
  long lVar13;
  PUParticleSystem3D *this_00;
  PUDynamicAttributeFixed *pPVar14;
  ulong uVar15;
  PUPropertyAbstractNode *pPVar16;
  PUEmitterTranslator *pPVar17;
  char *pcVar18;
  undefined4 uVar19;
  PUPropertyAbstractNode *pPVar20;
  ulong uVar21;
  long lVar22;
  PUPropertyAbstractNode *pPVar23;
  size_t sVar24;
  PUAbstractNode *pPVar25;
  ulong local_b8;
  size_t local_b0;
  char *local_a8;
  ushort local_9c [2];
  ulong local_98;
  ulong local_90;
  char *local_88;
  ulong local_80;
  ulong local_78;
  char *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  lVar22 = *(long *)(param_2 + 0x28);
  local_78 = 0;
  local_70 = (char *)0x0;
  local_80 = 0;
  PVar4 = param_2[0x60];
  if (((byte)PVar4 & 1) == 0) {
    uVar21 = (ulong)((byte)PVar4 >> 1);
  }
  else {
                    /* try { // try from 00e4ac80 to 00f4ac93 has its CatchHandler @ 00e4af30 */
    uVar21 = *(ulong *)(param_2 + 0x68);
  }
  if (((PUAbstractNode *)&local_80 != param_2 + 0x60) && (uVar21 != 0)) {
    uVar21 = *(ulong *)(param_2 + 0x68);
    pPVar25 = *(PUAbstractNode **)(param_2 + 0x70);
    if (((byte)PVar4 & 1) == 0) {
      pPVar25 = param_2 + 0x61;
      uVar21 = (ulong)((byte)PVar4 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_80,(char *)pPVar25,uVar21);
  }
  pPVar11 = (PUEmitterManager *)PUEmitterManager::Instance();
  plVar12 = (long *)PUEmitterManager::getTranslator(pPVar11,(basic_string *)&local_80);
  if (plVar12 != (long *)0x0) {
    pPVar11 = (PUEmitterManager *)PUEmitterManager::Instance();
    lVar13 = PUEmitterManager::createEmitter(pPVar11,(basic_string *)&local_80);
                    /* try { // try from 00e4acd4 to 00f4ace3 has its CatchHandler @ 00e4af1c */
    pPVar17 = this + 8;
    *(long *)pPVar17 = lVar13;
    if (lVar13 != 0) {
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (lVar13 + 0x78) !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          &local_80) {
        uVar21 = local_80 >> 1 & 0x7f;
        pcVar18 = (char *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          uVar21 = local_78;
          pcVar18 = local_70;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (lVar13 + 0x78),pcVar18,uVar21);
      }
      if ((lVar22 != 0) &&
         (this_00 = *(PUParticleSystem3D **)(lVar22 + 0x30), this_00 != (PUParticleSystem3D *)0x0))
      {
                    /* try { // try from 00e4ad24 to 00f4ad33 has its CatchHandler @ 00e4af18 */
        PUParticleSystem3D::addEmitter(this_00,*(PUEmitter **)pPVar17);
      }
      local_90 = 0;
      local_88 = (char *)0x0;
      local_98 = 0;
      if (*(long *)(param_2 + 0xd8) != 0) {
        PUScriptTranslator::getString
                  (*(PUAbstractNode **)(*(long *)(param_2 + 0xd0) + 0x10),(basic_string *)&local_98)
        ;
        if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (*(long *)pPVar17 + 0x90) !=
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            &local_98) {
                    /* try { // try from 00e4ad78 to 00f4ad83 has its CatchHandler @ 00e4af14 */
          uVar21 = local_98 >> 1 & 0x7f;
          pcVar18 = (char *)((ulong)&local_98 | 1);
          if ((local_98 & 1) != 0) {
            uVar21 = local_90;
            pcVar18 = local_88;
          }
                    /* try { // try from 00e4ad84 to 00f4ae47 has its CatchHandler @ 00e4aba0 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(*(long *)pPVar17 + 0x90),pcVar18,uVar21);
        }
      }
      pPVar25 = *(PUAbstractNode **)(param_2 + 0xb8);
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)pPVar17;
      if (pPVar25 != param_2 + 0xb0) {
        pcVar18 = (char *)((ulong)&local_b8 | 1);
        do {
          pPVar23 = *(PUPropertyAbstractNode **)(pPVar25 + 0x10);
          if (*(int *)(pPVar23 + 0x24) == 2) {
            PUDynamicAttributeTranslator::PUDynamicAttributeTranslator
                      ((PUDynamicAttributeTranslator *)&local_b8);
            PVar5 = pPVar23[0x78];
                    /* try { // try from 00e4ae88 to 00f4aec7 has its CatchHandler @ 00e4aba0 */
            uVar21 = (ulong)((byte)PVar5 >> 1);
            sVar2 = uVar21;
            if (((byte)PVar5 & 1) != 0) {
              sVar2 = *(size_t *)(pPVar23 + 0x80);
            }
            sVar24 = (ulong)(token[0x900] >> 1);
            if ((token[0x900] & 1) != 0) {
              sVar24 = token._2312_8_;
            }
            if (sVar2 == sVar24) {
              pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x88);
              if (((byte)PVar5 & 1) == 0) {
                pPVar20 = pPVar23 + 0x79;
              }
              pPVar16 = (PUPropertyAbstractNode *)(token + 0x901);
                    /* try { // try from 00e4aec8 to 00f4aed3 has its CatchHandler @ 00e4af4c */
              if ((token[0x900] & 1) != 0) {
                pPVar16 = (PUPropertyAbstractNode *)token._2320_8_;
              }
              if (((byte)PVar5 & 1) == 0) {
                if (sVar2 != 0) {
                    /* try { // try from 00e4aed4 to 00f4af63 has its CatchHandler @ 00e4aba0 */
                  pPVar20 = pPVar23 + 0x79;
                  uVar15 = uVar21;
                  do {
                    if (*pPVar20 != *pPVar16) goto LAB_00e4afd0;
                    uVar15 = uVar15 - 1;
                    pPVar20 = pPVar20 + 1;
                    pPVar16 = pPVar16 + 1;
                  } while (uVar15 != 0);
                }
              }
              else if ((sVar2 != 0) && (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
              goto LAB_00e4afd0;
              PUDynamicAttributeTranslator::translate
                        ((PUDynamicAttributeTranslator *)&local_b8,param_1,
                         *(PUAbstractNode **)(pPVar25 + 0x10));
                    /* try { // try from 00e4b058 to 00f4b0fb has its CatchHandler @ 00e4b058
                       catch() { ... } // from try @ 00e4b058 with catch @ 00e4b058
                       catch() { ... } // from try @ 00e4b14c with catch @ 00e4b058 */
              PUEmitter::setDynEmissionRate
                        (*(PUEmitter **)pPVar17,*(PUDynamicAttribute **)(pPVar23 + 0x30));
            }
            else {
LAB_00e4afd0:
              sVar24 = (ulong)(token[0x918] >> 1);
              if ((token[0x918] & 1) != 0) {
                sVar24 = token._2336_8_;
              }
              if (sVar2 == sVar24) {
                pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x88);
                if (((byte)PVar5 & 1) == 0) {
                  pPVar20 = pPVar23 + 0x79;
                }
                pPVar16 = (PUPropertyAbstractNode *)(token + 0x919);
                if ((token[0x918] & 1) != 0) {
                  pPVar16 = (PUPropertyAbstractNode *)token._2344_8_;
                }
                if (((byte)PVar5 & 1) == 0) {
                  if (sVar2 != 0) {
                    pPVar20 = pPVar23 + 0x79;
                    uVar15 = uVar21;
                    do {
                      if (*pPVar20 != *pPVar16) goto LAB_00e4b144;
                      uVar15 = uVar15 - 1;
                      pPVar20 = pPVar20 + 1;
                      pPVar16 = pPVar16 + 1;
                    } while (uVar15 != 0);
                  }
                }
                else if ((sVar2 != 0) && (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                goto LAB_00e4b144;
                PUDynamicAttributeTranslator::translate
                          ((PUDynamicAttributeTranslator *)&local_b8,param_1,
                           *(PUAbstractNode **)(pPVar25 + 0x10));
                PUEmitter::setDynTotalTimeToLive
                          (*(PUEmitter **)pPVar17,*(PUDynamicAttribute **)(pPVar23 + 0x30));
              }
              else {
LAB_00e4b144:
                    /* try { // try from 00e4b14c to 00f4b20b has its CatchHandler @ 00e4b058 */
                sVar24 = (ulong)(token[0x930] >> 1);
                if ((token[0x930] & 1) != 0) {
                  sVar24 = token._2360_8_;
                }
                if (sVar2 == sVar24) {
                  pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x88);
                    /* catch() { ... } // from try @ 00e4b0fc with catch @ 00e4b170 */
                  if (((byte)PVar5 & 1) == 0) {
                    pPVar20 = pPVar23 + 0x79;
                  }
                  pPVar16 = (PUPropertyAbstractNode *)(token + 0x931);
                  if ((token[0x930] & 1) != 0) {
                    pPVar16 = (PUPropertyAbstractNode *)token._2368_8_;
                  }
                  if (((byte)PVar5 & 1) == 0) {
                    if (sVar2 != 0) {
                      pPVar20 = pPVar23 + 0x79;
                      uVar15 = uVar21;
                      do {
                        if (*pPVar20 != *pPVar16) goto LAB_00e4b2b4;
                        uVar15 = uVar15 - 1;
                        pPVar20 = pPVar20 + 1;
                        pPVar16 = pPVar16 + 1;
                      } while (uVar15 != 0);
                    }
                  }
                  else if ((sVar2 != 0) && (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                  goto LAB_00e4b2b4;
                  PUDynamicAttributeTranslator::translate
                            ((PUDynamicAttributeTranslator *)&local_b8,param_1,
                             *(PUAbstractNode **)(pPVar25 + 0x10));
                  PUEmitter::setDynParticleMass
                            (*(PUEmitter **)pPVar17,*(PUDynamicAttribute **)(pPVar23 + 0x30));
                }
                else {
LAB_00e4b2b4:
                  sVar24 = (ulong)(token[0x168] >> 1);
                  if ((token[0x168] & 1) != 0) {
                    sVar24 = token._368_8_;
                  }
                  if (sVar2 == sVar24) {
                    pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x88);
                    /* try { // try from 00e4b2dc to 00f4b3ef has its CatchHandler @ 00e4b424 */
                    if (((byte)PVar5 & 1) == 0) {
                      pPVar20 = pPVar23 + 0x79;
                    }
                    pPVar16 = (PUPropertyAbstractNode *)(token + 0x169);
                    if ((token[0x168] & 1) != 0) {
                      pPVar16 = (PUPropertyAbstractNode *)token._376_8_;
                    }
                    if (((byte)PVar5 & 1) == 0) {
                      if (sVar2 != 0) {
                        pPVar20 = pPVar23 + 0x79;
                        uVar15 = uVar21;
                        do {
                          if (*pPVar20 != *pPVar16) goto LAB_00e4b424;
                          uVar15 = uVar15 - 1;
                          pPVar20 = pPVar20 + 1;
                          pPVar16 = pPVar16 + 1;
                        } while (uVar15 != 0);
                      }
                    }
                    else if ((sVar2 != 0) && (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                    goto LAB_00e4b424;
                    PUDynamicAttributeTranslator::translate
                              ((PUDynamicAttributeTranslator *)&local_b8,param_1,
                               *(PUAbstractNode **)(pPVar25 + 0x10));
                    PUEmitter::setDynVelocity
                              (*(PUEmitter **)pPVar17,*(PUDynamicAttribute **)(pPVar23 + 0x30));
                  }
                  else {
LAB_00e4b424:
                    /* catch() { ... } // from try @ 00e4b2dc with catch @ 00e4b424 */
                    sVar24 = (ulong)(token[0x8a0] >> 1);
                    if ((token[0x8a0] & 1) != 0) {
                      sVar24 = token._2216_8_;
                    }
                    if (sVar2 == sVar24) {
                      pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x88);
                      if (((byte)PVar5 & 1) == 0) {
                        pPVar20 = pPVar23 + 0x79;
                      }
                      pPVar16 = (PUPropertyAbstractNode *)(token + 0x8a1);
                      if ((token[0x8a0] & 1) != 0) {
                        pPVar16 = (PUPropertyAbstractNode *)token._2224_8_;
                      }
                      if (((byte)PVar5 & 1) == 0) {
                        if (sVar2 != 0) {
                          pPVar20 = pPVar23 + 0x79;
                          uVar15 = uVar21;
                          do {
                            if (*pPVar20 != *pPVar16) goto LAB_00e4b594;
                            uVar15 = uVar15 - 1;
                            pPVar20 = pPVar20 + 1;
                            pPVar16 = pPVar16 + 1;
                          } while (uVar15 != 0);
                        }
                      }
                      else {
                    /* try { // try from 00e4b58c to 00f4b65b has its CatchHandler @ 00e4b690 */
                        if ((sVar2 != 0) && (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                        goto LAB_00e4b594;
                      }
                      PUDynamicAttributeTranslator::translate
                                ((PUDynamicAttributeTranslator *)&local_b8,param_1,
                                 *(PUAbstractNode **)(pPVar25 + 0x10));
                      PUEmitter::setDynDuration
                                (*(PUEmitter **)pPVar17,*(PUDynamicAttribute **)(pPVar23 + 0x30));
                    }
                    else {
LAB_00e4b594:
                      sVar24 = (ulong)(token[0x8b8] >> 1);
                      if ((token[0x8b8] & 1) != 0) {
                        sVar24 = token._2240_8_;
                      }
                      if (sVar2 == sVar24) {
                        pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x88);
                        if (((byte)PVar5 & 1) == 0) {
                          pPVar20 = pPVar23 + 0x79;
                        }
                        pPVar16 = (PUPropertyAbstractNode *)(token + 0x8b9);
                        if ((token[0x8b8] & 1) != 0) {
                          pPVar16 = (PUPropertyAbstractNode *)token._2248_8_;
                        }
                        if (((byte)PVar5 & 1) == 0) {
                          if (sVar2 != 0) {
                            pPVar20 = pPVar23 + 0x79;
                            uVar15 = uVar21;
                            do {
                              if (*pPVar20 != *pPVar16) goto LAB_00e4b704;
                              uVar15 = uVar15 - 1;
                              pPVar20 = pPVar20 + 1;
                              pPVar16 = pPVar16 + 1;
                            } while (uVar15 != 0);
                          }
                        }
                        else if ((sVar2 != 0) &&
                                (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                        goto LAB_00e4b704;
                        PUDynamicAttributeTranslator::translate
                                  ((PUDynamicAttributeTranslator *)&local_b8,param_1,
                                   *(PUAbstractNode **)(pPVar25 + 0x10));
                        PUEmitter::setDynRepeatDelay
                                  (*(PUEmitter **)pPVar17,*(PUDynamicAttribute **)(pPVar23 + 0x30));
                      }
                      else {
LAB_00e4b704:
                        sVar24 = (ulong)(token[0x8e8] >> 1);
                        if ((token[0x8e8] & 1) != 0) {
                          sVar24 = token._2288_8_;
                        }
                        if (sVar2 == sVar24) {
                          pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x88);
                          if (((byte)PVar5 & 1) == 0) {
                            pPVar20 = pPVar23 + 0x79;
                          }
                          pPVar16 = (PUPropertyAbstractNode *)(token + 0x8e9);
                          if ((token[0x8e8] & 1) != 0) {
                            pPVar16 = (PUPropertyAbstractNode *)token._2296_8_;
                          }
                          if (((byte)PVar5 & 1) == 0) {
                            if (sVar2 != 0) {
                              pPVar20 = pPVar23 + 0x79;
                              uVar15 = uVar21;
                              do {
                                if (*pPVar20 != *pPVar16) goto LAB_00e4b874;
                                uVar15 = uVar15 - 1;
                                pPVar20 = pPVar20 + 1;
                                pPVar16 = pPVar16 + 1;
                              } while (uVar15 != 0);
                            }
                          }
                          else if ((sVar2 != 0) &&
                                  (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                          goto LAB_00e4b874;
                          PUDynamicAttributeTranslator::translate
                                    ((PUDynamicAttributeTranslator *)&local_b8,param_1,
                                     *(PUAbstractNode **)(pPVar25 + 0x10));
                          PUEmitter::setDynAngle
                                    (*(PUEmitter **)pPVar17,*(PUDynamicAttribute **)(pPVar23 + 0x30)
                                    );
                        }
                        else {
LAB_00e4b874:
                          sVar24 = (ulong)(token[0xa08] >> 1);
                          if ((token[0xa08] & 1) != 0) {
                            sVar24 = token._2576_8_;
                          }
                          if (sVar2 == sVar24) {
                            pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x88);
                            if (((byte)PVar5 & 1) == 0) {
                              pPVar20 = pPVar23 + 0x79;
                            }
                            pPVar16 = (PUPropertyAbstractNode *)(token + 0xa09);
                            if ((token[0xa08] & 1) != 0) {
                              pPVar16 = (PUPropertyAbstractNode *)token._2584_8_;
                            }
                            if (((byte)PVar5 & 1) == 0) {
                              if (sVar2 != 0) {
                                pPVar20 = pPVar23 + 0x79;
                                uVar15 = uVar21;
                                do {
                                  if (*pPVar20 != *pPVar16) goto LAB_00e4b9ec;
                                  uVar15 = uVar15 - 1;
                                  pPVar20 = pPVar20 + 1;
                                  pPVar16 = pPVar16 + 1;
                                } while (uVar15 != 0);
                              }
                            }
                            else if ((sVar2 != 0) &&
                                    (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                            goto LAB_00e4b9ec;
                            PUDynamicAttributeTranslator::translate
                                      ((PUDynamicAttributeTranslator *)&local_b8,param_1,
                                       *(PUAbstractNode **)(pPVar25 + 0x10));
                            PUEmitter::setDynParticleAllDimensions
                                      (*(PUEmitter **)pPVar17,
                                       *(PUDynamicAttribute **)(pPVar23 + 0x30));
                          }
                          else {
LAB_00e4b9ec:
                            sVar24 = (ulong)(token[0xa20] >> 1);
                            if ((token[0xa20] & 1) != 0) {
                              sVar24 = token._2600_8_;
                            }
                            if (sVar2 == sVar24) {
                              pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x88);
                              if (((byte)PVar5 & 1) == 0) {
                                pPVar20 = pPVar23 + 0x79;
                              }
                              pPVar16 = (PUPropertyAbstractNode *)(token + 0xa21);
                              if ((token[0xa20] & 1) != 0) {
                                pPVar16 = (PUPropertyAbstractNode *)token._2608_8_;
                              }
                              if (((byte)PVar5 & 1) == 0) {
                                if (sVar2 != 0) {
                                  pPVar20 = pPVar23 + 0x79;
                                  uVar15 = uVar21;
                                  do {
                                    if (*pPVar20 != *pPVar16) goto LAB_00e4bb84;
                                    uVar15 = uVar15 - 1;
                                    pPVar20 = pPVar20 + 1;
                                    pPVar16 = pPVar16 + 1;
                                  } while (uVar15 != 0);
                                }
                              }
                              else if ((sVar2 != 0) &&
                                      (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                              goto LAB_00e4bb84;
                              PUDynamicAttributeTranslator::translate
                                        ((PUDynamicAttributeTranslator *)&local_b8,param_1,
                                         *(PUAbstractNode **)(pPVar25 + 0x10));
                              PUEmitter::setDynParticleWidth
                                        (*(PUEmitter **)pPVar17,
                                         *(PUDynamicAttribute **)(pPVar23 + 0x30));
                            }
                            else {
LAB_00e4bb84:
                              sVar24 = (ulong)(token[0xa38] >> 1);
                              if ((token[0xa38] & 1) != 0) {
                                sVar24 = token._2624_8_;
                              }
                              if (sVar2 == sVar24) {
                                pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x88);
                                if (((byte)PVar5 & 1) == 0) {
                                  pPVar20 = pPVar23 + 0x79;
                                }
                                pPVar16 = (PUPropertyAbstractNode *)(token + 0xa39);
                                if ((token[0xa38] & 1) != 0) {
                                  pPVar16 = (PUPropertyAbstractNode *)token._2632_8_;
                                }
                                if (((byte)PVar5 & 1) == 0) {
                                  if (sVar2 != 0) {
                                    pPVar20 = pPVar23 + 0x79;
                                    uVar15 = uVar21;
                                    do {
                                      if (*pPVar20 != *pPVar16) goto LAB_00e4bd1c;
                                      uVar15 = uVar15 - 1;
                                      pPVar20 = pPVar20 + 1;
                                      pPVar16 = pPVar16 + 1;
                                    } while (uVar15 != 0);
                                  }
                                }
                                else if ((sVar2 != 0) &&
                                        (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                                goto LAB_00e4bd1c;
                                PUDynamicAttributeTranslator::translate
                                          ((PUDynamicAttributeTranslator *)&local_b8,param_1,
                                           *(PUAbstractNode **)(pPVar25 + 0x10));
                                PUEmitter::setDynParticleHeight
                                          (*(PUEmitter **)pPVar17,
                                           *(PUDynamicAttribute **)(pPVar23 + 0x30));
                              }
                              else {
LAB_00e4bd1c:
                                sVar24 = (ulong)(token[0xa50] >> 1);
                                if ((token[0xa50] & 1) != 0) {
                                  sVar24 = token._2648_8_;
                                }
                                if (sVar2 == sVar24) {
                                  pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x88);
                                  if (((byte)PVar5 & 1) == 0) {
                                    pPVar20 = pPVar23 + 0x79;
                                  }
                                  pPVar16 = (PUPropertyAbstractNode *)(token + 0xa51);
                                  if ((token[0xa50] & 1) != 0) {
                                    pPVar16 = (PUPropertyAbstractNode *)token._2656_8_;
                                  }
                                  if (((byte)PVar5 & 1) == 0) {
                                    if (sVar2 != 0) {
                                      pPVar20 = pPVar23 + 0x79;
                                      uVar15 = uVar21;
                                      do {
                                        if (*pPVar20 != *pPVar16) goto LAB_00e4beb4;
                                        uVar15 = uVar15 - 1;
                                        pPVar20 = pPVar20 + 1;
                                        pPVar16 = pPVar16 + 1;
                                      } while (uVar15 != 0);
                                    }
                                  }
                                  else if ((sVar2 != 0) &&
                                          (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                                  goto LAB_00e4beb4;
                                  PUDynamicAttributeTranslator::translate
                                            ((PUDynamicAttributeTranslator *)&local_b8,param_1,
                                             *(PUAbstractNode **)(pPVar25 + 0x10));
                                  PUEmitter::setDynParticleDepth
                                            (*(PUEmitter **)pPVar17,
                                             *(PUDynamicAttribute **)(pPVar23 + 0x30));
                                }
                                else {
LAB_00e4beb4:
                                  sVar24 = (ulong)(token[0xd50] >> 1);
                                  if ((token[0xd50] & 1) != 0) {
                                    sVar24 = token._3416_8_;
                                  }
                                  if (sVar2 == sVar24) {
                                    pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x88);
                                    if (((byte)PVar5 & 1) == 0) {
                                      pPVar20 = pPVar23 + 0x79;
                                    }
                                    pPVar16 = (PUPropertyAbstractNode *)(token + 0xd51);
                                    if ((token[0xd50] & 1) != 0) {
                                      pPVar16 = (PUPropertyAbstractNode *)token._3424_8_;
                                    }
                                    if (((byte)PVar5 & 1) == 0) {
                                      if (sVar2 != 0) {
                                        pPVar23 = pPVar23 + 0x79;
                                        do {
                                          if (*pPVar23 != *pPVar16) goto LAB_00e4c01c;
                                          uVar21 = uVar21 - 1;
                                          pPVar23 = pPVar23 + 1;
                                          pPVar16 = pPVar16 + 1;
                                        } while (uVar21 != 0);
                                      }
                                    }
                                    else if ((sVar2 != 0) &&
                                            (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                                    goto LAB_00e4c01c;
                                  }
                                  else {
LAB_00e4c01c:
                                    uVar21 = (**(code **)(*plVar12 + 0x20))
                                                       (plVar12,param_1,
                                                        *(undefined8 *)(pPVar25 + 0x10));
                                    if ((uVar21 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e4bfd4 with catch @ 00e4c044
                        */
                                      PUScriptTranslator::processNode
                                                ((PUScriptTranslator *)this,param_1,
                                                 *(PUAbstractNode **)(pPVar25 + 0x10));
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            PUDynamicAttributeTranslator::~PUDynamicAttributeTranslator
                      ((PUDynamicAttributeTranslator *)&local_b8);
          }
          else if (*(int *)(pPVar23 + 0x24) == 3) {
            PVar5 = pPVar23[0x38];
            uVar21 = (ulong)((byte)PVar5 >> 1);
            sVar2 = uVar21;
            if (((byte)PVar5 & 1) != 0) {
              sVar2 = *(size_t *)(pPVar23 + 0x40);
            }
            sVar24 = (ulong)(token[0x2b8] >> 1);
            if ((token[0x2b8] & 1) != 0) {
              sVar24 = token._704_8_;
            }
            if (sVar2 == sVar24) {
              pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x48);
              if (((byte)PVar5 & 1) == 0) {
                pPVar20 = pPVar23 + 0x39;
              }
              pPVar16 = (PUPropertyAbstractNode *)(token + 0x2b9);
              if ((token[0x2b8] & 1) != 0) {
                pPVar16 = (PUPropertyAbstractNode *)token._712_8_;
              }
              if (((byte)PVar5 & 1) == 0) {
                if (sVar2 != 0) {
                    /* try { // try from 00e4ae48 to 00f4ae87 has its CatchHandler @ 00e4af50 */
                  pPVar20 = pPVar23 + 0x39;
                  uVar15 = uVar21;
                  do {
                    if (*pPVar20 != *pPVar16) goto LAB_00e4af10;
                    uVar15 = uVar15 - 1;
                    pPVar20 = pPVar20 + 1;
                    pPVar16 = pPVar16 + 1;
                  } while (uVar15 != 0);
                }
              }
              else if ((sVar2 != 0) && (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
              goto LAB_00e4af10;
              uVar21 = PUScriptTranslator::passValidateProperty
                                 ((PUScriptTranslator *)this,param_1,pPVar23,0x1789348,1);
              if (((uVar21 & 1) != 0) &&
                 (uVar21 = PUScriptTranslator::getBoolean
                                     (*(PUAbstractNode **)(*(long *)(pPVar23 + 0x60) + 0x10),
                                      (bool *)&local_b8), (uVar21 & 1) != 0)) {
                PUEmitter::setEnabled(*(PUEmitter **)pPVar17,(bool)local_b8._0_1_);
              }
            }
            else {
LAB_00e4af10:
                    /* catch() { ... } // from try @ 00e4ad78 with catch @ 00e4af14 */
                    /* catch() { ... } // from try @ 00e4ad24 with catch @ 00e4af18 */
                    /* catch() { ... } // from try @ 00e4acd4 with catch @ 00e4af1c */
              sVar24 = (ulong)(token[0x2d0] >> 1);
              if ((token[0x2d0] & 1) != 0) {
                sVar24 = token._728_8_;
              }
              if (sVar2 == sVar24) {
                pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x48);
                    /* catch() { ... } // from try @ 00e4ac80 with catch @ 00e4af30 */
                if (((byte)PVar5 & 1) == 0) {
                  pPVar20 = pPVar23 + 0x39;
                }
                pPVar16 = (PUPropertyAbstractNode *)(token + 0x2d1);
                if ((token[0x2d0] & 1) != 0) {
                  pPVar16 = (PUPropertyAbstractNode *)token._736_8_;
                }
                if (((byte)PVar5 & 1) == 0) {
                    /* catch() { ... } // from try @ 00e4aec8 with catch @ 00e4af4c */
                  if (sVar2 != 0) {
                    /* catch() { ... } // from try @ 00e4ae48 with catch @ 00e4af50 */
                    pPVar20 = pPVar23 + 0x39;
                    uVar15 = uVar21;
                    do {
                      if (*pPVar20 != *pPVar16) goto LAB_00e4b070;
                      uVar15 = uVar15 - 1;
                      pPVar20 = pPVar20 + 1;
                      pPVar16 = pPVar16 + 1;
                    } while (uVar15 != 0);
                  }
                }
                else if ((sVar2 != 0) && (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                goto LAB_00e4b070;
                uVar21 = PUScriptTranslator::passValidateProperty
                                   ((PUScriptTranslator *)this,param_1,pPVar23,0x1789360,6);
                if ((uVar21 & 1) != 0) {
                    /* try { // try from 00e4b0fc to 00f4b14b has its CatchHandler @ 00e4b170 */
                  Vec3::Vec3((Vec3 *)&local_b8);
                  uVar21 = PUScriptTranslator::getVector3
                                     ((PUScriptTranslator *)this,*(undefined8 *)(pPVar23 + 0x60),
                                      pPVar23 + 0x58,&local_b8,3);
                  if ((uVar21 & 1) != 0) {
                    lVar22 = *(long *)pPVar17;
                    *(undefined4 *)(lVar22 + 0x40) = (undefined4)local_b0;
                    *(ulong *)(lVar22 + 0x38) = local_b8;
                  }
                }
              }
              else {
LAB_00e4b070:
                sVar24 = (ulong)(token[0x810] >> 1);
                if ((token[0x810] & 1) != 0) {
                  sVar24 = token._2072_8_;
                }
                if (sVar2 == sVar24) {
                  pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x48);
                  if (((byte)PVar5 & 1) == 0) {
                    pPVar20 = pPVar23 + 0x39;
                  }
                  pPVar16 = (PUPropertyAbstractNode *)(token + 0x811);
                  if ((token[0x810] & 1) != 0) {
                    pPVar16 = (PUPropertyAbstractNode *)token._2080_8_;
                  }
                  if (((byte)PVar5 & 1) == 0) {
                    if (sVar2 != 0) {
                      pPVar20 = pPVar23 + 0x39;
                      uVar15 = uVar21;
                      do {
                        if (*pPVar20 != *pPVar16) goto LAB_00e4b1e4;
                        uVar15 = uVar15 - 1;
                        pPVar20 = pPVar20 + 1;
                        pPVar16 = pPVar16 + 1;
                      } while (uVar15 != 0);
                    }
                  }
                  else if ((sVar2 != 0) && (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                  goto LAB_00e4b1e4;
                  uVar21 = PUScriptTranslator::passValidateProperty
                                     ((PUScriptTranslator *)this,param_1,pPVar23,0x17898a0,6);
                  if ((uVar21 & 1) != 0) {
                    Vec3::Vec3((Vec3 *)&local_b8);
                    uVar21 = PUScriptTranslator::getVector3
                                       ((PUScriptTranslator *)this,*(undefined8 *)(pPVar23 + 0x60),
                                        pPVar23 + 0x58,&local_b8,3);
                    if ((uVar21 & 1) != 0) {
                      PUEmitter::setParticleDirection(*(Vec3 **)pPVar17);
                    }
                  }
                }
                else {
LAB_00e4b1e4:
                  sVar24 = (ulong)(token[0x828] >> 1);
                  if ((token[0x828] & 1) != 0) {
                    sVar24 = token._2096_8_;
                  }
                  if (sVar2 == sVar24) {
                    pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x48);
                    /* try { // try from 00e4b20c to 00f4b2db has its CatchHandler @ 00e4b20c
                       catch() { ... } // from try @ 00e4b20c with catch @ 00e4b20c
                       catch() { ... } // from try @ 00e4b3f0 with catch @ 00e4b20c */
                    if (((byte)PVar5 & 1) == 0) {
                      pPVar20 = pPVar23 + 0x39;
                    }
                    pPVar16 = (PUPropertyAbstractNode *)(token + 0x829);
                    if ((token[0x828] & 1) != 0) {
                      pPVar16 = (PUPropertyAbstractNode *)token._2104_8_;
                    }
                    if (((byte)PVar5 & 1) == 0) {
                      if (sVar2 != 0) {
                        pPVar20 = pPVar23 + 0x39;
                        uVar15 = uVar21;
                        do {
                          if (*pPVar20 != *pPVar16) goto LAB_00e4b354;
                          uVar15 = uVar15 - 1;
                          pPVar20 = pPVar20 + 1;
                          pPVar16 = pPVar16 + 1;
                        } while (uVar15 != 0);
                      }
                    }
                    else if ((sVar2 != 0) && (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                    goto LAB_00e4b354;
                    uVar21 = PUScriptTranslator::passValidateProperty
                                       ((PUScriptTranslator *)this,param_1,pPVar23,0x17898b8,9);
                    if ((uVar21 & 1) != 0) {
                      Quaternion::Quaternion((Quaternion *)&local_b8);
                    /* try { // try from 00e4b3f0 to 00f4b4bf has its CatchHandler @ 00e4b20c */
                      uVar21 = PUScriptTranslator::getQuaternion
                                         ((PUScriptTranslator *)this,*(undefined8 *)(pPVar23 + 0x60)
                                          ,pPVar23 + 0x58,&local_b8,4);
                      if ((uVar21 & 1) != 0) {
                        PUEmitter::setParticleOrientation
                                  (*(PUEmitter **)pPVar17,(Quaternion *)&local_b8);
                      }
LAB_00e4b9d0:
                      Quaternion::~Quaternion((Quaternion *)&local_b8);
                    }
                  }
                  else {
LAB_00e4b354:
                    sVar24 = (ulong)(token[0x870] >> 1);
                    if ((token[0x870] & 1) != 0) {
                      sVar24 = token._2168_8_;
                    }
                    if (sVar2 == sVar24) {
                      pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x48);
                      if (((byte)PVar5 & 1) == 0) {
                        pPVar20 = pPVar23 + 0x39;
                      }
                      pPVar16 = (PUPropertyAbstractNode *)(token + 0x871);
                      if ((token[0x870] & 1) != 0) {
                        pPVar16 = (PUPropertyAbstractNode *)token._2176_8_;
                      }
                      if (((byte)PVar5 & 1) == 0) {
                        if (sVar2 != 0) {
                          pPVar20 = pPVar23 + 0x39;
                          uVar15 = uVar21;
                          do {
                            if (*pPVar20 != *pPVar16) goto LAB_00e4b4c4;
                            uVar15 = uVar15 - 1;
                            pPVar20 = pPVar20 + 1;
                            pPVar16 = pPVar16 + 1;
                          } while (uVar15 != 0);
                        }
                      }
                      else {
                    /* try { // try from 00e4b4c0 to 00f4b58b has its CatchHandler @ 00e4b4c0
                       catch() { ... } // from try @ 00e4b4c0 with catch @ 00e4b4c0
                       catch() { ... } // from try @ 00e4b65c with catch @ 00e4b4c0 */
                        if ((sVar2 != 0) && (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                        goto LAB_00e4b4c4;
                      }
                      uVar21 = PUScriptTranslator::passValidateProperty
                                         ((PUScriptTranslator *)this,param_1,pPVar23,0x1789900,9);
                      if ((uVar21 & 1) != 0) {
                        Quaternion::Quaternion((Quaternion *)&local_b8);
                        uVar21 = PUScriptTranslator::getQuaternion
                                           ((PUScriptTranslator *)this,
                                            *(undefined8 *)(pPVar23 + 0x60),pPVar23 + 0x58,&local_b8
                                            ,4);
                        if ((uVar21 & 1) != 0) {
                          PUEmitter::setParticleOrientationRangeStart
                                    (*(PUEmitter **)pPVar17,(Quaternion *)&local_b8);
                        }
                        goto LAB_00e4b9d0;
                      }
                    }
                    else {
LAB_00e4b4c4:
                      sVar24 = (ulong)(token[0x840] >> 1);
                      if ((token[0x840] & 1) != 0) {
                        sVar24 = token._2120_8_;
                      }
                      if (sVar2 == sVar24) {
                        pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x48);
                        if (((byte)PVar5 & 1) == 0) {
                          pPVar20 = pPVar23 + 0x39;
                        }
                        pPVar16 = (PUPropertyAbstractNode *)(token + 0x841);
                        if ((token[0x840] & 1) != 0) {
                          pPVar16 = (PUPropertyAbstractNode *)token._2128_8_;
                        }
                        if (((byte)PVar5 & 1) == 0) {
                          if (sVar2 != 0) {
                            pPVar20 = pPVar23 + 0x39;
                            uVar15 = uVar21;
                            do {
                              if (*pPVar20 != *pPVar16) goto LAB_00e4b634;
                              uVar15 = uVar15 - 1;
                              pPVar20 = pPVar20 + 1;
                              pPVar16 = pPVar16 + 1;
                            } while (uVar15 != 0);
                          }
                        }
                        else if ((sVar2 != 0) &&
                                (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                        goto LAB_00e4b634;
                        uVar21 = PUScriptTranslator::passValidateProperty
                                           ((PUScriptTranslator *)this,param_1,pPVar23,0x17898d0,9);
                        if ((uVar21 & 1) != 0) {
                          Quaternion::Quaternion((Quaternion *)&local_b8);
                          uVar21 = PUScriptTranslator::getQuaternion
                                             ((PUScriptTranslator *)this,
                                              *(undefined8 *)(pPVar23 + 0x60),pPVar23 + 0x58,
                                              &local_b8,4);
                          if ((uVar21 & 1) != 0) {
                            PUEmitter::setParticleOrientationRangeStart
                                      (*(PUEmitter **)pPVar17,(Quaternion *)&local_b8);
                          }
                          goto LAB_00e4b9d0;
                        }
                      }
                      else {
LAB_00e4b634:
                        sVar24 = (ulong)(token[0x888] >> 1);
                        if ((token[0x888] & 1) != 0) {
                          sVar24 = token._2192_8_;
                        }
                        if (sVar2 == sVar24) {
                          pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x48);
                    /* try { // try from 00e4b65c to 00f4b72b has its CatchHandler @ 00e4b4c0 */
                          if (((byte)PVar5 & 1) == 0) {
                            pPVar20 = pPVar23 + 0x39;
                          }
                          pPVar16 = (PUPropertyAbstractNode *)(token + 0x889);
                          if ((token[0x888] & 1) != 0) {
                            pPVar16 = (PUPropertyAbstractNode *)token._2200_8_;
                          }
                          if (((byte)PVar5 & 1) == 0) {
                            if (sVar2 != 0) {
                              pPVar20 = pPVar23 + 0x39;
                              uVar15 = uVar21;
                              do {
                                if (*pPVar20 != *pPVar16) goto LAB_00e4b7a4;
                                uVar15 = uVar15 - 1;
                    /* catch() { ... } // from try @ 00e4b58c with catch @ 00e4b690 */
                                pPVar20 = pPVar20 + 1;
                                pPVar16 = pPVar16 + 1;
                              } while (uVar15 != 0);
                            }
                          }
                          else {
                    /* catch() { ... } // from try @ 00e4b7e0 with catch @ 00e4b798 */
                            if ((sVar2 != 0) &&
                               (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                            goto LAB_00e4b7a4;
                          }
                    /* catch() { ... } // from try @ 00e4b838 with catch @ 00e4b810 */
                          uVar21 = PUScriptTranslator::passValidateProperty
                                             ((PUScriptTranslator *)this,param_1,pPVar23,0x1789918,9
                                             );
                    /* try { // try from 00e4b828 to 00f4b837 has its CatchHandler @ 00e4b84c */
                          if ((uVar21 & 1) != 0) {
                            Quaternion::Quaternion((Quaternion *)&local_b8);
                    /* try { // try from 00e4b838 to 00f4b867 has its CatchHandler @ 00e4b810 */
                            uVar21 = PUScriptTranslator::getQuaternion
                                               ((PUScriptTranslator *)this,
                                                *(undefined8 *)(pPVar23 + 0x60),pPVar23 + 0x58,
                                                &local_b8,4);
                    /* catch() { ... } // from try @ 00e4b828 with catch @ 00e4b84c */
                            if ((uVar21 & 1) != 0) {
                              PUEmitter::setParticleOrientationRangeEnd
                                        (*(PUEmitter **)pPVar17,(Quaternion *)&local_b8);
                            }
                            goto LAB_00e4b9d0;
                          }
                        }
                        else {
LAB_00e4b7a4:
                          sVar24 = (ulong)(token[0x858] >> 1);
                          if ((token[0x858] & 1) != 0) {
                            sVar24 = token._2144_8_;
                          }
                          if (sVar2 == sVar24) {
                            pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x48);
                            if (((byte)PVar5 & 1) == 0) {
                              pPVar20 = pPVar23 + 0x39;
                            }
                            pPVar16 = (PUPropertyAbstractNode *)(token + 0x859);
                    /* try { // try from 00e4b7d8 to 00f4b7df has its CatchHandler @ 00e4b7f4 */
                            if ((token[0x858] & 1) != 0) {
                              pPVar16 = (PUPropertyAbstractNode *)token._2152_8_;
                            }
                            if (((byte)PVar5 & 1) == 0) {
                    /* try { // try from 00e4b7e0 to 00f4b80f has its CatchHandler @ 00e4b798 */
                              if (sVar2 != 0) {
                                pPVar20 = pPVar23 + 0x39;
                                uVar15 = uVar21;
                                do {
                    /* catch() { ... } // from try @ 00e4b7d8 with catch @ 00e4b7f4 */
                                  if (*pPVar20 != *pPVar16) goto LAB_00e4b914;
                                  uVar15 = uVar15 - 1;
                                  pPVar20 = pPVar20 + 1;
                                  pPVar16 = pPVar16 + 1;
                                } while (uVar15 != 0);
                              }
                            }
                            else if ((sVar2 != 0) &&
                                    (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                            goto LAB_00e4b914;
                    /* catch() { ... } // from try @ 00e4b96c with catch @ 00e4b988 */
                            uVar21 = PUScriptTranslator::passValidateProperty
                                               ((PUScriptTranslator *)this,param_1,pPVar23,0x17898e8
                                                ,9);
                            if ((uVar21 & 1) != 0) {
                              Quaternion::Quaternion((Quaternion *)&local_b8);
                              uVar21 = PUScriptTranslator::getQuaternion
                                                 ((PUScriptTranslator *)this,
                                                  *(undefined8 *)(pPVar23 + 0x60),pPVar23 + 0x58,
                                                  &local_b8,4);
                              if ((uVar21 & 1) != 0) {
                                PUEmitter::setParticleOrientationRangeEnd
                                          (*(PUEmitter **)pPVar17,(Quaternion *)&local_b8);
                              }
                              goto LAB_00e4b9d0;
                            }
                          }
                          else {
LAB_00e4b914:
                            sVar24 = (ulong)(token[0x900] >> 1);
                            if ((token[0x900] & 1) != 0) {
                              sVar24 = token._2312_8_;
                            }
                    /* try { // try from 00e4b928 to 00f4b96b has its CatchHandler @ 00e4b928
                       catch() { ... } // from try @ 00e4b928 with catch @ 00e4b928
                       catch() { ... } // from try @ 00e4b970 with catch @ 00e4b928 */
                            if (sVar2 == sVar24) {
                              pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x48);
                              if (((byte)PVar5 & 1) == 0) {
                                pPVar20 = pPVar23 + 0x39;
                              }
                              pPVar16 = (PUPropertyAbstractNode *)(token + 0x901);
                              if ((token[0x900] & 1) != 0) {
                                pPVar16 = (PUPropertyAbstractNode *)token._2320_8_;
                              }
                              if (((byte)PVar5 & 1) == 0) {
                                if (sVar2 != 0) {
                                  pPVar20 = pPVar23 + 0x39;
                                  uVar15 = uVar21;
                                  do {
                                    if (*pPVar20 != *pPVar16) goto LAB_00e4ba8c;
                    /* try { // try from 00e4b96c to 00f4b96f has its CatchHandler @ 00e4b988 */
                                    uVar15 = uVar15 - 1;
                    /* try { // try from 00e4b970 to 00f4b99b has its CatchHandler @ 00e4b928 */
                                    pPVar20 = pPVar20 + 1;
                                    pPVar16 = pPVar16 + 1;
                                  } while (uVar15 != 0);
                                }
                              }
                              else if ((sVar2 != 0) &&
                                      (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                              goto LAB_00e4ba8c;
                              uVar21 = PUScriptTranslator::passValidateProperty
                                                 ((PUScriptTranslator *)this,param_1,pPVar23,
                                                  0x1789990,0);
                              if ((uVar21 & 1) != 0) {
                                local_b8 = local_b8 & 0xffffffff00000000;
                                uVar21 = PUScriptTranslator::getFloat
                                                   (*(PUAbstractNode **)
                                                     (*(long *)(pPVar23 + 0x60) + 0x10),
                                                    (float *)&local_b8);
                                if ((uVar21 & 1) != 0) {
                                  pPVar14 = operator_new(0x30,(nothrow_t *)&std::nothrow);
                                  if (pPVar14 != (PUDynamicAttributeFixed *)0x0) {
                                    PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar14);
                                  }
                                  (**(code **)(*(long *)pPVar14 + 0x28))((float)local_b8,pPVar14);
                                  PUEmitter::setDynEmissionRate
                                            (*(PUEmitter **)pPVar17,(PUDynamicAttribute *)pPVar14);
                                }
                              }
                            }
                            else {
LAB_00e4ba8c:
                              sVar24 = (ulong)(token[0x918] >> 1);
                              if ((token[0x918] & 1) != 0) {
                                sVar24 = token._2336_8_;
                              }
                              if (sVar2 == sVar24) {
                                pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x48);
                                if (((byte)PVar5 & 1) == 0) {
                                  pPVar20 = pPVar23 + 0x39;
                                }
                                pPVar16 = (PUPropertyAbstractNode *)(token + 0x919);
                                if ((token[0x918] & 1) != 0) {
                                  pPVar16 = (PUPropertyAbstractNode *)token._2344_8_;
                                }
                                if (((byte)PVar5 & 1) == 0) {
                                  if (sVar2 != 0) {
                                    pPVar20 = pPVar23 + 0x39;
                                    uVar15 = uVar21;
                                    do {
                                      if (*pPVar20 != *pPVar16) goto LAB_00e4bc24;
                                      uVar15 = uVar15 - 1;
                                      pPVar20 = pPVar20 + 1;
                                      pPVar16 = pPVar16 + 1;
                                    } while (uVar15 != 0);
                                  }
                                }
                                else if ((sVar2 != 0) &&
                                        (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                                goto LAB_00e4bc24;
                                uVar21 = PUScriptTranslator::passValidateProperty
                                                   ((PUScriptTranslator *)this,param_1,pPVar23,
                                                    0x17899a8,0);
                                if ((uVar21 & 1) != 0) {
                                  local_b8 = local_b8 & 0xffffffff00000000;
                                  uVar21 = PUScriptTranslator::getFloat
                                                     (*(PUAbstractNode **)
                                                       (*(long *)(pPVar23 + 0x60) + 0x10),
                                                      (float *)&local_b8);
                                  if ((uVar21 & 1) != 0) {
                                    pPVar14 = operator_new(0x30,(nothrow_t *)&std::nothrow);
                                    if (pPVar14 != (PUDynamicAttributeFixed *)0x0) {
                                      PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar14);
                                    }
                                    (**(code **)(*(long *)pPVar14 + 0x28))((float)local_b8,pPVar14);
                                    PUEmitter::setDynTotalTimeToLive
                                              (*(PUEmitter **)pPVar17,(PUDynamicAttribute *)pPVar14)
                                    ;
                                  }
                                }
                              }
                              else {
LAB_00e4bc24:
                                sVar24 = (ulong)(token[0x930] >> 1);
                                if ((token[0x930] & 1) != 0) {
                                  sVar24 = token._2360_8_;
                                }
                                if (sVar2 == sVar24) {
                                  pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x48);
                                  if (((byte)PVar5 & 1) == 0) {
                                    pPVar20 = pPVar23 + 0x39;
                                  }
                                  pPVar16 = (PUPropertyAbstractNode *)(token + 0x931);
                                  if ((token[0x930] & 1) != 0) {
                                    pPVar16 = (PUPropertyAbstractNode *)token._2368_8_;
                                  }
                                  if (((byte)PVar5 & 1) == 0) {
                                    if (sVar2 != 0) {
                                      pPVar20 = pPVar23 + 0x39;
                                      uVar15 = uVar21;
                                      do {
                                        if (*pPVar20 != *pPVar16) goto LAB_00e4bdbc;
                                        uVar15 = uVar15 - 1;
                                        pPVar20 = pPVar20 + 1;
                                        pPVar16 = pPVar16 + 1;
                                      } while (uVar15 != 0);
                                    }
                                  }
                                  else if ((sVar2 != 0) &&
                                          (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                                  goto LAB_00e4bdbc;
                                  uVar21 = PUScriptTranslator::passValidateProperty
                                                     ((PUScriptTranslator *)this,param_1,pPVar23,
                                                      0x17899c0,0);
                                  if ((uVar21 & 1) != 0) {
                                    local_b8 = local_b8 & 0xffffffff00000000;
                                    uVar21 = PUScriptTranslator::getFloat
                                                       (*(PUAbstractNode **)
                                                         (*(long *)(pPVar23 + 0x60) + 0x10),
                                                        (float *)&local_b8);
                                    if ((uVar21 & 1) != 0) {
                                      pPVar14 = operator_new(0x30,(nothrow_t *)&std::nothrow);
                                      if (pPVar14 != (PUDynamicAttributeFixed *)0x0) {
                                        PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar14);
                                      }
                                      (**(code **)(*(long *)pPVar14 + 0x28))
                                                ((float)local_b8,pPVar14);
                                      PUEmitter::setDynParticleMass
                                                (*(PUEmitter **)pPVar17,
                                                 (PUDynamicAttribute *)pPVar14);
                                    }
                                  }
                                }
                                else {
LAB_00e4bdbc:
                                  sVar24 = (ulong)(token[0x978] >> 1);
                                  if ((token[0x978] & 1) != 0) {
                                    sVar24 = token._2432_8_;
                                  }
                                  if (sVar2 == sVar24) {
                                    pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x48);
                                    if (((byte)PVar5 & 1) == 0) {
                                      pPVar20 = pPVar23 + 0x39;
                                    }
                                    pPVar16 = (PUPropertyAbstractNode *)(token + 0x979);
                                    if ((token[0x978] & 1) != 0) {
                                      pPVar16 = (PUPropertyAbstractNode *)token._2440_8_;
                                    }
                                    if (((byte)PVar5 & 1) == 0) {
                                      if (sVar2 != 0) {
                                        pPVar20 = pPVar23 + 0x39;
                                        uVar15 = uVar21;
                                        do {
                                          if (*pPVar20 != *pPVar16) goto LAB_00e4bf50;
                                          uVar15 = uVar15 - 1;
                                          pPVar20 = pPVar20 + 1;
                                          pPVar16 = pPVar16 + 1;
                                        } while (uVar15 != 0);
                                      }
                                    }
                                    else if ((sVar2 != 0) &&
                                            (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                                    goto LAB_00e4bf50;
                                    uVar21 = PUScriptTranslator::passValidateProperty
                                                       ((PUScriptTranslator *)this,param_1,pPVar23,
                                                        0x1789a08,2);
                    /* try { // try from 00e4bfd4 to 00f4c02b has its CatchHandler @ 00e4c044 */
                                    if ((uVar21 & 1) != 0) {
                                      local_b8 = local_b8 & 0xffffffff00000000;
                                      uVar21 = PUScriptTranslator::getUInt
                                                         (*(PUAbstractNode **)
                                                           (*(long *)(pPVar23 + 0x60) + 0x10),
                                                          (uint *)&local_b8);
                                      if ((uVar21 & 1) != 0) {
                                        local_9c[0] = (ushort)local_b8;
                                        PUEmitter::setParticleTextureCoordsRangeStart
                                                  (*(PUEmitter **)pPVar17,local_9c);
                                      }
                                    }
                                  }
                                  else {
LAB_00e4bf50:
                    /* try { // try from 00e4bf54 to 00f4bf87 has its CatchHandler @ 00e4bf54
                       catch() { ... } // from try @ 00e4bf54 with catch @ 00e4bf54
                       catch() { ... } // from try @ 00e4bf8c with catch @ 00e4bf54 */
                                    sVar24 = (ulong)(token[0x948] >> 1);
                                    if ((token[0x948] & 1) != 0) {
                                      sVar24 = token._2384_8_;
                                    }
                                    if (sVar2 == sVar24) {
                                      pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x48);
                                      if (((byte)PVar5 & 1) == 0) {
                                        pPVar20 = pPVar23 + 0x39;
                                      }
                                      pPVar16 = (PUPropertyAbstractNode *)(token + 0x949);
                                      if ((token[0x948] & 1) != 0) {
                                        pPVar16 = (PUPropertyAbstractNode *)token._2392_8_;
                                      }
                    /* try { // try from 00e4bf88 to 00f4bf8b has its CatchHandler @ 00e4bf9c */
                                      if (((byte)PVar5 & 1) == 0) {
                    /* try { // try from 00e4bf8c to 00f4bfaf has its CatchHandler @ 00e4bf54 */
                                        if (sVar2 != 0) {
                                          pPVar20 = pPVar23 + 0x39;
                                          uVar15 = uVar21;
                                          do {
                    /* catch() { ... } // from try @ 00e4bf88 with catch @ 00e4bf9c */
                                            if (*pPVar20 != *pPVar16) goto LAB_00e4c064;
                                            uVar15 = uVar15 - 1;
                                            pPVar20 = pPVar20 + 1;
                                            pPVar16 = pPVar16 + 1;
                                          } while (uVar15 != 0);
                                        }
                                      }
                                      else if ((sVar2 != 0) &&
                                              (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0))
                                      goto LAB_00e4c064;
                                      uVar21 = PUScriptTranslator::passValidateProperty
                                                         ((PUScriptTranslator *)this,param_1,pPVar23
                                                          ,0x17899d8,2);
                                      if ((uVar21 & 1) != 0) {
                                        local_b8 = local_b8 & 0xffffffff00000000;
                                        uVar21 = PUScriptTranslator::getUInt
                                                           (*(PUAbstractNode **)
                                                             (*(long *)(pPVar23 + 0x60) + 0x10),
                                                            (uint *)&local_b8);
                                        if ((uVar21 & 1) != 0) {
                                          local_9c[0] = (ushort)local_b8;
                                          PUEmitter::setParticleTextureCoordsRangeStart
                                                    (*(PUEmitter **)pPVar17,local_9c);
                                        }
                                      }
                                    }
                                    else {
LAB_00e4c064:
                                      sVar24 = (ulong)(token[0x990] >> 1);
                                      if ((token[0x990] & 1) != 0) {
                                        sVar24 = token._2456_8_;
                                      }
                                      if (sVar2 == sVar24) {
                                        pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x48);
                                        if (((byte)PVar5 & 1) == 0) {
                                          pPVar20 = pPVar23 + 0x39;
                                        }
                                        pPVar16 = (PUPropertyAbstractNode *)(token + 0x991);
                                        if ((token[0x990] & 1) != 0) {
                                          pPVar16 = (PUPropertyAbstractNode *)token._2464_8_;
                                        }
                                        if (((byte)PVar5 & 1) == 0) {
                                          if (sVar2 != 0) {
                                            pPVar20 = pPVar23 + 0x39;
                                            uVar15 = uVar21;
                                            do {
                                              if (*pPVar20 != *pPVar16) goto LAB_00e4c130;
                                              uVar15 = uVar15 - 1;
                                              pPVar20 = pPVar20 + 1;
                                              pPVar16 = pPVar16 + 1;
                                            } while (uVar15 != 0);
                                          }
                                        }
                                        else if ((sVar2 != 0) &&
                                                (iVar10 = memcmp(pPVar20,pPVar16,sVar2), iVar10 != 0
                                                )) goto LAB_00e4c130;
                                        uVar21 = PUScriptTranslator::passValidateProperty
                                                           ((PUScriptTranslator *)this,param_1,
                                                            pPVar23,0x1789a20,2);
                                        if ((uVar21 & 1) != 0) {
                                          local_b8 = local_b8 & 0xffffffff00000000;
                                          uVar21 = PUScriptTranslator::getUInt
                                                             (*(PUAbstractNode **)
                                                               (*(long *)(pPVar23 + 0x60) + 0x10),
                                                              (uint *)&local_b8);
                                          if ((uVar21 & 1) != 0) {
                                            local_9c[0] = (ushort)local_b8;
                                            PUEmitter::setParticleTextureCoordsRangeEnd
                                                      (*(PUEmitter **)pPVar17,local_9c);
                                          }
                                        }
                                      }
                                      else {
LAB_00e4c130:
                                        sVar24 = (ulong)(token[0x960] >> 1);
                                        if ((token[0x960] & 1) != 0) {
                                          sVar24 = token._2408_8_;
                                        }
                                        if (sVar2 == sVar24) {
                                          pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x48);
                                          if (((byte)PVar5 & 1) == 0) {
                                            pPVar20 = pPVar23 + 0x39;
                                          }
                                          pPVar16 = (PUPropertyAbstractNode *)(token + 0x961);
                                          if ((token[0x960] & 1) != 0) {
                                            pPVar16 = (PUPropertyAbstractNode *)token._2416_8_;
                                          }
                                          if (((byte)PVar5 & 1) == 0) {
                                            if (sVar2 != 0) {
                                              pPVar20 = pPVar23 + 0x39;
                                              uVar15 = uVar21;
                                              do {
                                                if (*pPVar20 != *pPVar16) goto LAB_00e4c1fc;
                                                uVar15 = uVar15 - 1;
                                                pPVar20 = pPVar20 + 1;
                                                pPVar16 = pPVar16 + 1;
                                              } while (uVar15 != 0);
                                            }
                                          }
                                          else if ((sVar2 != 0) &&
                                                  (iVar10 = memcmp(pPVar20,pPVar16,sVar2),
                                                  iVar10 != 0)) goto LAB_00e4c1fc;
                                          uVar21 = PUScriptTranslator::passValidateProperty
                                                             ((PUScriptTranslator *)this,param_1,
                                                              pPVar23,0x17899f0,2);
                                          if ((uVar21 & 1) != 0) {
                                            local_b8 = local_b8 & 0xffffffff00000000;
                                            uVar21 = PUScriptTranslator::getUInt
                                                               (*(PUAbstractNode **)
                                                                 (*(long *)(pPVar23 + 0x60) + 0x10),
                                                                (uint *)&local_b8);
                                            if ((uVar21 & 1) != 0) {
                                              local_9c[0] = (ushort)local_b8;
                                              PUEmitter::setParticleTextureCoordsRangeEnd
                                                        (*(PUEmitter **)pPVar17,local_9c);
                                            }
                                          }
                                        }
                                        else {
LAB_00e4c1fc:
                                          sVar24 = (ulong)(token[0x9a8] >> 1);
                                          if ((token[0x9a8] & 1) != 0) {
                                            sVar24 = token._2480_8_;
                                          }
                                          if (sVar2 == sVar24) {
                                            pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x48);
                                            if (((byte)PVar5 & 1) == 0) {
                                              pPVar20 = pPVar23 + 0x39;
                                            }
                                            pPVar16 = (PUPropertyAbstractNode *)(token + 0x9a9);
                                            if ((token[0x9a8] & 1) != 0) {
                                              pPVar16 = (PUPropertyAbstractNode *)token._2488_8_;
                                            }
                                            if (((byte)PVar5 & 1) == 0) {
                                              if (sVar2 != 0) {
                                                pPVar20 = pPVar23 + 0x39;
                                                uVar15 = uVar21;
                                                do {
                                                  if (*pPVar20 != *pPVar16) goto LAB_00e4c2c8;
                                                  uVar15 = uVar15 - 1;
                                                  pPVar20 = pPVar20 + 1;
                                                  pPVar16 = pPVar16 + 1;
                                                } while (uVar15 != 0);
                                              }
                                            }
                                            else if ((sVar2 != 0) &&
                                                    (iVar10 = memcmp(pPVar20,pPVar16,sVar2),
                                                    iVar10 != 0)) goto LAB_00e4c2c8;
                                            uVar21 = PUScriptTranslator::passValidateProperty
                                                               ((PUScriptTranslator *)this,param_1,
                                                                pPVar23,0x1789a38,2);
                                            if ((uVar21 & 1) != 0) {
                                              local_b8 = local_b8 & 0xffffffff00000000;
                                              uVar21 = PUScriptTranslator::getUInt
                                                                 (*(PUAbstractNode **)
                                                                   (*(long *)(pPVar23 + 0x60) + 0x10
                                                                   ),(uint *)&local_b8);
                                              if ((uVar21 & 1) != 0) {
                                                local_9c[0] = (ushort)local_b8;
                                                PUEmitter::setParticleTextureCoords
                                                          (*(PUEmitter **)pPVar17,local_9c);
                                              }
                                            }
                                          }
                                          else {
LAB_00e4c2c8:
                                            sVar24 = (ulong)(token[0x9c0] >> 1);
                                            if ((token[0x9c0] & 1) != 0) {
                                              sVar24 = token._2504_8_;
                                            }
                                            if (sVar2 == sVar24) {
                                              pPVar20 = *(PUPropertyAbstractNode **)(pPVar23 + 0x48)
                                              ;
                                              if (((byte)PVar5 & 1) == 0) {
                                                pPVar20 = pPVar23 + 0x39;
                                              }
                                              pPVar16 = (PUPropertyAbstractNode *)(token + 0x9c1);
                                              if ((token[0x9c0] & 1) != 0) {
                                                pPVar16 = (PUPropertyAbstractNode *)token._2512_8_;
                                              }
                                              if (((byte)PVar5 & 1) == 0) {
                                                if (sVar2 != 0) {
                                                  pPVar20 = pPVar23 + 0x39;
                                                  uVar15 = uVar21;
                                                  do {
                                                    if (*pPVar20 != *pPVar16) goto LAB_00e4c394;
                                                    uVar15 = uVar15 - 1;
                                                    pPVar20 = pPVar20 + 1;
                                                    pPVar16 = pPVar16 + 1;
                                                  } while (uVar15 != 0);
                                                }
                                              }
                                              else if ((sVar2 != 0) &&
                                                      (iVar10 = memcmp(pPVar20,pPVar16,sVar2),
                                                      iVar10 != 0)) goto LAB_00e4c394;
                                              uVar21 = PUScriptTranslator::passValidateProperty
                                                                 ((PUScriptTranslator *)this,param_1
                                                                  ,pPVar23,0x1789a50,8);
                                              if ((uVar21 & 1) != 0) {
                                                Vec4::Vec4((Vec4 *)&local_b8);
                                                uVar21 = PUScriptTranslator::getVector4
                                                                   ((PUScriptTranslator *)this,
                                                                    *(undefined8 *)(pPVar23 + 0x60),
                                                                    pPVar23 + 0x58,&local_b8,4);
                                                if ((uVar21 & 1) != 0) {
                                                  PUEmitter::setParticleColorRangeStart
                                                            (*(PUEmitter **)pPVar17,
                                                             (Vec4 *)&local_b8);
                                                }
LAB_00e4c5f0:
                                                Vec4::~Vec4((Vec4 *)&local_b8);
                                              }
                                            }
                                            else {
LAB_00e4c394:
                                              sVar24 = (ulong)(token[0x9d8] >> 1);
                                              if ((token[0x9d8] & 1) != 0) {
                                                sVar24 = token._2528_8_;
                                              }
                                              if (sVar2 == sVar24) {
                                                pPVar20 = *(PUPropertyAbstractNode **)
                                                           (pPVar23 + 0x48);
                                                if (((byte)PVar5 & 1) == 0) {
                                                  pPVar20 = pPVar23 + 0x39;
                                                }
                                                pPVar16 = (PUPropertyAbstractNode *)(token + 0x9d9);
                                                if ((token[0x9d8] & 1) != 0) {
                                                  pPVar16 = (PUPropertyAbstractNode *)token._2536_8_
                                                  ;
                                                }
                                                if (((byte)PVar5 & 1) == 0) {
                                                  if (sVar2 != 0) {
                                                    pPVar20 = pPVar23 + 0x39;
                                                    uVar15 = uVar21;
                                                    do {
                                                      if (*pPVar20 != *pPVar16) goto LAB_00e4c464;
                                                      uVar15 = uVar15 - 1;
                                                      pPVar20 = pPVar20 + 1;
                                                      pPVar16 = pPVar16 + 1;
                                                    } while (uVar15 != 0);
                                                  }
                                                }
                                                else if ((sVar2 != 0) &&
                                                        (iVar10 = memcmp(pPVar20,pPVar16,sVar2),
                                                        iVar10 != 0)) goto LAB_00e4c464;
                                                uVar21 = PUScriptTranslator::passValidateProperty
                                                                   ((PUScriptTranslator *)this,
                                                                    param_1,pPVar23,0x1789a68,8);
                                                if ((uVar21 & 1) != 0) {
                                                  Vec4::Vec4((Vec4 *)&local_b8);
                                                  uVar21 = PUScriptTranslator::getVector4
                                                                     ((PUScriptTranslator *)this,
                                                                      *(undefined8 *)
                                                                       (pPVar23 + 0x60),
                                                                      pPVar23 + 0x58,&local_b8,4);
                                                  if ((uVar21 & 1) != 0) {
                                                    PUEmitter::setParticleColorRangeEnd
                                                              (*(PUEmitter **)pPVar17,
                                                               (Vec4 *)&local_b8);
                                                  }
                                                  goto LAB_00e4c5f0;
                                                }
                                              }
                                              else {
LAB_00e4c464:
                                                sVar24 = (ulong)(token[0x9f0] >> 1);
                                                if ((token[0x9f0] & 1) != 0) {
                                                  sVar24 = token._2552_8_;
                                                }
                                                if (sVar2 == sVar24) {
                                                  pPVar20 = *(PUPropertyAbstractNode **)
                                                             (pPVar23 + 0x48);
                                                  if (((byte)PVar5 & 1) == 0) {
                                                    pPVar20 = pPVar23 + 0x39;
                                                  }
                                                  pPVar16 = (PUPropertyAbstractNode *)
                                                            (token + 0x9f1);
                                                  if ((token[0x9f0] & 1) != 0) {
                                                    pPVar16 = (PUPropertyAbstractNode *)
                                                              token._2560_8_;
                                                  }
                                                  if (((byte)PVar5 & 1) == 0) {
                                                    if (sVar2 != 0) {
                                                      pPVar20 = pPVar23 + 0x39;
                                                      uVar15 = uVar21;
                                                      do {
                                                        if (*pPVar20 != *pPVar16) goto LAB_00e4c534;
                                                        uVar15 = uVar15 - 1;
                                                        pPVar20 = pPVar20 + 1;
                                                        pPVar16 = pPVar16 + 1;
                                                      } while (uVar15 != 0);
                                                    }
                                                  }
                                                  else if ((sVar2 != 0) &&
                                                          (iVar10 = memcmp(pPVar20,pPVar16,sVar2),
                                                          iVar10 != 0)) goto LAB_00e4c534;
                                                  uVar21 = PUScriptTranslator::passValidateProperty
                                                                     ((PUScriptTranslator *)this,
                                                                      param_1,pPVar23,0x1789a80,8);
                                                  if ((uVar21 & 1) != 0) {
                                                    Vec4::Vec4((Vec4 *)&local_b8);
                                                    uVar21 = PUScriptTranslator::getVector4
                                                                       ((PUScriptTranslator *)this,
                                                                        *(undefined8 *)
                                                                         (pPVar23 + 0x60),
                                                                        pPVar23 + 0x58,&local_b8,4);
                                                    if ((uVar21 & 1) != 0) {
                                                      PUEmitter::setParticleColor
                                                                (*(PUEmitter **)pPVar17,
                                                                 (Vec4 *)&local_b8);
                                                    }
                                                    goto LAB_00e4c5f0;
                                                  }
                                                }
                                                else {
LAB_00e4c534:
                                                  sVar24 = (ulong)(token[0x168] >> 1);
                                                  if ((token[0x168] & 1) != 0) {
                                                    sVar24 = token._368_8_;
                                                  }
                                                  if (sVar2 == sVar24) {
                                                    pPVar20 = *(PUPropertyAbstractNode **)
                                                               (pPVar23 + 0x48);
                                                    if (((byte)PVar5 & 1) == 0) {
                                                      pPVar20 = pPVar23 + 0x39;
                                                    }
                                                    pPVar16 = (PUPropertyAbstractNode *)
                                                              (token + 0x169);
                                                    if ((token[0x168] & 1) != 0) {
                                                      pPVar16 = (PUPropertyAbstractNode *)
                                                                token._376_8_;
                                                    }
                                                    if (((byte)PVar5 & 1) == 0) {
                                                      if (sVar2 != 0) {
                                                        pPVar20 = pPVar23 + 0x39;
                                                        uVar15 = uVar21;
                                                        do {
                                                          if (*pPVar20 != *pPVar16)
                                                          goto LAB_00e4c60c;
                                                          uVar15 = uVar15 - 1;
                                                          pPVar20 = pPVar20 + 1;
                                                          pPVar16 = pPVar16 + 1;
                                                        } while (uVar15 != 0);
                                                      }
                                                    }
                                                    else if ((sVar2 != 0) &&
                                                            (iVar10 = memcmp(pPVar20,pPVar16,sVar2),
                                                            iVar10 != 0)) goto LAB_00e4c60c;
                                                    uVar21 = PUScriptTranslator::
                                                             passValidateProperty
                                                                       ((PUScriptTranslator *)this,
                                                                        param_1,pPVar23,0x17891f8,0)
                                                    ;
                                                    if ((uVar21 & 1) != 0) {
                                                      local_b8 = local_b8 & 0xffffffff00000000;
                                                      uVar21 = PUScriptTranslator::getFloat
                                                                         (*(PUAbstractNode **)
                                                                           (*(long *)(pPVar23 + 0x60
                                                                                     ) + 0x10),
                                                                          (float *)&local_b8);
                                                      if ((uVar21 & 1) != 0) {
                                                        pPVar14 = operator_new(0x30,(nothrow_t *)
                                                                                    &std::nothrow);
                                                        if (pPVar14 !=
                                                            (PUDynamicAttributeFixed *)0x0) {
                                                          PUDynamicAttributeFixed::
                                                          PUDynamicAttributeFixed(pPVar14);
                                                        }
                                                        (**(code **)(*(long *)pPVar14 + 0x28))
                                                                  ((float)local_b8,pPVar14);
                                                        PUEmitter::setDynVelocity
                                                                  (*(PUEmitter **)pPVar17,
                                                                   (PUDynamicAttribute *)pPVar14);
                                                      }
                                                    }
                                                  }
                                                  else {
LAB_00e4c60c:
                                                    sVar24 = (ulong)(token[0x8a0] >> 1);
                                                    if ((token[0x8a0] & 1) != 0) {
                                                      sVar24 = token._2216_8_;
                                                    }
                                                    if (sVar2 == sVar24) {
                                                      pPVar20 = *(PUPropertyAbstractNode **)
                                                                 (pPVar23 + 0x48);
                                                      if (((byte)PVar5 & 1) == 0) {
                                                        pPVar20 = pPVar23 + 0x39;
                                                      }
                                                      pPVar16 = (PUPropertyAbstractNode *)
                                                                (token + 0x8a1);
                                                      if ((token[0x8a0] & 1) != 0) {
                                                        pPVar16 = (PUPropertyAbstractNode *)
                                                                  token._2224_8_;
                                                      }
                                                      if (((byte)PVar5 & 1) == 0) {
                                                        if (sVar2 != 0) {
                                                          pPVar20 = pPVar23 + 0x39;
                                                          uVar15 = uVar21;
                                                          do {
                                                            if (*pPVar20 != *pPVar16)
                                                            goto LAB_00e4c704;
                                                            uVar15 = uVar15 - 1;
                                                            pPVar20 = pPVar20 + 1;
                                                            pPVar16 = pPVar16 + 1;
                                                          } while (uVar15 != 0);
                                                        }
                                                      }
                                                      else if ((sVar2 != 0) &&
                                                              (iVar10 = memcmp(pPVar20,pPVar16,sVar2
                                                                              ), iVar10 != 0))
                                                      goto LAB_00e4c704;
                                                      uVar21 = PUScriptTranslator::
                                                               passValidateProperty
                                                                         ((PUScriptTranslator *)this
                                                                          ,param_1,pPVar23,0x1789930
                                                                          ,0);
                                                      if ((uVar21 & 1) != 0) {
                                                        local_b8 = local_b8 & 0xffffffff00000000;
                                                        uVar21 = PUScriptTranslator::getFloat
                                                                           (*(PUAbstractNode **)
                                                                             (*(long *)(pPVar23 +
                                                                                       0x60) + 0x10)
                                                                            ,(float *)&local_b8);
                                                        if ((uVar21 & 1) != 0) {
                                                          pPVar14 = operator_new(0x30,(nothrow_t *)
                                                                                      &std::nothrow)
                                                          ;
                                                          if (pPVar14 !=
                                                              (PUDynamicAttributeFixed *)0x0) {
                                                            PUDynamicAttributeFixed::
                                                            PUDynamicAttributeFixed(pPVar14);
                                                          }
                                                          (**(code **)(*(long *)pPVar14 + 0x28))
                                                                    ((float)local_b8,pPVar14);
                                                          PUEmitter::setDynDuration
                                                                    (*(PUEmitter **)pPVar17,
                                                                     (PUDynamicAttribute *)pPVar14);
                                                        }
                                                      }
                                                    }
                                                    else {
LAB_00e4c704:
                                                      sVar24 = (ulong)(token[0x8b8] >> 1);
                                                      if ((token[0x8b8] & 1) != 0) {
                                                        sVar24 = token._2240_8_;
                                                      }
                                                      if (sVar2 == sVar24) {
                                                        pPVar20 = *(PUPropertyAbstractNode **)
                                                                   (pPVar23 + 0x48);
                                                        if (((byte)PVar5 & 1) == 0) {
                                                          pPVar20 = pPVar23 + 0x39;
                                                        }
                                                        pPVar16 = (PUPropertyAbstractNode *)
                                                                  (token + 0x8b9);
                                                        if ((token[0x8b8] & 1) != 0) {
                                                          pPVar16 = (PUPropertyAbstractNode *)
                                                                    token._2248_8_;
                                                        }
                                                        if (((byte)PVar5 & 1) == 0) {
                                                          if (sVar2 != 0) {
                                                            pPVar20 = pPVar23 + 0x39;
                                                            uVar15 = uVar21;
                                                            do {
                                                              if (*pPVar20 != *pPVar16)
                                                              goto LAB_00e4c7fc;
                                                              uVar15 = uVar15 - 1;
                                                              pPVar20 = pPVar20 + 1;
                                                              pPVar16 = pPVar16 + 1;
                                                            } while (uVar15 != 0);
                                                          }
                                                        }
                                                        else if ((sVar2 != 0) &&
                                                                (iVar10 = memcmp(pPVar20,pPVar16,
                                                                                 sVar2), iVar10 != 0
                                                                )) goto LAB_00e4c7fc;
                                                        uVar21 = PUScriptTranslator::
                                                                 passValidateProperty
                                                                           ((PUScriptTranslator *)
                                                                            this,param_1,pPVar23,
                                                                            0x1789948,0);
                                                        if ((uVar21 & 1) != 0) {
                                                          local_b8 = local_b8 & 0xffffffff00000000;
                                                          uVar21 = PUScriptTranslator::getFloat
                                                                             (*(PUAbstractNode **)
                                                                               (*(long *)(pPVar23 +
                                                                                         0x60) +
                                                                               0x10),(float *)&
                                                  local_b8);
                                                  if ((uVar21 & 1) != 0) {
                                                    pPVar14 = operator_new(0x30,(nothrow_t *)
                                                                                &std::nothrow);
                                                    if (pPVar14 != (PUDynamicAttributeFixed *)0x0) {
                                                      PUDynamicAttributeFixed::
                                                      PUDynamicAttributeFixed(pPVar14);
                                                    }
                                                    (**(code **)(*(long *)pPVar14 + 0x28))
                                                              ((float)local_b8,pPVar14);
                                                    PUEmitter::setDynRepeatDelay
                                                              (*(PUEmitter **)pPVar17,
                                                               (PUDynamicAttribute *)pPVar14);
                                                  }
                                                  }
                                                  }
                                                  else {
LAB_00e4c7fc:
                                                    sVar24 = (ulong)(token[0x8d0] >> 1);
                                                    if ((token[0x8d0] & 1) != 0) {
                                                      sVar24 = token._2264_8_;
                                                    }
                                                    if (sVar2 == sVar24) {
                                                      pPVar20 = *(PUPropertyAbstractNode **)
                                                                 (pPVar23 + 0x48);
                                                      if (((byte)PVar5 & 1) == 0) {
                                                        pPVar20 = pPVar23 + 0x39;
                                                      }
                                                      pPVar16 = (PUPropertyAbstractNode *)
                                                                (token + 0x8d1);
                                                      if ((token[0x8d0] & 1) != 0) {
                                                        pPVar16 = (PUPropertyAbstractNode *)
                                                                  token._2272_8_;
                                                      }
                                                      if (((byte)PVar5 & 1) == 0) {
                                                        if (sVar2 != 0) {
                                                          pPVar20 = pPVar23 + 0x39;
                                                          uVar15 = uVar21;
                                                          do {
                                                            if (*pPVar20 != *pPVar16)
                                                            goto LAB_00e4c8f4;
                                                            uVar15 = uVar15 - 1;
                                                            pPVar20 = pPVar20 + 1;
                                                            pPVar16 = pPVar16 + 1;
                                                          } while (uVar15 != 0);
                                                        }
                                                      }
                                                      else if ((sVar2 != 0) &&
                                                              (iVar10 = memcmp(pPVar20,pPVar16,sVar2
                                                                              ), iVar10 != 0))
                                                      goto LAB_00e4c8f4;
                                                      uVar21 = PUScriptTranslator::
                                                               passValidatePropertyNumberOfValues
                                                                         ((PUScriptTranslator *)this
                                                                          ,param_1,pPVar23,
                                                                          (basic_string *)
                                                                          (token + 0x8d0),2);
                                                      if ((uVar21 & 1) != 0) {
                                                        local_b0 = 0;
                                                        local_a8 = (char *)0x0;
                                                        local_b8 = 0;
                                                        lVar22 = *(long *)(pPVar23 + 0x60);
                                                        uVar15 = PUScriptTranslator::getString
                                                                           (*(PUAbstractNode **)
                                                                             (lVar22 + 0x10),
                                                                            (basic_string *)
                                                                            &local_b8);
                                                        uVar21 = local_b8;
                                                        if ((uVar15 & 1) != 0) {
                                                          sVar24 = local_b8 >> 1 & 0x7f;
                                                          sVar2 = sVar24;
                                                          if ((local_b8 & 1) != 0) {
                                                            sVar2 = local_b0;
                                                          }
                                                          sVar6 = (ulong)(token[0x348] >> 1);
                                                          if ((token[0x348] & 1) != 0) {
                                                            sVar6 = token._848_8_;
                                                          }
                                                          if (sVar2 == sVar6) {
                                                            pcVar3 = pcVar18;
                                                            if ((local_b8 & 1) != 0) {
                                                              pcVar3 = local_a8;
                                                            }
                                                            pcVar1 = token + 0x349;
                                                            if ((token[0x348] & 1) != 0) {
                                                              pcVar1 = (char *)token._856_8_;
                                                            }
                                                            pcVar8 = pcVar18;
                                                            sVar6 = sVar24;
                                                            sVar9 = sVar2;
                                                            if ((local_b8 & 1) == 0) {
                                                              while (sVar9 != 0) {
                                                                if (*pcVar8 != *pcVar1)
                                                                goto LAB_00e4cfc4;
                                                                pcVar1 = pcVar1 + 1;
                                                                sVar6 = sVar6 - 1;
                                                                pcVar8 = pcVar8 + 1;
                                                                sVar9 = sVar6;
                                                              }
                                                            }
                                                            else if ((sVar2 != 0) &&
                                                                    (iVar10 = memcmp(pcVar3,pcVar1,
                                                                                     sVar2),
                                                                    iVar10 != 0)) goto LAB_00e4cfc4;
                                                            *(undefined4 *)
                                                             (*(long *)pPVar17 + 0x1e8) = 0;
                                                            goto LAB_00e4d344;
                                                          }
LAB_00e4cfc4:
                                                          sVar6 = (ulong)(token[0x360] >> 1);
                                                          if ((token[0x360] & 1) != 0) {
                                                            sVar6 = token._872_8_;
                                                          }
                                                          if (sVar2 == sVar6) {
                                                            pcVar3 = pcVar18;
                                                            if ((uVar21 & 1) != 0) {
                                                              pcVar3 = local_a8;
                                                            }
                                                            pcVar1 = token + 0x361;
                                                            if ((token[0x360] & 1) != 0) {
                                                              pcVar1 = (char *)token._880_8_;
                                                            }
                                                            pcVar8 = pcVar18;
                                                            sVar6 = sVar24;
                                                            sVar9 = sVar2;
                                                            if ((uVar21 & 1) == 0) {
                                                              while (sVar9 != 0) {
                                                                if (*pcVar8 != *pcVar1)
                                                                goto LAB_00e4d110;
                                                                pcVar1 = pcVar1 + 1;
                                                                sVar6 = sVar6 - 1;
                                                                pcVar8 = pcVar8 + 1;
                                                                sVar9 = sVar6;
                                                              }
                                                            }
                                                            else if ((sVar2 != 0) &&
                                                                    (iVar10 = memcmp(pcVar3,pcVar1,
                                                                                     sVar2),
                                                                    iVar10 != 0)) goto LAB_00e4d110;
                                                            uVar19 = 2;
LAB_00e4d33c:
                                                            *(undefined4 *)
                                                             (*(long *)pPVar17 + 0x1e8) = uVar19;
                                                          }
                                                          else {
LAB_00e4d110:
                                                            sVar6 = (ulong)(token[0x378] >> 1);
                                                            if ((token[0x378] & 1) != 0) {
                                                              sVar6 = token._896_8_;
                                                            }
                                                            if (sVar2 == sVar6) {
                                                              pcVar3 = pcVar18;
                                                              if ((uVar21 & 1) != 0) {
                                                                pcVar3 = local_a8;
                                                              }
                                                              pcVar1 = token + 0x379;
                                                              if ((token[0x378] & 1) != 0) {
                                                                pcVar1 = (char *)token._904_8_;
                                                              }
                                                              pcVar8 = pcVar18;
                                                              sVar6 = sVar24;
                                                              sVar9 = sVar2;
                                                              if ((uVar21 & 1) == 0) {
                                                                while (sVar9 != 0) {
                    /* catch() { ... } // from try @ 00e4d0f4 with catch @ 00e4d160 */
                                                                  if (*pcVar8 != *pcVar1)
                                                                  goto LAB_00e4d220;
                    /* catch() { ... } // from try @ 00e4d0cc with catch @ 00e4d170 */
                                                                  pcVar1 = pcVar1 + 1;
                                                                  sVar6 = sVar6 - 1;
                                                                  pcVar8 = pcVar8 + 1;
                                                                  sVar9 = sVar6;
                                                                }
                                                              }
                                                              else if ((sVar2 != 0) &&
                                                                      (iVar10 = memcmp(pcVar3,pcVar1
                                                                                       ,sVar2),
                                                                      iVar10 != 0))
                                                              goto LAB_00e4d220;
                                                              uVar19 = 3;
                                                              goto LAB_00e4d33c;
                                                            }
LAB_00e4d220:
                    /* try { // try from 00e4d22c to 00f4d237 has its CatchHandler @ 00e4d2e8 */
                                                            sVar6 = (ulong)(token[0x390] >> 1);
                                                            if ((token[0x390] & 1) != 0) {
                                                              sVar6 = token._920_8_;
                                                            }
                    /* try { // try from 00e4d238 to 00f4d26b has its CatchHandler @ 00e4d1ec */
                                                            if (sVar2 == sVar6) {
                                                              pcVar3 = pcVar18;
                                                              if ((uVar21 & 1) != 0) {
                                                                pcVar3 = local_a8;
                                                              }
                                                              pcVar1 = token + 0x391;
                                                              if ((token[0x390] & 1) != 0) {
                                                                pcVar1 = (char *)token._928_8_;
                                                              }
                                                              pcVar8 = pcVar18;
                                                              sVar6 = sVar24;
                                                              sVar9 = sVar2;
                                                              if ((uVar21 & 1) == 0) {
                                                                while (sVar9 != 0) {
                    /* try { // try from 00e4d26c to 00f4d28b has its CatchHandler @ 00e4d2e4 */
                                                                  if (*pcVar8 != *pcVar1)
                                                                  goto LAB_00e4d2ac;
                                                                  pcVar1 = pcVar1 + 1;
                                                                  sVar6 = sVar6 - 1;
                                                                  pcVar8 = pcVar8 + 1;
                                                                  sVar9 = sVar6;
                                                                }
                                                              }
                                                              else if ((sVar2 != 0) &&
                                                                      (iVar10 = memcmp(pcVar3,pcVar1
                                                                                       ,sVar2),
                                                                      iVar10 != 0))
                                                              goto LAB_00e4d2ac;
                                                              uVar19 = 1;
                                                              goto LAB_00e4d33c;
                                                            }
LAB_00e4d2ac:
                                                            sVar6 = (ulong)(token[0x3a8] >> 1);
                                                            if ((token[0x3a8] & 1) != 0) {
                                                              sVar6 = token._944_8_;
                                                            }
                                                            if (sVar2 == sVar6) {
                                                              pcVar3 = pcVar18;
                                                              if ((uVar21 & 1) != 0) {
                                                                pcVar3 = local_a8;
                                                              }
                                                              pcVar1 = token + 0x3a9;
                    /* catch() { ... } // from try @ 00e4d26c with catch @ 00e4d2e4 */
                                                              if ((token[0x3a8] & 1) != 0) {
                                                                pcVar1 = (char *)token._952_8_;
                                                              }
                    /* catch() { ... } // from try @ 00e4d22c with catch @ 00e4d2e8 */
                                                              pcVar8 = pcVar18;
                                                              if ((uVar21 & 1) == 0) {
                                                                while (sVar2 != 0) {
                                                                  if (*pcVar8 != *pcVar1)
                                                                  goto LAB_00e4d344;
                                                                  pcVar1 = pcVar1 + 1;
                                                                  sVar24 = sVar24 - 1;
                                                                  pcVar8 = pcVar8 + 1;
                                                                  sVar2 = sVar24;
                                                                }
                                                              }
                                                              else if ((sVar2 != 0) &&
                                                                      (iVar10 = memcmp(pcVar3,pcVar1
                                                                                       ,sVar2),
                                                                      iVar10 != 0))
                                                              goto LAB_00e4d344;
                                                              uVar19 = 4;
                                                              goto LAB_00e4d33c;
                                                            }
                                                          }
LAB_00e4d344:
                                                          uVar21 = PUScriptTranslator::getString
                                                                             (*(PUAbstractNode **)
                                                                               (*(long *)(lVar22 + 8
                                                                                         ) + 0x10),
                                                                              (basic_string *)
                                                                              &local_98);
                                                          if ((uVar21 & 1) != 0) {
                                                            PUEmitter::setEmitsName
                                                                      (*(PUEmitter **)pPVar17,
                                                                       (basic_string *)&local_98);
                                                          }
                                                        }
                                                        if ((local_b8 & 1) != 0) {
                                                          operator_delete(local_a8);
                                                        }
                                                      }
                                                    }
                                                    else {
LAB_00e4c8f4:
                                                      sVar24 = (ulong)(token[0x8e8] >> 1);
                                                      if ((token[0x8e8] & 1) != 0) {
                                                        sVar24 = token._2288_8_;
                                                      }
                                                      if (sVar2 == sVar24) {
                                                        pPVar20 = *(PUPropertyAbstractNode **)
                                                                   (pPVar23 + 0x48);
                                                        if (((byte)PVar5 & 1) == 0) {
                                                          pPVar20 = pPVar23 + 0x39;
                                                        }
                                                        pPVar16 = (PUPropertyAbstractNode *)
                                                                  (token + 0x8e9);
                                                        if ((token[0x8e8] & 1) != 0) {
                                                          pPVar16 = (PUPropertyAbstractNode *)
                                                                    token._2296_8_;
                                                        }
                                                        if (((byte)PVar5 & 1) == 0) {
                                                          if (sVar2 != 0) {
                                                            pPVar20 = pPVar23 + 0x39;
                                                            uVar15 = uVar21;
                                                            do {
                                                              if (*pPVar20 != *pPVar16)
                                                              goto LAB_00e4ca2c;
                                                              uVar15 = uVar15 - 1;
                                                              pPVar20 = pPVar20 + 1;
                                                              pPVar16 = pPVar16 + 1;
                                                            } while (uVar15 != 0);
                                                          }
                                                        }
                                                        else if ((sVar2 != 0) &&
                                                                (iVar10 = memcmp(pPVar20,pPVar16,
                                                                                 sVar2), iVar10 != 0
                                                                )) goto LAB_00e4ca2c;
                                                        uVar21 = PUScriptTranslator::
                                                                 passValidateProperty
                                                                           ((PUScriptTranslator *)
                                                                            this,param_1,pPVar23,
                                                                            0x1789978,0);
                                                        if ((uVar21 & 1) != 0) {
                                                          local_b8 = local_b8 & 0xffffffff00000000;
                                                          uVar21 = PUScriptTranslator::getFloat
                                                                             (*(PUAbstractNode **)
                                                                               (*(long *)(pPVar23 +
                                                                                         0x60) +
                                                                               0x10),(float *)&
                                                  local_b8);
                                                  if ((uVar21 & 1) != 0) {
                                                    pPVar14 = operator_new(0x30,(nothrow_t *)
                                                                                &std::nothrow);
                                                    if (pPVar14 != (PUDynamicAttributeFixed *)0x0) {
                                                      PUDynamicAttributeFixed::
                                                      PUDynamicAttributeFixed(pPVar14);
                                                    }
                                                    (**(code **)(*(long *)pPVar14 + 0x28))
                                                              ((float)local_b8,pPVar14);
                                                    PUEmitter::setDynAngle
                                                              (*(PUEmitter **)pPVar17,
                                                               (PUDynamicAttribute *)pPVar14);
                                                  }
                                                  }
                                                  }
                                                  else {
LAB_00e4ca2c:
                                                    sVar24 = (ulong)(token[0xa08] >> 1);
                                                    if ((token[0xa08] & 1) != 0) {
                                                      sVar24 = token._2576_8_;
                                                    }
                                                    if (sVar2 == sVar24) {
                                                      pPVar20 = *(PUPropertyAbstractNode **)
                                                                 (pPVar23 + 0x48);
                                                      if (((byte)PVar5 & 1) == 0) {
                                                        pPVar20 = pPVar23 + 0x39;
                                                      }
                                                      pPVar16 = (PUPropertyAbstractNode *)
                                                                (token + 0xa09);
                                                      if ((token[0xa08] & 1) != 0) {
                                                        pPVar16 = (PUPropertyAbstractNode *)
                                                                  token._2584_8_;
                                                      }
                                                      if (((byte)PVar5 & 1) == 0) {
                                                        if (sVar2 != 0) {
                                                          pPVar20 = pPVar23 + 0x39;
                                                          uVar15 = uVar21;
                                                          do {
                                                            if (*pPVar20 != *pPVar16)
                                                            goto LAB_00e4cb24;
                                                            uVar15 = uVar15 - 1;
                                                            pPVar20 = pPVar20 + 1;
                                                            pPVar16 = pPVar16 + 1;
                                                          } while (uVar15 != 0);
                                                        }
                                                      }
                                                      else if ((sVar2 != 0) &&
                                                              (iVar10 = memcmp(pPVar20,pPVar16,sVar2
                                                                              ), iVar10 != 0))
                                                      goto LAB_00e4cb24;
                                                      uVar21 = PUScriptTranslator::
                                                               passValidateProperty
                                                                         ((PUScriptTranslator *)this
                                                                          ,param_1,pPVar23,0x1789a98
                                                                          ,0);
                                                      if ((uVar21 & 1) != 0) {
                                                        local_b8 = local_b8 & 0xffffffff00000000;
                                                        uVar21 = PUScriptTranslator::getFloat
                                                                           (*(PUAbstractNode **)
                                                                             (*(long *)(pPVar23 +
                                                                                       0x60) + 0x10)
                                                                            ,(float *)&local_b8);
                                                        if ((uVar21 & 1) != 0) {
                                                          pPVar14 = operator_new(0x30,(nothrow_t *)
                                                                                      &std::nothrow)
                                                          ;
                                                          if (pPVar14 !=
                                                              (PUDynamicAttributeFixed *)0x0) {
                                                            PUDynamicAttributeFixed::
                                                            PUDynamicAttributeFixed(pPVar14);
                                                          }
                                                          (**(code **)(*(long *)pPVar14 + 0x28))
                                                                    ((float)local_b8,pPVar14);
                                                          PUEmitter::setDynParticleAllDimensions
                                                                    (*(PUEmitter **)pPVar17,
                                                                     (PUDynamicAttribute *)pPVar14);
                                                        }
                                                      }
                                                    }
                                                    else {
LAB_00e4cb24:
                                                      sVar24 = (ulong)(token[0xa20] >> 1);
                                                      if ((token[0xa20] & 1) != 0) {
                                                        sVar24 = token._2600_8_;
                                                      }
                                                      if (sVar2 == sVar24) {
                                                        pPVar20 = *(PUPropertyAbstractNode **)
                                                                   (pPVar23 + 0x48);
                                                        if (((byte)PVar5 & 1) == 0) {
                                                          pPVar20 = pPVar23 + 0x39;
                                                        }
                                                        pPVar16 = (PUPropertyAbstractNode *)
                                                                  (token + 0xa21);
                                                        if ((token[0xa20] & 1) != 0) {
                                                          pPVar16 = (PUPropertyAbstractNode *)
                                                                    token._2608_8_;
                                                        }
                                                        if (((byte)PVar5 & 1) == 0) {
                                                          if (sVar2 != 0) {
                                                            pPVar20 = pPVar23 + 0x39;
                                                            uVar15 = uVar21;
                                                            do {
                                                              if (*pPVar20 != *pPVar16)
                                                              goto LAB_00e4cc1c;
                                                              uVar15 = uVar15 - 1;
                                                              pPVar20 = pPVar20 + 1;
                                                              pPVar16 = pPVar16 + 1;
                                                            } while (uVar15 != 0);
                                                          }
                                                        }
                                                        else if ((sVar2 != 0) &&
                                                                (iVar10 = memcmp(pPVar20,pPVar16,
                                                                                 sVar2), iVar10 != 0
                                                                )) goto LAB_00e4cc1c;
                                                        uVar21 = PUScriptTranslator::
                                                                 passValidateProperty
                                                                           ((PUScriptTranslator *)
                                                                            this,param_1,pPVar23,
                                                                            0x1789ab0,0);
                                                        if ((uVar21 & 1) != 0) {
                                                          local_b8 = local_b8 & 0xffffffff00000000;
                                                          uVar21 = PUScriptTranslator::getFloat
                                                                             (*(PUAbstractNode **)
                                                                               (*(long *)(pPVar23 +
                                                                                         0x60) +
                                                                               0x10),(float *)&
                                                  local_b8);
                                                  if ((uVar21 & 1) != 0) {
                                                    pPVar14 = operator_new(0x30,(nothrow_t *)
                                                                                &std::nothrow);
                                                    if (pPVar14 != (PUDynamicAttributeFixed *)0x0) {
                                                      PUDynamicAttributeFixed::
                                                      PUDynamicAttributeFixed(pPVar14);
                                                    }
                                                    (**(code **)(*(long *)pPVar14 + 0x28))
                                                              ((float)local_b8,pPVar14);
                                                    PUEmitter::setDynParticleWidth
                                                              (*(PUEmitter **)pPVar17,
                                                               (PUDynamicAttribute *)pPVar14);
                                                  }
                                                  }
                                                  }
                                                  else {
LAB_00e4cc1c:
                                                    sVar24 = (ulong)(token[0xa38] >> 1);
                                                    if ((token[0xa38] & 1) != 0) {
                                                      sVar24 = token._2624_8_;
                                                    }
                                                    if (sVar2 == sVar24) {
                                                      pPVar20 = *(PUPropertyAbstractNode **)
                                                                 (pPVar23 + 0x48);
                                                      if (((byte)PVar5 & 1) == 0) {
                                                        pPVar20 = pPVar23 + 0x39;
                                                      }
                                                      pPVar16 = (PUPropertyAbstractNode *)
                                                                (token + 0xa39);
                                                      if ((token[0xa38] & 1) != 0) {
                                                        pPVar16 = (PUPropertyAbstractNode *)
                                                                  token._2632_8_;
                                                      }
                                                      if (((byte)PVar5 & 1) == 0) {
                                                        if (sVar2 != 0) {
                                                          pPVar20 = pPVar23 + 0x39;
                                                          uVar15 = uVar21;
                                                          do {
                                                            if (*pPVar20 != *pPVar16)
                                                            goto LAB_00e4cd14;
                                                            uVar15 = uVar15 - 1;
                                                            pPVar20 = pPVar20 + 1;
                                                            pPVar16 = pPVar16 + 1;
                                                          } while (uVar15 != 0);
                                                        }
                                                      }
                                                      else if ((sVar2 != 0) &&
                                                              (iVar10 = memcmp(pPVar20,pPVar16,sVar2
                                                                              ), iVar10 != 0))
                                                      goto LAB_00e4cd14;
                                                      uVar21 = PUScriptTranslator::
                                                               passValidateProperty
                                                                         ((PUScriptTranslator *)this
                                                                          ,param_1,pPVar23,0x1789ac8
                                                                          ,0);
                                                      if ((uVar21 & 1) != 0) {
                                                        local_b8 = local_b8 & 0xffffffff00000000;
                                                        uVar21 = PUScriptTranslator::getFloat
                                                                           (*(PUAbstractNode **)
                                                                             (*(long *)(pPVar23 +
                                                                                       0x60) + 0x10)
                                                                            ,(float *)&local_b8);
                                                        if ((uVar21 & 1) != 0) {
                                                          pPVar14 = operator_new(0x30,(nothrow_t *)
                                                                                      &std::nothrow)
                                                          ;
                                                          if (pPVar14 !=
                                                              (PUDynamicAttributeFixed *)0x0) {
                                                            PUDynamicAttributeFixed::
                                                            PUDynamicAttributeFixed(pPVar14);
                                                          }
                                                          (**(code **)(*(long *)pPVar14 + 0x28))
                                                                    ((float)local_b8,pPVar14);
                                                          PUEmitter::setDynParticleHeight
                                                                    (*(PUEmitter **)pPVar17,
                                                                     (PUDynamicAttribute *)pPVar14);
                                                        }
                                                      }
                                                    }
                                                    else {
LAB_00e4cd14:
                                                      sVar24 = (ulong)(token[0xa50] >> 1);
                                                      if ((token[0xa50] & 1) != 0) {
                                                        sVar24 = token._2648_8_;
                                                      }
                                                      if (sVar2 == sVar24) {
                                                        pPVar20 = *(PUPropertyAbstractNode **)
                                                                   (pPVar23 + 0x48);
                                                        if (((byte)PVar5 & 1) == 0) {
                                                          pPVar20 = pPVar23 + 0x39;
                                                        }
                                                        pPVar16 = (PUPropertyAbstractNode *)
                                                                  (token + 0xa51);
                                                        if ((token[0xa50] & 1) != 0) {
                                                          pPVar16 = (PUPropertyAbstractNode *)
                                                                    token._2656_8_;
                                                        }
                                                        if (((byte)PVar5 & 1) == 0) {
                                                          if (sVar2 != 0) {
                                                            pPVar20 = pPVar23 + 0x39;
                                                            uVar15 = uVar21;
                                                            do {
                                                              if (*pPVar20 != *pPVar16)
                                                              goto LAB_00e4ce0c;
                                                              uVar15 = uVar15 - 1;
                                                              pPVar20 = pPVar20 + 1;
                                                              pPVar16 = pPVar16 + 1;
                                                            } while (uVar15 != 0);
                                                          }
                                                        }
                                                        else if ((sVar2 != 0) &&
                                                                (iVar10 = memcmp(pPVar20,pPVar16,
                                                                                 sVar2), iVar10 != 0
                                                                )) goto LAB_00e4ce0c;
                                                        uVar21 = PUScriptTranslator::
                                                                 passValidateProperty
                                                                           ((PUScriptTranslator *)
                                                                            this,param_1,pPVar23,
                                                                            0x1789ae0,0);
                                                        if ((uVar21 & 1) != 0) {
                                                          local_b8 = local_b8 & 0xffffffff00000000;
                                                          uVar21 = PUScriptTranslator::getFloat
                                                                             (*(PUAbstractNode **)
                                                                               (*(long *)(pPVar23 +
                                                                                         0x60) +
                                                                               0x10),(float *)&
                                                  local_b8);
                                                  if ((uVar21 & 1) != 0) {
                                                    pPVar14 = operator_new(0x30,(nothrow_t *)
                                                                                &std::nothrow);
                                                    if (pPVar14 != (PUDynamicAttributeFixed *)0x0) {
                                                      PUDynamicAttributeFixed::
                                                      PUDynamicAttributeFixed(pPVar14);
                                                    }
                                                    (**(code **)(*(long *)pPVar14 + 0x28))
                                                              ((float)local_b8,pPVar14);
                                                    PUEmitter::setDynParticleDepth
                                                              (*(PUEmitter **)pPVar17,
                                                               (PUDynamicAttribute *)pPVar14);
                                                  }
                                                  }
                                                  }
                                                  else {
LAB_00e4ce0c:
                                                    sVar24 = (ulong)(token[0xa68] >> 1);
                                                    if ((token[0xa68] & 1) != 0) {
                                                      sVar24 = token._2672_8_;
                                                    }
                                                    if (sVar2 == sVar24) {
                                                      pPVar20 = *(PUPropertyAbstractNode **)
                                                                 (pPVar23 + 0x48);
                                                      if (((byte)PVar5 & 1) == 0) {
                                                        pPVar20 = pPVar23 + 0x39;
                                                      }
                                                      pPVar16 = (PUPropertyAbstractNode *)
                                                                (token + 0xa69);
                                                      if ((token[0xa68] & 1) != 0) {
                                                        pPVar16 = (PUPropertyAbstractNode *)
                                                                  token._2680_8_;
                                                      }
                                                      if (((byte)PVar5 & 1) == 0) {
                                                        if (sVar2 != 0) {
                                                          pPVar20 = pPVar23 + 0x39;
                                                          uVar15 = uVar21;
                                                          do {
                                                            if (*pPVar20 != *pPVar16)
                                                            goto LAB_00e4cf04;
                                                            uVar15 = uVar15 - 1;
                                                            pPVar20 = pPVar20 + 1;
                                                            pPVar16 = pPVar16 + 1;
                                                          } while (uVar15 != 0);
                                                        }
                                                      }
                                                      else if ((sVar2 != 0) &&
                                                              (iVar10 = memcmp(pPVar20,pPVar16,sVar2
                                                                              ), iVar10 != 0))
                                                      goto LAB_00e4cf04;
                                                      uVar21 = PUScriptTranslator::
                                                               passValidateProperty
                                                                         ((PUScriptTranslator *)this
                                                                          ,param_1,pPVar23,0x1789af8
                                                                          ,1);
                                                      if (((uVar21 & 1) != 0) &&
                                                         (uVar21 = PUScriptTranslator::getBoolean
                                                                             (*(PUAbstractNode **)
                                                                               (*(long *)(pPVar23 +
                                                                                         0x60) +
                                                                               0x10),(bool *)&
                                                  local_b8), (uVar21 & 1) != 0)) {
                                                    PUEmitter::setAutoDirection
                                                              (*(PUEmitter **)pPVar17,
                                                               (bool)local_b8._0_1_);
                                                  }
                                                  }
                                                  else {
LAB_00e4cf04:
                                                    sVar24 = (ulong)(token[0x2e8] >> 1);
                                                    if ((token[0x2e8] & 1) != 0) {
                                                      sVar24 = token._752_8_;
                                                    }
                                                    if (sVar2 == sVar24) {
                                                      pPVar20 = *(PUPropertyAbstractNode **)
                                                                 (pPVar23 + 0x48);
                                                      if (((byte)PVar5 & 1) == 0) {
                                                        pPVar20 = pPVar23 + 0x39;
                                                      }
                                                      pPVar16 = (PUPropertyAbstractNode *)
                                                                (token + 0x2e9);
                                                      if ((token[0x2e8] & 1) != 0) {
                                                        pPVar16 = (PUPropertyAbstractNode *)
                                                                  token._760_8_;
                                                      }
                                                      if (((byte)PVar5 & 1) == 0) {
                                                        if (sVar2 != 0) {
                                                          pPVar20 = pPVar23 + 0x39;
                                                          uVar15 = uVar21;
                                                          do {
                                                            if (*pPVar20 != *pPVar16)
                                                            goto LAB_00e4d054;
                                                            uVar15 = uVar15 - 1;
                                                            pPVar20 = pPVar20 + 1;
                                                            pPVar16 = pPVar16 + 1;
                                                          } while (uVar15 != 0);
                                                        }
                                                      }
                                                      else if ((sVar2 != 0) &&
                                                              (iVar10 = memcmp(pPVar20,pPVar16,sVar2
                                                                              ), iVar10 != 0))
                                                      goto LAB_00e4d054;
                    /* try { // try from 00e4d0cc to 00f4d0d3 has its CatchHandler @ 00e4d170 */
                                                      uVar21 = PUScriptTranslator::
                                                               passValidateProperty
                                                                         ((PUScriptTranslator *)this
                                                                          ,param_1,pPVar23,0x1789378
                                                                          ,1);
                                                      if (((uVar21 & 1) != 0) &&
                                                         (uVar21 = PUScriptTranslator::getBoolean
                                                                             (*(PUAbstractNode **)
                                                                               (*(long *)(pPVar23 +
                                                                                         0x60) +
                                                                               0x10),(bool *)&
                                                  local_b8), (uVar21 & 1) != 0)) {
                    /* try { // try from 00e4d0f4 to 00f4d0f7 has its CatchHandler @ 00e4d160 */
                    /* try { // try from 00e4d0f8 to 00f4d18b has its CatchHandler @ 00e4d084 */
                                                    PUEmitter::setKeepLocal
                                                              (*(PUEmitter **)pPVar17,
                                                               (bool)local_b8._0_1_);
                                                  }
                                                  }
                                                  else {
LAB_00e4d054:
                                                    sVar24 = (ulong)(token[0xa80] >> 1);
                                                    if ((token[0xa80] & 1) != 0) {
                                                      sVar24 = token._2696_8_;
                                                    }
                                                    if (sVar2 == sVar24) {
                                                      pPVar20 = *(PUPropertyAbstractNode **)
                                                                 (pPVar23 + 0x48);
                                                      if (((byte)PVar5 & 1) == 0) {
                                                        pPVar20 = pPVar23 + 0x39;
                                                      }
                    /* catch() { ... } // from try @ 00e4d0f8 with catch @ 00e4d084 */
                                                      pPVar16 = (PUPropertyAbstractNode *)
                                                                (token + 0xa81);
                                                      if ((token[0xa80] & 1) != 0) {
                                                        pPVar16 = (PUPropertyAbstractNode *)
                                                                  token._2704_8_;
                                                      }
                                                      if (((byte)PVar5 & 1) == 0) {
                                                        if (sVar2 != 0) {
                                                          pPVar20 = pPVar23 + 0x39;
                                                          do {
                                                            if (*pPVar20 != *pPVar16)
                                                            goto LAB_00e4d19c;
                                                            uVar21 = uVar21 - 1;
                                                            pPVar20 = pPVar20 + 1;
                                                            pPVar16 = pPVar16 + 1;
                                                          } while (uVar21 != 0);
                                                        }
                                                      }
                                                      else if ((sVar2 != 0) &&
                                                              (iVar10 = memcmp(pPVar20,pPVar16,sVar2
                                                                              ), iVar10 != 0))
                                                      goto LAB_00e4d19c;
                                                      uVar21 = PUScriptTranslator::
                                                               passValidateProperty
                                                                         ((PUScriptTranslator *)this
                                                                          ,param_1,pPVar23,0x1789b10
                                                                          ,1);
                    /* try { // try from 00e4d1ec to 00f4d22b has its CatchHandler @ 00e4d1ec
                       catch() { ... } // from try @ 00e4d1ec with catch @ 00e4d1ec
                       catch() { ... } // from try @ 00e4d238 with catch @ 00e4d1ec
                       catch() { ... } // from try @ 00e4d28c with catch @ 00e4d1ec */
                                                      if (((uVar21 & 1) != 0) &&
                                                         (uVar21 = PUScriptTranslator::getBoolean
                                                                             (*(PUAbstractNode **)
                                                                               (*(long *)(pPVar23 +
                                                                                         0x60) +
                                                                               0x10),(bool *)&
                                                  local_b8), (uVar21 & 1) != 0)) {
                                                    PUEmitter::setForceEmission
                                                              (*(PUEmitter **)pPVar17,
                                                               (bool)local_b8._0_1_);
                                                  }
                                                  }
                                                  else {
LAB_00e4d19c:
                                                    uVar21 = (**(code **)(*plVar12 + 0x18))
                                                                       (plVar12,param_1,pPVar23);
                                                    if ((uVar21 & 1) == 0) {
                                                      PUScriptTranslator::errorUnexpectedProperty
                                                                ((PUScriptCompiler *)this,
                                                                 (PUPropertyAbstractNode *)param_1);
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
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
            PUScriptTranslator::errorUnexpectedToken
                      ((PUScriptCompiler *)this,(PUAbstractNode *)param_1);
          }
          pPVar25 = *(PUAbstractNode **)(pPVar25 + 8);
        } while (pPVar25 != param_2 + 0xb0);
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
    }
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

