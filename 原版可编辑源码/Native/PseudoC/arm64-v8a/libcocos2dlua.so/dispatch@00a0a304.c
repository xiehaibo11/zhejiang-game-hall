
/* universe::network::ShowLineNumbers::dispatch(universe::network::ZhouLuJun*) */

void __thiscall
universe::network::ShowLineNumbers::dispatch(ShowLineNumbers *this,ZhouLuJun *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  ZhouLuJun *local_30;
  long local_28;
  ulong uVar10;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar5 = *(ulong *)(this + 8);
  if (uVar5 != 0) {
    uVar4 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar5 >> 
                                                  8)),POPCOUNT((char)uVar5))))))));
    uVar9 = NEON_uaddlv(uVar4,1);
    uVar10 = CONCAT62((int6)((ulong)uVar4 >> 0x10),uVar9);
    uVar1 = CONCAT44(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
    if ((uVar10 & 0xffffffff) < 2) {
      uVar6 = uVar5 - 1 & uVar1;
    }
    else {
      uVar6 = uVar1;
      if (uVar5 <= uVar1) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = uVar1 / uVar5;
        }
        uVar6 = uVar1 - uVar6 * uVar5;
      }
    }
    plVar7 = *(long **)(*(long *)this + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar8 == uVar1) {
          if (plVar7[2] == uVar1) {
            plVar7 = (long *)plVar7[8];
            local_30 = param_1;
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_009d64e4();
            }
            (**(code **)(*plVar7 + 0x30))(plVar7,&local_30);
            uVar4 = 1;
            goto LAB_00a0a3dc;
          }
        }
        else {
          if ((uVar10 & 0xffffffff) < 2) {
            uVar8 = uVar8 & uVar5 - 1;
          }
          else if (uVar5 <= uVar8) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar8 / uVar5;
            }
            uVar8 = uVar8 - uVar2 * uVar5;
          }
          if (uVar8 != uVar6) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  uVar4 = 0;
LAB_00a0a3dc:
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

