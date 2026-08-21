
/* v8::internal::compiler::NodeHashCache::Query(v8::internal::compiler::Node*) */

long __thiscall v8::internal::compiler::NodeHashCache::Query(NodeHashCache *this,Node *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  uVar2 = NodeProperties::HashCode(param_1);
  uVar5 = *(ulong *)(this + 0x10);
  if (uVar5 != 0) {
    uVar9 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar5 >> 
                                                  8)),POPCOUNT((char)uVar5))))))));
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar6 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = uVar5 - 1 & uVar2;
    }
    else {
      uVar7 = uVar2;
      if (uVar5 <= uVar2) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar2 / uVar5;
        }
        uVar7 = uVar2 - uVar7 * uVar5;
      }
    }
    plVar3 = *(long **)(*(long *)(this + 8) + uVar7 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      do {
        uVar4 = plVar3[1];
        if (uVar4 == uVar2) {
          uVar4 = NodeProperties::Equals((Node *)plVar3[2],param_1);
          if ((uVar4 & 1) != 0) {
            return plVar3[2];
          }
        }
        else {
          if (uVar6 < 2) {
            uVar4 = uVar4 & uVar5 - 1;
          }
          else if (uVar5 <= uVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar4 / uVar5;
            }
            uVar4 = uVar4 - uVar1 * uVar5;
          }
          if (uVar4 != uVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  return 0;
}

