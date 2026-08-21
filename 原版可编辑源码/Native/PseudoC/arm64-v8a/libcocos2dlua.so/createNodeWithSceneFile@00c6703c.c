
/* cocostudio::SceneReader::createNodeWithSceneFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocostudio::SceneReader::AttachComponentType) */

undefined8 __thiscall
cocostudio::SceneReader::createNodeWithSceneFile
          (SceneReader *this,basic_string *param_1,undefined4 param_3)

{
  int *piVar1;
  void *pvVar2;
  long lVar3;
  SceneReader *pSVar4;
  Component *pCVar5;
  stExpCocoNode *this_00;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  TriggerMng *pTVar11;
  char *pcVar12;
  stExpCocoNode *psVar13;
  stExpCocoNode *psVar14;
  SceneReader *pSVar15;
  ulong uVar16;
  SceneReader *this_01;
  SceneReader *extraout_x0;
  long lVar17;
  basic_string *pbVar18;
  undefined8 *puVar19;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_198 [16];
  void *local_188;
  Component *local_180;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_178 [8];
  ulong local_170;
  void *local_168;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_160 [8];
  ulong local_158;
  void *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *puStack_138;
  Data aDStack_130 [16];
  byte local_120 [16];
  void *local_110;
  byte local_108 [8];
  ulong local_100;
  int *local_f8;
  SceneReader *local_f0;
  Ref *pRStack_e8;
  undefined8 local_e0;
  stExpCocoNode *psStack_d8;
  undefined8 local_d0;
  SceneReader *pSStack_c8;
  SceneReader *pSStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  plVar8 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar8 + 0x138))(local_108,plVar8,param_1);
  uVar9 = (ulong)(local_108[0] >> 1);
  if ((local_108[0] & 1) != 0) {
    uVar9 = local_100;
  }
  if (uVar9 == 4) {
    piVar1 = (int *)((ulong)local_108 | 1);
    if ((local_108[0] & 1) != 0) {
      piVar1 = local_f8;
    }
    if (*piVar1 == 0x6273632e) {
      plVar8 = (long *)cocos2d::FileUtils::getInstance();
      (**(code **)(*plVar8 + 0x50))(local_120,plVar8,param_1);
      plVar8 = (long *)cocos2d::FileUtils::getInstance();
      (**(code **)(*plVar8 + 0x28))(aDStack_130,plVar8,local_120);
      pcVar12 = (char *)cocos2d::Data::getBytes(aDStack_130);
      uVar9 = cocos2d::Data::isNull(aDStack_130);
      if ((uVar9 & 1) == 0) {
        CocoLoader::CocoLoader((CocoLoader *)&local_e0);
        uVar9 = CocoLoader::ReadCocoBinBuff((CocoLoader *)&local_e0,pcVar12);
        this_00 = psStack_d8;
        if (((uVar9 & 1) != 0) &&
           (iVar6 = stExpCocoNode::GetType(psStack_d8,(CocoLoader *)&local_e0), iVar6 == 3)) {
          psVar13 = (stExpCocoNode *)stExpCocoNode::GetChildArray(this_00,(CocoLoader *)&local_e0);
          iVar6 = stExpCocoNode::GetChildNum(this_00);
          if (iVar6 != 0) {
            uVar10 = cocos2d::Node::create();
            psVar14 = psVar13 + 0xf0;
            *(undefined8 *)(this + 0x40) = uVar10;
            local_140 = (undefined8 *)0x0;
            puStack_138 = (undefined8 *)0x0;
            local_148 = (undefined8 *)0x0;
            pcVar12 = (char *)stExpCocoNode::GetName(psVar14,(CocoLoader *)&local_e0);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_160,pcVar12);
            uVar9 = (ulong)((byte)local_160[0] >> 1);
            if (((byte)local_160[0] & 1) != 0) {
              uVar9 = local_158;
            }
            if (uVar9 == 10) {
              pvVar2 = (void *)((ulong)local_160 | 1);
              if (((byte)local_160[0] & 1) != 0) {
                pvVar2 = local_150;
              }
              iVar6 = memcmp(pvVar2,"components",10);
              if (iVar6 != 0) goto LAB_00c672f8;
              uVar7 = stExpCocoNode::GetChildNum(psVar14);
            }
            else {
LAB_00c672f8:
              uVar7 = 0;
            }
            psVar14 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar14,(CocoLoader *)&local_e0)
            ;
            pSVar15 = operator_new(0x18,(nothrow_t *)&std::nothrow);
            if (pSVar15 == (SceneReader *)0x0) {
              pSVar4 = (SceneReader *)0x0;
            }
            else {
              *(undefined8 *)pSVar15 = 0;
              *(undefined8 *)(pSVar15 + 8) = 0;
              *(undefined8 *)(pSVar15 + 0x10) = 0;
              pSVar4 = pSVar15;
            }
            this_01 = pSVar15;
            if (0 < (int)uVar7) {
              uVar9 = (ulong)uVar7;
              do {
                lVar17 = stExpCocoNode::GetChildArray(psVar14,(CocoLoader *)&local_e0);
                this_01 = (SceneReader *)0x0;
                if (lVar17 != 0) {
                  pcVar12 = (char *)stExpCocoNode::GetName
                                              ((stExpCocoNode *)(lVar17 + 0x10),
                                               (CocoLoader *)&local_e0);
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string<decltype(nullptr)>(local_178,pcVar12);
                  pcVar12 = (char *)stExpCocoNode::GetValue
                                              ((stExpCocoNode *)(lVar17 + 0x10),
                                               (CocoLoader *)&local_e0);
                  local_180 = (Component *)0x0;
                  uVar16 = (ulong)((byte)local_178[0] >> 1);
                  if (((byte)local_178[0] & 1) != 0) {
                    uVar16 = local_170;
                  }
                  if (uVar16 == 9) {
                    pvVar2 = (void *)((ulong)local_178 | 1);
                    if (((byte)local_178[0] & 1) != 0) {
                      pvVar2 = local_168;
                    }
                    iVar6 = memcmp(pvVar2,"classname",9);
                    if ((pcVar12 == (char *)0x0) || (iVar6 != 0)) goto LAB_00c674b0;
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    basic_string<decltype(nullptr)>(local_198,pcVar12);
                    local_180 = (Component *)createComponent(this,local_198);
                    if (((byte)local_198[0] & 1) != 0) {
                      operator_delete(local_188);
                    }
                    if (local_180 == (Component *)0x0) goto LAB_00c674b0;
                    *(undefined8 *)pSVar4 = 0;
                    *(long *)(pSVar4 + 8) = lVar17;
                    *(undefined8 **)(pSVar4 + 0x10) = &local_e0;
                    uVar16 = (**(code **)(*(long *)local_180 + 0x38))(local_180,pSVar15);
                    pCVar5 = local_180;
                    if ((uVar16 & 1) == 0) {
                      if (local_180 == (Component *)0x0) goto LAB_00c674b0;
                      cocos2d::Ref::release((Ref *)local_180);
                      local_180 = (Component *)0x0;
                      plVar8 = *(long **)(this + 0x30);
                      if (plVar8 == (long *)0x0) {
                        this_01 = (SceneReader *)0x0;
                        goto LAB_00c674d4;
                      }
                      goto LAB_00c674b8;
                    }
                    if ((local_180 != (Component *)0x0) &&
                       (lVar17 = __dynamic_cast(local_180,&cocos2d::Component::typeinfo,
                                                &ComRender::typeinfo,0), lVar17 != 0))
                    goto LAB_00c674b0;
                    if (local_140 == puStack_138) {
                      std::__ndk1::
                      vector<cocos2d::Component*,std::__ndk1::allocator<cocos2d::Component*>>::
                      __push_back_slow_path<cocos2d::Component*const&>
                                ((vector<cocos2d::Component*,std::__ndk1::allocator<cocos2d::Component*>>
                                  *)&local_148,&local_180);
                      goto LAB_00c674b0;
                    }
                    puVar19 = local_140 + 1;
                    *local_140 = pCVar5;
                    plVar8 = *(long **)(this + 0x30);
                    local_140 = puVar19;
                    if (plVar8 != (long *)0x0) goto LAB_00c674b8;
                    this_01 = (SceneReader *)0x0;
                  }
                  else {
LAB_00c674b0:
                    plVar8 = *(long **)(this + 0x30);
                    this_01 = (SceneReader *)0x0;
                    if (plVar8 != (long *)0x0) {
LAB_00c674b8:
                      pRStack_e8 = (Ref *)local_180;
                      local_f0 = pSVar15;
                      this_01 = (SceneReader *)
                                (**(code **)(*plVar8 + 0x30))(plVar8,&pRStack_e8,&local_f0);
                    }
                  }
LAB_00c674d4:
                  if (((byte)local_178[0] & 1) != 0) {
                    operator_delete(local_168);
                    this_01 = extraout_x0;
                  }
                }
                uVar9 = uVar9 - 1;
                psVar14 = psVar14 + 0x10;
              } while (uVar9 != 0);
            }
            setPropertyFromJsonDict(this_01,(CocoLoader *)&local_e0,this_00,*(Node **)(this + 0x40))
            ;
            puVar19 = local_148;
            if (local_148 != local_140) {
              do {
                (**(code **)(**(long **)(this + 0x40) + 0x460))(*(long **)(this + 0x40),*puVar19);
                puVar19 = puVar19 + 1;
              } while (puVar19 != local_140);
            }
            lVar17 = stExpCocoNode::GetChildArray(psVar13 + 0xb0,(CocoLoader *)&local_e0);
            uVar7 = stExpCocoNode::GetChildNum(psVar13 + 0xb0);
            if (0 < (int)uVar7) {
              uVar9 = (ulong)uVar7;
              do {
                createObject(this,&local_e0,lVar17,*(undefined8 *)(this + 0x40),param_3);
                uVar9 = uVar9 - 1;
                lVar17 = lVar17 + 0x10;
              } while (uVar9 != 0);
            }
            pTVar11 = (TriggerMng *)TriggerMng::getInstance();
            TriggerMng::parse(pTVar11,(CocoLoader *)&local_e0,psVar13);
            if (((byte)local_160[0] & 1) != 0) {
              operator_delete(local_150);
            }
            if (local_148 != (undefined8 *)0x0) {
              local_140 = local_148;
              operator_delete(local_148);
            }
          }
        }
        CocoLoader::~CocoLoader((CocoLoader *)&local_e0);
      }
      cocos2d::Data::~Data(aDStack_130);
      if ((local_120[0] & 1) != 0) {
        operator_delete(local_110);
      }
      uVar10 = *(undefined8 *)(this + 0x40);
      goto joined_r0x00c675d0;
    }
  }
  else if (uVar9 == 5) {
    piVar1 = (int *)((ulong)local_108 | 1);
    if ((local_108[0] & 1) != 0) {
      piVar1 = local_f8;
    }
    iVar6 = memcmp(piVar1,".json",5);
    if (iVar6 == 0) {
      *(undefined8 *)(this + 0x40) = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      pSStack_c8 = (SceneReader *)0x0;
      local_d0 = 0;
      uStack_b8 = 0;
      pSStack_c0 = (SceneReader *)0x0;
      psStack_d8 = (stExpCocoNode *)0x0;
      local_e0 = 0;
      local_90 = 0x400;
      local_88 = 0;
      local_80 = 0;
      pSStack_c8 = operator_new(0x28);
      *(undefined8 *)(pSStack_c8 + 0x18) = 0;
      *(undefined8 *)(pSStack_c8 + 0x20) = 0;
      *(undefined8 *)(pSStack_c8 + 8) = 0x10000;
      *(undefined8 *)(pSStack_c8 + 0x10) = 0;
      *(undefined8 *)pSStack_c8 = 0;
      pSStack_c0 = pSStack_c8;
      uVar9 = readJson(pSStack_c8,param_1,(GenericDocument *)&local_e0);
      if ((uVar9 & 1) != 0) {
        uVar10 = createObject(this,&local_e0,0,param_3);
        *(undefined8 *)(this + 0x40) = uVar10;
        pTVar11 = (TriggerMng *)TriggerMng::getInstance();
        TriggerMng::parse(pTVar11,(GenericValue *)&local_e0);
      }
      uVar10 = *(undefined8 *)(this + 0x40);
      rapidjson::
      GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
      ::~GenericDocument((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                          *)&local_e0);
      goto joined_r0x00c675d0;
    }
  }
  pbVar18 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar18 = param_1 + 1;
  }
  cocos2d::log("read file [%s] error!\n",pbVar18);
  uVar10 = 0;
joined_r0x00c675d0:
  if ((local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

