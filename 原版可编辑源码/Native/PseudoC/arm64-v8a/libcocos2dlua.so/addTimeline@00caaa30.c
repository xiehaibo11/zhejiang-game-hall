
/* cocostudio::timeline::ActionTimeline::addTimeline(cocostudio::timeline::Timeline*) */

void __thiscall
cocostudio::timeline::ActionTimeline::addTimeline(ActionTimeline *this,Timeline *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  Timeline *pTVar3;
  Timeline *pTVar4;
  Timeline *pTVar5;
  long lVar6;
  ActionTimeline *pAVar7;
  ActionTimeline *pAVar8;
  undefined8 *puVar9;
  ActionTimeline *pAVar10;
  ActionTimeline *pAVar11;
  undefined8 *puVar12;
  Timeline *local_90;
  Timeline *pTStack_88;
  undefined8 local_80;
  int local_6c [3];
  int *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_6c[0] = (**(code **)(*(long *)param_1 + 0x48))(param_1);
  pAVar7 = this + 0x60;
  pAVar8 = *(ActionTimeline **)pAVar7;
  pAVar11 = this + 0x58;
  pAVar10 = pAVar7;
  if (pAVar8 != (ActionTimeline *)0x0) {
    do {
      if (local_6c[0] <= *(int *)(pAVar8 + 0x20)) {
        pAVar10 = pAVar8;
      }
      pAVar8 = *(ActionTimeline **)(pAVar8 + (ulong)(*(int *)(pAVar8 + 0x20) < local_6c[0]) * 8);
    } while (pAVar8 != (ActionTimeline *)0x0);
    if ((pAVar10 != pAVar7) && (*(int *)(pAVar10 + 0x20) <= local_6c[0])) goto LAB_00caab8c;
  }
  local_60 = local_6c;
  pTStack_88 = (Timeline *)0x0;
  local_80 = 0;
  local_90 = (Timeline *)0x0;
  lVar6 = std::__ndk1::
          __tree<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                    ((int *)pAVar11,(piecewise_construct_t *)local_6c,(tuple *)&DAT_01415c3c,
                     (tuple *)&local_60);
  pTVar5 = pTStack_88;
  puVar9 = (undefined8 *)(lVar6 + 0x28);
  pTVar3 = local_90;
  pTVar4 = pTStack_88;
  if ((Timeline **)puVar9 == &local_90) {
    for (; pTVar3 != pTVar5; pTVar3 = pTVar3 + 8) {
      cocos2d::Ref::release(*(Ref **)pTVar3);
      pTVar4 = local_90;
    }
    pTStack_88 = local_90;
    if (pTVar4 != (Timeline *)0x0) {
      pTStack_88 = pTVar4;
      operator_delete(pTVar4);
    }
  }
  else {
    puVar12 = *(undefined8 **)(lVar6 + 0x28);
    puVar1 = *(undefined8 **)(lVar6 + 0x30);
    if (puVar12 != puVar1) {
      do {
        cocos2d::Ref::release((Ref *)*puVar12);
        puVar12 = puVar12 + 1;
      } while (puVar1 != puVar12);
      puVar12 = (undefined8 *)*puVar9;
    }
    *(undefined8 **)(lVar6 + 0x30) = puVar12;
    if (puVar12 != (undefined8 *)0x0) {
      *(undefined8 **)(lVar6 + 0x30) = puVar12;
      operator_delete(puVar12);
      *puVar9 = 0;
      *(undefined8 *)(lVar6 + 0x30) = 0;
      *(undefined8 *)(lVar6 + 0x38) = 0;
    }
    *(Timeline **)(lVar6 + 0x30) = pTStack_88;
    *(Timeline **)(lVar6 + 0x28) = local_90;
    *(undefined8 *)(lVar6 + 0x38) = local_80;
    pTStack_88 = (Timeline *)0x0;
    local_80 = 0;
  }
LAB_00caab8c:
  local_90 = (Timeline *)local_6c;
  lVar6 = std::__ndk1::
          __tree<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                    ((int *)pAVar11,(piecewise_construct_t *)local_6c,(tuple *)&DAT_01415c3c,
                     (tuple *)&local_90);
  puVar9 = *(undefined8 **)(lVar6 + 0x28);
  puVar12 = *(undefined8 **)(lVar6 + 0x30);
  if ((puVar9 != puVar12) && ((Timeline *)*puVar9 != param_1)) {
    do {
      if (puVar12 + -1 == puVar9) goto LAB_00caabf8;
      puVar1 = puVar9 + 1;
      puVar9 = puVar9 + 1;
    } while ((Timeline *)*puVar1 != param_1);
  }
  if (puVar9 == puVar12) {
LAB_00caabf8:
    puVar9 = *(undefined8 **)(this + 0x78);
    local_90 = param_1;
    if (puVar9 == *(undefined8 **)(this + 0x80)) {
      std::__ndk1::
      vector<cocostudio::timeline::Timeline*,std::__ndk1::allocator<cocostudio::timeline::Timeline*>>
      ::__push_back_slow_path<cocostudio::timeline::Timeline*const&>
                ((vector<cocostudio::timeline::Timeline*,std::__ndk1::allocator<cocostudio::timeline::Timeline*>>
                  *)(this + 0x70),&local_90);
    }
    else {
      *puVar9 = param_1;
      *(undefined8 **)(this + 0x78) = puVar9 + 1;
    }
    cocos2d::Ref::retain((Ref *)local_90);
    local_90 = (Timeline *)local_6c;
    lVar6 = std::__ndk1::
            __tree<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>>>
            ::
            __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                      ((int *)pAVar11,(piecewise_construct_t *)local_6c,(tuple *)&DAT_01415c3c,
                       (tuple *)&local_90);
    puVar9 = *(undefined8 **)(lVar6 + 0x30);
    if (puVar9 == *(undefined8 **)(lVar6 + 0x38)) {
      local_90 = param_1;
      std::__ndk1::
      vector<cocostudio::timeline::Timeline*,std::__ndk1::allocator<cocostudio::timeline::Timeline*>>
      ::__push_back_slow_path<cocostudio::timeline::Timeline*const&>
                ((vector<cocostudio::timeline::Timeline*,std::__ndk1::allocator<cocostudio::timeline::Timeline*>>
                  *)(lVar6 + 0x28),&local_90);
    }
    else {
      *puVar9 = param_1;
      *(undefined8 **)(lVar6 + 0x30) = puVar9 + 1;
      local_90 = param_1;
    }
    cocos2d::Ref::retain((Ref *)local_90);
    (**(code **)(*(long *)param_1 + 0x60))(param_1,this);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

