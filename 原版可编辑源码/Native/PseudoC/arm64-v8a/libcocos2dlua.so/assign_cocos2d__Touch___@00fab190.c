
/* std::__ndk1::enable_if<__is_forward_iterator<cocos2d::Touch**>::value&&is_constructible<cocos2d::Touch*,
   std::__ndk1::iterator_traits<cocos2d::Touch**>::reference>::value, void>::type
   std::__ndk1::vector<cocos2d::Touch*, std::__ndk1::allocator<cocos2d::Touch*>
   >::assign<cocos2d::Touch**>(cocos2d::Touch**, cocos2d::Touch**) */

void __thiscall
std::__ndk1::vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>>::
assign<cocos2d::Touch**>
          (vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>> *this,Touch **param_1,
          Touch **param_2)

{
  Touch **__src;
  long lVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  
                    /* catch() { ... } // from try @ 00fab0d8 with catch @ 00fab1a4 */
  lVar1 = *(long *)(this + 0x10);
  pvVar4 = *(void **)this;
  sVar3 = (long)param_2 - (long)param_1;
  uVar5 = (long)sVar3 >> 3;
                    /* try { // try from 00fab1b8 to 010ab1cf has its CatchHandler @ 00fab1b8
                       catch() { ... } // from try @ 00fab1b8 with catch @ 00fab1b8
                       catch() { ... } // from try @ 00fab1d8 with catch @ 00fab1b8 */
  if ((ulong)(lVar1 - (long)pvVar4 >> 3) < uVar5) {
    if (pvVar4 != (void *)0x0) {
                    /* try { // try from 00fab1d0 to 010ab1d7 has its CatchHandler @ 00fab1f0 */
      *(void **)(this + 8) = pvVar4;
                    /* try { // try from 00fab1d8 to 010ab203 has its CatchHandler @ 00fab1b8 */
      operator_delete(pvVar4);
      lVar1 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (uVar5 >> 0x3d != 0) {
LAB_00fab214:
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
                    /* catch() { ... } // from try @ 00fab1d0 with catch @ 00fab1f0 */
    if ((ulong)(lVar1 >> 3) < 0xfffffffffffffff) {
      uVar2 = lVar1 >> 2;
      if ((uVar5 <= uVar2) && (uVar5 = uVar2, uVar2 >> 0x3d != 0)) goto LAB_00fab214;
    }
    else {
      uVar5 = 0x1fffffffffffffff;
    }
    pvVar4 = operator_new(uVar5 * 8);
                    /* try { // try from 00fab2a8 to 010ab2bf has its CatchHandler @ 00fab2a8
                       catch() { ... } // from try @ 00fab2a8 with catch @ 00fab2a8
                       catch() { ... } // from try @ 00fab2c8 with catch @ 00fab2a8 */
    *(void **)this = pvVar4;
    *(void **)(this + 8) = pvVar4;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar5 * 8);
    if (0 < (long)sVar3) {
                    /* try { // try from 00fab2c0 to 010ab2c7 has its CatchHandler @ 00fab2e0 */
                    /* try { // try from 00fab2c8 to 010ab2f3 has its CatchHandler @ 00fab2a8 */
      memcpy(pvVar4,param_1,sVar3);
      pvVar4 = (void *)((long)pvVar4 + sVar3);
    }
    *(void **)(this + 8) = pvVar4;
  }
  else {
    uVar2 = *(long *)(this + 8) - (long)pvVar4 >> 3;
    __src = (Touch **)((long)param_1 + (*(long *)(this + 8) - (long)pvVar4));
    if (uVar5 <= uVar2) {
      __src = param_2;
    }
    sVar3 = (long)__src - (long)param_1;
    if (sVar3 != 0) {
      memmove(pvVar4,param_1,sVar3);
    }
    if (uVar2 < uVar5) {
      pvVar4 = *(void **)(this + 8);
      sVar3 = (long)param_2 - (long)__src;
      if (0 < (long)sVar3) {
        memcpy(pvVar4,__src,sVar3);
        pvVar4 = (void *)((long)pvVar4 + sVar3);
      }
      *(void **)(this + 8) = pvVar4;
    }
    else {
      *(void **)(this + 8) = (void *)((long)pvVar4 + ((long)sVar3 >> 3) * 8);
    }
  }
                    /* catch() { ... } // from try @ 00fab2c0 with catch @ 00fab2e0 */
  return;
}

