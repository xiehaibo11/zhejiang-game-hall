
/* v8::internal::OldToNewSlotVerifyingVisitor::VisitEphemeron(v8::internal::HeapObject, int,
   v8::internal::CompressedObjectSlot, v8::internal::CompressedObjectSlot) */

void __thiscall
v8::internal::OldToNewSlotVerifyingVisitor::VisitEphemeron
          (OldToNewSlotVerifyingVisitor *this,ulong param_2,undefined8 param_3,uint *param_4,
          undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  (**(code **)(*(long *)this + 0x28))(this,param_2,param_5);
  if (FLAG_minor_mc != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00f9eb5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x28))(this,param_2,param_5);
    return;
  }
  for (plVar4 = *(long **)(*(long *)(this + 8) + 8); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4
      ) {
    if ((uint *)plVar4[4] <= param_4) {
      if (param_4 <= (uint *)plVar4[4]) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!InUntypedSet(key)");
      }
      plVar4 = plVar4 + 1;
    }
  }
  if (((((param_2 & 1) != 0) && ((*(byte *)((param_2 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) ||
      ((*param_4 & 1) == 0)) ||
     ((*(byte *)((ulong)param_4 & 0xffffffff00000000 | (ulong)*param_4 & 0xfffc0000 | 8) & 0x18) ==
      0)) {
    return;
  }
  uVar5 = (*(long **)(this + 0x18))[1];
  if (uVar5 != 0) {
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
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar8 = param_2 & 0xffffffff;
    if (uVar7 < 2) {
      uVar9 = (int)uVar5 - 1 & uVar8;
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
    plVar4 = *(long **)(**(long **)(this + 0x18) + uVar9 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      do {
        uVar10 = plVar4[1];
        if (uVar10 == uVar8) {
          if ((int)plVar4[2] == (int)param_2) {
            uVar5 = plVar4[4];
            iVar6 = (int)((long)param_4 + (0x3fffffff9 - param_2) >> 2);
            uVar2 = iVar6 - 3;
            uVar1 = iVar6 - 2;
            if (-1 < (int)uVar2) {
              uVar1 = uVar2;
            }
            if (uVar5 == 0) goto LAB_00f9ed50;
            uVar12 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                              CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                                       CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                                CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                         CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                                  CONCAT12(POPCOUNT((char)(uVar5 >> 
                                                  0x10)),CONCAT11(POPCOUNT((char)(uVar5 >> 8)),
                                                                  POPCOUNT((char)uVar5))))))));
            uVar11 = NEON_uaddlv(uVar12,1);
            uVar8 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
            uVar7 = (long)((ulong)uVar1 << 0x20) >> 0x21;
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
            plVar4 = *(long **)(plVar4[3] + uVar9 * 8);
            if ((plVar4 == (long *)0x0) || (plVar4 = (long *)*plVar4, plVar4 == (long *)0x0))
            goto LAB_00f9ed50;
            goto LAB_00f9ed1c;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar5 - 1;
          }
          else if (uVar5 <= uVar10) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar10 / uVar5;
            }
            uVar10 = uVar10 - uVar3 * uVar5;
          }
          if (uVar10 != uVar9) break;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","it != ephemeron_remembered_set_->end()");
LAB_00f9ed1c:
  do {
    uVar10 = plVar4[1];
    if (uVar10 == uVar7) {
      if ((int)plVar4[2] == (int)uVar1 >> 1) {
        return;
      }
    }
    else {
      if (uVar8 < 2) {
        uVar10 = uVar10 & uVar5 - 1;
      }
      else if (uVar5 <= uVar10) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar10 / uVar5;
        }
        uVar10 = uVar10 - uVar3 * uVar5;
      }
      if (uVar10 != uVar9) break;
    }
    plVar4 = (long *)*plVar4;
  } while (plVar4 != (long *)0x0);
LAB_00f9ed50:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","it->second.find(entry.as_int()) != it->second.end()");
}

