
/* v8::internal::SerializedHandleChecker::VisitRootPointers(v8::internal::Root, char const*,
   v8::internal::FullObjectSlot, v8::internal::FullObjectSlot) */

void __thiscall
v8::internal::SerializedHandleChecker::VisitRootPointers
          (SerializedHandleChecker *this,int param_2,undefined8 param_3,uint *param_4,uint *param_5)

{
  char *pcVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined8 local_28;
  ulong uVar11;
  
  if (param_4 < param_5) {
    pcVar1 = "global";
    if (param_2 != 0xc) {
      pcVar1 = "eternal";
    }
    do {
      uVar4 = *(ulong *)(this + 0x18);
      if (uVar4 != 0) {
        uVar2 = *param_4;
        uVar5 = (ulong)uVar2;
        uVar10 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar4 >> 0x10
                                                                                      )),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar4 >> 8)),POPCOUNT((char)uVar4))))))));
        uVar9 = NEON_uaddlv(uVar10,1);
        uVar11 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9);
        if ((uVar11 & 0xffffffff) < 2) {
          uVar6 = (ulong)((int)uVar4 - 1U & uVar2);
        }
        else {
          uVar6 = uVar5;
          if (uVar4 <= uVar5) {
            uVar6 = 0;
            if (uVar4 != 0) {
              uVar6 = uVar5 / uVar4;
            }
            uVar6 = uVar5 - uVar6 * uVar4;
          }
        }
        plVar7 = *(long **)(*(long *)(this + 0x10) + uVar6 * 8);
        if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
          do {
            uVar8 = plVar7[1];
            if (uVar8 == uVar5) {
              if (*(uint *)(plVar7 + 2) == uVar2) goto LAB_011f1abc;
            }
            else {
              if ((uVar11 & 0xffffffff) < 2) {
                uVar8 = uVar8 & uVar4 - 1;
              }
              else if (uVar4 <= uVar8) {
                uVar3 = 0;
                if (uVar4 != 0) {
                  uVar3 = uVar8 / uVar4;
                }
                uVar8 = uVar8 - uVar3 * uVar4;
              }
              if (uVar8 != uVar6) break;
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
      }
      PrintF("%s handle not serialized: ",pcVar1);
      local_28 = *(undefined8 *)param_4;
      Object::Print((Object *)&local_28);
      this[0x38] = (SerializedHandleChecker)0x0;
LAB_011f1abc:
      param_4 = param_4 + 2;
    } while (param_4 < param_5);
  }
  return;
}

