
void FUN_00ef62c8(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined2 uVar12;
  void *local_40 [3];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = *param_2;
    uVar7 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
    uVar4 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar5 >> 
                                                  8)),POPCOUNT((char)uVar5))))))));
    uVar12 = NEON_uaddlv(uVar4,1);
    uVar8 = (uVar7 ^ uVar6 >> 0x20 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = CONCAT62((int6)((ulong)uVar4 >> 0x10),uVar12) & 0xffffffff;
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
    plVar10 = *(long **)(*param_1 + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar11 = plVar10[1];
        if (uVar11 == uVar8) {
          if (plVar10[2] == uVar6) {
            std::__ndk1::
            __hash_table<v8::internal::CompilerDispatcher::Job*,std::__ndk1::hash<v8::internal::CompilerDispatcher::Job*>,std::__ndk1::equal_to<v8::internal::CompilerDispatcher::Job*>,std::__ndk1::allocator<v8::internal::CompilerDispatcher::Job*>>
            ::remove(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            uVar4 = 1;
            goto LAB_00ef63d0;
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
  uVar4 = 0;
LAB_00ef63d0:
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

