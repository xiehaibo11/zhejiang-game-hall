
/* cocostudio::timeline::ActionTimeline::removeTimeline(cocostudio::timeline::Timeline*) */

void __thiscall
cocostudio::timeline::ActionTimeline::removeTimeline(ActionTimeline *this,Timeline *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  ActionTimeline *pAVar6;
  ActionTimeline *pAVar7;
  undefined8 *puVar8;
  ActionTimeline *pAVar9;
  int local_5c [3];
  int *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_5c[0] = (**(code **)(*(long *)param_1 + 0x48))(param_1);
  pAVar6 = this + 0x60;
  pAVar7 = *(ActionTimeline **)pAVar6;
  pAVar9 = pAVar6;
  if (pAVar7 != (ActionTimeline *)0x0) {
    do {
      if (local_5c[0] <= *(int *)(pAVar7 + 0x20)) {
        pAVar9 = pAVar7;
      }
      pAVar7 = *(ActionTimeline **)(pAVar7 + (ulong)(*(int *)(pAVar7 + 0x20) < local_5c[0]) * 8);
    } while (pAVar7 != (ActionTimeline *)0x0);
    if ((pAVar9 != pAVar6) && (*(int *)(pAVar9 + 0x20) <= local_5c[0])) {
      local_50 = local_5c;
      lVar5 = std::__ndk1::
              __tree<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>>>
              ::
              __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                        ((int *)(this + 0x58),(piecewise_construct_t *)local_5c,
                         (tuple *)&DAT_01415c3c,(tuple *)&local_50);
      puVar8 = *(undefined8 **)(lVar5 + 0x28);
      puVar2 = *(undefined8 **)(lVar5 + 0x30);
      if ((puVar8 != puVar2) && ((Timeline *)*puVar8 != param_1)) {
        do {
          if (puVar2 + -1 == puVar8) goto LAB_00caaf20;
          puVar1 = puVar8 + 1;
          puVar8 = puVar8 + 1;
        } while ((Timeline *)*puVar1 != param_1);
      }
      if (puVar8 != puVar2) {
        local_50 = local_5c;
        lVar5 = std::__ndk1::
                __tree<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>>>
                ::
                __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                          ((int *)(this + 0x58),(piecewise_construct_t *)local_5c,
                           (tuple *)&DAT_01415c3c,(tuple *)&local_50);
        puVar8 = *(undefined8 **)(lVar5 + 0x28);
        puVar2 = *(undefined8 **)(lVar5 + 0x30);
        if (puVar8 != puVar2) {
          if ((Timeline *)*puVar8 != param_1) {
            do {
              if (puVar2 + -1 == puVar8) goto LAB_00caaea0;
              puVar1 = puVar8 + 1;
              puVar8 = puVar8 + 1;
            } while ((Timeline *)*puVar1 != param_1);
          }
          if (puVar8 != puVar2) {
            sVar3 = (long)puVar2 - (long)(puVar8 + 1);
            if (sVar3 != 0) {
              memmove(puVar8,puVar8 + 1,sVar3);
            }
            *(undefined8 **)(lVar5 + 0x30) = puVar8 + ((long)sVar3 >> 3);
            cocos2d::Ref::release((Ref *)param_1);
          }
        }
LAB_00caaea0:
        puVar8 = *(undefined8 **)(this + 0x70);
        puVar2 = *(undefined8 **)(this + 0x78);
        if (puVar8 != puVar2) {
          if ((Timeline *)*puVar8 != param_1) {
            do {
              if (puVar2 + -1 == puVar8) goto LAB_00caaf0c;
              puVar1 = puVar8 + 1;
              puVar8 = puVar8 + 1;
            } while ((Timeline *)*puVar1 != param_1);
          }
          if (puVar8 != puVar2) {
            sVar3 = (long)puVar2 - (long)(puVar8 + 1);
            if (sVar3 != 0) {
              memmove(puVar8,puVar8 + 1,sVar3);
            }
            *(undefined8 **)(this + 0x78) = puVar8 + ((long)sVar3 >> 3);
            cocos2d::Ref::release((Ref *)param_1);
          }
        }
LAB_00caaf0c:
        (**(code **)(*(long *)param_1 + 0x60))(param_1,0);
      }
    }
  }
LAB_00caaf20:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

