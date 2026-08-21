
/* v8::internal::Debug::TemporaryObjectsTracker::MoveEvent(unsigned long, unsigned long, int) */

void v8::internal::Debug::TemporaryObjectsTracker::MoveEvent
               (ulong param_1,ulong param_2,int param_3)

{
  __hash_table<unsigned_long,std::__ndk1::hash<unsigned_long>,std::__ndk1::equal_to<unsigned_long>,std::__ndk1::allocator<unsigned_long>>
  *this;
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  ulong local_58;
  void *local_50 [3];
  long local_38;
  
  local_58 = (ulong)(uint)param_3;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_2 != local_58) {
    base::Mutex::Lock((Mutex *)(param_1 + 0x30));
    uVar4 = *(ulong *)(param_1 + 0x10);
    this = (__hash_table<unsigned_long,std::__ndk1::hash<unsigned_long>,std::__ndk1::equal_to<unsigned_long>,std::__ndk1::allocator<unsigned_long>>
            *)(param_1 + 8);
    if (uVar4 != 0) {
      uVar10 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(uVar4 >> 0x10))
                                                                     ,CONCAT11(POPCOUNT((char)(uVar4
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar4
                                                                                        ))))))));
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar5 < 2) {
        uVar6 = uVar4 - 1 & param_2;
      }
      else {
        uVar6 = param_2;
        if (uVar4 <= param_2) {
          uVar6 = 0;
          if (uVar4 != 0) {
            uVar6 = param_2 / uVar4;
          }
          uVar6 = param_2 - uVar6 * uVar4;
        }
      }
      plVar7 = *(long **)(*(long *)this + uVar6 * 8);
      if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
        do {
          uVar8 = plVar7[1];
          if (uVar8 == param_2) {
            if (plVar7[2] == param_2) {
              std::__ndk1::
              __hash_table<unsigned_long,std::__ndk1::hash<unsigned_long>,std::__ndk1::equal_to<unsigned_long>,std::__ndk1::allocator<unsigned_long>>
              ::remove(local_50,this);
              pvVar3 = local_50[0];
              local_50[0] = (void *)0x0;
              if (pvVar3 != (void *)0x0) {
                operator_delete(pvVar3);
              }
              std::__ndk1::
              __hash_table<unsigned_long,std::__ndk1::hash<unsigned_long>,std::__ndk1::equal_to<unsigned_long>,std::__ndk1::allocator<unsigned_long>>
              ::__emplace_unique_key_args<unsigned_long,unsigned_long_const&>
                        (this,&local_58,&local_58);
              goto LAB_00f0e098;
            }
          }
          else {
            if (uVar5 < 2) {
              uVar8 = uVar8 & uVar4 - 1;
            }
            else if (uVar4 <= uVar8) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar8 / uVar4;
              }
              uVar8 = uVar8 - uVar1 * uVar4;
            }
            if (uVar8 != uVar6) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
    std::__ndk1::
    __hash_table<unsigned_long,std::__ndk1::hash<unsigned_long>,std::__ndk1::equal_to<unsigned_long>,std::__ndk1::allocator<unsigned_long>>
    ::__erase_unique<unsigned_long>(this,&local_58);
LAB_00f0e098:
    base::Mutex::Unlock((Mutex *)(param_1 + 0x30));
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

