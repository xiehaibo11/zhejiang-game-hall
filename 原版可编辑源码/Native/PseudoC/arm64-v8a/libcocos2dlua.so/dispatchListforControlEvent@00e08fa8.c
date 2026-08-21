
/* cocos2d::extension::Control::dispatchListforControlEvent(cocos2d::extension::Control::EventType)
    */

undefined8 * __thiscall
cocos2d::extension::Control::dispatchListforControlEvent(Control *this,int param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  int local_4c [3];
  int *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = *(ulong *)(this + 0x330);
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
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar7 = (ulong)param_2;
    if (uVar6 < 2) {
      uVar8 = uVar5 - 1 & uVar7;
    }
    else {
      uVar8 = uVar7;
      if (uVar5 <= uVar7) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar7 / uVar5;
        }
        uVar8 = uVar7 - uVar8 * uVar5;
      }
    }
    plVar9 = *(long **)(*(long *)(this + 0x328) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar7) {
          if ((int)plVar9[2] == param_2) {
            puVar3 = (undefined8 *)plVar9[3];
            goto LAB_00e090c4;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & uVar5 - 1;
          }
          else if (uVar5 <= uVar10) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar10 / uVar5;
            }
            uVar10 = uVar10 - uVar1 * uVar5;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  puVar3 = operator_new(0x18,(nothrow_t *)&std::nothrow);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  local_40 = local_4c;
  local_4c[0] = param_2;
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Vector<cocos2d::extension::Invocation*>*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Vector<cocos2d::extension::Invocation*>*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Vector<cocos2d::extension::Invocation*>*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Vector<cocos2d::extension::Invocation*>*>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int&&>,std::__ndk1::tuple<>>
                    ((int *)(this + 0x328),(piecewise_construct_t *)local_4c,(tuple *)&DAT_01421e21,
                     (tuple *)&local_40);
  *(undefined8 **)(lVar4 + 0x18) = puVar3;
LAB_00e090c4:
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00e090dc to 00f092fb has its CatchHandler @ 00e090dc
                       catch() { ... } // from try @ 00e090dc with catch @ 00e090dc
                       catch() { ... } // from try @ 00e09510 with catch @ 00e090dc
                       catch() { ... } // from try @ 00e095e0 with catch @ 00e090dc */
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

