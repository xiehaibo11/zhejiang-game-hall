
/* unsigned long std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, cocos2d::Color3B>,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int, cocos2d::Color3B>,
   std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::Color3B>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, cocos2d::Color3B> >
   >::__erase_unique<int>(int const&) */

ulong __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Color3B>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Color3B>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Color3B>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Color3B>>>
::__erase_unique<int>
          (__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Color3B>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Color3B>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Color3B>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Color3B>>>
           *this,int *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  void *local_40 [3];
  long local_28;
  ulong uVar11;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(this + 8);
  if (uVar4 != 0) {
    uVar5 = (ulong)*param_1;
    uVar10 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar4 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar4))))
                                                ))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar11 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9);
    if ((uVar11 & 0xffffffff) < 2) {
                    /* try { // try from 00e0d148 to 00f0d18f has its CatchHandler @ 00e0d148
                       catch() { ... } // from try @ 00e0d148 with catch @ 00e0d148
                       catch() { ... } // from try @ 00e0d2fc with catch @ 00e0d148 */
      uVar6 = uVar4 - 1 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (uVar4 <= uVar5) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar5 / uVar4;
        }
        uVar6 = uVar5 - uVar6 * uVar4;
      }
    }
    plVar7 = *(long **)(*(long *)this + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar8 == uVar5) {
          if ((int)plVar7[2] == *param_1) {
            remove(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            uVar4 = 1;
            goto LAB_00e0d1bc;
          }
        }
        else {
          if ((uVar11 & 0xffffffff) < 2) {
            uVar8 = uVar8 & uVar4 - 1;
          }
          else {
                    /* try { // try from 00e0d190 to 00f0d193 has its CatchHandler @ 00e0d39c */
            if (uVar4 <= uVar8) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar8 / uVar4;
              }
              uVar8 = uVar8 - uVar1 * uVar4;
            }
          }
          if (uVar8 != uVar6) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  uVar4 = 0;
LAB_00e0d1bc:
                    /* try { // try from 00e0d1c8 to 00f0d1fb has its CatchHandler @ 00e0d3ac */
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00e0d1fc to 00f0d20f has its CatchHandler @ 00e0d380 */
    __stack_chk_fail();
  }
  return uVar4;
}

