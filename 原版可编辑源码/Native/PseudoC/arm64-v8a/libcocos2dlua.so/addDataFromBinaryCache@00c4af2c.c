
/* cocostudio::DataReaderHelper::addDataFromBinaryCache(char const*,
   cocostudio::DataReaderHelper::_DataInfo*) */

void cocostudio::DataReaderHelper::addDataFromBinaryCache(char *param_1,_DataInfo *param_2)

{
  basic_string *pbVar1;
  stExpCocoNode *psVar2;
  char *pcVar3;
  void *pvVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  size_t sVar12;
  stExpCocoNode *psVar13;
  Ref *pRVar14;
  long lVar15;
  ArmatureDataManager *pAVar16;
  basic_string *pbVar17;
  long lVar18;
  long lVar19;
  basic_string *pbVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  void *pvVar24;
  ulong *puVar25;
  double dVar26;
  basic_string local_120 [16];
  void *local_110;
  basic_string local_108 [16];
  void *local_f8;
  basic_string local_f0 [16];
  void *local_e0;
  basic_string local_d8 [16];
  void *local_c8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0;
  undefined7 uStack_bf;
  basic_string *pbStack_b8;
  char *local_b0;
  ulong local_a8;
  basic_string *local_a0;
  void *local_98;
  CocoLoader aCStack_90 [8];
  stExpCocoNode *local_88;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  CocoLoader::CocoLoader(aCStack_90);
  uVar9 = CocoLoader::ReadCocoBinBuff(aCStack_90,param_1);
  if (((uVar9 & 1) == 0) || (iVar6 = stExpCocoNode::GetType(local_88,aCStack_90), iVar6 != 3))
  goto LAB_00c4b72c;
  lVar10 = stExpCocoNode::GetChildArray(local_88,aCStack_90);
  uVar7 = stExpCocoNode::GetChildNum(local_88);
  *(undefined4 *)(param_2 + 0x38) = 0x3f800000;
  local_a0 = (basic_string *)0x0;
  local_98 = (void *)0x0;
  local_a8 = 0;
  if (0 < (int)uVar7) {
    uVar9 = 0;
    pbVar1 = (basic_string *)(param_2 + 0x40);
    pvVar24 = (void *)((ulong)&local_a8 | 1);
    do {
      psVar2 = (stExpCocoNode *)(lVar10 + uVar9 * 0x10);
      pcVar11 = (char *)stExpCocoNode::GetName(psVar2,aCStack_90);
      sVar12 = strlen(pcVar11);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a8,pcVar11,sVar12);
      uVar22 = local_a8;
      pbVar17 = (basic_string *)(local_a8 >> 1 & 0x7f);
      if ((local_a8 & 1) != 0) {
        pbVar17 = local_a0;
      }
      pbVar20 = (basic_string *)0xd;
      if (pbVar17 < (basic_string *)0xe) {
        pbVar20 = pbVar17;
      }
      if (pbVar20 == (basic_string *)0x0) {
LAB_00c4b07c:
        if ((basic_string *)0xd < pbVar17 == (basic_string *)0xc < pbVar17) {
          if (pbVar20 != (basic_string *)0x0) goto LAB_00c4b0e4;
          goto LAB_00c4b104;
        }
        pcVar11 = (char *)stExpCocoNode::GetValue(psVar2,aCStack_90);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(&local_c0,pcVar11);
        pcVar11 = (char *)((ulong)&local_c0 | 1);
        if (((byte)local_c0 & 1) != 0) {
          pcVar11 = local_b0;
        }
        dVar26 = (double)cocos2d::utils::atof(pcVar11);
        *(float *)(param_2 + 0x38) = (float)dVar26;
        if (((byte)local_c0 & 1) != 0) {
          operator_delete(local_b0);
        }
      }
      else {
        pvVar4 = pvVar24;
        if ((local_a8 & 1) != 0) {
          pvVar4 = local_98;
        }
        iVar6 = memcmp(pvVar4,"content_scale",(size_t)pbVar20);
        if (iVar6 == 0) goto LAB_00c4b07c;
LAB_00c4b0e4:
        pvVar4 = pvVar24;
        if ((uVar22 & 1) != 0) {
          pvVar4 = local_98;
        }
        iVar6 = memcmp(pvVar4,"armature_data",(size_t)pbVar20);
        if (iVar6 == 0) {
LAB_00c4b104:
          if ((basic_string *)0xd < pbVar17 != (basic_string *)0xc < pbVar17) {
            psVar13 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar2,aCStack_90);
            uVar8 = stExpCocoNode::GetChildNum(psVar2);
            if (0 < (int)uVar8) {
              uVar22 = (ulong)uVar8;
              do {
                pRVar14 = (Ref *)decodeArmature(aCStack_90,psVar13,param_2);
                if (*(long *)param_2 != 0) {
                  std::__ndk1::mutex::lock((mutex *)(_dataReaderHelper + 0xd8));
                }
                pAVar16 = (ArmatureDataManager *)ArmatureDataManager::getInstance();
                ArmatureDataManager::addArmatureData
                          (pAVar16,(basic_string *)(pRVar14 + 0x28),(ArmatureData *)pRVar14,pbVar1);
                cocos2d::Ref::release(pRVar14);
                if (*(long *)param_2 != 0) {
                  std::__ndk1::mutex::unlock((mutex *)(_dataReaderHelper + 0xd8));
                }
                uVar22 = uVar22 - 1;
                psVar13 = psVar13 + 0x10;
              } while (uVar22 != 0);
            }
            goto LAB_00c4affc;
          }
        }
        pbVar20 = (basic_string *)0xe;
        if (pbVar17 < (basic_string *)0xf) {
          pbVar20 = pbVar17;
        }
        if (pbVar20 == (basic_string *)0x0) {
          if ((basic_string *)0xe < pbVar17 == (basic_string *)0xd < pbVar17) goto LAB_00c4b290;
        }
        else {
          pvVar4 = pvVar24;
          if ((uVar22 & 1) != 0) {
            pvVar4 = local_98;
          }
          iVar6 = memcmp(pvVar4,"animation_data",(size_t)pbVar20);
          if ((iVar6 != 0) || ((basic_string *)0xe < pbVar17 == (basic_string *)0xd < pbVar17)) {
LAB_00c4b290:
            pbVar20 = (basic_string *)0xc;
            if (pbVar17 < (basic_string *)0xd) {
              pbVar20 = pbVar17;
            }
            if (pbVar20 != (basic_string *)0x0) {
              pvVar4 = pvVar24;
              if ((uVar22 & 1) != 0) {
                pvVar4 = local_98;
              }
              iVar6 = memcmp(pvVar4,"texture_data",(size_t)pbVar20);
              if (iVar6 != 0) goto LAB_00c4affc;
            }
            if ((basic_string *)0xc < pbVar17 != (basic_string *)0xb < pbVar17) {
              psVar13 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar2,aCStack_90);
              uVar8 = stExpCocoNode::GetChildNum(psVar2);
              if (0 < (int)uVar8) {
                uVar22 = (ulong)uVar8;
                do {
                  pRVar14 = (Ref *)decodeTexture(aCStack_90,psVar13);
                  if (*(long *)param_2 != 0) {
                    std::__ndk1::mutex::lock((mutex *)(_dataReaderHelper + 0xd8));
                  }
                  pAVar16 = (ArmatureDataManager *)ArmatureDataManager::getInstance();
                  ArmatureDataManager::addTextureData
                            (pAVar16,(basic_string *)(pRVar14 + 0x38),(TextureData *)pRVar14,pbVar1)
                  ;
                  cocos2d::Ref::release(pRVar14);
                  if (*(long *)param_2 != 0) {
                    std::__ndk1::mutex::unlock((mutex *)(_dataReaderHelper + 0xd8));
                  }
                  uVar22 = uVar22 - 1;
                  psVar13 = psVar13 + 0x10;
                } while (uVar22 != 0);
              }
            }
            goto LAB_00c4affc;
          }
        }
        psVar13 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar2,aCStack_90);
        uVar8 = stExpCocoNode::GetChildNum(psVar2);
        if (0 < (int)uVar8) {
          uVar22 = (ulong)uVar8;
          do {
            pRVar14 = (Ref *)decodeAnimation(aCStack_90,psVar13,param_2);
            if (*(long *)param_2 != 0) {
              std::__ndk1::mutex::lock((mutex *)(_dataReaderHelper + 0xd8));
            }
            pAVar16 = (ArmatureDataManager *)ArmatureDataManager::getInstance();
            ArmatureDataManager::addAnimationData
                      (pAVar16,(basic_string *)(pRVar14 + 0x28),(AnimationData *)pRVar14,pbVar1);
            cocos2d::Ref::release(pRVar14);
            if (*(long *)param_2 != 0) {
              std::__ndk1::mutex::unlock((mutex *)(_dataReaderHelper + 0xd8));
            }
            uVar22 = uVar22 - 1;
            psVar13 = psVar13 + 0x10;
          } while (uVar22 != 0);
        }
      }
LAB_00c4affc:
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar7);
  }
  if (*(long *)param_2 == 0) {
    pAVar16 = (ArmatureDataManager *)ArmatureDataManager::getInstance();
    uVar8 = ArmatureDataManager::isAutoLoadSpriteFile(pAVar16);
    if (0 < (int)uVar7 && ((uVar8 ^ 0xffffffff) & 1) == 0) goto LAB_00c4b39c;
  }
  else if ((*(char *)(*(long *)param_2 + 0x68) != '\0') && (0 < (int)uVar7)) {
LAB_00c4b39c:
    lVar23 = 0;
    do {
      psVar2 = (stExpCocoNode *)(lVar10 + lVar23 * 0x10);
      pcVar11 = (char *)stExpCocoNode::GetName(psVar2,aCStack_90);
      sVar12 = strlen(pcVar11);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a8,pcVar11,sVar12);
      pbVar1 = (basic_string *)(local_a8 >> 1 & 0x7f);
      if ((local_a8 & 1) != 0) {
        pbVar1 = local_a0;
      }
      pbVar17 = (basic_string *)&DAT_00000010;
      if (pbVar1 < (basic_string *)0x11) {
        pbVar17 = pbVar1;
      }
      if (pbVar17 == (basic_string *)0x0) {
LAB_00c4b454:
        if ((basic_string *)&DAT_00000010 < pbVar1 != (basic_string *)0xf < pbVar1) {
          uVar8 = stExpCocoNode::GetChildNum(psVar2);
          lVar15 = stExpCocoNode::GetChildArray(psVar2,aCStack_90);
          if (0 < (int)uVar8) {
            uVar9 = 0;
            do {
              pcVar11 = (char *)stExpCocoNode::GetValue
                                          ((stExpCocoNode *)(lVar15 + uVar9 * 0x10),aCStack_90);
              if (pcVar11 == (char *)0x0) goto LAB_00c4b71c;
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string<decltype(nullptr)>(&local_c0,pcVar11);
              pcVar11 = (char *)((ulong)&local_c0 | 1);
              pbVar1 = (basic_string *)(ulong)((byte)local_c0 >> 1);
              if (((byte)local_c0 & 1) != 0) {
                pcVar11 = local_b0;
                pbVar1 = pbStack_b8;
              }
              pbVar20 = pbVar1;
              if (pbVar1 == (basic_string *)0x0) {
LAB_00c4b768:
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
              }
              do {
                if (pbVar20 == (basic_string *)0x0) {
                  pbVar20 = (basic_string *)0xffffffffffffffff;
                  break;
                }
                pcVar3 = pcVar11 + (long)pbVar20;
                pbVar20 = pbVar20 + -1;
              } while (pcVar3[-1] != '.');
              if (pbVar1 < pbVar20) goto LAB_00c4b768;
              pbVar1 = pbVar20;
              if (((byte)local_c0 & 1) == 0) {
                local_c0 = SUB41((int)pbVar20 << 1,0);
                pbVar1 = pbStack_b8;
              }
              pbStack_b8 = pbVar1;
              pcVar11[(long)pbVar20] = '\0';
              if (*(long *)param_2 == 0) {
                FUN_007c1fb0(local_d8,&local_c0,".plist");
                FUN_007c1fb0(local_f0,&local_c0,&DAT_0144877a);
                pAVar16 = (ArmatureDataManager *)ArmatureDataManager::getInstance();
                std::__ndk1::operator+((__ndk1 *)(param_2 + 0x58),local_d8,pbVar17);
                std::__ndk1::operator+((__ndk1 *)(param_2 + 0x58),local_f0,pbVar17);
                pbVar17 = local_120;
                ArmatureDataManager::addSpriteFrameFromFile
                          (pAVar16,local_108,pbVar17,(basic_string *)(param_2 + 0x40));
                if (((byte)local_120[0] & 1) != 0) {
                  operator_delete(local_110);
                }
                if (((byte)local_108[0] & 1) != 0) {
                  operator_delete(local_f8);
                }
                if (((byte)local_f0[0] & 1) != 0) {
                  operator_delete(local_e0);
                }
                if (((byte)local_d8[0] & 1) != 0) {
                  operator_delete(local_c8);
                }
              }
              else {
                lVar18 = *(long *)(param_2 + 0x10);
                lVar19 = *(long *)(param_2 + 0x18);
                uVar22 = 0;
                if (lVar19 - lVar18 != 0) {
                  uVar22 = (lVar19 - lVar18 >> 3) * 0xaa - 1;
                }
                uVar21 = *(long *)(param_2 + 0x30) + *(long *)(param_2 + 0x28);
                if (uVar22 == uVar21) {
                  std::__ndk1::
                  deque<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  ::__add_back_capacity
                            ((deque<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                              *)(param_2 + 8));
                  lVar18 = *(long *)(param_2 + 0x10);
                  lVar19 = *(long *)(param_2 + 0x18);
                  uVar21 = *(long *)(param_2 + 0x28) + *(long *)(param_2 + 0x30);
                }
                pcVar11 = local_b0;
                pbVar1 = pbStack_b8;
                if (lVar19 == lVar18) {
                  puVar25 = (ulong *)0x0;
                }
                else {
                  puVar25 = (ulong *)(*(long *)(lVar18 + (uVar21 / 0xaa) * 8) +
                                     (uVar21 % 0xaa) * 0x18);
                }
                *puVar25 = 0;
                puVar25[1] = 0;
                puVar25[2] = 0;
                if (((byte)local_c0 & 1) == 0) {
                  puVar25[2] = (ulong)local_b0;
                  puVar25[1] = (ulong)pbStack_b8;
                  *puVar25 = CONCAT71(uStack_bf,local_c0);
                }
                else {
                  if ((basic_string *)0xffffffffffffffef < pbStack_b8) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (pbStack_b8 < (basic_string *)0x17) {
                    pvVar24 = (void *)((long)puVar25 + 1);
                    *(char *)puVar25 = (char)((int)pbStack_b8 << 1);
                    if (pbStack_b8 != (basic_string *)0x0) goto LAB_00c4b6e8;
                  }
                  else {
                    pbVar17 = pbStack_b8 + 0x10;
                    pvVar24 = operator_new((ulong)pbVar17 & 0xfffffffffffffff0);
                    puVar25[1] = (ulong)pbVar1;
                    puVar25[2] = (ulong)pvVar24;
                    *puVar25 = (ulong)pbVar17 & 0xfffffffffffffff0 | 1;
LAB_00c4b6e8:
                    pbVar17 = pbVar1;
                    memcpy(pvVar24,pcVar11,(size_t)pbVar1);
                  }
                  *(basic_string *)((long)pvVar24 + (long)pbVar1) = (basic_string)0x0;
                }
                *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + 1;
              }
              if (((byte)local_c0 & 1) != 0) {
                operator_delete(local_b0);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 != uVar8);
          }
        }
      }
      else {
        pvVar24 = (void *)((ulong)&local_a8 | 1);
        if ((local_a8 & 1) != 0) {
          pvVar24 = local_98;
        }
        iVar6 = memcmp(pvVar24,"config_file_path",(size_t)pbVar17);
        if (iVar6 == 0) goto LAB_00c4b454;
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 < (int)uVar7);
  }
LAB_00c4b71c:
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
LAB_00c4b72c:
  CocoLoader::~CocoLoader(aCStack_90);
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

