
/* v8::internal::CodeRangeAddressHint::GetAddressHint(unsigned long) */

undefined8 __thiscall
v8::internal::CodeRangeAddressHint::GetAddressHint(CodeRangeAddressHint *this,ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  
  base::Mutex::Lock((Mutex *)this);
  uVar3 = *(ulong *)(this + 0x30);
  if (uVar3 != 0) {
    uVar2 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar3 >> 
                                                  8)),POPCOUNT((char)uVar3))))))));
    uVar9 = NEON_uaddlv(uVar2,1);
    uVar5 = CONCAT62((int6)((ulong)uVar2 >> 0x10),uVar9) & 0xffffffff;
    if (uVar5 < 2) {
      uVar6 = uVar3 - 1 & param_1;
    }
    else {
      uVar6 = param_1;
      if (uVar3 <= param_1) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = param_1 / uVar3;
        }
        uVar6 = param_1 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*(long *)(this + 0x28) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar8 == param_1) {
          if (plVar7[2] == param_1) {
            if (plVar7[3] != plVar7[4]) {
              puVar4 = (undefined8 *)(plVar7[4] + -8);
              uVar2 = *puVar4;
              plVar7[4] = (long)puVar4;
              goto LAB_010121d0;
            }
            break;
          }
        }
        else {
          if (uVar5 < 2) {
            uVar8 = uVar8 & uVar3 - 1;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  uVar2 = GetRandomMmapAddr();
LAB_010121d0:
  base::Mutex::Unlock((Mutex *)this);
  return uVar2;
}

