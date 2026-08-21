
/* void std::__ndk1::vector<cocos2d::ThreadPool::Task,
   std::__ndk1::allocator<cocos2d::ThreadPool::Task>
   >::__push_back_slow_path<cocos2d::ThreadPool::Task const&>(cocos2d::ThreadPool::Task const&) */

void __thiscall
std::__ndk1::vector<cocos2d::ThreadPool::Task,std::__ndk1::allocator<cocos2d::ThreadPool::Task>>::
__push_back_slow_path<cocos2d::ThreadPool::Task_const&>
          (vector<cocos2d::ThreadPool::Task,std::__ndk1::allocator<cocos2d::ThreadPool::Task>> *this
          ,Task *param_1)

{
  undefined8 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  undefined8 uVar4;
  
                    /* try { // try from 0099ff54 to 00a9ff97 has its CatchHandler @ 009a0070 */
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar3 = ((long)__n >> 4) + 1;
  if (uVar3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 4) < 0x7ffffffffffffff) {
                    /* try { // try from 0099ffa0 to 00a9ffdb has its CatchHandler @ 009a0080 */
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 3;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_0099ffd4;
    }
    if (uVar3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar3 = 0xfffffffffffffff;
  }
  __dest = operator_new(uVar3 << 4);
LAB_0099ffd4:
  uVar4 = *(undefined8 *)param_1;
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 4) * 0x10);
                    /* try { // try from 0099ffdc to 00aa00d7 has its CatchHandler @ 0099fd8c */
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *puVar1 = uVar4;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 2;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 0x10);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}

