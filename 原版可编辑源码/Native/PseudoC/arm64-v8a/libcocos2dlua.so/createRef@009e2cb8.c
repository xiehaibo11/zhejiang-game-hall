
/* universe::MultiScriptHandler::createRef(char const*, int) */

undefined4 __thiscall
universe::MultiScriptHandler::createRef(MultiScriptHandler *this,char *param_1,int param_2)

{
  MultiScriptHandler *pMVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined2 uVar13;
  char *local_60 [2];
  undefined1 *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pMVar1 = this + 8;
  uVar6 = *(ulong *)(this + 0x10);
  local_60[0] = param_1;
  if (uVar6 != 0) {
                    /* try { // try from 009e2d08 to 00ae2d93 has its CatchHandler @ 009e2d08
                       catch() { ... } // from try @ 009e2d08 with catch @ 009e2d08
                       catch() { ... } // from try @ 009e2ddc with catch @ 009e2d08
                       catch() { ... } // from try @ 009e2e18 with catch @ 009e2d08
                       catch() { ... } // from try @ 009e2e40 with catch @ 009e2d08 */
    uVar7 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
    uVar12 = CONCAT17(POPCOUNT((char)(uVar6 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar6 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar6 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar6 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar6 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar6 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar6 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar6))))
                                                ))));
    uVar13 = NEON_uaddlv(uVar12,1);
    uVar8 = (uVar7 ^ (ulong)param_1 >> 0x20 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar13) & 0xffffffff;
    uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar9 = uVar6 - 1 & uVar8;
    }
    else {
      uVar9 = uVar8;
      if (uVar6 <= uVar8) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar8 / uVar6;
        }
        uVar9 = uVar8 - uVar9 * uVar6;
      }
    }
    if ((*(long **)(*(char **)pMVar1 + uVar9 * 8) != (long *)0x0) &&
       (plVar10 = (long *)**(long **)(*(char **)pMVar1 + uVar9 * 8), plVar10 != (long *)0x0)) {
      do {
                    /* try { // try from 009e2d94 to 00ae2dab has its CatchHandler @ 009e2e84 */
        uVar11 = plVar10[1];
        if (uVar11 == uVar8) {
          if ((char *)plVar10[2] == param_1) {
            uVar12 = *(undefined8 *)(this + 0x30);
                    /* try { // try from 009e2ddc to 00ae2e03 has its CatchHandler @ 009e2d08 */
            local_50 = (undefined1 *)local_60;
            lVar5 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<char_const*,int>,std::__ndk1::__unordered_map_hasher<char_const*,std::__ndk1::__hash_value_type<char_const*,int>,std::__ndk1::hash<char_const*>,true>,std::__ndk1::__unordered_map_equal<char_const*,std::__ndk1::__hash_value_type<char_const*,int>,std::__ndk1::equal_to<char_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char_const*,int>>>
                    ::
                    __emplace_unique_key_args<char_const*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<char_const*const&>,std::__ndk1::tuple<>>
                              ((char **)pMVar1,(piecewise_construct_t *)local_60,
                               (tuple *)&DAT_012f32a1,(tuple *)&local_50);
            luaL_unref(uVar12,0xffffd8f0,*(undefined4 *)(lVar5 + 0x18));
            break;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar11 = uVar11 & uVar6 - 1;
          }
          else if (uVar6 <= uVar11) {
                    /* try { // try from 009e2db0 to 00ae2ddb has its CatchHandler @ 009e2e80 */
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar11 / uVar6;
            }
            uVar11 = uVar11 - uVar2 * uVar6;
          }
          if (uVar11 != uVar9) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
                    /* try { // try from 009e2e04 to 00ae2e17 has its CatchHandler @ 009e2e84 */
  lua_pushvalue(*(undefined8 *)(this + 0x30),param_2);
                    /* try { // try from 009e2e18 to 00ae2e37 has its CatchHandler @ 009e2d08 */
  uVar4 = luaL_ref(*(undefined8 *)(this + 0x30),0xffffd8f0);
  local_50 = (undefined1 *)local_60;
                    /* try { // try from 009e2e38 to 00ae2e3f has its CatchHandler @ 009e2e80 */
                    /* try { // try from 009e2e40 to 00ae2e9f has its CatchHandler @ 009e2d08 */
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<char_const*,int>,std::__ndk1::__unordered_map_hasher<char_const*,std::__ndk1::__hash_value_type<char_const*,int>,std::__ndk1::hash<char_const*>,true>,std::__ndk1::__unordered_map_equal<char_const*,std::__ndk1::__hash_value_type<char_const*,int>,std::__ndk1::equal_to<char_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char_const*,int>>>
          ::
          __emplace_unique_key_args<char_const*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<char_const*const&>,std::__ndk1::tuple<>>
                    ((char **)pMVar1,(piecewise_construct_t *)local_60,(tuple *)&DAT_012f32a1,
                     (tuple *)&local_50);
  *(undefined4 *)(lVar5 + 0x18) = uVar4;
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

