
/* cocos2d::Material::createWithGLStateProgram(cocos2d::GLProgramState*) */

RenderState * cocos2d::Material::createWithGLStateProgram(GLProgramState *param_1)

{
  long *plVar1;
  long lVar2;
  RenderState *this;
  Ref *pRVar3;
  Ref *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00fde600 with catch @ 00fde670 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00fde6fc with catch @ 00fde68c */
  this = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (this != (RenderState *)0x0) {
    RenderState::RenderState(this);
    *(undefined ***)this = &PTR__Material_01724038;
                    /* try { // try from 00fde6bc to 010de6c3 has its CatchHandler @ 00fde744 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x60),"");
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x99) = 0;
    *(undefined8 *)(this + 0x91) = 0;
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined2 *)(this + 0xa1) = 0x101;
                    /* try { // try from 00fde6e8 to 010de6fb has its CatchHandler @ 00fde74c */
    this[0xa3] = (RenderState)0x1;
    pRVar3 = (Ref *)Technique::createWithGLProgramState((Material *)this,param_1);
    if (pRVar3 == (Ref *)0x0) {
      this = (RenderState *)0x0;
    }
    else {
      plVar1 = *(long **)(this + 0x80);
                    /* try { // try from 00fde6fc to 010de76f has its CatchHandler @ 00fde68c */
      local_40 = pRVar3;
      if (plVar1 == *(long **)(this + 0x88)) {
        std::__ndk1::vector<cocos2d::Technique*,std::__ndk1::allocator<cocos2d::Technique*>>::
        __push_back_slow_path<cocos2d::Technique*const&>
                  ((vector<cocos2d::Technique*,std::__ndk1::allocator<cocos2d::Technique*>> *)
                   (this + 0x78),(Technique **)&local_40);
      }
      else {
        *plVar1 = (long)pRVar3;
        *(long **)(this + 0x80) = plVar1 + 1;
      }
      Ref::retain(local_40);
      *(Ref **)(this + 0x90) = pRVar3;
      Ref::autorelease((Ref *)this);
    }
  }
                    /* catch() { ... } // from try @ 00fde6bc with catch @ 00fde744 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00fde6e8 with catch @ 00fde74c */
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

