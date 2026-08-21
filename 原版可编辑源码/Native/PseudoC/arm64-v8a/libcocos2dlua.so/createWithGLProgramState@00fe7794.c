
/* cocos2d::Technique::createWithGLProgramState(cocos2d::Material*, cocos2d::GLProgramState*) */

RenderState *
cocos2d::Technique::createWithGLProgramState(Material *param_1,GLProgramState *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  RenderState *this;
  Ref *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (this != (RenderState *)0x0) {
    RenderState::RenderState(this);
    *(undefined ***)this = &PTR__Technique_01724360;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x60),"");
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(Material **)(this + 0x38) = param_1;
    local_50 = (Ref *)Pass::createWithGLProgramState((Technique *)this,param_2);
    puVar1 = *(undefined8 **)(this + 0x80);
    if (puVar1 == *(undefined8 **)(this + 0x88)) {
      std::__ndk1::vector<cocos2d::Pass*,std::__ndk1::allocator<cocos2d::Pass*>>::
      __push_back_slow_path<cocos2d::Pass*const&>
                ((vector<cocos2d::Pass*,std::__ndk1::allocator<cocos2d::Pass*>> *)(this + 0x78),
                 (Pass **)&local_50);
    }
    else {
      *puVar1 = local_50;
      *(undefined8 **)(this + 0x80) = puVar1 + 1;
    }
    Ref::retain(local_50);
    Ref::autorelease((Ref *)this);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

