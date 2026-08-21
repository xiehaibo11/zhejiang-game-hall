
/* v8::internal::ProfileNode::IncrementLineTicks(int) */

void __thiscall v8::internal::ProfileNode::IncrementLineTicks(ProfileNode *this,int param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  int local_2c [3];
  int *local_8;
  
  if (param_1 == 0) {
    return;
  }
  uVar3 = *(ulong *)(this + 0x78);
  if (uVar3 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar3 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar3))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    uVar6 = (ulong)param_1;
    if (uVar5 < 2) {
      uVar7 = uVar3 - 1 & uVar6;
    }
    else {
      uVar7 = uVar6;
      if (uVar3 <= uVar6) {
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = uVar6 / uVar3;
        }
        uVar7 = uVar6 - uVar7 * uVar3;
      }
    }
    plVar8 = *(long **)(*(long *)(this + 0x70) + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)*plVar8;
      if (plVar8 != (long *)0x0) {
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar6) {
            if ((int)plVar8[2] == param_1) break;
          }
          else {
            if (uVar5 < 2) {
              uVar9 = uVar9 & uVar3 - 1;
            }
            else if (uVar3 <= uVar9) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar9 / uVar3;
              }
              uVar9 = uVar9 - uVar1 * uVar3;
            }
            if (uVar9 != uVar7) goto LAB_011ad514;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      goto LAB_011ad518;
    }
  }
LAB_011ad514:
  plVar8 = (long *)0x0;
LAB_011ad518:
  local_8 = local_2c;
  local_2c[0] = param_1;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,int>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                    ((int *)(this + 0x70),(piecewise_construct_t *)local_2c,(tuple *)&DAT_019ddce0,
                     (tuple *)&local_8);
  iVar4 = 1;
  if (plVar8 != (long *)0x0) {
    iVar4 = *(int *)(lVar2 + 0x14) + 1;
  }
  *(int *)(lVar2 + 0x14) = iVar4;
  return;
}

