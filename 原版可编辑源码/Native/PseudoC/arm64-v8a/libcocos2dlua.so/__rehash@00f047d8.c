
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long, int>,
   std::__ndk1::__unordered_map_hasher<unsigned long, std::__ndk1::__hash_value_type<unsigned long,
   int>, std::__ndk1::hash<unsigned long>, true>, std::__ndk1::__unordered_map_equal<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, int>, std::__ndk1::equal_to<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long, int> > >::__rehash(unsigned
   long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_long,int>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,int>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,int>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,int>>>
::__rehash(__hash_table<std::__ndk1::__hash_value_type<unsigned_long,int>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,int>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,int>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,int>>>
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
  
                    /* catch() { ... } // from try @ 00f0468c with catch @ 00f047d8 */
                    /* catch() { ... } // from try @ 00f043a8 with catch @ 00f047dc
                       catch() { ... } // from try @ 00f04680 with catch @ 00f047dc */
                    /* catch() { ... } // from try @ 00f0438c with catch @ 00f047e0 */
                    /* catch() { ... } // from try @ 00f04494 with catch @ 00f047e8 */
  if (param_1 == 0) {
    pvVar2 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
                    /* catch() { ... } // from try @ 00f04568 with catch @ 00f047f8 */
                    /* catch() { ... } // from try @ 00f04518 with catch @ 00f047fc */
    pvVar2 = operator_new(param_1 << 3);
                    /* catch() { ... } // from try @ 00f045dc with catch @ 00f04800 */
    pvVar3 = *(void **)this;
                    /* catch() { ... } // from try @ 00f04510 with catch @ 00f04804
                       catch() { ... } // from try @ 00f045c0 with catch @ 00f04804 */
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
                    /* catch() { ... } // from try @ 00f043ec with catch @ 00f04888 */
        uVar4 = uVar4 & param_1 - 1;
      }
      else if (param_1 <= uVar4) {
        uVar7 = 0;
        if (param_1 != 0) {
          uVar7 = uVar4 / param_1;
        }
        uVar4 = uVar4 - uVar7 * param_1;
      }
      *(__hash_table<std::__ndk1::__hash_value_type<unsigned_long,int>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,int>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,int>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,int>>>
        **)(*(long *)this + uVar4 * 8) = this + 0x10;
                    /* catch() { ... } // from try @ 00f043f8 with catch @ 00f04898 */
      if ((long *)*plVar5 != (long *)0x0) {
        plVar6 = (long *)*plVar5;
        do {
          uVar7 = plVar6[1];
          if ((uVar12 & 0xffffffff) < 2) {
            uVar7 = uVar7 & param_1 - 1;
          }
          else if (param_1 <= uVar7) {
            uVar1 = 0;
            if (param_1 != 0) {
              uVar1 = uVar7 / param_1;
            }
            uVar7 = uVar7 - uVar1 * param_1;
                    /* try { // try from 00f048cc to 01004973 has its CatchHandler @ 00f048cc
                       catch() { ... } // from try @ 00f048cc with catch @ 00f048cc
                       catch() { ... } // from try @ 00f0497c with catch @ 00f048cc */
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

