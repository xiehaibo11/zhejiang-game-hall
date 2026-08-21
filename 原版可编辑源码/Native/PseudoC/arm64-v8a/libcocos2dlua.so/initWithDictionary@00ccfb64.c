
/* cocostudio::ActionNode::initWithDictionary(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, cocos2d::Ref*) */

void __thiscall
cocostudio::ActionNode::initWithDictionary(ActionNode *this,GenericValue *param_1,Ref *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  Widget *pWVar11;
  DictionaryHelper *pDVar12;
  long *plVar13;
  long lVar14;
  GenericValue *pGVar15;
  ulong uVar16;
  ActionManagerEx *this_00;
  long *plVar17;
  float *pfVar18;
  ActionMoveFrame *this_01;
  vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>> *pvVar19;
  ActionScaleFrame *this_02;
  ActionRotationFrame *this_03;
  ActionFadeFrame *this_04;
  ActionTintFrame *this_05;
  int iVar20;
  int iVar21;
  ulong unaff_x27;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  ulong uVar25;
  uint3 local_a0 [2];
  undefined4 *local_98;
  undefined4 *local_90;
  undefined4 *puStack_88;
  ActionMoveFrame *local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if ((param_2 != (Ref *)0x0) &&
     (pWVar11 = (Widget *)
                __dynamic_cast(param_2,&cocos2d::Ref::typeinfo,&cocos2d::ui::Widget::typeinfo,0),
     pWVar11 != (Widget *)0x0)) {
    pDVar12 = (DictionaryHelper *)DictionaryHelper::getInstance();
    iVar7 = DictionaryHelper::getIntValue_json(pDVar12,param_1,"ActionTag",0);
    *(int *)(this + 0x30) = iVar7;
    plVar13 = (long *)cocos2d::ui::Helper::seekActionWidgetByActionTag(pWVar11,iVar7);
    if (plVar13 == (long *)0x0) {
      bVar3 = false;
    }
    else {
      lVar14 = __dynamic_cast(plVar13,&cocos2d::ui::Widget::typeinfo,&cocos2d::ui::Layout::typeinfo,
                              0);
      bVar3 = lVar14 == 0;
    }
    pDVar12 = (DictionaryHelper *)DictionaryHelper::getInstance();
    iVar7 = DictionaryHelper::getArrayCount_json(pDVar12,param_1,"actionframelist",0);
    if (0 < iVar7) {
      iVar21 = 0;
      do {
        pDVar12 = (DictionaryHelper *)DictionaryHelper::getInstance();
        pGVar15 = (GenericValue *)
                  DictionaryHelper::getDictionaryFromArray_json
                            (pDVar12,param_1,"actionframelist",iVar21);
        pDVar12 = (DictionaryHelper *)DictionaryHelper::getInstance();
        iVar8 = DictionaryHelper::getIntValue_json(pDVar12,pGVar15,"frameid",0);
        pDVar12 = (DictionaryHelper *)DictionaryHelper::getInstance();
        iVar9 = DictionaryHelper::getIntValue_json(pDVar12,pGVar15,"tweenType",0);
        local_90 = (undefined4 *)0x0;
        puStack_88 = (undefined4 *)0x0;
        local_98 = (undefined4 *)0x0;
        pDVar12 = (DictionaryHelper *)DictionaryHelper::getInstance();
        iVar10 = DictionaryHelper::getArrayCount_json(pDVar12,pGVar15,"tweenParameter",0);
        if (0 < iVar10) {
          iVar20 = 0;
          do {
            pDVar12 = (DictionaryHelper *)DictionaryHelper::getInstance();
            uVar22 = DictionaryHelper::getFloatValueFromArray_json
                               (pDVar12,pGVar15,"tweenParameter",iVar20,0.0);
            local_80 = (ActionMoveFrame *)CONCAT44(local_80._4_4_,uVar22);
            if (local_90 == puStack_88) {
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>
                        ((vector<float,std::__ndk1::allocator<float>> *)&local_98,(float *)&local_80
                        );
            }
            else {
              *local_90 = uVar22;
              local_90 = local_90 + 1;
            }
            iVar20 = iVar20 + 1;
          } while (iVar10 != iVar20);
        }
        pDVar12 = (DictionaryHelper *)DictionaryHelper::getInstance();
        uVar16 = DictionaryHelper::checkObjectExist_json(pDVar12,pGVar15,"positionx");
        if ((uVar16 & 1) != 0) {
          pDVar12 = (DictionaryHelper *)DictionaryHelper::getInstance();
          uVar16 = DictionaryHelper::getFloatValue_json(pDVar12,pGVar15,"positionx",0.0);
          pDVar12 = (DictionaryHelper *)DictionaryHelper::getInstance();
          uVar25 = DictionaryHelper::getFloatValue_json(pDVar12,pGVar15,"positiony",0.0);
          if ((bVar3) && (lVar14 = (**(code **)(*plVar13 + 0x260))(), lVar14 != 0)) {
            this_00 = (ActionManagerEx *)ActionManagerEx::getInstance();
            iVar10 = ActionManagerEx::getStudioVersionNumber(this_00);
            if (iVar10 < 0x640) {
              plVar17 = (long *)(**(code **)(*plVar13 + 0x260))();
              pfVar18 = (float *)(**(code **)(*plVar17 + 0x158))();
              uVar16 = (ulong)(uint)((float)uVar16 + *pfVar18);
              uVar25 = (ulong)(uint)((float)uVar25 + pfVar18[1]);
            }
          }
          this_01 = operator_new(0x58,(nothrow_t *)&std::nothrow);
          if (this_01 != (ActionMoveFrame *)0x0) {
            ActionMoveFrame::ActionMoveFrame(this_01);
          }
          ActionFrame::setFrameIndex((ActionFrame *)this_01,iVar8);
          ActionFrame::setEasingType((ActionFrame *)this_01,iVar9);
          (**(code **)(*(long *)this_01 + 0x20))(this_01,&local_98);
          ActionMoveFrame::setPosition(uVar16,uVar25,this_01);
          if (*(undefined8 **)(this + 0x58) == *(undefined8 **)(this + 0x50)) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
          pvVar19 = (vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>
                     *)**(undefined8 **)(this + 0x50);
          puVar1 = *(undefined8 **)(pvVar19 + 8);
          local_80 = this_01;
          if (puVar1 == *(undefined8 **)(pvVar19 + 0x10)) {
            std::__ndk1::
            vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>::
            __push_back_slow_path<cocostudio::ActionFrame*const&>(pvVar19,(ActionFrame **)&local_80)
            ;
          }
          else {
            *puVar1 = this_01;
            *(undefined8 **)(pvVar19 + 8) = puVar1 + 1;
          }
          cocos2d::Ref::retain((Ref *)local_80);
          cocos2d::Ref::release((Ref *)this_01);
        }
        pDVar12 = (DictionaryHelper *)DictionaryHelper::getInstance();
        uVar16 = DictionaryHelper::checkObjectExist_json(pDVar12,pGVar15,"scalex");
        if ((uVar16 & 1) != 0) {
          pDVar12 = (DictionaryHelper *)DictionaryHelper::getInstance();
          fVar23 = (float)DictionaryHelper::getFloatValue_json(pDVar12,pGVar15,"scalex",0.0);
          pDVar12 = (DictionaryHelper *)DictionaryHelper::getInstance();
          fVar24 = (float)DictionaryHelper::getFloatValue_json(pDVar12,pGVar15,"scaley",0.0);
          this_02 = operator_new(0x58,(nothrow_t *)&std::nothrow);
          if (this_02 != (ActionScaleFrame *)0x0) {
            ActionScaleFrame::ActionScaleFrame(this_02);
          }
          ActionFrame::setFrameIndex((ActionFrame *)this_02,iVar8);
          ActionFrame::setEasingType((ActionFrame *)this_02,iVar9);
          (**(code **)(*(long *)this_02 + 0x20))(this_02,&local_98);
          ActionScaleFrame::setScaleX(this_02,fVar23);
          ActionScaleFrame::setScaleY(this_02,fVar24);
          if ((ulong)(*(long *)(this + 0x58) - *(long *)(this + 0x50) >> 3) < 2) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
          pvVar19 = *(vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>
                      **)(*(long *)(this + 0x50) + 8);
          puVar1 = *(undefined8 **)(pvVar19 + 8);
          local_80 = (ActionMoveFrame *)this_02;
          if (puVar1 == *(undefined8 **)(pvVar19 + 0x10)) {
            std::__ndk1::
            vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>::
            __push_back_slow_path<cocostudio::ActionFrame*const&>(pvVar19,(ActionFrame **)&local_80)
            ;
          }
          else {
            *puVar1 = this_02;
            *(undefined8 **)(pvVar19 + 8) = puVar1 + 1;
          }
          cocos2d::Ref::retain((Ref *)local_80);
          cocos2d::Ref::release((Ref *)this_02);
        }
        pDVar12 = (DictionaryHelper *)DictionaryHelper::getInstance();
        uVar16 = DictionaryHelper::checkObjectExist_json(pDVar12,pGVar15,"rotation");
        if ((uVar16 & 1) != 0) {
          pDVar12 = (DictionaryHelper *)DictionaryHelper::getInstance();
          fVar23 = (float)DictionaryHelper::getFloatValue_json(pDVar12,pGVar15,"rotation",0.0);
          this_03 = operator_new(0x58,(nothrow_t *)&std::nothrow);
          if (this_03 != (ActionRotationFrame *)0x0) {
            ActionRotationFrame::ActionRotationFrame(this_03);
          }
          ActionFrame::setFrameIndex((ActionFrame *)this_03,iVar8);
          ActionFrame::setEasingType((ActionFrame *)this_03,iVar9);
          (**(code **)(*(long *)this_03 + 0x20))(this_03,&local_98);
          ActionRotationFrame::setRotation(this_03,fVar23);
          if ((ulong)(*(long *)(this + 0x58) - *(long *)(this + 0x50) >> 3) < 3) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
          pvVar19 = *(vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>
                      **)(*(long *)(this + 0x50) + 0x10);
          puVar1 = *(undefined8 **)(pvVar19 + 8);
          local_80 = (ActionMoveFrame *)this_03;
          if (puVar1 == *(undefined8 **)(pvVar19 + 0x10)) {
            std::__ndk1::
            vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>::
            __push_back_slow_path<cocostudio::ActionFrame*const&>(pvVar19,(ActionFrame **)&local_80)
            ;
          }
          else {
            *puVar1 = this_03;
            *(undefined8 **)(pvVar19 + 8) = puVar1 + 1;
          }
          cocos2d::Ref::retain((Ref *)local_80);
          cocos2d::Ref::release((Ref *)this_03);
        }
        pDVar12 = (DictionaryHelper *)DictionaryHelper::getInstance();
        uVar16 = DictionaryHelper::checkObjectExist_json(pDVar12,pGVar15,"opacity");
        if ((uVar16 & 1) != 0) {
          pDVar12 = (DictionaryHelper *)DictionaryHelper::getInstance();
          iVar10 = DictionaryHelper::getIntValue_json(pDVar12,pGVar15,"opacity",0);
          this_04 = operator_new(0x58,(nothrow_t *)&std::nothrow);
          if (this_04 != (ActionFadeFrame *)0x0) {
            ActionFadeFrame::ActionFadeFrame(this_04);
          }
          ActionFrame::setFrameIndex((ActionFrame *)this_04,iVar8);
          ActionFrame::setEasingType((ActionFrame *)this_04,iVar9);
          (**(code **)(*(long *)this_04 + 0x20))(this_04,&local_98);
          ActionFadeFrame::setOpacity(this_04,iVar10);
          if ((ulong)(*(long *)(this + 0x58) - *(long *)(this + 0x50) >> 3) < 4) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
          pvVar19 = *(vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>
                      **)(*(long *)(this + 0x50) + 0x18);
          puVar1 = *(undefined8 **)(pvVar19 + 8);
          local_80 = (ActionMoveFrame *)this_04;
          if (puVar1 == *(undefined8 **)(pvVar19 + 0x10)) {
            std::__ndk1::
            vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>::
            __push_back_slow_path<cocostudio::ActionFrame*const&>(pvVar19,(ActionFrame **)&local_80)
            ;
          }
          else {
            *puVar1 = this_04;
            *(undefined8 **)(pvVar19 + 8) = puVar1 + 1;
          }
          cocos2d::Ref::retain((Ref *)local_80);
          cocos2d::Ref::release((Ref *)this_04);
        }
        pDVar12 = (DictionaryHelper *)DictionaryHelper::getInstance();
        uVar16 = DictionaryHelper::checkObjectExist_json(pDVar12,pGVar15,"colorr");
        if ((uVar16 & 1) != 0) {
          pDVar12 = (DictionaryHelper *)DictionaryHelper::getInstance();
          uVar4 = DictionaryHelper::getIntValue_json(pDVar12,pGVar15,"colorr",0);
          pDVar12 = (DictionaryHelper *)DictionaryHelper::getInstance();
          uVar5 = DictionaryHelper::getIntValue_json(pDVar12,pGVar15,"colorg",0);
          pDVar12 = (DictionaryHelper *)DictionaryHelper::getInstance();
          uVar6 = DictionaryHelper::getIntValue_json(pDVar12,pGVar15,"colorb",0);
          this_05 = operator_new(0x58,(nothrow_t *)&std::nothrow);
          if (this_05 != (ActionTintFrame *)0x0) {
            ActionTintFrame::ActionTintFrame(this_05);
          }
          ActionFrame::setFrameIndex((ActionFrame *)this_05,iVar8);
          ActionFrame::setEasingType((ActionFrame *)this_05,iVar9);
          (**(code **)(*(long *)this_05 + 0x20))(this_05,&local_98);
          cocos2d::Color3B::Color3B((Color3B *)local_a0,uVar4,uVar5,uVar6);
          unaff_x27 = unaff_x27 & 0xffffffffff000000 | (ulong)local_a0[0];
          ActionTintFrame::setColor(this_05,unaff_x27);
          if ((ulong)(*(long *)(this + 0x58) - *(long *)(this + 0x50) >> 3) < 5) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
          pvVar19 = *(vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>
                      **)(*(long *)(this + 0x50) + 0x20);
          puVar1 = *(undefined8 **)(pvVar19 + 8);
          local_80 = (ActionMoveFrame *)this_05;
          if (puVar1 == *(undefined8 **)(pvVar19 + 0x10)) {
            std::__ndk1::
            vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>::
            __push_back_slow_path<cocostudio::ActionFrame*const&>(pvVar19,(ActionFrame **)&local_80)
            ;
          }
          else {
            *puVar1 = this_05;
            *(undefined8 **)(pvVar19 + 8) = puVar1 + 1;
          }
          cocos2d::Ref::retain((Ref *)local_80);
          cocos2d::Ref::release((Ref *)this_05);
        }
        if (local_98 != (undefined4 *)0x0) {
          local_90 = local_98;
          operator_delete(local_98);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != iVar7);
    }
    (**(code **)(*(long *)this + 0x58))(this,param_2);
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

