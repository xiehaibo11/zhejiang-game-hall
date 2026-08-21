
/* v8::internal::ObjectStatsCollectorImpl::RecordObjectStats(v8::internal::HeapObject,
   v8::internal::InstanceType, unsigned long, unsigned long) */

void __thiscall
v8::internal::ObjectStatsCollectorImpl::RecordObjectStats
          (ObjectStatsCollectorImpl *this,uint param_2,ushort param_3,long param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar5 = *(ulong *)(this + 0x20);
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
    uVar4 = (ulong)param_2;
    if (uVar7 < 2) {
      uVar8 = (ulong)((int)uVar5 - 1U & param_2);
    }
    else {
      uVar8 = uVar4;
      if (uVar5 <= uVar4) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar4 / uVar5;
        }
        uVar8 = uVar4 - uVar8 * uVar5;
      }
    }
    plVar9 = *(long **)(*(long *)(this + 0x18) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar4) {
          if (*(uint *)(plVar9 + 2) == param_2) {
            return;
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
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  lVar6 = *(long *)(this + 8);
  lVar1 = lVar6 + (ulong)param_3 * 8;
  *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  *(long *)(lVar1 + 0x4898) = *(long *)(lVar1 + 0x4898) + param_4;
  if (param_4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = 0x3b - (int)LZCOUNT(param_4);
    uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    if (0xe < (int)uVar2) {
      uVar2 = 0xf;
    }
    uVar5 = (ulong)uVar2;
  }
  lVar1 = lVar6 + (ulong)param_3 * 0x80 + uVar5 * 8;
  lVar6 = lVar6 + (ulong)param_3 * 8;
  *(long *)(lVar1 + 0xb570) = *(long *)(lVar1 + 0xb570) + 1;
  *(long *)(lVar6 + 0x9128) = *(long *)(lVar6 + 0x9128) + param_5;
  *(long *)(lVar1 + 0x2f9f0) = *(long *)(lVar1 + 0x2f9f0) + 1;
  return;
}

