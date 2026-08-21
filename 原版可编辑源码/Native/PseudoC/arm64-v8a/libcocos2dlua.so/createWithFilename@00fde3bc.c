
/* cocos2d::Material::createWithFilename(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

RenderState * cocos2d::Material::createWithFilename(basic_string *param_1)

{
  ulong uVar1;
  long lVar2;
  basic_string bVar3;
  long *plVar4;
  RenderState *this;
  basic_string local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 00fde3bc to 010de3cb has its CatchHandler @ 00fde3e4 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)FileUtils::getInstance();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fde3bc with catch @ 00fde3e4
                        */
  (**(code **)(*plVar4 + 0x50))(local_50,plVar4,param_1);
  bVar3 = local_50[0];
  uVar1 = (ulong)((byte)local_50[0] >> 1);
  if (((byte)local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 0) {
    this = (RenderState *)0x0;
  }
  else {
    this = operator_new(0xa8,(nothrow_t *)&std::nothrow);
    if (this != (RenderState *)0x0) {
      RenderState::RenderState(this);
      *(undefined ***)this = &PTR__Material_01724038;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this + 0x60),"");
      *(undefined8 *)(this + 0x99) = 0;
      *(undefined8 *)(this + 0x91) = 0;
      *(undefined8 *)(this + 0x90) = 0;
      *(undefined8 *)(this + 0x88) = 0;
      *(undefined8 *)(this + 0x80) = 0;
      *(undefined8 *)(this + 0x78) = 0;
      *(undefined2 *)(this + 0xa1) = 0x101;
      this[0xa3] = (RenderState)0x1;
      initWithFile((Material *)this,local_50);
      Ref::autorelease((Ref *)this);
      bVar3 = local_50[0];
    }
  }
  if (((byte)bVar3 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}

