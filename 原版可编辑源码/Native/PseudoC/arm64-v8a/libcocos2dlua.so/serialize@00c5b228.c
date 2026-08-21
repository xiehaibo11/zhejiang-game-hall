
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::ComRender::serialize(void*) */

int __thiscall cocostudio::ComRender::serialize(ComRender *this,void *param_1)

{
  ulong uVar1;
  size_t sVar2;
  void *pvVar3;
  GenericValue *pGVar4;
  long lVar5;
  stExpCocoNode *__s;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  DictionaryHelper *pDVar10;
  char *__s1;
  char *pcVar11;
  GenericValue *pGVar12;
  ulong uVar13;
  char *pcVar14;
  char *pcVar15;
  char *__nptr;
  long *plVar16;
  stExpCocoNode *psVar17;
  SpriteFrameCache *this_00;
  ArmatureDataManager *pAVar18;
  GUIReader *pGVar19;
  Ref *pRVar20;
  long lVar21;
  stExpCocoNode *psVar22;
  long lVar23;
  long lVar24;
  stExpCocoNode *psVar25;
  stExpCocoNode *psVar26;
  byte bVar27;
  CocoLoader *pCVar28;
  stExpCocoNode *psVar29;
  ulong uVar30;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1a8 [16];
  void *local_198;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_190 [16];
  void *local_180;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_178 [8];
  ulong local_170;
  void *local_168;
  Data aDStack_160 [16];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_150 [16];
  void *local_140;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_138 [8];
  ulong local_130;
  stExpCocoNode *local_128;
  ulong local_120;
  stExpCocoNode *psStack_118;
  stExpCocoNode *local_110;
  ulong local_100;
  stExpCocoNode *psStack_f8;
  stExpCocoNode *local_f0;
  ulong local_e0;
  stExpCocoNode *psStack_d8;
  stExpCocoNode *local_d0;
  ComRender *pCStack_c8;
  ComRender *pCStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  if (param_1 == (void *)0x0) {
    iVar6 = 0;
    goto LAB_00c5b7e8;
  }
  pGVar4 = *(GenericValue **)param_1;
  lVar24 = *(long *)((long)param_1 + 8);
  pCVar28 = *(CocoLoader **)((long)param_1 + 0x10);
  psStack_f8 = (stExpCocoNode *)0x0;
  local_f0 = (stExpCocoNode *)0x0;
  local_100 = 0;
  psStack_118 = (stExpCocoNode *)0x0;
  local_110 = (stExpCocoNode *)0x0;
  local_120 = 0;
  if (pGVar4 == (GenericValue *)0x0) {
    if (lVar24 == 0) {
      __s1 = (char *)0x0;
      pcVar14 = (char *)0x0;
      pcVar15 = (char *)0x0;
      iVar6 = 0;
LAB_00c5b3f8:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_e0,__s1);
      (**(code **)(*(long *)this + 0x20))(this,&local_e0);
LAB_00c5b418:
      if ((local_e0 & 1) != 0) {
        operator_delete(local_d0);
      }
      if (pcVar14 != (char *)0x0) {
        plVar16 = (long *)cocos2d::FileUtils::getInstance();
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_138,pcVar14);
        (**(code **)(*plVar16 + 0x50))(&local_e0,plVar16,local_138);
        if ((local_100 & 1) != 0) {
          *local_f0 = (stExpCocoNode)0x0;
          psStack_f8 = (stExpCocoNode *)0x0;
          if ((local_100 & 1) != 0) {
            operator_delete(local_f0);
          }
        }
        psStack_f8 = psStack_d8;
        local_100 = local_e0;
        local_e0 = 0;
        psStack_d8 = (stExpCocoNode *)0x0;
        local_f0 = local_d0;
        local_d0 = (stExpCocoNode *)0x0;
        if (((byte)local_138[0] & 1) != 0) {
          operator_delete(local_128);
        }
      }
      if (pcVar15 != (char *)0x0) {
        plVar16 = (long *)cocos2d::FileUtils::getInstance();
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_138,pcVar15);
        (**(code **)(*plVar16 + 0x50))(&local_e0,plVar16,local_138);
        if ((local_120 & 1) != 0) {
          *local_110 = (stExpCocoNode)0x0;
          psStack_118 = (stExpCocoNode *)0x0;
          if ((local_120 & 1) != 0) {
            operator_delete(local_110);
          }
        }
        psStack_118 = psStack_d8;
        local_120 = local_e0;
        local_e0 = 0;
        psStack_d8 = (stExpCocoNode *)0x0;
        local_110 = local_d0;
        local_d0 = (stExpCocoNode *)0x0;
        if (((byte)local_138[0] & 1) != 0) {
          operator_delete(local_128);
        }
      }
      if (iVar6 != 1) {
        if (iVar6 != 0) goto LAB_00c5b9ec;
        iVar6 = strcmp(__s1,"CCSprite");
        if (iVar6 == 0) {
          psVar22 = (stExpCocoNode *)((ulong)&local_100 | 1);
          psVar29 = (stExpCocoNode *)(local_100 >> 1 & 0x7f);
          if ((local_100 & 1) != 0) {
            psVar22 = local_f0;
            psVar29 = psStack_f8;
          }
          if (3 < (long)psVar29) {
            psVar26 = psVar22 + (long)psVar29;
            psVar17 = psVar22;
            psVar25 = psVar29;
            do {
              __s = psVar22;
              if ((psVar25 + -3 == (stExpCocoNode *)0x0) ||
                 (psVar17 = memchr(psVar17,0x2e,(size_t)(psVar25 + -3)),
                 psVar17 == (stExpCocoNode *)0x0)) break;
              if (*(int *)psVar17 == 0x676e702e) {
                if ((psVar17 != psVar26) && ((long)psVar17 - (long)psVar22 != -1))
                goto LAB_00c5b830;
                break;
              }
              psVar17 = psVar17 + 1;
              psVar25 = psVar26 + -(long)psVar17;
            } while (3 < (long)psVar25);
            do {
              if ((((long)psVar29 < 8) || (psVar29 + -7 == (stExpCocoNode *)0x0)) ||
                 (psVar17 = memchr(__s,0x2e,(size_t)(psVar29 + -7)), psVar17 == (stExpCocoNode *)0x0
                 )) break;
              if (*(long *)psVar17 == 0x7a63632e7276702e) {
                if ((psVar17 != psVar26) && ((long)psVar17 - (long)psVar22 != -1))
                goto LAB_00c5b830;
                break;
              }
              psVar29 = psVar26 + -(long)(psVar17 + 1);
              __s = psVar17 + 1;
            } while( true );
          }
        }
        iVar6 = strcmp(__s1,"CCTMXTiledMap");
        if (iVar6 == 0) {
          psVar22 = (stExpCocoNode *)((ulong)&local_100 | 1);
          psVar29 = (stExpCocoNode *)(local_100 >> 1 & 0x7f);
          if ((local_100 & 1) != 0) {
            psVar22 = local_f0;
            psVar29 = psStack_f8;
          }
          if (3 < (long)psVar29) {
            psVar26 = psVar22 + (long)psVar29;
            psVar17 = psVar22;
            do {
              if ((psVar29 + -3 == (stExpCocoNode *)0x0) ||
                 (psVar17 = memchr(psVar17,0x2e,(size_t)(psVar29 + -3)),
                 psVar17 == (stExpCocoNode *)0x0)) break;
              if (*(int *)psVar17 == 0x786d742e) {
                if ((psVar17 != psVar26) && ((long)psVar17 - (long)psVar22 != -1)) {
                  pRVar20 = (Ref *)cocos2d::TMXTiledMap::create((basic_string *)&local_100);
                  *(Ref **)(this + 0x50) = pRVar20;
                  cocos2d::Ref::retain(pRVar20);
                  goto LAB_00c5b9bc;
                }
                break;
              }
              psVar17 = psVar17 + 1;
              psVar29 = psVar26 + -(long)psVar17;
            } while (3 < (long)psVar29);
          }
        }
        iVar6 = strcmp(__s1,"CCParticleSystemQuad");
        if (iVar6 == 0) {
          psVar22 = (stExpCocoNode *)((ulong)&local_100 | 1);
          psVar29 = (stExpCocoNode *)(local_100 >> 1 & 0x7f);
          if ((local_100 & 1) != 0) {
            psVar22 = local_f0;
            psVar29 = psStack_f8;
          }
          if (5 < (long)psVar29) {
            psVar26 = psVar22 + (long)psVar29;
            psVar17 = psVar22;
            do {
              if ((psVar29 + -5 == (stExpCocoNode *)0x0) ||
                 (psVar17 = memchr(psVar17,0x2e,(size_t)(psVar29 + -5)),
                 psVar17 == (stExpCocoNode *)0x0)) break;
              iVar6 = memcmp(psVar17,".plist",6);
              if (iVar6 == 0) {
                if ((psVar17 != psVar26) && ((long)psVar17 - (long)psVar22 != -1)) {
                  plVar16 = (long *)cocos2d::ParticleSystemQuad::create((basic_string *)&local_100);
                  *(long **)(this + 0x50) = plVar16;
                  (**(code **)(*plVar16 + 200))(0,0);
                  cocos2d::Ref::retain(*(Ref **)(this + 0x50));
                  goto LAB_00c5b9bc;
                }
                break;
              }
              psVar17 = psVar17 + 1;
              psVar29 = psVar26 + -(long)psVar17;
            } while (5 < (long)psVar29);
          }
        }
        iVar6 = strcmp(__s1,"CCArmature");
        if (iVar6 == 0) {
          plVar16 = (long *)cocos2d::FileUtils::getInstance();
          (**(code **)(*plVar16 + 0x138))(local_138,plVar16,&local_100);
          uVar13 = (ulong)((byte)local_138[0] >> 1);
          if (((byte)local_138[0] & 1) != 0) {
            uVar13 = local_130;
          }
          if (uVar13 == 4) {
            psVar22 = (stExpCocoNode *)((ulong)local_138 | 1);
            if (((byte)local_138[0] & 1) != 0) {
              psVar22 = local_128;
            }
            if (*(int *)psVar22 != 0x6273632e) goto LAB_00c5bc1c;
            plVar16 = (long *)cocos2d::FileUtils::getInstance();
            (**(code **)(*plVar16 + 0x50))(local_150,plVar16,&local_100);
            plVar16 = (long *)cocos2d::FileUtils::getInstance();
            (**(code **)(*plVar16 + 0x28))(aDStack_160,plVar16,local_150);
            pcVar14 = (char *)cocos2d::Data::getBytes(aDStack_160);
            uVar13 = cocos2d::Data::isNull(aDStack_160);
            if ((uVar13 & 1) == 0) {
              CocoLoader::CocoLoader((CocoLoader *)&local_e0);
              uVar13 = CocoLoader::ReadCocoBinBuff((CocoLoader *)&local_e0,pcVar14);
              psVar22 = psStack_d8;
              if ((uVar13 & 1) == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = stExpCocoNode::GetType(psStack_d8,(CocoLoader *)&local_e0);
                if (iVar6 == 3) {
                  uVar7 = stExpCocoNode::GetChildNum(psVar22);
                  lVar21 = stExpCocoNode::GetChildArray(psVar22,(CocoLoader *)&local_e0);
                  if (0 < (int)uVar7) {
                    uVar13 = 0;
                    iVar6 = 0;
                    do {
                      psVar22 = (stExpCocoNode *)(lVar21 + uVar13 * 0x10);
                      pcVar14 = (char *)stExpCocoNode::GetName(psVar22,(CocoLoader *)&local_e0);
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>(local_178,pcVar14);
                      uVar30 = (ulong)((byte)local_178[0] >> 1);
                      if (((byte)local_178[0] & 1) != 0) {
                        uVar30 = local_170;
                      }
                      sVar2 = 0xd;
                      if (uVar30 < 0xe) {
                        sVar2 = uVar30;
                      }
                      if (sVar2 == 0) {
LAB_00c5be78:
                        if (0xd < uVar30 != 0xc < uVar30) {
                          iVar8 = stExpCocoNode::GetChildNum(psVar22);
                          psVar22 = (stExpCocoNode *)
                                    stExpCocoNode::GetChildArray(psVar22,(CocoLoader *)&local_e0);
                          if (0 < iVar8) {
                            uVar9 = stExpCocoNode::GetChildNum(psVar22);
                            uVar30 = (ulong)uVar9;
                            psVar22 = (stExpCocoNode *)
                                      stExpCocoNode::GetChildArray(psVar22,(CocoLoader *)&local_e0);
                            if (0 < (int)uVar9) {
                              do {
                                pcVar14 = (char *)stExpCocoNode::GetName
                                                            (psVar22,(CocoLoader *)&local_e0);
                                std::__ndk1::
                                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                ::basic_string<decltype(nullptr)>(local_190,pcVar14);
                                pcVar14 = (char *)stExpCocoNode::GetValue
                                                            (psVar22,(CocoLoader *)&local_e0);
                                uVar1 = (ulong)((byte)local_178[0] >> 1);
                                if (((byte)local_178[0] & 1) != 0) {
                                  uVar1 = local_170;
                                }
                                sVar2 = 4;
                                if (uVar1 < 5) {
                                  sVar2 = uVar1;
                                }
                                if (sVar2 == 0) {
LAB_00c5bf50:
                                  if ((pcVar14 != (char *)0x0) && (4 < uVar1 != 3 < uVar1)) {
                                    pAVar18 = (ArmatureDataManager *)
                                              ArmatureDataManager::getInstance();
                                    ArmatureDataManager::addArmatureFileInfo
                                              (pAVar18,(basic_string *)&local_100);
                                    std::__ndk1::
                                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                    ::basic_string<decltype(nullptr)>(local_1a8,pcVar14);
                                    pRVar20 = (Ref *)Armature::create((basic_string *)local_1a8);
                                    if (((byte)local_1a8[0] & 1) != 0) {
                                      operator_delete(local_198);
                                    }
                                    *(Ref **)(this + 0x50) = pRVar20;
                                    cocos2d::Ref::retain(pRVar20);
                                    if (lVar24 == 0) {
                                      pDVar10 = (DictionaryHelper *)DictionaryHelper::getInstance();
                                      pcVar14 = (char *)DictionaryHelper::getStringValue_json
                                                                  (pDVar10,pGVar4,
                                                                   "selectedactionname",(char *)0x0)
                                      ;
                                    }
                                    else {
                                      pcVar14 = (char *)stExpCocoNode::GetValue
                                                                  ((stExpCocoNode *)(lVar24 + 0x60),
                                                                   (CocoLoader *)&local_e0);
                                    }
                                    if ((pcVar14 != (char *)0x0) &&
                                       (lVar23 = (**(code **)(*(long *)pRVar20 + 0x588))(pRVar20),
                                       lVar23 != 0)) {
                                      plVar16 = (long *)(**(code **)(*(long *)pRVar20 + 0x588))
                                                                  (pRVar20);
                                      std::__ndk1::
                                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      ::basic_string<decltype(nullptr)>(local_1a8,pcVar14);
                                      (**(code **)(*plVar16 + 0xd0))
                                                (plVar16,local_1a8,0xffffffff,0xffffffff);
                                      if (((byte)local_1a8[0] & 1) != 0) {
                                        operator_delete(local_198);
                                      }
                                    }
                                    iVar6 = 1;
                                  }
                                }
                                else {
                                  pvVar3 = (void *)((ulong)local_178 | 1);
                                  if (((byte)local_178[0] & 1) != 0) {
                                    pvVar3 = local_168;
                                  }
                                  iVar8 = memcmp(pvVar3,"name",sVar2);
                                  if (iVar8 == 0) goto LAB_00c5bf50;
                                }
                                if (((byte)local_190[0] & 1) != 0) {
                                  operator_delete(local_180);
                                }
                                uVar30 = uVar30 - 1;
                                psVar22 = psVar22 + 0x10;
                              } while (uVar30 != 0);
                            }
                          }
                        }
                      }
                      else {
                        pvVar3 = (void *)((ulong)local_178 | 1);
                        if (((byte)local_178[0] & 1) != 0) {
                          pvVar3 = local_168;
                        }
                        iVar8 = memcmp(pvVar3,"armature_data",sVar2);
                        if (iVar8 == 0) goto LAB_00c5be78;
                      }
                      if (((byte)local_178[0] & 1) != 0) {
                        operator_delete(local_168);
                      }
                      uVar13 = uVar13 + 1;
                    } while (uVar13 != uVar7);
                    goto LAB_00c5c124;
                  }
                }
                iVar6 = 0;
              }
LAB_00c5c124:
              CocoLoader::~CocoLoader((CocoLoader *)&local_e0);
            }
            else {
              iVar6 = 0;
            }
            cocos2d::Data::~Data(aDStack_160);
            if (((byte)local_150[0] & 1) != 0) {
              operator_delete(local_140);
            }
          }
          else {
            if (uVar13 == 0xb) {
              psVar22 = (stExpCocoNode *)((ulong)local_138 | 1);
              if (((byte)local_138[0] & 1) != 0) {
                psVar22 = local_128;
              }
              iVar6 = memcmp(psVar22,".exportjson",0xb);
            }
            else {
              if (uVar13 != 5) goto LAB_00c5bc1c;
              psVar22 = (stExpCocoNode *)((ulong)local_138 | 1);
              if (((byte)local_138[0] & 1) != 0) {
                psVar22 = local_128;
              }
              iVar6 = memcmp(psVar22,".json",5);
            }
            if (iVar6 == 0) {
              uStack_a8 = 0;
              local_b0 = 0;
              uStack_98 = 0;
              uStack_a0 = 0;
              pCStack_c8 = (ComRender *)0x0;
              local_d0 = (stExpCocoNode *)0x0;
              uStack_b8 = 0;
              pCStack_c0 = (ComRender *)0x0;
              psStack_d8 = (stExpCocoNode *)0x0;
              local_e0 = 0;
              local_90 = 0x400;
              local_88 = 0;
              local_80 = 0;
              pCStack_c8 = operator_new(0x28);
              *(undefined8 *)(pCStack_c8 + 0x18) = 0;
              *(undefined8 *)(pCStack_c8 + 0x20) = 0;
              *(undefined8 *)(pCStack_c8 + 8) = 0x10000;
              *(undefined8 *)(pCStack_c8 + 0x10) = 0;
              *(undefined8 *)pCStack_c8 = 0;
              pCStack_c0 = pCStack_c8;
              uVar13 = readJson(pCStack_c8,(basic_string *)&local_100,(GenericDocument *)&local_e0);
              if ((uVar13 & 1) == 0) {
                psVar22 = (stExpCocoNode *)((ulong)&local_100 | 1);
                if ((local_100 & 1) != 0) {
                  psVar22 = local_f0;
                }
                cocos2d::log("read json file[%s] error!\n",psVar22);
                iVar6 = 0;
              }
              else {
                pDVar10 = (DictionaryHelper *)DictionaryHelper::getInstance();
                pGVar12 = (GenericValue *)
                          DictionaryHelper::getDictionaryFromArray_json
                                    (pDVar10,(GenericValue *)&local_e0,"armature_data",0);
                pDVar10 = (DictionaryHelper *)DictionaryHelper::getInstance();
                pcVar14 = (char *)DictionaryHelper::getStringValue_json
                                            (pDVar10,pGVar12,"name",(char *)0x0);
                pAVar18 = (ArmatureDataManager *)ArmatureDataManager::getInstance();
                ArmatureDataManager::addArmatureFileInfo(pAVar18,(basic_string *)&local_100);
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string<decltype(nullptr)>(local_150,pcVar14);
                pRVar20 = (Ref *)Armature::create((basic_string *)local_150);
                if (((byte)local_150[0] & 1) != 0) {
                  operator_delete(local_140);
                }
                *(Ref **)(this + 0x50) = pRVar20;
                cocos2d::Ref::retain(pRVar20);
                if (lVar24 == 0) {
                  pDVar10 = (DictionaryHelper *)DictionaryHelper::getInstance();
                  pcVar14 = (char *)DictionaryHelper::getStringValue_json
                                              (pDVar10,pGVar4,"selectedactionname",(char *)0x0);
                }
                else {
                  pcVar14 = (char *)stExpCocoNode::GetValue
                                              ((stExpCocoNode *)(lVar24 + 0x60),pCVar28);
                }
                if ((pcVar14 != (char *)0x0) &&
                   (lVar24 = (**(code **)(*(long *)pRVar20 + 0x588))(pRVar20), lVar24 != 0)) {
                  plVar16 = (long *)(**(code **)(*(long *)pRVar20 + 0x588))(pRVar20);
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string<decltype(nullptr)>(local_150,pcVar14);
                  (**(code **)(*plVar16 + 0xd0))(plVar16,local_150,0xffffffff,0xffffffff);
                  if (((byte)local_150[0] & 1) != 0) {
                    operator_delete(local_140);
                  }
                }
                iVar6 = 1;
              }
              rapidjson::
              GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
              ::~GenericDocument((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                                  *)&local_e0);
            }
            else {
LAB_00c5bc1c:
              iVar6 = 0;
            }
          }
          if (((byte)local_138[0] & 1) == 0) goto joined_r0x00c5bd88;
        }
        else {
          iVar6 = strcmp(__s1,"GUIComponent");
          if (iVar6 != 0) goto LAB_00c5b9ec;
          plVar16 = (long *)cocos2d::FileUtils::getInstance();
          (**(code **)(*plVar16 + 0x138))(&local_e0,plVar16,&local_100);
          psVar22 = (stExpCocoNode *)(local_e0 >> 1 & 0x7f);
          if ((local_e0 & 1) != 0) {
            psVar22 = psStack_d8;
          }
          if (psVar22 == (stExpCocoNode *)0x4) {
            psVar22 = (stExpCocoNode *)((ulong)&local_e0 | 1);
            if ((local_e0 & 1) != 0) {
              psVar22 = local_d0;
            }
            if (*(int *)psVar22 != 0x6273632e) goto LAB_00c5bcb0;
            pGVar19 = (GUIReader *)GUIReader::getInstance();
            psVar22 = (stExpCocoNode *)((ulong)&local_100 | 1);
            if ((local_100 & 1) != 0) {
              psVar22 = local_f0;
            }
            pRVar20 = (Ref *)GUIReader::widgetFromBinaryFile(pGVar19,(char *)psVar22);
            *(Ref **)(this + 0x50) = pRVar20;
            cocos2d::Ref::retain(pRVar20);
LAB_00c5bd6c:
            iVar6 = 1;
            local_128 = local_d0;
          }
          else {
            if (psVar22 == (stExpCocoNode *)0xb) {
              psVar22 = (stExpCocoNode *)((ulong)&local_e0 | 1);
              if ((local_e0 & 1) != 0) {
                psVar22 = local_d0;
              }
              iVar6 = memcmp(psVar22,".exportjson",0xb);
            }
            else {
              if (psVar22 != (stExpCocoNode *)0x5) goto LAB_00c5bcb0;
              psVar22 = (stExpCocoNode *)((ulong)&local_e0 | 1);
              if ((local_e0 & 1) != 0) {
                psVar22 = local_d0;
              }
              iVar6 = memcmp(psVar22,".json",5);
            }
            if (iVar6 == 0) {
              pGVar19 = (GUIReader *)GUIReader::getInstance();
              psVar22 = (stExpCocoNode *)((ulong)&local_100 | 1);
              if ((local_100 & 1) != 0) {
                psVar22 = local_f0;
              }
              pRVar20 = (Ref *)GUIReader::widgetFromJsonFile(pGVar19,(char *)psVar22);
              *(Ref **)(this + 0x50) = pRVar20;
              cocos2d::Ref::retain(pRVar20);
              goto LAB_00c5bd6c;
            }
LAB_00c5bcb0:
            iVar6 = 0;
            local_128 = local_d0;
          }
          local_d0 = local_128;
          if ((local_e0 & 1) == 0) goto joined_r0x00c5bd88;
        }
        operator_delete(local_128);
        goto joined_r0x00c5bd88;
      }
      iVar6 = strcmp(__s1,"CCSprite");
      psVar29 = local_110;
      psVar22 = psStack_118;
      if (iVar6 != 0) goto LAB_00c5b9ec;
      psStack_d8 = (stExpCocoNode *)0x0;
      local_d0 = (stExpCocoNode *)0x0;
      local_e0 = 0;
      if ((local_120 & 1) == 0) {
        psStack_d8 = psStack_118;
        local_e0 = local_120;
        local_d0 = local_110;
      }
      else {
        if ((stExpCocoNode *)0xffffffffffffffef < psStack_118) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (psStack_118 < (stExpCocoNode *)0x17) {
          psVar26 = (stExpCocoNode *)((ulong)&local_e0 | 1);
          local_e0 = (ulong)(byte)((int)psStack_118 << 1);
          if (psStack_118 != (stExpCocoNode *)0x0) goto LAB_00c5b660;
        }
        else {
          psVar17 = psStack_118 + 0x10;
          psVar26 = operator_new((ulong)psVar17 & 0xfffffffffffffff0);
          local_e0 = (ulong)psVar17 & 0xfffffffffffffff0 | 1;
          psStack_d8 = psVar22;
          local_d0 = psVar26;
LAB_00c5b660:
          memcpy(psVar26,psVar29,(size_t)psVar22);
        }
        psVar26[(long)psVar22] = (stExpCocoNode)0x0;
      }
      psVar22 = (stExpCocoNode *)((ulong)&local_e0 | 1);
      psVar29 = (stExpCocoNode *)(ulong)((byte)local_e0._0_1_ >> 1);
      if ((local_e0 & 1) != 0) {
        psVar22 = local_d0;
        psVar29 = psStack_d8;
      }
      uVar13 = local_e0 & 1;
      bVar27 = (byte)local_e0._0_1_ & 1;
      if (5 < (long)psVar29) {
        psVar17 = psVar22;
        psVar26 = psVar29;
        do {
          if ((psVar26 + -5 == (stExpCocoNode *)0x0) ||
             (psVar17 = memchr(psVar17,0x2e,(size_t)(psVar26 + -5)), psVar17 == (stExpCocoNode *)0x0
             )) break;
          iVar6 = memcmp(psVar17,".plist",6);
          if (iVar6 == 0) {
            iVar6 = 0;
            if ((psVar17 != psVar22 + (long)psVar29) &&
               ((long)psVar17 - (long)psVar22 != 0xffffffffffffffff)) {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              replace((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_e0,(long)psVar17 - (long)psVar22,(ulong)psVar29,".png",4);
              this_00 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
              cocos2d::SpriteFrameCache::addSpriteFramesWithFile
                        (this_00,(basic_string *)&local_120,(basic_string *)&local_e0);
              pRVar20 = (Ref *)cocos2d::Sprite::createWithSpriteFrameName
                                         ((basic_string *)&local_100);
              *(Ref **)(this + 0x50) = pRVar20;
              cocos2d::Ref::retain(pRVar20);
              iVar6 = 1;
              bVar27 = (byte)local_e0._0_1_ & 1;
            }
            if (bVar27 != 0) goto LAB_00c5b7bc;
            goto LAB_00c5b7c4;
          }
          psVar17 = psVar17 + 1;
          psVar26 = psVar22 + (long)psVar29 + -(long)psVar17;
        } while (5 < (long)psVar26);
      }
      iVar6 = 0;
      if (uVar13 != 0) {
LAB_00c5b7bc:
        operator_delete(local_d0);
      }
LAB_00c5b7c4:
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      goto joined_r0x00c5bd88;
    }
    __s1 = (char *)stExpCocoNode::GetValue((stExpCocoNode *)(lVar24 + 0x10),pCVar28);
    if (__s1 != (char *)0x0) {
      pcVar11 = (char *)stExpCocoNode::GetValue((stExpCocoNode *)(lVar24 + 0x20),pCVar28);
      psVar22 = (stExpCocoNode *)
                stExpCocoNode::GetChildArray((stExpCocoNode *)(lVar24 + 0x40),pCVar28);
      if (psVar22 != (stExpCocoNode *)0x0) {
        pcVar14 = (char *)stExpCocoNode::GetValue(psVar22,pCVar28);
        pcVar15 = (char *)stExpCocoNode::GetValue(psVar22 + 0x10,pCVar28);
        if (pcVar14 != (char *)0x0 || pcVar15 != (char *)0x0) {
          __nptr = (char *)stExpCocoNode::GetValue(psVar22 + 0x20,pCVar28);
          iVar6 = atoi(__nptr);
          if (pcVar11 != (char *)0x0) goto LAB_00c5b3c4;
          goto LAB_00c5b3f8;
        }
      }
    }
  }
  else {
    pDVar10 = (DictionaryHelper *)DictionaryHelper::getInstance();
    __s1 = (char *)DictionaryHelper::getStringValue_json(pDVar10,pGVar4,"classname",(char *)0x0);
    if (__s1 != (char *)0x0) {
      pDVar10 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pcVar11 = (char *)DictionaryHelper::getStringValue_json(pDVar10,pGVar4,"name",(char *)0x0);
      pDVar10 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pGVar12 = (GenericValue *)DictionaryHelper::getSubDictionary_json(pDVar10,pGVar4,"fileData");
      pDVar10 = (DictionaryHelper *)DictionaryHelper::getInstance();
      uVar13 = DictionaryHelper::checkObjectExist_json(pDVar10,pGVar12);
      if ((uVar13 & 1) != 0) {
        pDVar10 = (DictionaryHelper *)DictionaryHelper::getInstance();
        pcVar14 = (char *)DictionaryHelper::getStringValue_json(pDVar10,pGVar12,"path",(char *)0x0);
        pDVar10 = (DictionaryHelper *)DictionaryHelper::getInstance();
        pcVar15 = (char *)DictionaryHelper::getStringValue_json
                                    (pDVar10,pGVar12,"plistFile",(char *)0x0);
        if (pcVar14 != (char *)0x0 || pcVar15 != (char *)0x0) {
          pDVar10 = (DictionaryHelper *)DictionaryHelper::getInstance();
          iVar6 = DictionaryHelper::getIntValue_json(pDVar10,pGVar12,"resourceType",-1);
          if (pcVar11 == (char *)0x0) goto LAB_00c5b3f8;
LAB_00c5b3c4:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_e0,pcVar11);
          (**(code **)(*(long *)this + 0x20))(this,&local_e0);
          goto LAB_00c5b418;
        }
      }
    }
  }
LAB_00c5b9ec:
  iVar6 = 0;
  goto joined_r0x00c5bd88;
LAB_00c5b830:
  pRVar20 = (Ref *)cocos2d::Sprite::create((basic_string *)&local_100);
  *(Ref **)(this + 0x50) = pRVar20;
  cocos2d::Ref::retain(pRVar20);
LAB_00c5b9bc:
  iVar6 = 1;
joined_r0x00c5bd88:
  if ((local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
LAB_00c5b7e8:
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

