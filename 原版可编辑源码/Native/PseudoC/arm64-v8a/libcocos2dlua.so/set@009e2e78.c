
/* universe::GlobalObjectMap::set(lua_State*, void*) */

void __thiscall
universe::GlobalObjectMap::set(GlobalObjectMap *this,lua_State *param_1,void *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_50 [2];
  undefined1 *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 009e2db0 with catch @ 009e2e80
                       catch() { ... } // from try @ 009e2e38 with catch @ 009e2e80 */
                    /* catch() { ... } // from try @ 009e2d94 with catch @ 009e2e84
                       catch() { ... } // from try @ 009e2e04 with catch @ 009e2e84 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = *(ulong *)(this + 8);
  local_50[0] = param_2;
  if (uVar5 != 0) {
    uVar6 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)param_2 >> 0x20) * -0x622015f714c7d297;
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
    uVar7 = (uVar6 ^ (ulong)param_2 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
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
    plVar9 = *(long **)(*(long *)this + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar7) {
          if ((void *)plVar9[2] == param_2) {
            local_40 = (undefined1 *)local_50;
                    /* try { // try from 009e2fa0 to 00ae2fef has its CatchHandler @ 009e2fa0
                       catch() { ... } // from try @ 009e2fa0 with catch @ 009e2fa0
                       catch() { ... } // from try @ 009e303c with catch @ 009e2fa0
                       catch() { ... } // from try @ 009e30a8 with catch @ 009e2fa0 */
            lVar4 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<void*,int>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,int>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,int>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,int>>>
                    ::
                    __emplace_unique_key_args<void*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<void*const&>,std::__ndk1::tuple<>>
                              ((void **)this,(piecewise_construct_t *)local_50,
                               (tuple *)&DAT_012f32a1,(tuple *)&local_40);
            luaL_unref(param_1,0xffffd8f0,*(undefined4 *)(lVar4 + 0x18));
            break;
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
  lua_pushvalue(param_1,0xffffffff);
  uVar3 = luaL_ref(param_1,0xffffd8f0);
  local_40 = (undefined1 *)local_50;
                    /* try { // try from 009e2ff0 to 00ae303b has its CatchHandler @ 009e30b0 */
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<void*,int>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,int>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,int>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,int>>>
          ::
          __emplace_unique_key_args<void*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<void*const&>,std::__ndk1::tuple<>>
                    ((void **)this,(piecewise_construct_t *)local_50,(tuple *)&DAT_012f32a1,
                     (tuple *)&local_40);
  *(undefined4 *)(lVar4 + 0x18) = uVar3;
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

