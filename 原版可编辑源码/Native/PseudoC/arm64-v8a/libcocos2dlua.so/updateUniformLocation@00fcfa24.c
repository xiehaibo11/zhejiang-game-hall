
/* cocos2d::GLProgram::updateUniformLocation(int, void const*, unsigned int) */

void __thiscall
cocos2d::GLProgram::updateUniformLocation(GLProgram *this,int param_1,void *param_2,uint param_3)

{
  __hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>>>
  *this_00;
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  int *__dest;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong __n;
  void *pvVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  int local_64 [3];
  int *local_58;
  ulong uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00fcf9d4 with catch @ 00fcfa44 */
  local_64[0] = param_1;
  if (param_1 < 0) {
    uVar3 = 0;
  }
  else {
    uVar6 = *(ulong *)(this + 200);
    __n = (ulong)param_3;
    this_00 = (__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>>>
               *)(this + 0xc0);
    if (uVar6 != 0) {
      uVar14 = CONCAT17(POPCOUNT((char)(uVar6 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(uVar6 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(uVar6 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(uVar6 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(uVar6 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(uVar6 >> 0x10))
                                                                     ,CONCAT11(POPCOUNT((char)(uVar6
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar6
                                                                                        ))))))));
      uVar13 = NEON_uaddlv(uVar14,1);
      uVar7 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
      uVar8 = (ulong)param_1;
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
      plVar10 = *(long **)(*(long *)this_00 + uVar9 * 8);
      if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
        do {
          uVar11 = plVar10[1];
          if (uVar11 == uVar8) {
            if ((int)plVar10[2] == param_1) {
              pvVar12 = (void *)plVar10[3];
              if (*(uint *)(plVar10 + 4) < param_3) {
                pvVar12 = realloc(pvVar12,__n);
                memcpy(pvVar12,param_2,__n);
                local_58 = local_64;
                    /* catch() { ... } // from try @ 00fcfb34 with catch @ 00fcfba4 */
                lVar5 = std::__ndk1::
                        __hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>>>
                        ::
                        __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                                  ((int *)this_00,(piecewise_construct_t *)local_64,
                                   (tuple *)&DAT_0144cc7f,(tuple *)&local_58);
                *(void **)(lVar5 + 0x18) = pvVar12;
                *(uint *)(lVar5 + 0x20) = param_3;
                goto LAB_00fcfb40;
              }
              iVar4 = memcmp(pvVar12,param_2,__n);
              uVar3 = 0;
              if (iVar4 == 0) goto LAB_00fcfb44;
              memcpy(pvVar12,param_2,__n);
              goto LAB_00fcfb40;
            }
          }
          else {
            if (uVar7 < 2) {
              uVar11 = uVar11 & uVar6 - 1;
            }
            else if (uVar6 <= uVar11) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar11 / uVar6;
              }
              uVar11 = uVar11 - uVar1 * uVar6;
            }
            if (uVar11 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
                    /* catch() { ... } // from try @ 00fcfb3c with catch @ 00fcfb0c */
    __dest = malloc(__n);
    memcpy(__dest,param_2,__n);
    local_58 = __dest;
    uStack_50 = __n;
                    /* try { // try from 00fcfb34 to 010cfb3b has its CatchHandler @ 00fcfba4 */
                    /* try { // try from 00fcfb3c to 010cfbbf has its CatchHandler @ 00fcfb0c */
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>>>
    ::__emplace_unique_key_args<int,int&,std::__ndk1::pair<void*,unsigned_int>>
              (this_00,local_64,local_64,(pair *)&local_58);
LAB_00fcfb40:
    uVar3 = 1;
  }
LAB_00fcfb44:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

