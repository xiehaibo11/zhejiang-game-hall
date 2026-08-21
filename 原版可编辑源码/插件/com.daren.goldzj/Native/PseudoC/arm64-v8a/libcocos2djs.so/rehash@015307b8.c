
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, int>,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int, int>,
   v8::base::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, int>, std::__ndk1::equal_to<int>, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int, int> > >::rehash(unsigned long)
    */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
::rehash(__hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
         *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
  if (param_1 - 1 == 0) {
    param_1 = 2;
  }
  else if ((param_1 & param_1 - 1) != 0) {
    param_1 = __next_prime(param_1);
  }
  uVar2 = *(ulong *)(this + 8);
  uVar1 = param_1;
  if (param_1 <= uVar2) {
    if (param_1 < uVar2) {
      uVar1 = (ulong)((float)*(ulong *)(this + 0x28) / *(float *)(this + 0x30));
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
        uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
      }
      if (uVar1 <= param_1) {
        uVar1 = param_1;
      }
      if (uVar1 < uVar2) goto LAB_0153087c;
    }
    return;
  }
LAB_0153087c:
  __rehash(this,uVar1);
  return;
}

