
/* WARNING: Type propagation algorithm not settling */
/* cocosbuilder::NodeLoader::parsePropTypeCCBFile(cocos2d::Node*, cocos2d::Node*,
   cocosbuilder::CCBReader*) */

long __thiscall
cocosbuilder::NodeLoader::parsePropTypeCCBFile
          (NodeLoader *this,Node *param_1,Node *param_2,CCBReader *param_3)

{
  Data *this_00;
  __shared_weak_count *p_Var1;
  byte *pbVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  byte *pbVar10;
  ulong *puVar11;
  long *plVar12;
  __shared_weak_count *this_01;
  CCBReader *pCVar13;
  CCBAnimationManager *pCVar14;
  Size *pSVar15;
  undefined8 uVar16;
  CCBAnimationManager *this_02;
  ulong uVar17;
  undefined8 **ppuVar18;
  Value *pVVar19;
  char *extraout_x1;
  char *pcVar20;
  long lVar21;
  long lVar22;
  Value *this_03;
  __shared_weak_count *p_Var23;
  __shared_weak_count *p_Var24;
  long lVar25;
  undefined1 auVar26 [16];
  byte local_130 [16];
  void *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 uStack_108;
  basic_string local_100;
  undefined7 uStack_ff;
  Value *local_f8;
  void *local_f0;
  Value *local_e8;
  Value *local_e0;
  undefined1 auStack_d0 [8];
  __shared_weak_count *local_c8;
  byte local_c0 [8];
  undefined8 uStack_b8;
  void *local_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  ulong local_90;
  ulong uStack_88;
  CCBReader *local_80;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  pbVar10 = (byte *)CCBReader::getCCBRootPath(param_3);
  CCBReader::readCachedString();
  uVar17 = *(ulong *)(pbVar10 + 8);
  pbVar2 = *(byte **)(pbVar10 + 0x10);
  if ((*pbVar10 & 1) == 0) {
    pbVar2 = pbVar10 + 1;
    uVar17 = (ulong)(*pbVar10 >> 1);
  }
  auVar26 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                      (local_a8,0,(char *)pbVar2,uVar17);
  pcVar20 = auVar26._8_8_;
  puVar11 = auVar26._0_8_;
  local_80 = (CCBReader *)puVar11[2];
  uStack_88 = puVar11[1];
  local_90 = *puVar11;
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = 0;
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
    pcVar20 = extraout_x1;
  }
  pCVar13 = (CCBReader *)((ulong)&local_90 | 1);
  if ((local_90 & 1) != 0) {
    pCVar13 = local_80;
  }
  CCBReader::deletePathExtension(pCVar13,pcVar20);
  FUN_007c1fb0(local_c0,local_a8,".ccbi");
  if ((local_90 & 1) != 0) {
    *local_80 = (CCBReader)0x0;
    uStack_88 = 0;
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
  }
  local_90 = (ulong)local_c0[0];
  uStack_88 = uStack_b8;
  local_80 = local_b0;
  plVar12 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar12 + 0x50))(local_c0,plVar12,&local_90);
  plVar12 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar12 + 0x28))(&local_e8,plVar12,local_c0);
  this_01 = operator_new(0x28);
  *(undefined8 *)(this_01 + 0x10) = 0;
  p_Var24 = this_01 + 8;
  *(long *)p_Var24 = 0;
  this_00 = (Data *)(this_01 + 0x18);
  *(undefined ***)this_01 = &PTR____shared_ptr_emplace_016cfc60;
  cocos2d::Data::Data(this_00,(Data *)&local_e8);
  cocos2d::Data::~Data((Data *)&local_e8);
  pCVar13 = operator_new(0x188,(nothrow_t *)&std::nothrow);
  if (pCVar13 != (CCBReader *)0x0) {
    CCBReader::CCBReader(pCVar13,param_3);
  }
  cocos2d::Ref::autorelease((Ref *)pCVar13);
  pCVar14 = (CCBAnimationManager *)CCBReader::getAnimationManager(pCVar13);
  pSVar15 = (Size *)(**(code **)(*(long *)param_2 + 0x168))(param_2);
  CCBAnimationManager::setRootContainerSize(pCVar14,pSVar15);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(p_Var24,0x10);
    if (bVar4) {
      *(long *)p_Var24 = *(long *)p_Var24 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  p_Var23 = *(__shared_weak_count **)(pCVar13 + 0x30);
  *(Data **)(pCVar13 + 0x28) = this_00;
  *(__shared_weak_count **)(pCVar13 + 0x30) = this_01;
  if (p_Var23 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var23 + 8;
    do {
      lVar21 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar21 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*(long *)p_Var23 + 0x10))(p_Var23);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var23);
    }
  }
  uVar16 = cocos2d::Data::getBytes(this_00);
  *(undefined8 *)(pCVar13 + 0x38) = uVar16;
  *(undefined8 *)(pCVar13 + 0x40) = 0;
  uVar16 = 0;
  if (*(Ref **)(param_3 + 0x78) != (Ref *)0x0) {
    cocos2d::Ref::retain(*(Ref **)(param_3 + 0x78));
    uVar16 = *(undefined8 *)(param_3 + 0x78);
  }
  *(undefined8 *)(pCVar13 + 0x78) = uVar16;
  lVar21 = CCBReader::getAnimationManager(pCVar13);
  *(undefined8 *)(lVar21 + 0x28) = uVar16;
  CCBReader::getAnimationManagers();
  lVar21 = CCBReader::readFileWithCleanUp(pCVar13,0,auStack_d0);
  if (local_c8 != (__shared_weak_count *)0x0) {
    p_Var23 = local_c8 + 8;
    do {
      lVar22 = *(long *)p_Var23;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var23,0x10);
      if (bVar4) {
        *(long *)p_Var23 = lVar22 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*(long *)local_c8 + 0x10))(local_c8);
      std::__ndk1::__shared_weak_count::__release_weak(local_c8);
    }
  }
  if (lVar21 != 0) {
    pCVar14 = (CCBAnimationManager *)CCBReader::getAnimationManager(pCVar13);
    iVar9 = CCBAnimationManager::getAutoPlaySequenceId(pCVar14);
    if (iVar9 != -1) {
      pCVar14 = (CCBAnimationManager *)CCBReader::getAnimationManager(pCVar13);
      this_02 = (CCBAnimationManager *)CCBReader::getAnimationManager(pCVar13);
      iVar9 = CCBAnimationManager::getAutoPlaySequenceId(this_02);
      CCBAnimationManager::runAnimationsForSequenceIdTweenDuration(pCVar14,iVar9,0.0);
    }
  }
  uVar17 = CCBReader::isJSControlled(pCVar13);
  if ((((uVar17 & 1) != 0) && (uVar17 = CCBReader::isJSControlled(param_3), (uVar17 & 1) != 0)) &&
     (*(long *)(pCVar13 + 0x78) == 0)) {
    CCBReader::getOwnerCallbackNames();
    plVar12 = (long *)CCBReader::getOwnerCallbackNodes(pCVar13);
    if (((local_e8 != local_e0) && (*plVar12 != plVar12[1])) &&
       (lVar22 = (long)local_e0 - (long)local_e8, 0 < lVar22)) {
      lVar25 = 0;
      do {
        cocos2d::Value::asString();
        CCBReader::addOwnerCallbackName(param_3,&local_100);
        if (((byte)local_100 & 1) != 0) {
          operator_delete(local_f0);
        }
        CCBReader::addOwnerCallbackNode(param_3,*(Node **)(*plVar12 + lVar25 * 8));
        lVar25 = lVar25 + 1;
      } while (lVar25 < lVar22 >> 4);
    }
    CCBReader::getOwnerOutletNames();
    ppuVar18 = (undefined8 **)CCBReader::getOwnerOutletNodes(pCVar13);
    local_110 = (undefined8 *)0x0;
    uStack_108 = 0;
    local_118 = (undefined8 *)0x0;
    if (&local_118 != ppuVar18) {
      std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
      assign<cocos2d::Node**>
                ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)&local_118,
                 (Node **)*ppuVar18,(Node **)ppuVar18[1]);
      puVar7 = local_110;
      for (puVar6 = local_118; puVar6 != puVar7; puVar6 = puVar6 + 1) {
        cocos2d::Ref::retain((Ref *)*puVar6);
      }
    }
    pVVar19 = (Value *)CONCAT71(uStack_ff,local_100);
    puVar6 = local_118;
    puVar7 = local_110;
    if (((pVVar19 != local_f8) && (local_118 != local_110)) &&
       (lVar22 = (long)local_f8 - (long)pVVar19, 0 < lVar22)) {
      if (local_f8 != pVVar19) {
        uVar17 = 0;
        do {
          cocos2d::Value::asString();
          CCBReader::addOwnerOutletName(param_3,local_130);
          if ((local_130[0] & 1) != 0) {
            operator_delete(local_120);
          }
          CCBReader::addOwnerOutletNode(param_3,(Node *)local_118[uVar17]);
          uVar17 = uVar17 + 1;
          puVar6 = local_118;
          puVar7 = local_110;
          if (lVar22 >> 4 <= (long)uVar17) goto joined_r0x00d04580;
        } while (uVar17 < (ulong)((long)local_f8 - CONCAT71(uStack_ff,local_100) >> 4));
      }
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
    }
joined_r0x00d04580:
    for (; puVar8 = local_110, puVar6 != local_110; puVar6 = puVar6 + 1) {
      local_110 = puVar7;
      cocos2d::Ref::release((Ref *)*puVar6);
      puVar7 = local_110;
      local_110 = puVar8;
    }
    local_110 = local_118;
    if (local_118 != (undefined8 *)0x0) {
      operator_delete(local_118);
    }
    pVVar19 = (Value *)CONCAT71(uStack_ff,local_100);
    if (pVVar19 != (Value *)0x0) {
      this_03 = local_f8;
      if (local_f8 != pVVar19) {
        do {
          this_03 = this_03 + -0x10;
          cocos2d::Value::~Value(this_03);
        } while (pVVar19 != this_03);
        pVVar19 = (Value *)CONCAT71(uStack_ff,local_100);
      }
      operator_delete(pVVar19);
    }
    pVVar19 = local_e8;
    if (local_e8 != (Value *)0x0) {
      while (local_e0 != pVVar19) {
        cocos2d::Value::~Value(local_e0 + -0x10);
        local_e0 = local_e0 + -0x10;
      }
      local_e0 = pVVar19;
      operator_delete(local_e8);
    }
  }
  do {
    lVar22 = *(long *)p_Var24;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(p_Var24,0x10);
    if (bVar4) {
      *(long *)p_Var24 = lVar22 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar22 == 0) {
    (**(code **)(*(long *)this_01 + 0x10))(this_01);
    std::__ndk1::__shared_weak_count::__release_weak(this_01);
  }
  if ((local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if (((byte)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return lVar21;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

