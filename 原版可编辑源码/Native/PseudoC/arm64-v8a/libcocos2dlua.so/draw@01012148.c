
/* cocos2d::Physics3DDebugDrawer::draw(cocos2d::Renderer*) */

void __thiscall cocos2d::Physics3DDebugDrawer::draw(Physics3DDebugDrawer *this,Renderer *param_1)

{
  long lVar1;
  code *local_b0;
  undefined8 uStack_a8;
  Physics3DDebugDrawer *local_a0;
  Mat4 aMStack_98 [64];
  undefined4 local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  CustomCommand::init(0.0,(Mat4 *)(this + 0x30),0x1777a08);
                    /* try { // try from 010121a8 to 011121df has its CatchHandler @ 0101227c */
  uStack_a8 = 0;
  local_b0 = drawImplementation;
  local_a0 = this;
  Mat4::Mat4(aMStack_98,(Mat4 *)Mat4::IDENTITY);
  local_58 = 0;
  std::__ndk1::function<void()>::operator=((function<void()> *)(this + 0x50),(__bind *)&local_b0);
  Mat4::~Mat4(aMStack_98);
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x30));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

