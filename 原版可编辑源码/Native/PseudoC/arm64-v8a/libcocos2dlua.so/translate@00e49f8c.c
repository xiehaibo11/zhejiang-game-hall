
/* cocos2d::PUAffectorTranslator::translate(cocos2d::PUScriptCompiler*, cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUAffectorTranslator::translate
          (PUAffectorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  PUAbstractNode PVar4;
  basic_string bVar5;
  size_t sVar6;
  long lVar7;
  char *pcVar8;
  size_t sVar9;
  int iVar10;
  PUAffectorManager *pPVar11;
  long *plVar12;
  long lVar13;
  ParticleSystem3D *this_00;
  ulong uVar14;
  basic_string *pbVar15;
  undefined4 uVar16;
  basic_string *pbVar17;
  ulong uVar18;
  long lVar19;
  basic_string *pbVar20;
  size_t sVar21;
  char *pcVar22;
  PUAbstractNode *pPVar23;
  ulong local_b0;
  size_t local_a8;
  char *local_a0;
  ulong local_98;
  ulong local_90;
  char *local_88;
  ulong local_80;
  ulong local_78;
  char *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  lVar19 = *(long *)(param_2 + 0x28);
  local_78 = 0;
  local_70 = (char *)0x0;
  local_80 = 0;
  PVar4 = param_2[0x60];
  if (((byte)PVar4 & 1) == 0) {
    uVar18 = (ulong)((byte)PVar4 >> 1);
  }
  else {
    uVar18 = *(ulong *)(param_2 + 0x68);
  }
  if (((PUAbstractNode *)&local_80 != param_2 + 0x60) && (uVar18 != 0)) {
    uVar18 = *(ulong *)(param_2 + 0x68);
    pPVar23 = *(PUAbstractNode **)(param_2 + 0x70);
    if (((byte)PVar4 & 1) == 0) {
      pPVar23 = param_2 + 0x61;
      uVar18 = (ulong)((byte)PVar4 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_80,(char *)pPVar23,uVar18);
  }
  pPVar11 = (PUAffectorManager *)PUAffectorManager::Instance();
  plVar12 = (long *)PUAffectorManager::getTranslator(pPVar11,(basic_string *)&local_80);
  if (plVar12 != (long *)0x0) {
    pPVar11 = (PUAffectorManager *)PUAffectorManager::Instance();
    lVar13 = PUAffectorManager::createAffector(pPVar11,(basic_string *)&local_80);
    *(long *)(this + 8) = lVar13;
    if (lVar13 != 0) {
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (lVar13 + 0x60) !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          &local_80) {
        uVar18 = local_80 >> 1 & 0x7f;
        pcVar22 = (char *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          uVar18 = local_78;
          pcVar22 = local_70;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (lVar13 + 0x60),pcVar22,uVar18);
      }
      if ((lVar19 != 0) &&
         (this_00 = *(ParticleSystem3D **)(lVar19 + 0x30), this_00 != (ParticleSystem3D *)0x0)) {
        ParticleSystem3D::addAffector(this_00,*(Particle3DAffector **)(this + 8));
      }
      local_90 = 0;
      local_88 = (char *)0x0;
      local_98 = 0;
      if (*(long *)(param_2 + 0xd8) != 0) {
        PUScriptTranslator::getString
                  (*(PUAbstractNode **)(*(long *)(param_2 + 0xd0) + 0x10),(basic_string *)&local_98)
        ;
        if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (*(long *)(this + 8) + 0x90) !=
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            &local_98) {
          uVar18 = local_98 >> 1 & 0x7f;
          pcVar22 = (char *)((ulong)&local_98 | 1);
          if ((local_98 & 1) != 0) {
            uVar18 = local_90;
            pcVar22 = local_88;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(*(long *)(this + 8) + 0x90),pcVar22,uVar18);
        }
      }
      pPVar23 = *(PUAbstractNode **)(param_2 + 0xb8);
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(this + 8);
      if (pPVar23 != param_2 + 0xb0) {
        pcVar22 = (char *)((ulong)&local_b0 | 1);
        do {
          pbVar20 = *(basic_string **)(pPVar23 + 0x10);
          if (*(int *)(pbVar20 + 0x24) == 2) {
            uVar18 = (**(code **)(*plVar12 + 0x20))(plVar12,param_1,pbVar20);
            if ((uVar18 & 1) == 0) {
              PUScriptTranslator::processNode
                        ((PUScriptTranslator *)this,param_1,*(PUAbstractNode **)(pPVar23 + 0x10));
            }
          }
          else if (*(int *)(pbVar20 + 0x24) == 3) {
            bVar5 = pbVar20[0x38];
            uVar18 = (ulong)((byte)bVar5 >> 1);
            sVar2 = uVar18;
            if (((byte)bVar5 & 1) != 0) {
              sVar2 = *(size_t *)(pbVar20 + 0x40);
            }
            sVar21 = (ulong)(token[0x2b8] >> 1);
            if ((token[0x2b8] & 1) != 0) {
              sVar21 = token._704_8_;
            }
            if (sVar2 == sVar21) {
              pbVar17 = *(basic_string **)(pbVar20 + 0x48);
              if (((byte)bVar5 & 1) == 0) {
                pbVar17 = pbVar20 + 0x39;
              }
              pbVar15 = (basic_string *)(token + 0x2b9);
              if ((token[0x2b8] & 1) != 0) {
                pbVar15 = (basic_string *)token._712_8_;
              }
              if (((byte)bVar5 & 1) == 0) {
                if (sVar2 != 0) {
                  pbVar17 = pbVar20 + 0x39;
                  uVar14 = uVar18;
                  do {
                    if (*pbVar17 != *pbVar15) goto LAB_00e4a20c;
                    uVar14 = uVar14 - 1;
                    pbVar17 = pbVar17 + 1;
                    pbVar15 = pbVar15 + 1;
                  } while (uVar14 != 0);
                }
              }
              else if ((sVar2 != 0) && (iVar10 = memcmp(pbVar17,pbVar15,sVar2), iVar10 != 0))
              goto LAB_00e4a20c;
              uVar18 = PUScriptTranslator::passValidateProperty
                                 ((PUScriptTranslator *)this,param_1,pbVar20,0x1789348,1);
              if (((uVar18 & 1) != 0) &&
                 (uVar18 = PUScriptTranslator::getBoolean
                                     (*(PUAbstractNode **)(*(long *)(pbVar20 + 0x60) + 0x10),
                                      (bool *)&local_b0), (uVar18 & 1) != 0)) {
                *(Vec3 *)(*(long *)(this + 8) + 0x30) = local_b0._0_1_;
              }
            }
            else {
LAB_00e4a20c:
              sVar21 = (ulong)(token[0x2d0] >> 1);
              if ((token[0x2d0] & 1) != 0) {
                sVar21 = token._728_8_;
              }
              if (sVar2 == sVar21) {
                pbVar17 = *(basic_string **)(pbVar20 + 0x48);
                if (((byte)bVar5 & 1) == 0) {
                  pbVar17 = pbVar20 + 0x39;
                }
                pbVar15 = (basic_string *)(token + 0x2d1);
                if ((token[0x2d0] & 1) != 0) {
                  pbVar15 = (basic_string *)token._736_8_;
                }
                if (((byte)bVar5 & 1) == 0) {
                  if (sVar2 != 0) {
                    pbVar17 = pbVar20 + 0x39;
                    uVar14 = uVar18;
                    do {
                      if (*pbVar17 != *pbVar15) goto LAB_00e4a2d0;
                      uVar14 = uVar14 - 1;
                      pbVar17 = pbVar17 + 1;
                      pbVar15 = pbVar15 + 1;
                    } while (uVar14 != 0);
                  }
                }
                else if ((sVar2 != 0) && (iVar10 = memcmp(pbVar17,pbVar15,sVar2), iVar10 != 0))
                goto LAB_00e4a2d0;
                uVar18 = PUScriptTranslator::passValidateProperty
                                   ((PUScriptTranslator *)this,param_1,pbVar20,0x1789360,6);
                if ((uVar18 & 1) != 0) {
                  Vec3::Vec3((Vec3 *)&local_b0);
                  uVar18 = PUScriptTranslator::getVector3
                                     ((PUScriptTranslator *)this,*(undefined8 *)(pbVar20 + 0x60),
                                      pbVar20 + 0x58,&local_b0,3);
                  if ((uVar18 & 1) != 0) {
                    lVar19 = *(long *)(this + 8);
                    *(undefined4 *)(lVar19 + 0x3c) = (undefined4)local_a8;
                    *(ulong *)(lVar19 + 0x34) = local_b0;
                  }
                }
              }
              else {
LAB_00e4a2d0:
                sVar21 = (ulong)(token[0xab0] >> 1);
                if ((token[0xab0] & 1) != 0) {
                  sVar21 = token._2744_8_;
                }
                if (sVar2 == sVar21) {
                  pbVar17 = *(basic_string **)(pbVar20 + 0x48);
                  if (((byte)bVar5 & 1) == 0) {
                    pbVar17 = pbVar20 + 0x39;
                  }
                  pbVar15 = (basic_string *)(token + 0xab1);
                  if ((token[0xab0] & 1) != 0) {
                    pbVar15 = (basic_string *)token._2752_8_;
                  }
                  if (((byte)bVar5 & 1) == 0) {
                    if (sVar2 != 0) {
                      pbVar17 = pbVar20 + 0x39;
                      uVar14 = uVar18;
                      do {
                        if (*pbVar17 != *pbVar15) goto LAB_00e4a3ac;
                        uVar14 = uVar14 - 1;
                        pbVar17 = pbVar17 + 1;
                        pbVar15 = pbVar15 + 1;
                      } while (uVar14 != 0);
                    }
                  }
                  else if ((sVar2 != 0) && (iVar10 = memcmp(pbVar17,pbVar15,sVar2), iVar10 != 0))
                  goto LAB_00e4a3ac;
                  uVar18 = PUScriptTranslator::passValidateProperty
                                     ((PUScriptTranslator *)this,param_1,pbVar20,0x1789b40,0);
                  if ((uVar18 & 1) != 0) {
                    local_b0 = local_b0 & 0xffffffff00000000;
                    uVar18 = PUScriptTranslator::getFloat
                                       (*(PUAbstractNode **)(*(long *)(pbVar20 + 0x60) + 0x10),
                                        (float *)&local_b0);
                    if ((uVar18 & 1) != 0) {
                      PUAffector::setMass(*(PUAffector **)(this + 8),(float)local_b0);
                    }
                  }
                }
                else {
LAB_00e4a3ac:
                  sVar21 = (ulong)(token[0xae0] >> 1);
                  if ((token[0xae0] & 1) != 0) {
                    sVar21 = token._2792_8_;
                  }
                  if (sVar2 == sVar21) {
                    pbVar17 = *(basic_string **)(pbVar20 + 0x48);
                    if (((byte)bVar5 & 1) == 0) {
                      pbVar17 = pbVar20 + 0x39;
                    }
                    pbVar15 = (basic_string *)(token + 0xae1);
                    if ((token[0xae0] & 1) != 0) {
                      pbVar15 = (basic_string *)token._2800_8_;
                    }
                    if (((byte)bVar5 & 1) == 0) {
                      if (sVar2 != 0) {
                        pbVar17 = pbVar20 + 0x39;
                        uVar14 = uVar18;
                        do {
                          if (*pbVar17 != *pbVar15) goto LAB_00e4a474;
                          uVar14 = uVar14 - 1;
                          pbVar17 = pbVar17 + 1;
                          pbVar15 = pbVar15 + 1;
                        } while (uVar14 != 0);
                      }
                    }
                    else {
                    /* catch() { ... } // from try @ 00e4a56c with catch @ 00e4a470
                       catch() { ... } // from try @ 00e4a66c with catch @ 00e4a470 */
                      if ((sVar2 != 0) && (iVar10 = memcmp(pbVar17,pbVar15,sVar2), iVar10 != 0))
                      goto LAB_00e4a474;
                    }
                    uVar18 = PUScriptTranslator::passValidateProperty
                                       ((PUScriptTranslator *)this,param_1,pbVar20,0x1789b70,4);
                    if ((uVar18 & 1) != 0) {
                      local_a8 = 0;
                      local_a0 = (char *)0x0;
                      local_b0 = 0;
                      uVar14 = PUScriptTranslator::getString
                                         (*(PUAbstractNode **)(*(long *)(pbVar20 + 0x60) + 0x10),
                                          (basic_string *)&local_b0);
                      uVar18 = local_b0;
                      if ((uVar14 & 1) == 0) {
joined_r0x00e4a788:
                        if ((uVar18 & 1) == 0) goto LAB_00e4a120;
                      }
                      else {
                        sVar21 = local_b0 >> 1 & 0x7f;
                        sVar2 = sVar21;
                        if ((local_b0 & 1) != 0) {
                          sVar2 = local_a8;
                        }
                        sVar6 = (ulong)(token[0xaf8] >> 1);
                        if ((token[0xaf8] & 1) != 0) {
                          sVar6 = token._2816_8_;
                        }
                        if (sVar2 == sVar6) {
                          pcVar3 = pcVar22;
                          if ((local_b0 & 1) != 0) {
                            pcVar3 = local_a0;
                          }
                          pcVar1 = token + 0xaf9;
                          if ((token[0xaf8] & 1) != 0) {
                            pcVar1 = (char *)token._2824_8_;
                          }
                    /* try { // try from 00e4a568 to 00f4a56b has its CatchHandler @ 00e4a678 */
                          pcVar8 = pcVar22;
                          sVar6 = sVar21;
                          sVar9 = sVar2;
                          if ((local_b0 & 1) == 0) {
                            while (sVar9 != 0) {
                              if (*pcVar8 != *pcVar1) goto LAB_00e4a66c;
                              pcVar1 = pcVar1 + 1;
                              sVar6 = sVar6 - 1;
                              pcVar8 = pcVar8 + 1;
                              sVar9 = sVar6;
                            }
                          }
                          else {
                    /* try { // try from 00e4a664 to 00f4a66b has its CatchHandler @ 00e4a670 */
                            if ((sVar2 != 0) && (iVar10 = memcmp(pcVar3,pcVar1,sVar2), iVar10 != 0))
                            goto LAB_00e4a66c;
                          }
                    /* try { // try from 00e4a6d8 to 00f4a793 has its CatchHandler @ 00e4a694 */
                          *(undefined4 *)(*(long *)(this + 8) + 0x58) = 0;
                          goto joined_r0x00e4a788;
                        }
LAB_00e4a66c:
                    /* try { // try from 00e4a66c to 00f4a693 has its CatchHandler @ 00e4a470 */
                    /* catch() { ... } // from try @ 00e4a664 with catch @ 00e4a670 */
                    /* catch() { ... } // from try @ 00e4a61c with catch @ 00e4a674 */
                    /* catch() { ... } // from try @ 00e4a568 with catch @ 00e4a678 */
                        sVar6 = (ulong)(token[0xb10] >> 1);
                        if ((token[0xb10] & 1) != 0) {
                          sVar6 = token._2840_8_;
                        }
                        if (sVar2 == sVar6) {
                    /* catch() { ... } // from try @ 00e4a6d8 with catch @ 00e4a694 */
                          pcVar3 = pcVar22;
                          if ((uVar18 & 1) != 0) {
                            pcVar3 = local_a0;
                          }
                          pcVar1 = token + 0xb11;
                          if ((token[0xb10] & 1) != 0) {
                            pcVar1 = (char *)token._2848_8_;
                          }
                          pcVar8 = pcVar22;
                          sVar6 = sVar21;
                          sVar9 = sVar2;
                          if ((uVar18 & 1) == 0) {
                            while (sVar9 != 0) {
                              if (*pcVar8 != *pcVar1) goto LAB_00e4a6f8;
                    /* try { // try from 00e4a6cc to 00f4a6d7 has its CatchHandler @ 00e4a70c */
                              pcVar1 = pcVar1 + 1;
                              sVar6 = sVar6 - 1;
                              pcVar8 = pcVar8 + 1;
                              sVar9 = sVar6;
                            }
                          }
                          else if ((sVar2 != 0) &&
                                  (iVar10 = memcmp(pcVar3,pcVar1,sVar2), iVar10 != 0))
                          goto LAB_00e4a6f8;
                          lVar19 = *(long *)(this + 8);
                          uVar16 = 1;
LAB_00e4a784:
                          *(undefined4 *)(lVar19 + 0x58) = uVar16;
                          goto joined_r0x00e4a788;
                        }
LAB_00e4a6f8:
                        sVar6 = (ulong)(token[0xb28] >> 1);
                        if ((token[0xb28] & 1) != 0) {
                          sVar6 = token._2864_8_;
                        }
                    /* catch() { ... } // from try @ 00e4a6cc with catch @ 00e4a70c */
                        if (sVar2 != sVar6) goto joined_r0x00e4a788;
                        pcVar3 = pcVar22;
                        if ((uVar18 & 1) != 0) {
                          pcVar3 = local_a0;
                        }
                        pcVar1 = token + 0xb29;
                        if ((token[0xb28] & 1) != 0) {
                          pcVar1 = (char *)token._2872_8_;
                        }
                        pcVar8 = pcVar22;
                        if ((uVar18 & 1) == 0) {
                          while (sVar2 != 0) {
                            if (*pcVar8 != *pcVar1) goto LAB_00e4a120;
                            pcVar1 = pcVar1 + 1;
                            sVar21 = sVar21 - 1;
                            pcVar8 = pcVar8 + 1;
                            sVar2 = sVar21;
                          }
LAB_00e4a77c:
                          lVar19 = *(long *)(this + 8);
                          uVar16 = 2;
                          goto LAB_00e4a784;
                        }
                        if ((sVar2 == 0) || (iVar10 = memcmp(pcVar3,pcVar1,sVar2), iVar10 == 0))
                        goto LAB_00e4a77c;
                      }
                      operator_delete(local_a0);
                    }
                  }
                  else {
LAB_00e4a474:
                    sVar21 = (ulong)(token[0xac8] >> 1);
                    if ((token[0xac8] & 1) != 0) {
                      sVar21 = token._2768_8_;
                    }
                    if (sVar2 == sVar21) {
                      pbVar17 = *(basic_string **)(pbVar20 + 0x48);
                      if (((byte)bVar5 & 1) == 0) {
                        pbVar17 = pbVar20 + 0x39;
                      }
                      pbVar15 = (basic_string *)(token + 0xac9);
                      if ((token[0xac8] & 1) != 0) {
                        pbVar15 = (basic_string *)token._2776_8_;
                      }
                      if (((byte)bVar5 & 1) == 0) {
                        if (sVar2 != 0) {
                          pbVar17 = pbVar20 + 0x39;
                          do {
                            if (*pbVar17 != *pbVar15) goto LAB_00e4a5ac;
                            uVar18 = uVar18 - 1;
                            pbVar17 = pbVar17 + 1;
                            pbVar15 = pbVar15 + 1;
                          } while (uVar18 != 0);
                        }
                      }
                      else if ((sVar2 != 0) && (iVar10 = memcmp(pbVar17,pbVar15,sVar2), iVar10 != 0)
                              ) goto LAB_00e4a5ac;
                      uVar18 = PUScriptTranslator::passValidatePropertyNoValues
                                         ((PUScriptCompiler *)this,(PUPropertyAbstractNode *)param_1
                                          ,pbVar20);
                      if ((uVar18 & 1) != 0) {
                        for (pbVar17 = *(basic_string **)(pbVar20 + 0x60); pbVar20 + 0x58 != pbVar17
                            ; pbVar17 = *(basic_string **)(pbVar17 + 8)) {
                          local_a8 = 0;
                          local_a0 = (char *)0x0;
                          local_b0 = 0;
                          uVar18 = PUScriptTranslator::getString
                                             (*(PUAbstractNode **)(pbVar17 + 0x10),
                                              (basic_string *)&local_b0);
                          if ((uVar18 & 1) != 0) {
                            PUAffector::addEmitterToExclude
                                      (*(PUAffector **)(this + 8),(basic_string *)&local_b0);
                          }
                          if ((local_b0 & 1) != 0) {
                            operator_delete(local_a0);
                          }
                    /* try { // try from 00e4a61c to 00f4a623 has its CatchHandler @ 00e4a674 */
                        }
                      }
                    }
                    else {
LAB_00e4a5ac:
                      uVar18 = (**(code **)(*plVar12 + 0x18))(plVar12,param_1,pbVar20);
                      if ((uVar18 & 1) == 0) {
                        PUScriptTranslator::errorUnexpectedProperty
                                  ((PUScriptCompiler *)this,(PUPropertyAbstractNode *)param_1);
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
LAB_00e4a120:
          pPVar23 = *(PUAbstractNode **)(pPVar23 + 8);
        } while (pPVar23 != param_2 + 0xb0);
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
    }
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

