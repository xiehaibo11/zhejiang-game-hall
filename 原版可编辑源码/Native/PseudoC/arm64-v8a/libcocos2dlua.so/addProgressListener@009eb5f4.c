
/* universe::Downloader2::addProgressListener(int, std::__ndk1::function<void
   (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float)> const&) */

void __thiscall
universe::Downloader2::addProgressListener(Downloader2 *this,int param_1,function *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  int local_7c [3];
  int *local_70 [4];
  int **local_50;
  long local_38;
  
                    /* try { // try from 009eb5f4 to 00aeb607 has its CatchHandler @ 009eb660 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(this + 0x138);
  local_7c[0] = param_1;
  if (uVar4 != 0) {
    uVar12 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar4 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar4))))
                                                ))));
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar7 = (ulong)param_1;
    if (uVar6 < 2) {
                    /* catch() { ... } // from try @ 009eb5a4 with catch @ 009eb65c
                       catch() { ... } // from try @ 009eb640 with catch @ 009eb65c */
      uVar8 = uVar4 - 1 & uVar7;
    }
    else {
                    /* try { // try from 009eb640 to 00aeb647 has its CatchHandler @ 009eb65c */
                    /* try { // try from 009eb648 to 00aeb67b has its CatchHandler @ 009eb550 */
      uVar8 = uVar7;
      if (uVar4 <= uVar7) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar7 / uVar4;
        }
        uVar8 = uVar7 - uVar8 * uVar4;
      }
    }
                    /* catch() { ... } // from try @ 009eb588 with catch @ 009eb660
                       catch() { ... } // from try @ 009eb5f4 with catch @ 009eb660 */
    plVar9 = *(long **)(*(long *)(this + 0x130) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar7) {
          if ((int)plVar9[2] == param_1) {
            local_70[0] = local_7c;
            lVar3 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>>>
                    ::
                    __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                              ((int *)(this + 0x158),(piecewise_construct_t *)local_7c,
                               (tuple *)&DAT_012f4d1b,(tuple *)local_70);
            plVar9 = *(long **)(param_2 + 0x20);
            if (plVar9 == (long *)0x0) {
              local_50 = (int **)0x0;
            }
            else if ((long *)param_2 == plVar9) {
              local_50 = local_70;
              (**(code **)(*plVar9 + 0x18))(plVar9,local_70);
            }
            else {
                    /* try { // try from 009eb700 to 00aeb753 has its CatchHandler @ 009eb700
                       catch() { ... } // from try @ 009eb700 with catch @ 009eb700
                       catch() { ... } // from try @ 009eb7a0 with catch @ 009eb700
                       catch() { ... } // from try @ 009eb804 with catch @ 009eb700 */
              local_50 = (int **)(**(code **)(*plVar9 + 0x10))(plVar9);
            }
            FUN_009ecdf0(local_70,lVar3 + 0x20);
                    /* try { // try from 009eb754 to 00aeb79f has its CatchHandler @ 009eb850 */
            if (local_70 == local_50) {
              pcVar5 = *(code **)(*local_50 + 8);
            }
            else {
              if (local_50 == (int **)0x0) break;
              pcVar5 = *(code **)(*local_50 + 10);
            }
            (*pcVar5)();
            break;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar1 * uVar4;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

