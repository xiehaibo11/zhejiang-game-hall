
/* cocos2d::Skybox::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall cocos2d::Skybox::draw(Skybox *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long lVar1;
  code *local_c0;
  undefined8 uStack_b8;
  Skybox *local_b0;
  Mat4 aMStack_a8 [64];
  uint local_68;
  long local_58;
  
                    /* try { // try from 00d4d538 to 00e4d57f has its CatchHandler @ 00d4d32c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4d530 with catch @ 00d4d53c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4d37c with catch @ 00d4d540
                        */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4d468 with catch @ 00d4d55c
                        */
  CustomCommand::init((CustomCommand *)(this + 0x310),*(float *)(this + 0x170));
                    /* try { // try from 00d4d580 to 00e4d5bb has its CatchHandler @ 00d4d580
                       catch() { ... } // from try @ 00d4d580 with catch @ 00d4d580
                       catch() { ... } // from try @ 00d4d5c0 with catch @ 00d4d580
                       catch() { ... } // from try @ 00d4d5f8 with catch @ 00d4d580 */
  uStack_b8 = 0;
  local_c0 = onDraw;
  local_b0 = this;
  Mat4::Mat4(aMStack_a8,param_2);
  local_68 = param_3;
  std::__ndk1::function<void()>::operator=((function<void()> *)(this + 0x330),(__bind *)&local_c0);
                    /* try { // try from 00d4d5bc to 00e4d5bf has its CatchHandler @ 00d4d6cc */
                    /* try { // try from 00d4d5c0 to 00e4d5eb has its CatchHandler @ 00d4d580 */
  Mat4::~Mat4(aMStack_a8);
  this[800] = (Skybox)0x0;
  this[0x322] = (Skybox)0x1;
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x310));
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00d4d5ec to 00e4d5f7 has its CatchHandler @ 00d4d6b8 */
                    /* try { // try from 00d4d5f8 to 00e4d6df has its CatchHandler @ 00d4d580 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

