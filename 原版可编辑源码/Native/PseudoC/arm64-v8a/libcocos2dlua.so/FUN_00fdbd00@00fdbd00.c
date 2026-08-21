
/* WARNING: Removing unreachable block (ram,0x00fdbe48) */

long * FUN_00fdbd00(__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
                    *param_1,ulong param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar4 = *(ulong *)(param_1 + 8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fdbd8c with catch @ 00fdbd1c
                       catch(type#1 @ 00000000) { ... } // from try @ 00fdbdbc with catch @ 00fdbd1c
                       catch(type#1 @ 00000000) { ... } // from try @ 00fdbdec with catch @ 00fdbd1c
                       catch(type#1 @ 00000000) { ... } // from try @ 00fdbe14 with catch @ 00fdbd1c
                       catch(type#1 @ 00000000) { ... } // from try @ 00fdbe40 with catch @ 00fdbd1c
                        */
  if ((uVar4 == 0) ||
     (*(float *)(param_1 + 0x20) * (float)uVar4 < (float)(*(long *)(param_1 + 0x18) + 1))) {
    uVar4 = (ulong)(uVar4 < 3 || (uVar4 & uVar4 - 1) != 0) | uVar4 << 1;
    uVar5 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
    ::rehash(param_1,uVar5);
    uVar4 = *(ulong *)(param_1 + 8);
  }
  uVar11 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                    CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                             CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                      CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                               CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                        CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                 CONCAT11(POPCOUNT((char)(uVar4 >> 8
                                                                                         )),
                                                                          POPCOUNT((char)uVar4))))))
                            ));
                    /* try { // try from 00fdbd84 to 010dbd8b has its CatchHandler @ 00fdbe80 */
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
                    /* try { // try from 00fdbd8c to 010dbdaf has its CatchHandler @ 00fdbd1c */
  if (uVar5 < 2) {
                    /* try { // try from 00fdbdb0 to 010dbdbb has its CatchHandler @ 00fdbe80 */
    uVar6 = uVar4 - 1 & param_2;
  }
  else {
    uVar6 = param_2;
    if (uVar4 <= param_2) {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = param_2 / uVar4;
      }
      uVar6 = param_2 - uVar6 * uVar4;
    }
  }
  plVar7 = *(long **)(*(long *)param_1 + uVar6 * 8);
                    /* try { // try from 00fdbdbc to 010dbde3 has its CatchHandler @ 00fdbd1c */
  if (plVar7 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    bVar2 = false;
    while (bVar1 = bVar2, plVar3 = plVar7, plVar7 = (long *)*plVar3, plVar7 != (long *)0x0) {
      uVar8 = plVar7[1];
                    /* try { // try from 00fdbde4 to 010dbdeb has its CatchHandler @ 00fdbe7c */
      if (uVar5 < 2) {
        uVar9 = uVar8 & uVar4 - 1;
      }
      else {
        uVar9 = uVar8;
                    /* try { // try from 00fdbdec to 010dbe0b has its CatchHandler @ 00fdbd1c */
        if (uVar4 <= uVar8) {
          uVar9 = 0;
          if (uVar4 != 0) {
            uVar9 = uVar8 / uVar4;
          }
          uVar9 = uVar8 - uVar9 * uVar4;
        }
      }
                    /* try { // try from 00fdbe0c to 010dbe13 has its CatchHandler @ 00fdbe7c */
      if (uVar9 != uVar6) {
        return plVar3;
      }
                    /* try { // try from 00fdbe14 to 010dbe33 has its CatchHandler @ 00fdbd1c */
      bVar2 = bVar1;
                    /* try { // try from 00fdbe34 to 010dbe3f has its CatchHandler @ 00fdbe7c */
      if (((uVar8 != param_2) ||
          (bVar2 = (bool)(bVar1 | *(int *)(plVar7 + 2) == *param_3),
          *(int *)(plVar7 + 2) != *param_3)) && (bVar1)) {
        return plVar3;
      }
    }
  }
  return plVar3;
}

