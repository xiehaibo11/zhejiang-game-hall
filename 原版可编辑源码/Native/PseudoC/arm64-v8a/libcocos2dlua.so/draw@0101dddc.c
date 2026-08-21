
/* cocos2d::NavMeshDebugDraw::draw(cocos2d::Renderer*) */

void __thiscall cocos2d::NavMeshDebugDraw::draw(NavMeshDebugDraw *this,Renderer *param_1)

{
  long lVar1;
  code *local_b0;
  undefined8 uStack_a8;
  NavMeshDebugDraw *local_a0;
  Mat4 aMStack_98 [64];
  undefined4 local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0101dd6c with catch @ 0101de08 */
                    /* catch() { ... } // from try @ 0101dd90 with catch @ 0101de10 */
  CustomCommand::init(0.0,(Mat4 *)(this + 0x50),0x1777a08);
  uStack_a8 = 0;
  local_b0 = drawImplement;
  local_a0 = this;
  Mat4::Mat4(aMStack_98,(Mat4 *)Mat4::IDENTITY);
  local_58 = 0;
  std::__ndk1::function<void()>::operator=((function<void()> *)(this + 0x70),(__bind *)&local_b0);
  Mat4::~Mat4(aMStack_98);
                    /* catch() { ... } // from try @ 0101df6c with catch @ 0101de70 */
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x50));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

