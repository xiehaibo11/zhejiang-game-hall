
/* cocostudio::TriggerMng::removeTriggerObj(cocostudio::TriggerObj*) */

void __thiscall cocostudio::TriggerMng::removeTriggerObj(TriggerMng *this,TriggerObj *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  uint local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (param_1 != (TriggerObj *)0x0) {
    local_2c = TriggerObj::getId(param_1);
    uVar4 = *(ulong *)(this + 0x10);
    if (uVar4 != 0) {
      uVar3 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                       CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                                CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                         CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                  CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                           CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                    CONCAT11(POPCOUNT((char)(uVar4 
                                                  >> 8)),POPCOUNT((char)uVar4))))))));
      uVar10 = NEON_uaddlv(uVar3,1);
      uVar5 = CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar10) & 0xffffffff;
      uVar6 = (ulong)local_2c;
      if (uVar5 < 2) {
        uVar7 = (ulong)((int)uVar4 - 1U & local_2c);
      }
      else {
        uVar7 = uVar6;
        if (uVar4 <= uVar6) {
          uVar7 = 0;
          if (uVar4 != 0) {
            uVar7 = uVar6 / uVar4;
          }
          uVar7 = uVar6 - uVar7 * uVar4;
        }
      }
      plVar8 = *(long **)(*(long *)(this + 8) + uVar7 * 8);
      if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar6) {
            if (*(uint *)(plVar8 + 2) == local_2c) {
              uVar3 = 0;
              if ((long *)plVar8[3] != (long *)0x0) {
                (**(code **)(*(long *)plVar8[3] + 0x28))();
                std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>>>
                ::__erase_unique<unsigned_int>
                          ((__hash_table<std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>>>
                            *)(this + 8),&local_2c);
                uVar3 = 1;
              }
              goto LAB_00c6b260;
            }
          }
          else {
            if (uVar5 < 2) {
              uVar9 = uVar9 & uVar4 - 1;
            }
            else if (uVar4 <= uVar9) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar9 / uVar4;
              }
              uVar9 = uVar9 - uVar1 * uVar4;
            }
            if (uVar9 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  uVar3 = 0;
LAB_00c6b260:
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

