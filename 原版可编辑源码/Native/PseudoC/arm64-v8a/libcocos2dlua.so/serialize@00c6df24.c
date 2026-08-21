
/* cocostudio::TriggerObj::serialize(cocostudio::CocoLoader*, cocostudio::stExpCocoNode*) */

void __thiscall
cocostudio::TriggerObj::serialize(TriggerObj *this,CocoLoader *param_1,stExpCocoNode *param_2)

{
  size_t sVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  char *pcVar10;
  stExpCocoNode *psVar11;
  stExpCocoNode *psVar12;
  ObjectFactory *pOVar13;
  long lVar14;
  Ref *pRVar15;
  EventListener *pEVar16;
  TriggerMng *this_00;
  code *pcVar17;
  void *pvVar18;
  ulong uVar19;
  ulong uVar20;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e0 [16];
  void *local_d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [8];
  ulong local_c0;
  void *local_b8;
  Ref *local_b0;
  TriggerObj *pTStack_a8;
  void *local_a0;
  Ref **local_90;
  char acStack_7c [12];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar6 = stExpCocoNode::GetChildNum(param_2);
  lVar9 = stExpCocoNode::GetChildArray(param_2,param_1);
  if (0 < (int)uVar6) {
    uVar19 = 0;
    pvVar18 = (void *)((ulong)local_c8 | 1);
    do {
      psVar11 = (stExpCocoNode *)(lVar9 + uVar19 * 0x10);
      pcVar10 = (char *)stExpCocoNode::GetName(psVar11,param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_c8,pcVar10);
      pcVar10 = (char *)stExpCocoNode::GetValue(psVar11,param_1);
      bVar5 = local_c8[0];
      uVar20 = (ulong)((byte)local_c8[0] >> 1);
      if (((byte)local_c8[0] & 1) != 0) {
        uVar20 = local_c0;
      }
      sVar1 = 2;
      if (uVar20 < 3) {
        sVar1 = uVar20;
      }
      if (sVar1 == 0) {
LAB_00c6e03c:
        if (2 < uVar20 == 1 < uVar20) goto LAB_00c6e068;
        if (pcVar10 != (char *)0x0) {
          iVar7 = atoi(pcVar10);
          *(int *)(this + 0x58) = iVar7;
        }
      }
      else {
        pvVar2 = pvVar18;
        if (((byte)local_c8[0] & 1) != 0) {
          pvVar2 = local_b8;
        }
        iVar7 = memcmp(pvVar2,"id",sVar1);
        if (iVar7 == 0) goto LAB_00c6e03c;
LAB_00c6e068:
        sVar1 = 10;
        if (uVar20 < 0xb) {
          sVar1 = uVar20;
        }
        if (sVar1 == 0) {
LAB_00c6e094:
          if (10 < uVar20 != 9 < uVar20) {
            uVar8 = stExpCocoNode::GetChildNum(psVar11);
            uVar20 = (ulong)uVar8;
            psVar11 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar11,param_1);
            if (0 < (int)uVar8) {
              do {
                stExpCocoNode::GetChildNum(psVar11);
                psVar12 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar11,param_1);
                pcVar10 = (char *)stExpCocoNode::GetValue(psVar12,param_1);
                if (pcVar10 != (char *)0x0) {
                  pOVar13 = (ObjectFactory *)cocos2d::ObjectFactory::getInstance();
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string<decltype(nullptr)>
                            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              *)&local_b0,pcVar10);
                  lVar14 = cocos2d::ObjectFactory::createObject(pOVar13,(basic_string *)&local_b0);
                  if (lVar14 == 0) {
                    pRVar15 = (Ref *)0x0;
                  }
                  else {
                    pRVar15 = (Ref *)__dynamic_cast(lVar14,&cocos2d::Ref::typeinfo,
                                                    &BaseTriggerCondition::typeinfo,0);
                  }
                  if (((ulong)local_b0 & 1) != 0) {
                    operator_delete(local_a0);
                  }
                  (**(code **)(*(long *)pRVar15 + 0x28))(pRVar15,param_1,psVar12 + 0x10);
                  (**(code **)(*(long *)pRVar15 + 0x10))(pRVar15);
                  puVar3 = *(undefined8 **)(this + 0x30);
                  local_b0 = pRVar15;
                  if (puVar3 == *(undefined8 **)(this + 0x38)) {
                    std::__ndk1::
                    vector<cocostudio::BaseTriggerCondition*,std::__ndk1::allocator<cocostudio::BaseTriggerCondition*>>
                    ::__push_back_slow_path<cocostudio::BaseTriggerCondition*const&>
                              ((vector<cocostudio::BaseTriggerCondition*,std::__ndk1::allocator<cocostudio::BaseTriggerCondition*>>
                                *)(this + 0x28),(BaseTriggerCondition **)&local_b0);
                  }
                  else {
                    *puVar3 = pRVar15;
                    *(undefined8 **)(this + 0x30) = puVar3 + 1;
                  }
                  cocos2d::Ref::retain(local_b0);
                }
                uVar20 = uVar20 - 1;
                psVar11 = psVar11 + 0x10;
              } while (uVar20 != 0);
            }
            goto LAB_00c6e474;
          }
        }
        else {
          pvVar2 = pvVar18;
          if (((byte)bVar5 & 1) != 0) {
            pvVar2 = local_b8;
          }
          iVar7 = memcmp(pvVar2,"conditions",sVar1);
          if (iVar7 == 0) goto LAB_00c6e094;
        }
        sVar1 = 7;
        if (uVar20 < 8) {
          sVar1 = uVar20;
        }
        if (sVar1 == 0) {
LAB_00c6e1ec:
          if (7 < uVar20 != 6 < uVar20) {
            uVar8 = stExpCocoNode::GetChildNum(psVar11);
            uVar20 = (ulong)uVar8;
            psVar11 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar11,param_1);
            if (0 < (int)uVar8) {
              do {
                stExpCocoNode::GetChildNum(psVar11);
                psVar12 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar11,param_1);
                pcVar10 = (char *)stExpCocoNode::GetValue(psVar12,param_1);
                if (pcVar10 != (char *)0x0) {
                  pOVar13 = (ObjectFactory *)cocos2d::ObjectFactory::getInstance();
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string<decltype(nullptr)>
                            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              *)&local_b0,pcVar10);
                  lVar14 = cocos2d::ObjectFactory::createObject(pOVar13,(basic_string *)&local_b0);
                  if (lVar14 == 0) {
                    pRVar15 = (Ref *)0x0;
                  }
                  else {
                    pRVar15 = (Ref *)__dynamic_cast(lVar14,&cocos2d::Ref::typeinfo,
                                                    &BaseTriggerAction::typeinfo,0);
                  }
                  if (((ulong)local_b0 & 1) != 0) {
                    operator_delete(local_a0);
                  }
                  (**(code **)(*(long *)pRVar15 + 0x28))(pRVar15,param_1,psVar12 + 0x10);
                  (**(code **)(*(long *)pRVar15 + 0x10))(pRVar15);
                  puVar3 = *(undefined8 **)(this + 0x48);
                  local_b0 = pRVar15;
                  if (puVar3 == *(undefined8 **)(this + 0x50)) {
                    std::__ndk1::
                    vector<cocostudio::BaseTriggerAction*,std::__ndk1::allocator<cocostudio::BaseTriggerAction*>>
                    ::__push_back_slow_path<cocostudio::BaseTriggerAction*const&>
                              ((vector<cocostudio::BaseTriggerAction*,std::__ndk1::allocator<cocostudio::BaseTriggerAction*>>
                                *)(this + 0x40),(BaseTriggerAction **)&local_b0);
                  }
                  else {
                    *puVar3 = pRVar15;
                    *(undefined8 **)(this + 0x48) = puVar3 + 1;
                  }
                  cocos2d::Ref::retain(local_b0);
                }
                uVar20 = uVar20 - 1;
                psVar11 = psVar11 + 0x10;
              } while (uVar20 != 0);
            }
            goto LAB_00c6e474;
          }
        }
        else {
          pvVar2 = pvVar18;
          if (((byte)bVar5 & 1) != 0) {
            pvVar2 = local_b8;
          }
          iVar7 = memcmp(pvVar2,"actions",sVar1);
          if (iVar7 == 0) goto LAB_00c6e1ec;
        }
        sVar1 = 6;
        if (uVar20 < 7) {
          sVar1 = uVar20;
        }
        if (sVar1 != 0) {
          pvVar2 = pvVar18;
          if (((byte)bVar5 & 1) != 0) {
            pvVar2 = local_b8;
          }
          iVar7 = memcmp(pvVar2,"events",sVar1);
          if (iVar7 != 0) goto LAB_00c6e474;
        }
        if (6 < uVar20 != 5 < uVar20) {
          uVar8 = stExpCocoNode::GetChildNum(psVar11);
          uVar20 = (ulong)uVar8;
          psVar11 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar11,param_1);
          if (0 < (int)uVar8) {
            do {
              stExpCocoNode::GetChildNum(psVar11);
              psVar12 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar11,param_1);
              pcVar10 = (char *)stExpCocoNode::GetValue(psVar12,param_1);
              if ((pcVar10 != (char *)0x0) && (iVar7 = atoi(pcVar10), -1 < iVar7)) {
                FUN_00c6de80(acStack_7c);
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string<decltype(nullptr)>(local_e0,acStack_7c);
                local_b0 = (Ref *)&PTR_FUN_016cab48;
                pTStack_a8 = this;
                local_90 = &local_b0;
                pEVar16 = (EventListener *)
                          cocos2d::EventListenerCustom::create
                                    ((basic_string *)local_e0,(function *)&local_b0);
                if (&local_b0 == local_90) {
                  pcVar17 = *(code **)(*local_90 + 0x20);
LAB_00c6e41c:
                  (*pcVar17)();
                }
                else if (local_90 != (Ref **)0x0) {
                  pcVar17 = *(code **)(*local_90 + 0x28);
                  goto LAB_00c6e41c;
                }
                puVar3 = *(undefined8 **)(this + 0x68);
                local_b0 = (Ref *)pEVar16;
                if (puVar3 == *(undefined8 **)(this + 0x70)) {
                  std::__ndk1::
                  vector<cocos2d::EventListenerCustom*,std::__ndk1::allocator<cocos2d::EventListenerCustom*>>
                  ::__push_back_slow_path<cocos2d::EventListenerCustom*const&>
                            ((vector<cocos2d::EventListenerCustom*,std::__ndk1::allocator<cocos2d::EventListenerCustom*>>
                              *)(this + 0x60),(EventListenerCustom **)&local_b0);
                }
                else {
                  *puVar3 = pEVar16;
                  *(undefined8 **)(this + 0x68) = puVar3 + 1;
                }
                cocos2d::Ref::retain(local_b0);
                this_00 = (TriggerMng *)TriggerMng::getInstance();
                TriggerMng::addEventListenerWithFixedPriority(this_00,pEVar16,1);
                if (((byte)local_e0[0] & 1) != 0) {
                  operator_delete(local_d0);
                }
              }
              uVar20 = uVar20 - 1;
              psVar11 = psVar11 + 0x10;
            } while (uVar20 != 0);
          }
        }
      }
LAB_00c6e474:
      if (((byte)local_c8[0] & 1) != 0) {
        operator_delete(local_b8);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar6);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

