
/* cocostudio::WidgetPropertiesReader0300::createWidgetFromBinary(cocostudio::CocoLoader*,
   cocostudio::stExpCocoNode*, char const*) */

Ref * __thiscall
cocostudio::WidgetPropertiesReader0300::createWidgetFromBinary
          (WidgetPropertiesReader0300 *this,CocoLoader *param_1,stExpCocoNode *param_2,char *param_3
          )

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  size_t sVar8;
  SpriteFrameCache *this_00;
  GUIReader *pGVar9;
  Director *this_01;
  Size *pSVar10;
  ulong uVar11;
  long *plVar12;
  stExpCocoNode *psVar13;
  ActionManagerEx *this_02;
  long *plVar14;
  long lVar15;
  Ref *pRVar16;
  long lVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  ulong local_a8;
  undefined8 local_a0;
  void *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [8];
  ulong local_88;
  long *local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  lVar5 = stExpCocoNode::GetChildArray(param_2,param_1);
  iVar3 = stExpCocoNode::GetChildNum(param_2);
  if (iVar3 < 1) {
    pRVar16 = (Ref *)0x0;
  }
  else {
    lVar17 = 0;
    pRVar16 = (Ref *)0x0;
    fVar19 = 0.0;
    plVar14 = (long *)((ulong)local_90 | 1);
    fVar20 = 0.0;
    do {
      psVar13 = (stExpCocoNode *)(lVar5 + lVar17 * 0x10);
      pcVar6 = (char *)stExpCocoNode::GetName(psVar13,param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_90,pcVar6);
      uVar11 = (ulong)((byte)local_90[0] >> 1);
      if (((byte)local_90[0] & 1) != 0) {
        uVar11 = local_88;
      }
      switch(uVar11) {
      case 8:
        plVar12 = plVar14;
        if (((byte)local_90[0] & 1) != 0) {
          plVar12 = local_80;
        }
        if ((*plVar12 == 0x7365727574786574) &&
           (uVar4 = stExpCocoNode::GetChildNum(psVar13), 0 < (int)uVar4)) {
          lVar15 = 0;
          uVar11 = (ulong)uVar4;
          do {
            local_a0 = 0;
            local_98 = (void *)0x0;
            local_a8 = 0;
            lVar7 = stExpCocoNode::GetChildArray(psVar13,param_1);
            pcVar6 = (char *)stExpCocoNode::GetValue((stExpCocoNode *)(lVar7 + lVar15),param_1);
            sVar8 = strlen(pcVar6);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_a8,pcVar6,sVar8);
            this_00 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
            cocos2d::SpriteFrameCache::addSpriteFramesWithFile(this_00,(basic_string *)&local_a8);
            if ((local_a8 & 1) != 0) {
              operator_delete(local_98);
            }
            uVar11 = uVar11 - 1;
            lVar15 = lVar15 + 0x10;
          } while (uVar11 != 0);
        }
        break;
      case 10:
        plVar12 = plVar14;
        if (((byte)local_90[0] & 1) != 0) {
          plVar12 = local_80;
        }
        iVar3 = memcmp(plVar12,"widgetTree",10);
        if (iVar3 == 0) {
          if ((fVar20 <= 0.0) || (fVar19 <= 0.0)) {
            this_01 = (Director *)cocos2d::Director::getInstance();
            pSVar10 = (Size *)cocos2d::Director::getWinSize(this_01);
            cocos2d::Size::Size((Size *)&local_a8,pSVar10);
            pGVar9 = DAT_01785a68;
            if ((DAT_01785a68 == (GUIReader *)0x0) &&
               (pGVar9 = operator_new(0x98,(nothrow_t *)&std::nothrow), pGVar9 != (GUIReader *)0x0))
            {
              GUIReader::GUIReader(pGVar9);
            }
            DAT_01785a68 = pGVar9;
            GUIReader::storeFileDesignSize(DAT_01785a68,param_3,(Size *)&local_a8);
          }
          else {
            pGVar9 = DAT_01785a68;
            if ((DAT_01785a68 == (GUIReader *)0x0) &&
               (pGVar9 = operator_new(0x98,(nothrow_t *)&std::nothrow), pGVar9 != (GUIReader *)0x0))
            {
              GUIReader::GUIReader(pGVar9);
            }
            DAT_01785a68 = pGVar9;
            pGVar9 = DAT_01785a68;
            cocos2d::Size::Size((Size *)&local_a8,fVar19,fVar20);
            GUIReader::storeFileDesignSize(pGVar9,param_3,(Size *)&local_a8);
          }
          iVar3 = stExpCocoNode::GetType(psVar13,param_1);
          if (iVar3 == 3) {
            pRVar16 = (Ref *)(**(code **)(*(long *)this + 0x38))(this,param_1,psVar13);
          }
          pSVar10 = (Size *)(**(code **)(*(long *)pRVar16 + 0x168))(pRVar16);
          uVar11 = cocos2d::Size::equals(pSVar10,(Size *)&cocos2d::Size::ZERO);
          if ((uVar11 & 1) != 0) {
            if (pRVar16 == (Ref *)0x0) {
              plVar12 = (long *)0x0;
            }
            else {
              plVar12 = (long *)__dynamic_cast(pRVar16,&cocos2d::ui::Widget::typeinfo,
                                               &cocos2d::ui::Layout::typeinfo,0);
            }
            cocos2d::Size::Size((Size *)&local_a8,fVar19,fVar20);
            (**(code **)(*plVar12 + 0x160))(plVar12,&local_a8);
          }
        }
        break;
      case 0xb:
        plVar12 = plVar14;
        if (((byte)local_90[0] & 1) != 0) {
          plVar12 = local_80;
        }
        iVar3 = memcmp(plVar12,"designWidth",0xb);
        if (iVar3 != 0) break;
        pcVar6 = (char *)stExpCocoNode::GetValue(psVar13,param_1);
        dVar18 = (double)cocos2d::utils::atof(pcVar6);
        fVar19 = (float)dVar18;
        goto joined_r0x00c65890;
      case 0xc:
        plVar12 = plVar14;
        if (((byte)local_90[0] & 1) != 0) {
          plVar12 = local_80;
        }
        iVar3 = memcmp(plVar12,"designHeight",0xc);
        if (iVar3 == 0) {
          pcVar6 = (char *)stExpCocoNode::GetValue(psVar13,param_1);
          dVar18 = (double)cocos2d::utils::atof(pcVar6);
          fVar20 = (float)dVar18;
          goto joined_r0x00c65890;
        }
      }
joined_r0x00c65890:
      if (((byte)local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
      lVar17 = lVar17 + 1;
      iVar3 = stExpCocoNode::GetChildNum(param_2);
    } while (lVar17 < iVar3);
  }
  psVar13 = (stExpCocoNode *)stExpCocoNode::GetChildArray(param_2,param_1);
  iVar3 = stExpCocoNode::GetChildNum(param_2);
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      pcVar6 = (char *)stExpCocoNode::GetName(psVar13,param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_90,pcVar6);
      bVar2 = local_90[0];
      uVar11 = (ulong)((byte)local_90[0] >> 1);
      if (((byte)local_90[0] & 1) != 0) {
        uVar11 = local_88;
      }
      if (uVar11 == 9) {
        plVar14 = (long *)((ulong)local_90 | 1);
        if (((byte)local_90[0] & 1) != 0) {
          plVar14 = local_80;
        }
        iVar3 = memcmp(plVar14,"animation",9);
        if (iVar3 == 0) {
          this_02 = (ActionManagerEx *)ActionManagerEx::getInstance();
          ActionManagerEx::initWithBinary(this_02,param_3,pRVar16,param_1,psVar13);
          if (((byte)local_90[0] & 1) != 0) {
            operator_delete(local_80);
          }
          break;
        }
      }
      if (((byte)bVar2 & 1) != 0) {
        operator_delete(local_80);
      }
      lVar5 = lVar5 + 1;
      iVar3 = stExpCocoNode::GetChildNum(param_2);
      psVar13 = psVar13 + 0x10;
    } while (lVar5 < iVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return pRVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

