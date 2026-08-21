
/* cocostudio::TriggerMng::removeArmatureMovementCallBack(cocostudio::Armature*, cocos2d::Ref*, void
   (cocos2d::Ref::*)(cocostudio::Armature*, cocostudio::MovementEventType,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)) */

void cocostudio::TriggerMng::removeArmatureMovementCallBack
               (Armature *param_1,Ref *param_2,
               _func_void_Armature_ptr_MovementEventType_basic_string_ptr *param_3)

{
  ulong uVar1;
  long in_x3;
  ulong in_x4;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  if (((param_2 != (Ref *)0x0) &&
      (param_3 != (_func_void_Armature_ptr_MovementEventType_basic_string_ptr *)0x0)) &&
     (plVar6 = *(long **)(param_1 + 0x30), plVar6 != (long *)0x0)) {
    if (((in_x3 != 0) || (in_x4 != 0 && (in_x4 & 1) != 0)) && (uVar2 = plVar6[1], uVar2 != 0)) {
      uVar3 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)param_2 >> 0x20) * -0x622015f714c7d297;
      uVar9 = CONCAT17(POPCOUNT((char)(uVar2 >> 0x38)),
                       CONCAT16(POPCOUNT((char)(uVar2 >> 0x30)),
                                CONCAT15(POPCOUNT((char)(uVar2 >> 0x28)),
                                         CONCAT14(POPCOUNT((char)(uVar2 >> 0x20)),
                                                  CONCAT13(POPCOUNT((char)(uVar2 >> 0x18)),
                                                           CONCAT12(POPCOUNT((char)(uVar2 >> 0x10)),
                                                                    CONCAT11(POPCOUNT((char)(uVar2 
                                                  >> 8)),POPCOUNT((char)uVar2))))))));
      uVar8 = NEON_uaddlv(uVar9,1);
      uVar4 = (uVar3 ^ (ulong)param_2 >> 0x20 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
      uVar3 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
      uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
      if (uVar3 < 2) {
        uVar5 = uVar2 - 1 & uVar4;
      }
      else {
        uVar5 = uVar4;
        if (uVar2 <= uVar4) {
          uVar5 = 0;
          if (uVar2 != 0) {
            uVar5 = uVar4 / uVar2;
          }
          uVar5 = uVar4 - uVar5 * uVar2;
        }
      }
      plVar6 = *(long **)(*plVar6 + uVar5 * 8);
      if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
        do {
          uVar7 = plVar6[1];
          if (uVar7 == uVar4) {
            if ((Ref *)plVar6[2] == param_2) {
              ArmatureMovementDispatcher::removeAnnimationEventCallBack((Ref *)plVar6[3],param_3);
              return;
            }
          }
          else {
            if (uVar3 < 2) {
              uVar7 = uVar7 & uVar2 - 1;
            }
            else if (uVar2 <= uVar7) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar7 / uVar2;
              }
              uVar7 = uVar7 - uVar1 * uVar2;
            }
            if (uVar7 != uVar5) {
              return;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  return;
}

