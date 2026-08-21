
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<void*, int>,
   std::__ndk1::__unordered_map_hasher<void*, std::__ndk1::__hash_value_type<void*, int>,
   std::__ndk1::hash<void*>, true>, std::__ndk1::__unordered_map_equal<void*,
   std::__ndk1::__hash_value_type<void*, int>, std::__ndk1::equal_to<void*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*, int> > >::rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<void*,int>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,int>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,int>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,int>>>
::rehash(__hash_table<std::__ndk1::__hash_value_type<void*,int>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,int>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,int>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,int>>>
         *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
  if (param_1 - 1 == 0) {
    param_1 = 2;
  }
  else {
                    /* try { // try from 009e49d0 to 00ae4a27 has its CatchHandler @ 009e49d0
                       catch() { ... } // from try @ 009e49d0 with catch @ 009e49d0
                       catch() { ... } // from try @ 009e4a2c with catch @ 009e49d0 */
    if ((param_1 & param_1 - 1) != 0) {
      param_1 = __next_prime(param_1);
    }
  }
  uVar2 = *(ulong *)(this + 8);
  if (param_1 <= uVar2) {
    if (param_1 < uVar2) {
      uVar1 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
                    /* try { // try from 009e4a28 to 00ae4a2b has its CatchHandler @ 009e4a88 */
                    /* try { // try from 009e4a2c to 00ae4aa3 has its CatchHandler @ 009e49d0 */
      if ((uVar2 < 3) ||
         (uVar4 = CONCAT17(POPCOUNT((char)(uVar2 >> 0x38)),
                           CONCAT16(POPCOUNT((char)(uVar2 >> 0x30)),
                                    CONCAT15(POPCOUNT((char)(uVar2 >> 0x28)),
                                             CONCAT14(POPCOUNT((char)(uVar2 >> 0x20)),
                                                      CONCAT13(POPCOUNT((char)(uVar2 >> 0x18)),
                                                               CONCAT12(POPCOUNT((char)(uVar2 >> 
                                                  0x10)),CONCAT11(POPCOUNT((char)(uVar2 >> 8)),
                                                                  POPCOUNT((char)uVar2)))))))),
         uVar3 = NEON_uaddlv(uVar4,1), 1 < (uint)CONCAT62((int6)((ulong)uVar4 >> 0x10),uVar3))) {
        uVar1 = __next_prime(uVar1);
      }
      else if (1 < uVar1) {
        uVar1 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar1 - 1) & 0x3f);
      }
      if (uVar1 <= param_1) {
        uVar1 = param_1;
      }
      param_1 = uVar1;
      if (uVar1 < uVar2) goto LAB_009e4a6c;
    }
                    /* catch() { ... } // from try @ 009e4a28 with catch @ 009e4a88 */
    return;
  }
LAB_009e4a6c:
  __rehash(this,param_1);
  return;
}

