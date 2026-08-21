
/* v8::internal::ConcurrentMarking::ClearMemoryChunkData(v8::internal::MemoryChunk*) */

void __thiscall
v8::internal::ConcurrentMarking::ClearMemoryChunkData(ConcurrentMarking *this,MemoryChunk *param_1)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  if (0 < *(int *)(this + 0x4d8)) {
    uVar8 = (ulong)param_1 >> 0x12;
    lVar9 = 1;
    do {
      uVar4 = *(ulong *)(this + lVar9 * 0x80 + 0x38);
      if (uVar4 != 0) {
        uVar11 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar4 >> 0x10
                                                                                      )),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar4 >> 8)),POPCOUNT((char)uVar4))))))));
        uVar10 = NEON_uaddlv(uVar11,1);
        uVar12 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10);
        if ((uVar12 & 0xffffffff) < 2) {
          uVar5 = uVar4 - 1 & uVar8;
        }
        else {
          uVar5 = uVar8;
          if (uVar4 <= uVar8) {
            uVar5 = 0;
            if (uVar4 != 0) {
              uVar5 = uVar8 / uVar4;
            }
            uVar5 = uVar8 - uVar5 * uVar4;
          }
        }
        plVar6 = *(long **)(*(long *)(this + lVar9 * 0x80 + 0x30) + uVar5 * 8);
        if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
          do {
            uVar7 = plVar6[1];
            if (uVar7 == uVar8) {
              if ((MemoryChunk *)plVar6[2] == param_1) {
                plVar3 = (long *)plVar6[4];
                plVar6[3] = 0;
                plVar6[4] = 0;
                if (plVar3 != (long *)0x0) {
                  (**(code **)(*plVar3 + 8))();
                }
                break;
              }
            }
            else {
              if ((uVar12 & 0xffffffff) < 2) {
                uVar7 = uVar7 & uVar4 - 1;
              }
              else if (uVar4 <= uVar7) {
                uVar2 = 0;
                if (uVar4 != 0) {
                  uVar2 = uVar7 / uVar4;
                }
                uVar7 = uVar7 - uVar2 * uVar4;
              }
              if (uVar7 != uVar5) break;
            }
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
      }
      bVar1 = lVar9 < *(int *)(this + 0x4d8);
      lVar9 = lVar9 + 1;
    } while (bVar1);
  }
  return;
}

