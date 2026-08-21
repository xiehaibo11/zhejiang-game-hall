
/* cocostudio::ArmatureMovementDispatcher::removeAnnimationEventCallBack(cocos2d::Ref*, void
   (cocos2d::Ref::*)(cocostudio::Armature*, cocostudio::MovementEventType,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)) */

void cocostudio::ArmatureMovementDispatcher::removeAnnimationEventCallBack
               (Ref *param_1,_func_void_Armature_ptr_MovementEventType_basic_string_ptr *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_40 [3];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  plVar4 = *(long **)(param_1 + 0x28);
  uVar5 = plVar4[1];
  if (uVar5 != 0) {
    uVar7 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)param_2 >> 0x20) * -0x622015f714c7d297;
    uVar12 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar5 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar5))))
                                                ))));
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = (uVar7 ^ (ulong)param_2 >> 0x20 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    uVar8 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    if (uVar8 < 2) {
      uVar9 = uVar5 - 1 & uVar7;
    }
    else {
      uVar9 = uVar7;
      if (uVar5 <= uVar7) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar7 / uVar5;
        }
        uVar9 = uVar7 - uVar9 * uVar5;
      }
    }
    plVar6 = *(long **)(*plVar4 + uVar9 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar10 = plVar6[1];
        if (uVar10 == uVar7) {
          if ((_func_void_Armature_ptr_MovementEventType_basic_string_ptr *)plVar6[2] == param_2) {
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>,std::__ndk1::__unordered_map_hasher<cocos2d::Ref*,std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>,std::__ndk1::hash<cocos2d::Ref*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Ref*,std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>,std::__ndk1::equal_to<cocos2d::Ref*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>
            ::remove(local_40,plVar4,plVar6);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            break;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar10 = uVar10 & uVar5 - 1;
          }
          else if (uVar5 <= uVar10) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar10 / uVar5;
            }
            uVar10 = uVar10 - uVar1 * uVar5;
          }
          if (uVar10 != uVar9) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

