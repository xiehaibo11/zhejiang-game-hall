
/* cocos2d::Material::initWithGLProgramState(cocos2d::GLProgramState*) */

void __thiscall cocos2d::Material::initWithGLProgramState(Material *this,GLProgramState *param_1)

{
  long *plVar1;
  long lVar2;
  Ref *pRVar3;
  undefined8 uVar4;
  Ref *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
                    /* catch() { ... } // from try @ 00fde824 with catch @ 00fde7ac */
  local_38 = *(long *)(lVar2 + 0x28);
  pRVar3 = (Ref *)Technique::createWithGLProgramState(this,param_1);
  uVar4 = 0;
  if (pRVar3 != (Ref *)0x0) {
    plVar1 = *(long **)(this + 0x80);
    local_40 = pRVar3;
    if (plVar1 == *(long **)(this + 0x88)) {
                    /* try { // try from 00fde7e4 to 010de7eb has its CatchHandler @ 00fde870 */
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
    uVar4 = 1;
    *(Ref **)(this + 0x90) = pRVar3;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00fde810 to 010de823 has its CatchHandler @ 00fde878 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

