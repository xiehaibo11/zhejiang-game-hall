
/* cocostudio::TriggerMng::addArmatureMovementCallBack(cocostudio::Armature*, cocos2d::Ref*, void
   (cocos2d::Ref::*)(cocostudio::Armature*, cocostudio::MovementEventType,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)) */

void cocostudio::TriggerMng::addArmatureMovementCallBack
               (Armature *param_1,Ref *param_2,
               _func_void_Armature_ptr_MovementEventType_basic_string_ptr *param_3)

{
  ulong uVar1;
  long lVar2;
  Ref *this;
  undefined8 *puVar3;
  ArmatureAnimation *pAVar4;
  long in_x3;
  ulong in_x4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  ArmatureMovementDispatcher *local_b8;
  Ref *local_b0;
  undefined1 local_a8 [16];
  Ref *pRStack_98;
  undefined **local_90;
  code *local_88;
  undefined8 uStack_80;
  Ref *local_78;
  undefined ***local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_b0 = param_2;
  if (((param_2 == (Ref *)0x0) ||
      (param_3 == (_func_void_Armature_ptr_MovementEventType_basic_string_ptr *)0x0)) ||
     (plVar10 = *(long **)(param_1 + 0x30), plVar10 == (long *)0x0)) goto LAB_00c6b764;
  if ((in_x3 == 0) && (in_x4 == 0 || (in_x4 & 1) == 0 && in_x3 == 0)) goto LAB_00c6b764;
  uVar5 = plVar10[1];
  pRStack_98 = (Ref *)param_3;
  if (uVar5 != 0) {
    uVar7 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)param_2 >> 0x20) * -0x622015f714c7d297;
    uVar13 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar5 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar5))))
                                                ))));
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar8 = (uVar7 ^ (ulong)param_2 >> 0x20 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar9 = uVar8 & uVar5 - 1;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    plVar10 = *(long **)(*plVar10 + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar11 = plVar10[1];
        if (uVar11 == uVar8) {
          if ((Ref *)plVar10[2] == param_2) {
            local_b8 = (ArmatureMovementDispatcher *)plVar10[3];
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>,std::__ndk1::__unordered_map_hasher<cocos2d::Ref*,std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>,std::__ndk1::hash<cocos2d::Ref*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Ref*,std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>,std::__ndk1::equal_to<cocos2d::Ref*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>
            ::
            __emplace_unique_key_args<cocos2d::Ref*,cocos2d::Ref*&,void(cocos2d::Ref::*&)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>
                      (*(__hash_table<std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>,std::__ndk1::__unordered_map_hasher<cocos2d::Ref*,std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>,std::__ndk1::hash<cocos2d::Ref*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Ref*,std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>,std::__ndk1::equal_to<cocos2d::Ref*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>
                         **)(local_b8 + 0x28),&pRStack_98,&pRStack_98,
                       (_func_void_Armature_ptr_MovementEventType_basic_string_ptr *)local_a8);
            goto LAB_00c6b764;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar11 = uVar11 & uVar5 - 1;
          }
          else if (uVar5 <= uVar11) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar11 / uVar5;
            }
            uVar11 = uVar11 - uVar1 * uVar5;
          }
          if (uVar11 != uVar9) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  local_b8 = (ArmatureMovementDispatcher *)0x0;
  this = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    cocos2d::Ref::Ref(this);
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined ***)this = &PTR__ArmatureMovementDispatcher_016ca8c0;
    puVar3 = operator_new(0x28,(nothrow_t *)&std::nothrow);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      *(undefined4 *)(puVar3 + 4) = 0x3f800000;
    }
    *(undefined8 **)(this + 0x28) = puVar3;
    param_2 = local_b0;
  }
  local_b8 = (ArmatureMovementDispatcher *)this;
  pAVar4 = (ArmatureAnimation *)(**(code **)(*(long *)param_2 + 0x588))(param_2);
  local_90 = &PTR_FUN_016ca908;
  uStack_80 = 0;
  local_88 = ArmatureMovementDispatcher::animationEvent;
  local_78 = this;
  local_70 = &local_90;
  ArmatureAnimation::setMovementEventCallFunc(pAVar4,&local_90);
  if (&local_90 == local_70) {
    pcVar6 = (code *)(*local_70)[4];
LAB_00c6b72c:
    (*pcVar6)();
  }
  else if (local_70 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_70)[5];
    goto LAB_00c6b72c;
  }
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>,std::__ndk1::__unordered_map_hasher<cocos2d::Ref*,std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>,std::__ndk1::hash<cocos2d::Ref*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Ref*,std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>,std::__ndk1::equal_to<cocos2d::Ref*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>
  ::
  __emplace_unique_key_args<cocos2d::Ref*,cocos2d::Ref*&,void(cocos2d::Ref::*&)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>
            (*(__hash_table<std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>,std::__ndk1::__unordered_map_hasher<cocos2d::Ref*,std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>,std::__ndk1::hash<cocos2d::Ref*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Ref*,std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>,std::__ndk1::equal_to<cocos2d::Ref*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>
               **)(local_b8 + 0x28),&pRStack_98,&pRStack_98,
             (_func_void_Armature_ptr_MovementEventType_basic_string_ptr *)local_a8);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<cocostudio::Armature*,cocostudio::ArmatureMovementDispatcher*>,std::__ndk1::__unordered_map_hasher<cocostudio::Armature*,std::__ndk1::__hash_value_type<cocostudio::Armature*,cocostudio::ArmatureMovementDispatcher*>,std::__ndk1::hash<cocostudio::Armature*>,true>,std::__ndk1::__unordered_map_equal<cocostudio::Armature*,std::__ndk1::__hash_value_type<cocostudio::Armature*,cocostudio::ArmatureMovementDispatcher*>,std::__ndk1::equal_to<cocostudio::Armature*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocostudio::Armature*,cocostudio::ArmatureMovementDispatcher*>>>
  ::
  __emplace_unique_key_args<cocostudio::Armature*,cocostudio::Armature*&,cocostudio::ArmatureMovementDispatcher*&>
            (*(__hash_table<std::__ndk1::__hash_value_type<cocostudio::Armature*,cocostudio::ArmatureMovementDispatcher*>,std::__ndk1::__unordered_map_hasher<cocostudio::Armature*,std::__ndk1::__hash_value_type<cocostudio::Armature*,cocostudio::ArmatureMovementDispatcher*>,std::__ndk1::hash<cocostudio::Armature*>,true>,std::__ndk1::__unordered_map_equal<cocostudio::Armature*,std::__ndk1::__hash_value_type<cocostudio::Armature*,cocostudio::ArmatureMovementDispatcher*>,std::__ndk1::equal_to<cocostudio::Armature*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocostudio::Armature*,cocostudio::ArmatureMovementDispatcher*>>>
               **)(param_1 + 0x30),(Armature **)&local_b0,(Armature **)&local_b0,&local_b8);
LAB_00c6b764:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

