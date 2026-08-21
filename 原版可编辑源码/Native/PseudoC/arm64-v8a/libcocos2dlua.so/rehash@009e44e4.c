
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<char const*, int>,
   std::__ndk1::__unordered_map_hasher<char const*, std::__ndk1::__hash_value_type<char const*,
   int>, std::__ndk1::hash<char const*>, true>, std::__ndk1::__unordered_map_equal<char const*,
   std::__ndk1::__hash_value_type<char const*, int>, std::__ndk1::equal_to<char const*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<char const*, int> > >::rehash(unsigned
   long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<char_const*,int>,std::__ndk1::__unordered_map_hasher<char_const*,std::__ndk1::__hash_value_type<char_const*,int>,std::__ndk1::hash<char_const*>,true>,std::__ndk1::__unordered_map_equal<char_const*,std::__ndk1::__hash_value_type<char_const*,int>,std::__ndk1::equal_to<char_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char_const*,int>>>
::rehash(__hash_table<std::__ndk1::__hash_value_type<char_const*,int>,std::__ndk1::__unordered_map_hasher<char_const*,std::__ndk1::__hash_value_type<char_const*,int>,std::__ndk1::hash<char_const*>,true>,std::__ndk1::__unordered_map_equal<char_const*,std::__ndk1::__hash_value_type<char_const*,int>,std::__ndk1::equal_to<char_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char_const*,int>>>
         *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
                    /* try { // try from 009e44e4 to 00ae454f has its CatchHandler @ 009e4478 */
  if (param_1 - 1 == 0) {
    param_1 = 2;
  }
  else if ((param_1 & param_1 - 1) != 0) {
    param_1 = __next_prime(param_1);
  }
  uVar2 = *(ulong *)(this + 8);
  if (param_1 <= uVar2) {
    if (param_1 < uVar2) {
                    /* try { // try from 009e4550 to 00ae4557 has its CatchHandler @ 009e45dc */
      uVar1 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
                    /* try { // try from 009e4558 to 00ae463f has its CatchHandler @ 009e4478 */
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
      if (uVar1 < uVar2) goto LAB_009e45a8;
    }
    return;
  }
LAB_009e45a8:
  __rehash(this,param_1);
  return;
}

