
/* cocostudio::TriggerMng::removeArmatureAllMovementCallBack(cocostudio::Armature*) */

void __thiscall
cocostudio::TriggerMng::removeArmatureAllMovementCallBack(TriggerMng *this,Armature *param_1)

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
  long *plVar10;
  ulong uVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  void *local_50 [3];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 != (Armature *)0x0) {
    plVar4 = *(long **)(this + 0x30);
    uVar5 = plVar4[1];
    if (uVar5 != 0) {
      uVar7 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
      uVar13 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(uVar5 >> 0x10))
                                                                     ,CONCAT11(POPCOUNT((char)(uVar5
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar5
                                                                                        ))))))));
      uVar12 = NEON_uaddlv(uVar13,1);
      uVar8 = (uVar7 ^ (ulong)param_1 >> 0x20 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
      uVar7 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
      uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
      if (uVar7 < 2) {
        uVar9 = uVar5 - 1 & uVar8;
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
      plVar10 = *(long **)(*plVar4 + uVar9 * 8);
      if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
        do {
          uVar11 = plVar10[1];
          if (uVar11 == uVar8) {
            if ((Armature *)plVar10[2] == param_1) {
              plVar6 = (long *)plVar10[3];
              if (plVar6 != (long *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6);
                plVar4 = *(long **)(this + 0x30);
              }
              plVar10[3] = 0;
              std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<cocostudio::Armature*,cocostudio::ArmatureMovementDispatcher*>,std::__ndk1::__unordered_map_hasher<cocostudio::Armature*,std::__ndk1::__hash_value_type<cocostudio::Armature*,cocostudio::ArmatureMovementDispatcher*>,std::__ndk1::hash<cocostudio::Armature*>,true>,std::__ndk1::__unordered_map_equal<cocostudio::Armature*,std::__ndk1::__hash_value_type<cocostudio::Armature*,cocostudio::ArmatureMovementDispatcher*>,std::__ndk1::equal_to<cocostudio::Armature*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocostudio::Armature*,cocostudio::ArmatureMovementDispatcher*>>>
              ::remove(local_50,plVar4,plVar10);
              pvVar3 = local_50[0];
              local_50[0] = (void *)0x0;
              if (pvVar3 != (void *)0x0) {
                operator_delete(pvVar3);
              }
              break;
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
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

