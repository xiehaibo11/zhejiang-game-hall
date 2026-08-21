
void FUN_00f9b3d0(long *param_1)

{
  __deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *p_Var1;
  undefined8 *puVar2;
  long lVar3;
  __deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *p_Var4;
  __deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *this;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  p_Var1 = (__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)*param_1;
  p_Var4 = (__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)param_1[1];
  while (p_Var4 != p_Var1) {
    this = p_Var4 + -0x30;
    std::__ndk1::__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::clear(this);
    puVar2 = *(undefined8 **)(p_Var4 + -0x20);
    puVar5 = *(undefined8 **)(p_Var4 + -0x28);
    if (*(undefined8 **)(p_Var4 + -0x28) != puVar2) {
      do {
        puVar6 = puVar5 + 1;
        operator_delete((void *)*puVar5);
        puVar5 = puVar6;
      } while (puVar2 != puVar6);
      lVar3 = *(long *)(p_Var4 + -0x20) - *(long *)(p_Var4 + -0x28);
      if (lVar3 != 0) {
                    /* try { // try from 00f9b444 to 0109b44f has its CatchHandler @ 00f9c180 */
        *(ulong *)(p_Var4 + -0x20) =
             *(long *)(p_Var4 + -0x20) + (lVar3 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
      }
    }
    p_Var4 = this;
    if (*(void **)this != (void *)0x0) {
      operator_delete(*(void **)this);
    }
  }
                    /* try { // try from 00f9b460 to 0109b47b has its CatchHandler @ 00f9c250 */
  param_1[1] = (long)p_Var1;
  return;
}

