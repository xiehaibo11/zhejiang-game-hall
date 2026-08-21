
/* universe::network::GuoPengFei::onWrite(uv_write_s*, universe::network::ZhouLuJun*, bool) */

void __thiscall
universe::network::GuoPengFei::onWrite
          (GuoPengFei *this,uv_write_s *param_1,ZhouLuJun *param_2,bool param_3)

{
  ulong uVar1;
  long lVar2;
  deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>> *pdVar3
  ;
  void *pvVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  void *local_60 [3];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00a0a090 with catch @ 00a0a128 */
                    /* catch() { ... } // from try @ 00a0a0a8 with catch @ 00a0a12c */
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar5 = (char *)Translated::getInstance();
    Translated::log(pcVar5,"GuoPengFei: delete 15");
  }
  uVar6 = *(ulong *)(this + 0x428);
  if (uVar6 != 0) {
                    /* catch() { ... } // from try @ 00a0a05c with catch @ 00a0a15c */
    uVar9 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
                    /* try { // try from 00a0a178 to 00b0a1b3 has its CatchHandler @ 00a0a178
                       catch() { ... } // from try @ 00a0a178 with catch @ 00a0a178
                       catch() { ... } // from try @ 00a0a220 with catch @ 00a0a178
                       catch() { ... } // from try @ 00a0a2b8 with catch @ 00a0a178 */
    uVar15 = CONCAT17(POPCOUNT((char)(uVar6 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar6 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar6 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar6 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar6 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar6 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar6 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar6))))
                                                ))));
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar10 = (uVar9 ^ (ulong)param_1 >> 0x20 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
    uVar9 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
    if (uVar9 < 2) {
      uVar11 = uVar6 - 1 & uVar10;
    }
    else {
      uVar11 = uVar10;
      if (uVar6 <= uVar10) {
                    /* try { // try from 00a0a1b4 to 00b0a1cb has its CatchHandler @ 00a0a300 */
        uVar11 = 0;
        if (uVar6 != 0) {
          uVar11 = uVar10 / uVar6;
        }
        uVar11 = uVar10 - uVar11 * uVar6;
      }
    }
    plVar12 = *(long **)(*(long *)(this + 0x420) + uVar11 * 8);
                    /* try { // try from 00a0a1d8 to 00b0a1ef has its CatchHandler @ 00a0a2d0 */
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      do {
        uVar13 = plVar12[1];
        if (uVar13 == uVar10) {
          if ((uv_write_s *)plVar12[2] == param_1) {
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>,std::__ndk1::__unordered_map_hasher<uv_write_s*,std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>,std::__ndk1::hash<uv_write_s*>,true>,std::__ndk1::__unordered_map_equal<uv_write_s*,std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>,std::__ndk1::equal_to<uv_write_s*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>>>
            ::remove(local_60);
            pvVar4 = local_60[0];
            local_60[0] = (void *)0x0;
            if (pvVar4 != (void *)0x0) {
              operator_delete(pvVar4);
            }
            break;
          }
        }
        else {
          if (uVar9 < 2) {
                    /* try { // try from 00a0a220 to 00b0a2af has its CatchHandler @ 00a0a178 */
            uVar13 = uVar13 & uVar6 - 1;
          }
          else if (uVar6 <= uVar13) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar13 / uVar6;
            }
            uVar13 = uVar13 - uVar1 * uVar6;
          }
          if (uVar13 != uVar11) break;
        }
        plVar12 = (long *)*plVar12;
                    /* try { // try from 00a0a1f4 to 00b0a21f has its CatchHandler @ 00a0a2cc */
      } while (plVar12 != (long *)0x0);
    }
  }
  if (IncludeSymbols::getInstance()::s_MessagePool ==
      (deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>> *)
      0x0) {
    IncludeSymbols::getInstance()::s_MessagePool = operator_new(0x30);
    *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 8) = 0;
    *(undefined8 *)IncludeSymbols::getInstance()::s_MessagePool = 0;
    *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x18) = 0;
    *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x10) = 0;
    *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x28) = 0;
    *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x20) = 0;
  }
  pdVar3 = IncludeSymbols::getInstance()::s_MessagePool;
  if (param_2 != (ZhouLuJun *)0x0) {
    lVar7 = *(long *)(IncludeSymbols::getInstance()::s_MessagePool + 8);
    lVar8 = *(long *)(IncludeSymbols::getInstance()::s_MessagePool + 0x28);
    uVar6 = 0;
    if (*(long *)(IncludeSymbols::getInstance()::s_MessagePool + 0x10) - lVar7 != 0) {
      uVar6 = (*(long *)(IncludeSymbols::getInstance()::s_MessagePool + 0x10) - lVar7) * 0x40 - 1;
    }
    uVar9 = lVar8 + *(long *)(IncludeSymbols::getInstance()::s_MessagePool + 0x20);
    if (uVar6 == uVar9) {
      std::__ndk1::
      deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>::
      __add_back_capacity(IncludeSymbols::getInstance()::s_MessagePool);
      lVar8 = *(long *)(pdVar3 + 0x28);
      lVar7 = *(long *)(pdVar3 + 8);
      uVar9 = *(long *)(pdVar3 + 0x20) + lVar8;
    }
                    /* try { // try from 00a0a2b0 to 00b0a2b7 has its CatchHandler @ 00a0a2cc */
                    /* try { // try from 00a0a2b8 to 00b0a31b has its CatchHandler @ 00a0a178 */
    *(ZhouLuJun **)(*(long *)(lVar7 + (uVar9 >> 6 & 0x3fffffffffffff8)) + (uVar9 & 0x1ff) * 8) =
         param_2;
    *(long *)(pdVar3 + 0x28) = lVar8 + 1;
  }
                    /* catch() { ... } // from try @ 00a0a1f4 with catch @ 00a0a2cc
                       catch() { ... } // from try @ 00a0a2b0 with catch @ 00a0a2cc */
  if (!param_3) {
                    /* catch() { ... } // from try @ 00a0a1d8 with catch @ 00a0a2d0 */
    close(this);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00a0a1b4 with catch @ 00a0a300 */
    __stack_chk_fail();
  }
  return;
}

