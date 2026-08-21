
/* cocos2d::GLProgramState::AutoBindingResolver::AutoBindingResolver() */

void __thiscall
cocos2d::GLProgramState::AutoBindingResolver::AutoBindingResolver(AutoBindingResolver *this)

{
  long lVar1;
  AutoBindingResolver *local_30;
  long local_28;
  
                    /* catch() { ... } // from try @ 00fda36c with catch @ 00fda3b4 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00fda400 with catch @ 00fda3d0 */
  *(undefined ***)this = &PTR__AutoBindingResolver_01723ef8;
  local_30 = this;
  if (DAT_01792688 < DAT_01792690) {
                    /* try { // try from 00fda3f8 to 010da3ff has its CatchHandler @ 00fda43c */
    *DAT_01792688 = this;
    DAT_01792688 = DAT_01792688 + 1;
                    /* try { // try from 00fda400 to 010da457 has its CatchHandler @ 00fda3d0 */
  }
  else {
    std::__ndk1::
    vector<cocos2d::GLProgramState::AutoBindingResolver*,std::__ndk1::allocator<cocos2d::GLProgramState::AutoBindingResolver*>>
    ::__push_back_slow_path<cocos2d::GLProgramState::AutoBindingResolver*>
              ((vector<cocos2d::GLProgramState::AutoBindingResolver*,std::__ndk1::allocator<cocos2d::GLProgramState::AutoBindingResolver*>>
                *)&_customAutoBindingResolvers,&local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

