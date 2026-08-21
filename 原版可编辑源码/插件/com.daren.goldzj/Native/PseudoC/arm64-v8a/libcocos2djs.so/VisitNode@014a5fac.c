
/* v8::internal::SourceRangeAstVisitor::VisitNode(v8::internal::AstNode*) */

undefined8 __thiscall
v8::internal::SourceRangeAstVisitor::VisitNode(SourceRangeAstVisitor *this,AstNode *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined8 local_28;
  
  plVar3 = (long *)(*(long *)(this + 0x20) + 8);
  plVar4 = (long *)*plVar3;
  plVar9 = plVar3;
  if (plVar4 != (long *)0x0) {
    do {
      if ((AstNode *)plVar4[4] >= param_1) {
        plVar9 = plVar4;
      }
      plVar4 = (long *)plVar4[(AstNode *)plVar4[4] < param_1];
    } while (plVar4 != (long *)0x0);
    if ((((plVar9 != plVar3) && ((AstNode *)plVar9[4] <= param_1)) &&
        (plVar9 = (long *)plVar9[5], plVar9 != (long *)0x0)) &&
       (uVar2 = (**(code **)(*plVar9 + 0x18))(plVar9,2), (uVar2 & 1) != 0)) {
      local_28 = (**(code **)(*plVar9 + 0x10))(plVar9,2);
      uVar2 = *(ulong *)(this + 0x30);
      if (uVar2 != 0) {
        uVar11 = CONCAT17(POPCOUNT((char)(uVar2 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar2 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar2 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar2 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar2 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar2 >> 0x10
                                                                                      )),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar2 >> 8)),POPCOUNT((char)uVar2))))))));
        uVar10 = NEON_uaddlv(uVar11,1);
        uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
        uVar6 = (ulong)(int)local_28;
        if (uVar5 < 2) {
          uVar7 = uVar2 - 1 & uVar6;
        }
        else {
          uVar7 = uVar6;
          if (uVar2 <= uVar6) {
            uVar7 = 0;
            if (uVar2 != 0) {
              uVar7 = uVar6 / uVar2;
            }
            uVar7 = uVar6 - uVar7 * uVar2;
          }
        }
        plVar3 = *(long **)(*(long *)(this + 0x28) + uVar7 * 8);
        if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
          do {
            uVar8 = plVar3[1];
            if (uVar8 == uVar6) {
              if ((int)plVar3[2] == (int)local_28) {
                (**(code **)(*plVar9 + 0x20))(plVar9);
                return 1;
              }
            }
            else {
              if (uVar5 < 2) {
                uVar8 = uVar8 & uVar2 - 1;
              }
              else if (uVar2 <= uVar8) {
                uVar1 = 0;
                if (uVar2 != 0) {
                  uVar1 = uVar8 / uVar2;
                }
                uVar8 = uVar8 - uVar1 * uVar2;
              }
              if (uVar8 != uVar7) break;
            }
            plVar3 = (long *)*plVar3;
          } while (plVar3 != (long *)0x0);
        }
      }
      std::__ndk1::
      __hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
      ::__emplace_unique_key_args<int,int&>
                ((__hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
                  *)(this + 0x28),(int *)&local_28,(int *)&local_28);
    }
  }
  return 1;
}

