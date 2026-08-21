
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, cocos2d::UniformValue>,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   cocos2d::UniformValue>, std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::UniformValue>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, cocos2d::UniformValue> >
   >::rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
::rehash(__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
         *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
  if (param_1 - 1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fdbde4 with catch @ 00fdbe7c
                       catch(type#1 @ 00000000) { ... } // from try @ 00fdbe0c with catch @ 00fdbe7c
                       catch(type#1 @ 00000000) { ... } // from try @ 00fdbe34 with catch @ 00fdbe7c
                        */
    param_1 = 2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fdbd84 with catch @ 00fdbe80
                       catch(type#1 @ 00000000) { ... } // from try @ 00fdbdb0 with catch @ 00fdbe80
                        */
  }
  else {
                    /* catch() { ... } // from try @ 00fdbec0 with catch @ 00fdbe84 */
    if ((param_1 & param_1 - 1) != 0) {
      param_1 = __next_prime(param_1);
    }
  }
  uVar2 = *(ulong *)(this + 8);
  if (param_1 <= uVar2) {
    if (param_1 < uVar2) {
                    /* try { // try from 00fdbeb8 to 010dbebf has its CatchHandler @ 00fdbef4 */
                    /* try { // try from 00fdbec0 to 010dbf0f has its CatchHandler @ 00fdbe84 */
      uVar1 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
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
                    /* catch() { ... } // from try @ 00fdbeb8 with catch @ 00fdbef4 */
        uVar1 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar1 - 1) & 0x3f);
      }
                    /* catch() { ... } // from try @ 00fdbf4c with catch @ 00fdbf10 */
      if (uVar1 <= param_1) {
        uVar1 = param_1;
      }
      param_1 = uVar1;
      if (uVar1 < uVar2) goto LAB_00fdbf24;
    }
    return;
  }
LAB_00fdbf24:
  __rehash(this,param_1);
  return;
}

