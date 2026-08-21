
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,
   cocos2d::GLProgramState*>, std::__ndk1::__unordered_map_hasher<cocos2d::GLProgram*,
   std::__ndk1::__hash_value_type<cocos2d::GLProgram*, cocos2d::GLProgramState*>,
   std::__ndk1::hash<cocos2d::GLProgram*>, true>,
   std::__ndk1::__unordered_map_equal<cocos2d::GLProgram*,
   std::__ndk1::__hash_value_type<cocos2d::GLProgram*, cocos2d::GLProgramState*>,
   std::__ndk1::equal_to<cocos2d::GLProgram*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,
   cocos2d::GLProgramState*> > >::rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::__unordered_map_hasher<cocos2d::GLProgram*,std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::hash<cocos2d::GLProgram*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::GLProgram*,std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::equal_to<cocos2d::GLProgram*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>>>
::rehash(__hash_table<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::__unordered_map_hasher<cocos2d::GLProgram*,std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::hash<cocos2d::GLProgram*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::GLProgram*,std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::equal_to<cocos2d::GLProgram*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>>>
         *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
  if (param_1 - 1 == 0) {
    param_1 = 2;
                    /* try { // try from 00fdd5ac to 010dd5af has its CatchHandler @ 00fdd5c0 */
  }
  else if ((param_1 & param_1 - 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fdd5ac with catch @ 00fdd5c0
                        */
    param_1 = __next_prime(param_1);
  }
  uVar2 = *(ulong *)(this + 8);
  if (param_1 <= uVar2) {
    if (param_1 < uVar2) {
      uVar1 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
                    /* try { // try from 00fdd604 to 010dd607 has its CatchHandler @ 00fdd620 */
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fdd604 with catch @ 00fdd620
                        */
        uVar1 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar1 - 1) & 0x3f);
      }
      if (uVar1 <= param_1) {
        uVar1 = param_1;
      }
      param_1 = uVar1;
      if (uVar1 < uVar2) goto LAB_00fdd650;
    }
                    /* try { // try from 00fdd668 to 010dd66b has its CatchHandler @ 00fdd684 */
    return;
  }
LAB_00fdd650:
  __rehash(this,param_1);
  return;
}

