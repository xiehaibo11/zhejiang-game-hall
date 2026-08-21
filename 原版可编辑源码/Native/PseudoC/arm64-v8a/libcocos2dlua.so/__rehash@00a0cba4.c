
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<uv_write_s*, uv_write_s*>,
   std::__ndk1::__unordered_map_hasher<uv_write_s*, std::__ndk1::__hash_value_type<uv_write_s*,
   uv_write_s*>, std::__ndk1::hash<uv_write_s*>, true>,
   std::__ndk1::__unordered_map_equal<uv_write_s*, std::__ndk1::__hash_value_type<uv_write_s*,
   uv_write_s*>, std::__ndk1::equal_to<uv_write_s*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<uv_write_s*, uv_write_s*> >
   >::__rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>,std::__ndk1::__unordered_map_hasher<uv_write_s*,std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>,std::__ndk1::hash<uv_write_s*>,true>,std::__ndk1::__unordered_map_equal<uv_write_s*,std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>,std::__ndk1::equal_to<uv_write_s*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>>>
::__rehash(__hash_table<std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>,std::__ndk1::__unordered_map_hasher<uv_write_s*,std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>,std::__ndk1::hash<uv_write_s*>,true>,std::__ndk1::__unordered_map_equal<uv_write_s*,std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>,std::__ndk1::equal_to<uv_write_s*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
                    /* try { // try from 00a0cbb4 to 00b0cbc7 has its CatchHandler @ 00a0cc4c */
  if (param_1 == 0) {
    pvVar2 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    *(undefined8 *)(this + 8) = 0;
                    /* catch() { ... } // from try @ 00a0cbb4 with catch @ 00a0cc4c */
  }
  else {
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar2 = operator_new(param_1 << 3);
                    /* try { // try from 00a0cbcc to 00b0cbff has its CatchHandler @ 00a0cc50 */
    pvVar3 = *(void **)this;
    *(void **)this = pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    *(ulong *)(this + 8) = param_1;
    do {
      *(undefined8 *)(*(long *)this + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_1 != uVar4);
                    /* try { // try from 00a0cc00 to 00b0cc9b has its CatchHandler @ 00a0c8d0 */
    plVar5 = *(long **)(this + 0x10);
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar11 = CONCAT17(POPCOUNT((char)(param_1 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(param_1 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(param_1 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(param_1 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(param_1 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(param_1 >> 0x10
                                                                                    )),
                                                                     CONCAT11(POPCOUNT((char)(
                                                  param_1 >> 8)),POPCOUNT((char)param_1))))))));
      uVar10 = NEON_uaddlv(uVar11,1);
      uVar12 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10);
      if ((uVar12 & 0xffffffff) < 2) {
                    /* catch() { ... } // from try @ 00a0cbcc with catch @ 00a0cc50 */
        uVar4 = uVar4 & param_1 - 1;
      }
      else if (param_1 <= uVar4) {
        uVar7 = 0;
        if (param_1 != 0) {
          uVar7 = uVar4 / param_1;
        }
        uVar4 = uVar4 - uVar7 * param_1;
      }
      *(__hash_table<std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>,std::__ndk1::__unordered_map_hasher<uv_write_s*,std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>,std::__ndk1::hash<uv_write_s*>,true>,std::__ndk1::__unordered_map_equal<uv_write_s*,std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>,std::__ndk1::equal_to<uv_write_s*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>>>
        **)(*(long *)this + uVar4 * 8) = this + 0x10;
      if ((long *)*plVar5 != (long *)0x0) {
        plVar6 = (long *)*plVar5;
        do {
          uVar7 = plVar6[1];
                    /* catch() { ... } // from try @ 00a0cb80 with catch @ 00a0cc80 */
          if ((uVar12 & 0xffffffff) < 2) {
            uVar7 = uVar7 & param_1 - 1;
          }
          else if (param_1 <= uVar7) {
            uVar1 = 0;
            if (param_1 != 0) {
              uVar1 = uVar7 / param_1;
            }
            uVar7 = uVar7 - uVar1 * param_1;
          }
          if (uVar7 != uVar4) {
            plVar9 = plVar6;
            if (*(long *)(*(long *)this + uVar7 * 8) == 0) {
              *(long **)(*(long *)this + uVar7 * 8) = plVar5;
              uVar4 = uVar7;
            }
            else {
              do {
                plVar8 = plVar9;
                plVar9 = (long *)*plVar8;
                if (plVar9 == (long *)0x0) break;
              } while (plVar6[2] == plVar9[2]);
              *plVar5 = (long)plVar9;
              *plVar8 = **(long **)(*(long *)this + uVar7 * 8);
                    /* try { // try from 00a0ccf4 to 00b0cd2b has its CatchHandler @ 00a0ccf4
                       catch() { ... } // from try @ 00a0ccf4 with catch @ 00a0ccf4
                       catch() { ... } // from try @ 00a0cd3c with catch @ 00a0ccf4 */
              **(undefined8 **)(*(long *)this + uVar7 * 8) = plVar6;
              plVar6 = plVar5;
            }
          }
          plVar9 = (long *)*plVar6;
          plVar5 = plVar6;
          plVar6 = plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  return;
}

