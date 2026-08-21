
/* std::__ndk1::enable_if<__is_forward_iterator<cocos2d::renderer::RenderTarget**>::value&&is_constructible<cocos2d::renderer::RenderTarget*,
   std::__ndk1::iterator_traits<cocos2d::renderer::RenderTarget**>::reference>::value, void>::type
   std::__ndk1::vector<cocos2d::renderer::RenderTarget*,
   std::__ndk1::allocator<cocos2d::renderer::RenderTarget*>
   >::assign<cocos2d::renderer::RenderTarget**>(cocos2d::renderer::RenderTarget**,
   cocos2d::renderer::RenderTarget**) */

void __thiscall
std::__ndk1::
vector<cocos2d::renderer::RenderTarget*,std::__ndk1::allocator<cocos2d::renderer::RenderTarget*>>::
assign<cocos2d::renderer::RenderTarget**>
          (vector<cocos2d::renderer::RenderTarget*,std::__ndk1::allocator<cocos2d::renderer::RenderTarget*>>
           *this,RenderTarget **param_1,RenderTarget **param_2)

{
  RenderTarget **__src;
  long lVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  
                    /* try { // try from 009b62bc to 00ab6313 has its CatchHandler @ 009b62bc
                       catch() { ... } // from try @ 009b62bc with catch @ 009b62bc
                       catch() { ... } // from try @ 009b649c with catch @ 009b62bc */
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
    if (uVar5 >> 0x3d != 0) {
LAB_009b6338:
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 009b6314 to 00ab632b has its CatchHandler @ 009b651c */
    if ((ulong)(lVar1 >> 3) < 0xfffffffffffffff) {
      uVar2 = lVar1 >> 2;
                    /* try { // try from 009b6334 to 00ab633f has its CatchHandler @ 009b6518 */
      if ((uVar5 <= uVar2) && (uVar5 = uVar2, uVar2 >> 0x3d != 0)) goto LAB_009b6338;
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
                    /* try { // try from 009b6340 to 00ab634b has its CatchHandler @ 009b6514 */
                    /* try { // try from 009b634c to 00ab649b has its CatchHandler @ 009b652c */
    uVar2 = *(long *)(this + 8) - (long)pvVar4 >> 3;
    __src = (RenderTarget **)((long)param_1 + (*(long *)(this + 8) - (long)pvVar4));
    if (uVar5 <= uVar2) {
      __src = param_2;
    }
    sVar3 = (long)__src - (long)param_1;
    if (sVar3 != 0) {
      memmove(pvVar4,param_1,sVar3);
    }
    if (uVar2 < uVar5) {
      sVar3 = (long)param_2 - (long)__src;
      if ((long)sVar3 < 1) {
        return;
      }
      memcpy(*(void **)(this + 8),__src,sVar3);
      pvVar4 = (void *)(*(long *)(this + 8) + sVar3);
    }
    else {
      pvVar4 = (void *)((long)pvVar4 + ((long)sVar3 >> 3) * 8);
    }
  }
  *(void **)(this + 8) = pvVar4;
  return;
}

