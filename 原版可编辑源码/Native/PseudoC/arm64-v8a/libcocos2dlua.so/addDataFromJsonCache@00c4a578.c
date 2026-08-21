
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::DataReaderHelper::addDataFromJsonCache(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocostudio::DataReaderHelper::_DataInfo*) */

void cocostudio::DataReaderHelper::addDataFromJsonCache(basic_string *param_1,_DataInfo *param_2)

{
  __ndk1 *this;
  void *pvVar1;
  basic_string bVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  DictionaryHelper *pDVar6;
  GenericValue *pGVar7;
  Ref *pRVar8;
  ArmatureDataManager *pAVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  basic_string *pbVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  ulong *puVar19;
  void *pvVar20;
  undefined4 uVar21;
  basic_string local_190 [16];
  void *local_180;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_178 [16];
  void *local_168;
  basic_string local_160 [16];
  void *local_150;
  basic_string local_148 [16];
  void *local_138;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_130;
  undefined7 uStack_12f;
  ulong uStack_128;
  void *local_120;
  basic_string *local_118;
  basic_string *local_110;
  void *local_108 [2];
  undefined8 *local_f8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  local_d0 = 0;
  uStack_b8 = 0;
  puStack_c0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  local_e0 = 0;
  local_90 = 0x400;
  local_88 = 0;
  local_80 = 0;
  puStack_c8 = operator_new(0x28);
  puStack_c8[3] = 0;
  puStack_c8[4] = 0;
  puStack_c8[1] = 0x10000;
  puStack_c8[2] = 0;
  *puStack_c8 = 0;
  bVar2 = *param_1;
  if (((byte)bVar2 & 1) == 0) {
    local_110 = param_1 + 1;
    uVar14 = (ulong)((byte)bVar2 >> 1);
  }
  else {
    uVar14 = *(ulong *)(param_1 + 8);
    local_110 = *(basic_string **)(param_1 + 0x10);
  }
  local_118 = local_110;
  if (2 < uVar14) {
    pbVar15 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar15 = param_1 + 1;
    }
    if (*(int3 *)pbVar15 == -0x404411) {
      local_118 = local_110 + 3;
    }
  }
  puStack_c0 = puStack_c8;
  rapidjson::
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
  ::ParseStream<0u,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
            ((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
              *)&local_e0,(GenericStringStream *)&local_118);
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar21 = DictionaryHelper::getFloatValue_json
                     (pDVar6,(GenericValue *)&local_e0,"content_scale",1.0);
  *(undefined4 *)(param_2 + 0x38) = uVar21;
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar5 = DictionaryHelper::getArrayCount_json(pDVar6,(GenericValue *)&local_e0,"armature_data",0);
  if (0 < iVar5) {
    iVar17 = 0;
    do {
      pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pGVar7 = (GenericValue *)
               DictionaryHelper::getSubDictionary_json
                         (pDVar6,(GenericValue *)&local_e0,"armature_data",iVar17);
      pRVar8 = (Ref *)decodeArmature(pGVar7,param_2);
      if (*(long *)param_2 != 0) {
        std::__ndk1::mutex::lock((mutex *)(_dataReaderHelper + 0xd8));
      }
      pAVar9 = (ArmatureDataManager *)ArmatureDataManager::getInstance();
      ArmatureDataManager::addArmatureData
                (pAVar9,(basic_string *)(pRVar8 + 0x28),(ArmatureData *)pRVar8,
                 (basic_string *)(param_2 + 0x40));
      cocos2d::Ref::release(pRVar8);
      if (*(long *)param_2 != 0) {
        std::__ndk1::mutex::unlock((mutex *)(_dataReaderHelper + 0xd8));
      }
      iVar17 = iVar17 + 1;
    } while (iVar5 != iVar17);
  }
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar5 = DictionaryHelper::getArrayCount_json(pDVar6,(GenericValue *)&local_e0,"animation_data",0);
  if (0 < iVar5) {
    iVar17 = 0;
    do {
      pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pGVar7 = (GenericValue *)
               DictionaryHelper::getSubDictionary_json
                         (pDVar6,(GenericValue *)&local_e0,"animation_data",iVar17);
      pRVar8 = (Ref *)decodeAnimation(pGVar7,param_2);
      if (*(long *)param_2 != 0) {
        std::__ndk1::mutex::lock((mutex *)(_dataReaderHelper + 0xd8));
      }
      pAVar9 = (ArmatureDataManager *)ArmatureDataManager::getInstance();
      ArmatureDataManager::addAnimationData
                (pAVar9,(basic_string *)(pRVar8 + 0x28),(AnimationData *)pRVar8,
                 (basic_string *)(param_2 + 0x40));
      cocos2d::Ref::release(pRVar8);
      if (*(long *)param_2 != 0) {
        std::__ndk1::mutex::unlock((mutex *)(_dataReaderHelper + 0xd8));
      }
      iVar17 = iVar17 + 1;
    } while (iVar5 != iVar17);
  }
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar5 = DictionaryHelper::getArrayCount_json(pDVar6,(GenericValue *)&local_e0,"texture_data",0);
  if (0 < iVar5) {
    iVar17 = 0;
    do {
      pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pGVar7 = (GenericValue *)
               DictionaryHelper::getSubDictionary_json
                         (pDVar6,(GenericValue *)&local_e0,"texture_data",iVar17);
      pRVar8 = (Ref *)decodeTexture(pGVar7);
      if (*(long *)param_2 != 0) {
        std::__ndk1::mutex::lock((mutex *)(_dataReaderHelper + 0xd8));
      }
      pAVar9 = (ArmatureDataManager *)ArmatureDataManager::getInstance();
      ArmatureDataManager::addTextureData
                (pAVar9,(basic_string *)(pRVar8 + 0x38),(TextureData *)pRVar8,
                 (basic_string *)(param_2 + 0x40));
      cocos2d::Ref::release(pRVar8);
      if (*(long *)param_2 != 0) {
        std::__ndk1::mutex::unlock((mutex *)(_dataReaderHelper + 0xd8));
      }
      iVar17 = iVar17 + 1;
    } while (iVar5 != iVar17);
  }
  if (*(long *)param_2 == 0) {
    pAVar9 = (ArmatureDataManager *)ArmatureDataManager::getInstance();
    uVar14 = ArmatureDataManager::isAutoLoadSpriteFile(pAVar9);
    if ((uVar14 & 1) == 0) goto LAB_00c4ad00;
  }
  else if (*(char *)(*(long *)param_2 + 0x68) == '\0') goto LAB_00c4ad00;
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar5 = DictionaryHelper::getArrayCount_json
                    (pDVar6,(GenericValue *)&local_e0,"config_file_path",0);
  if (0 < iVar5) {
    iVar17 = 0;
    this = (__ndk1 *)(param_2 + 0x58);
    while( true ) {
      pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pbVar15 = (basic_string *)"config_file_path";
      pcVar10 = (char *)DictionaryHelper::getStringValueFromArray_json
                                  (pDVar6,(GenericValue *)&local_e0,"config_file_path",iVar17,
                                   (char *)0x0);
      if (pcVar10 == (char *)0x0) break;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_130,pcVar10);
      pvVar1 = (void *)((ulong)&local_130 | 1);
      uVar14 = (ulong)((byte)local_130 >> 1);
      if (((byte)local_130 & 1) != 0) {
        pvVar1 = local_120;
        uVar14 = uStack_128;
      }
      uVar16 = uVar14;
      if (uVar14 == 0) {
LAB_00c4ad3c:
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      do {
        if (uVar16 == 0) {
          uVar16 = 0xffffffffffffffff;
          break;
        }
        lVar12 = uVar16 - 1;
        uVar16 = uVar16 - 1;
      } while (*(char *)((long)pvVar1 + lVar12) != '.');
      if (uVar14 < uVar16) goto LAB_00c4ad3c;
      uVar14 = uVar16;
      if (((byte)local_130 & 1) == 0) {
        local_130 = SUB41((int)uVar16 << 1,0);
        uVar14 = uStack_128;
      }
      uStack_128 = uVar14;
      *(undefined1 *)((long)pvVar1 + uVar16) = 0;
      if (*(long *)param_2 == 0) {
        FUN_007c1fb0(local_148,&local_130,".plist");
        FUN_007c1fb0(local_160,&local_130,&DAT_0144877a);
        plVar11 = (long *)cocos2d::FileUtils::getInstance();
        std::__ndk1::operator+(this,local_148,pbVar15);
        uVar14 = (**(code **)(*plVar11 + 0x128))(plVar11,local_108);
        if ((uVar14 & 1) == 0) {
          uVar14 = 0;
joined_r0x00c4aaf0:
          if (((ulong)local_108[0] & 1) != 0) goto LAB_00c4aaf4;
LAB_00c4aa90:
          if ((uVar14 & 1) != 0) goto LAB_00c4ab00;
LAB_00c4acd4:
          iVar18 = 0;
        }
        else {
          plVar11 = (long *)cocos2d::FileUtils::getInstance();
          std::__ndk1::operator+(this,local_160,pbVar15);
          uVar14 = (**(code **)(*plVar11 + 0x128))(plVar11,local_178);
          uVar14 = uVar14 & 0xffffffff;
          if (((byte)local_178[0] & 1) != 0) {
            operator_delete(local_168);
            goto joined_r0x00c4aaf0;
          }
          if (((ulong)local_108[0] & 1) == 0) goto LAB_00c4aa90;
LAB_00c4aaf4:
          operator_delete(local_f8);
          if ((uVar14 & 1) == 0) goto LAB_00c4acd4;
LAB_00c4ab00:
          plVar11 = (long *)cocos2d::FileUtils::getInstance();
          std::__ndk1::operator+(this,local_148,pbVar15);
          (**(code **)(*plVar11 + 0xc0))(local_108,plVar11,local_178);
          if (((byte)local_178[0] & 1) != 0) {
            operator_delete(local_168);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_178,"particleLifespan");
          lVar12 = std::__ndk1::
                   __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                   ::
                   find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                               *)local_108,(basic_string *)local_178);
          if (((byte)local_178[0] & 1) != 0) {
            operator_delete(local_168);
          }
          if (lVar12 == 0) {
            pAVar9 = (ArmatureDataManager *)ArmatureDataManager::getInstance();
            std::__ndk1::operator+(this,local_148,pbVar15);
            std::__ndk1::operator+(this,local_160,pbVar15);
            ArmatureDataManager::addSpriteFrameFromFile
                      (pAVar9,(basic_string *)local_178,local_190,(basic_string *)(param_2 + 0x40));
            if (((byte)local_190[0] & 1) != 0) {
              operator_delete(local_180);
            }
            if (((byte)local_178[0] & 1) != 0) {
              operator_delete(local_168);
            }
            iVar18 = 0;
            pvVar1 = local_108[0];
            puVar4 = local_f8;
          }
          else {
            iVar18 = 0xf;
            pvVar1 = local_108[0];
            puVar4 = local_f8;
          }
          while (puVar4 != (void *)0x0) {
            pvVar20 = (void *)*puVar4;
            local_108[0] = pvVar1;
            cocos2d::Value::~Value((Value *)(puVar4 + 5));
            if ((*(byte *)(puVar4 + 2) & 1) != 0) {
              operator_delete((void *)puVar4[4]);
            }
            operator_delete(puVar4);
            pvVar1 = local_108[0];
            puVar4 = pvVar20;
          }
          local_108[0] = (void *)0x0;
          if (pvVar1 != (void *)0x0) {
            operator_delete(pvVar1);
          }
          if (iVar18 == 0) goto LAB_00c4acd4;
        }
        if (((byte)local_160[0] & 1) != 0) {
          operator_delete(local_150);
        }
        if (((byte)local_148[0] & 1) != 0) {
          operator_delete(local_138);
        }
        if (iVar18 == 0) goto LAB_00c4abc4;
      }
      else {
        lVar12 = *(long *)(param_2 + 0x10);
        lVar13 = *(long *)(param_2 + 0x18);
        uVar14 = 0;
        if (lVar13 - lVar12 != 0) {
          uVar14 = (lVar13 - lVar12 >> 3) * 0xaa - 1;
        }
        uVar16 = *(long *)(param_2 + 0x30) + *(long *)(param_2 + 0x28);
        if (uVar14 == uVar16) {
          std::__ndk1::
          deque<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::__add_back_capacity
                    ((deque<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)(param_2 + 8));
          lVar12 = *(long *)(param_2 + 0x10);
          lVar13 = *(long *)(param_2 + 0x18);
          uVar16 = *(long *)(param_2 + 0x28) + *(long *)(param_2 + 0x30);
        }
        pvVar1 = local_120;
        uVar14 = uStack_128;
        if (lVar13 == lVar12) {
          puVar19 = (ulong *)0x0;
        }
        else {
          puVar19 = (ulong *)(*(long *)(lVar12 + (uVar16 / 0xaa) * 8) + (uVar16 % 0xaa) * 0x18);
        }
        *puVar19 = 0;
        puVar19[1] = 0;
        puVar19[2] = 0;
        if (((byte)local_130 & 1) == 0) {
          puVar19[2] = (ulong)local_120;
          puVar19[1] = uStack_128;
          *puVar19 = CONCAT71(uStack_12f,local_130);
        }
        else {
          if (0xffffffffffffffef < uStack_128) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uStack_128 < 0x17) {
            pvVar20 = (void *)((long)puVar19 + 1);
            *(char *)puVar19 = (char)((int)uStack_128 << 1);
            if (uStack_128 != 0) goto LAB_00c4aba4;
          }
          else {
            uVar16 = uStack_128 + 0x10 & 0xfffffffffffffff0;
            pvVar20 = operator_new(uVar16);
            puVar19[1] = uVar14;
            puVar19[2] = (ulong)pvVar20;
            *puVar19 = uVar16 | 1;
LAB_00c4aba4:
            memcpy(pvVar20,pvVar1,uVar14);
          }
          *(undefined1 *)((long)pvVar20 + uVar14) = 0;
        }
        *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + 1;
LAB_00c4abc4:
        iVar18 = 0;
      }
      if (((byte)local_130 & 1) != 0) {
        operator_delete(local_120);
      }
      if (((iVar18 != 0xf) && (iVar18 != 0)) || (iVar17 = iVar17 + 1, iVar17 == iVar5)) break;
    }
  }
LAB_00c4ad00:
  rapidjson::
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
  ::~GenericDocument((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                      *)&local_e0);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

