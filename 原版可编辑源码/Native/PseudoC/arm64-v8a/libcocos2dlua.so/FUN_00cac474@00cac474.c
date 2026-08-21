
void FUN_00cac474(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  Node *this;
  undefined8 *puVar9;
  long lVar10;
  int local_64;
  undefined8 *local_60;
  undefined8 *local_58;
  void *local_50;
  int *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Node *)*param_2;
  lVar10 = *(long *)(param_1 + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_60,"ComExtensionData");
  lVar5 = cocos2d::Node::getComponent(this,(basic_string *)&local_60);
  if (lVar5 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = (long *)__dynamic_cast(lVar5,&cocos2d::Component::typeinfo,
                                    &cocostudio::ComExtensionData::typeinfo,0);
  }
  if (((ulong)local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (plVar6 != (long *)0x0) {
    local_64 = (**(code **)(*plVar6 + 0x78))(plVar6);
    plVar7 = (long *)(lVar10 + 0x60);
    plVar8 = (long *)*plVar7;
    plVar6 = plVar7;
    if (plVar8 != (long *)0x0) {
      do {
        if (local_64 <= (int)plVar8[4]) {
          plVar6 = plVar8;
        }
        plVar8 = (long *)plVar8[(int)plVar8[4] < local_64];
      } while (plVar8 != (long *)0x0);
      if ((plVar6 != plVar7) && ((int)plVar6[4] <= local_64)) {
        local_40 = &local_64;
        lVar5 = std::__ndk1::
                __tree<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>>>
                ::
                __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                          ((int *)(lVar10 + 0x58),(piecewise_construct_t *)&local_64,
                           (tuple *)&DAT_01415c3c,(tuple *)&local_40);
        local_60 = (undefined8 *)0x0;
        local_58 = (undefined8 *)0x0;
        local_50 = (void *)0x0;
        if ((&local_60 != (undefined8 **)(lVar5 + 0x28)) &&
           (std::__ndk1::
            vector<cocostudio::timeline::Timeline*,std::__ndk1::allocator<cocostudio::timeline::Timeline*>>
            ::assign<cocostudio::timeline::Timeline**>
                      ((vector<cocostudio::timeline::Timeline*,std::__ndk1::allocator<cocostudio::timeline::Timeline*>>
                        *)&local_60,*(Timeline ***)(lVar5 + 0x28),*(Timeline ***)(lVar5 + 0x30)),
           puVar2 = local_58, puVar9 = local_60, local_60 != local_58)) {
          do {
            cocos2d::Ref::retain((Ref *)*puVar9);
            puVar3 = local_58;
            puVar9 = puVar9 + 1;
          } while (puVar2 != puVar9);
          puVar9 = local_60;
          if (local_60 != local_58) {
            do {
              (**(code **)(*(long *)*puVar9 + 0x50))((long *)*puVar9,this);
              puVar4 = local_58;
              puVar9 = puVar9 + 1;
              puVar2 = local_60;
            } while (puVar3 != puVar9);
            for (; puVar2 != puVar4; puVar2 = puVar2 + 1) {
              cocos2d::Ref::release((Ref *)*puVar2);
            }
          }
        }
        local_58 = local_60;
        if (local_60 != (undefined8 *)0x0) {
          operator_delete(local_60);
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

