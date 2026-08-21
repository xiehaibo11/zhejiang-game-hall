
/* std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::function<void (cocos2d::renderer::View const&,
   std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,
   std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem> >&)> >::pair<true,
   false>(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::function<void (cocos2d::renderer::View
   const&, std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,
   std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem> >&)> const&) */

void __thiscall
std::__ndk1::
pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>>
::pair<true,false>(pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>>
                   *this,basic_string *param_1,function *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong __n;
  void *__src;
  pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>>
  *__dest;
  ulong uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)this = 0;
  if (((byte)*param_1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = uVar4;
    *(undefined8 *)this = uVar2;
    plVar1 = *(long **)(param_2 + 0x20);
    goto joined_r0x009bd2b4;
  }
  __n = *(ulong *)(param_1 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_1 + 0x10);
  if (__n < 0x17) {
    __dest = this + 1;
    *this = SUB41((int)__n << 1,0);
    if (__n != 0) goto LAB_009bd29c;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    *(ulong *)(this + 8) = __n;
    *(pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>>
      **)(this + 0x10) = __dest;
    *(ulong *)this = uVar3 | 1;
LAB_009bd29c:
    memcpy(__dest,__src,__n);
  }
  __dest[__n] = (pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>>
                 )0x0;
  plVar1 = *(long **)(param_2 + 0x20);
joined_r0x009bd2b4:
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(this + 0x40) = 0;
  }
  else if ((long *)param_2 == plVar1) {
    *(pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>>
      **)(this + 0x40) = this + 0x20;
    (**(code **)(**(long **)(param_2 + 0x20) + 0x18))();
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    *(undefined8 *)(this + 0x40) = uVar2;
  }
  return;
}

