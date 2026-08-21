
/* cocos2d::Terrain::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall cocos2d::Terrain::draw(Terrain *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long lVar1;
  code *local_b0;
  undefined8 uStack_a8;
  Terrain *local_a0;
  Mat4 aMStack_98 [64];
  uint local_58;
  long local_48;
  
                    /* try { // try from 00d43ac0 to 00e43ac7 has its CatchHandler @ 00d43e28 */
  lVar1 = tpidr_el0;
                    /* try { // try from 00d43ac8 to 00e43b9b has its CatchHandler @ 00d439dc */
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_a8 = 0;
  local_b0 = onDraw;
  local_a0 = this;
  Mat4::Mat4(aMStack_98,param_2);
  local_58 = param_3;
  std::__ndk1::function<void()>::operator=((function<void()> *)(this + 0x4c0),(__bind *)&local_b0);
  Mat4::~Mat4(aMStack_98);
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x4a0));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

