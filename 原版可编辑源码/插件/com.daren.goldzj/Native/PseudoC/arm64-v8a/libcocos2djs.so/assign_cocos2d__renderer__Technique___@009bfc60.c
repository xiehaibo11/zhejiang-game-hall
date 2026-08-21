
/* std::__ndk1::enable_if<__is_forward_iterator<cocos2d::renderer::Technique**>::value&&is_constructible<cocos2d::renderer::Technique*,
   std::__ndk1::iterator_traits<cocos2d::renderer::Technique**>::reference>::value, void>::type
   std::__ndk1::vector<cocos2d::renderer::Technique*,
   std::__ndk1::allocator<cocos2d::renderer::Technique*>
   >::assign<cocos2d::renderer::Technique**>(cocos2d::renderer::Technique**,
   cocos2d::renderer::Technique**) */

void __thiscall
std::__ndk1::
vector<cocos2d::renderer::Technique*,std::__ndk1::allocator<cocos2d::renderer::Technique*>>::
assign<cocos2d::renderer::Technique**>
          (vector<cocos2d::renderer::Technique*,std::__ndk1::allocator<cocos2d::renderer::Technique*>>
           *this,Technique **param_1,Technique **param_2)

{
  Technique **__src;
  long lVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(this + 0x10);
  pvVar4 = *(void **)this;
  sVar3 = (long)param_2 - (long)param_1;
  uVar5 = (long)sVar3 >> 3;
  if ((ulong)(lVar1 - (long)pvVar4 >> 3) < uVar5) {
    if (pvVar4 != (void *)0x0) {
      *(void **)(this + 8) = pvVar4;
      operator_delete(pvVar4);
      lVar1 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
                    /* try { // try from 009bfcb8 to 00abfd9b has its CatchHandler @ 009bfb28 */
    if (uVar5 >> 0x3d != 0) {
LAB_009bfce4:
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(lVar1 >> 3) < 0xfffffffffffffff) {
      uVar2 = lVar1 >> 2;
      if ((uVar5 <= uVar2) && (uVar5 = uVar2, uVar2 >> 0x3d != 0)) goto LAB_009bfce4;
    }
    else {
      uVar5 = 0x1fffffffffffffff;
    }
    pvVar4 = operator_new(uVar5 * 8);
    *(void **)this = pvVar4;
    *(void **)(this + 8) = pvVar4;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar5 * 8);
    if ((long)sVar3 < 1) {
      return;
    }
    memcpy(pvVar4,param_1,sVar3);
    pvVar4 = (void *)((long)pvVar4 + sVar3);
  }
  else {
    uVar2 = *(long *)(this + 8) - (long)pvVar4 >> 3;
    __src = (Technique **)((long)param_1 + (*(long *)(this + 8) - (long)pvVar4));
    if (uVar5 <= uVar2) {
      __src = param_2;
    }
    sVar3 = (long)__src - (long)param_1;
    if (sVar3 != 0) {
      memmove(pvVar4,param_1,sVar3);
    }
    if (uVar2 < uVar5) {
      sVar3 = (long)param_2 - (long)__src;
                    /* catch() { ... } // from try @ 009bfba8 with catch @ 009bfd2c */
                    /* catch() { ... } // from try @ 009bfb9c with catch @ 009bfd30 */
      if ((long)sVar3 < 1) {
        return;
      }
                    /* catch() { ... } // from try @ 009bfb7c with catch @ 009bfd34 */
      memcpy(*(void **)(this + 8),__src,sVar3);
                    /* catch() { ... } // from try @ 009bfbb4 with catch @ 009bfd44 */
      pvVar4 = (void *)(*(long *)(this + 8) + sVar3);
    }
    else {
      pvVar4 = (void *)((long)pvVar4 + ((long)sVar3 >> 3) * 8);
    }
  }
  *(void **)(this + 8) = pvVar4;
                    /* try { // try from 009bfd9c to 00abfdef has its CatchHandler @ 009bfd9c
                       catch() { ... } // from try @ 009bfd9c with catch @ 009bfd9c
                       catch() { ... } // from try @ 009bff48 with catch @ 009bfd9c */
  return;
}

