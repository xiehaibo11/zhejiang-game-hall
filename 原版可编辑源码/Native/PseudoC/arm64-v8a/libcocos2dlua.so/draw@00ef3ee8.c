
/* cocos2d::DrawNode::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall cocos2d::DrawNode::draw(DrawNode *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  DrawNode *local_b0;
  Mat4 aMStack_a8 [64];
  uint local_68;
  long local_58;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef3f5c with catch @ 00ef3eec
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef3f8c with catch @ 00ef3eec
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef3fbc with catch @ 00ef3eec
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef3fe4 with catch @ 00ef3eec
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef4010 with catch @ 00ef3eec
                        */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = (uint)param_2;
  if (*(int *)(this + 0x314) != 0) {
    CustomCommand::init(*(float *)(this + 0x170),(Mat4 *)(this + 0x360),uVar2);
                    /* try { // try from 00ef3f54 to 00ff3f5b has its CatchHandler @ 00ef4050 */
                    /* try { // try from 00ef3f5c to 00ff3f7f has its CatchHandler @ 00ef3eec */
    uStack_b8 = 1;
    local_c0 = 0x530;
    local_b0 = this;
    Mat4::Mat4(aMStack_a8,param_2);
    local_68 = param_3;
    std::__ndk1::function<void()>::operator=((function<void()> *)(this + 0x380),(__bind *)&local_c0)
    ;
    Mat4::~Mat4(aMStack_a8);
                    /* try { // try from 00ef3f80 to 00ff3f8b has its CatchHandler @ 00ef4050 */
    Renderer::addCommand(param_1,(RenderCommand *)(this + 0x360));
  }
                    /* try { // try from 00ef3f8c to 00ff3fb3 has its CatchHandler @ 00ef3eec */
  if (*(int *)(this + 0x324) != 0) {
    CustomCommand::init(*(float *)(this + 0x170),(Mat4 *)(this + 0x3b0),uVar2);
                    /* try { // try from 00ef3fb4 to 00ff3fbb has its CatchHandler @ 00ef404c */
                    /* try { // try from 00ef3fbc to 00ff3fdb has its CatchHandler @ 00ef3eec */
    uStack_b8 = 1;
    local_c0 = 0x540;
    local_b0 = this;
    Mat4::Mat4(aMStack_a8,param_2);
    local_68 = param_3;
    std::__ndk1::function<void()>::operator=((function<void()> *)(this + 0x3d0),(__bind *)&local_c0)
    ;
                    /* try { // try from 00ef3fdc to 00ff3fe3 has its CatchHandler @ 00ef404c */
    Mat4::~Mat4(aMStack_a8);
                    /* try { // try from 00ef3fe4 to 00ff4003 has its CatchHandler @ 00ef3eec */
    Renderer::addCommand(param_1,(RenderCommand *)(this + 0x3b0));
  }
  if (*(int *)(this + 0x348) != 0) {
                    /* try { // try from 00ef4004 to 00ff400f has its CatchHandler @ 00ef404c */
    CustomCommand::init(*(float *)(this + 0x170),(Mat4 *)(this + 0x400),uVar2);
                    /* try { // try from 00ef4010 to 00ff4053 has its CatchHandler @ 00ef3eec */
    uStack_b8 = 1;
    local_c0 = 0x538;
    local_b0 = this;
    Mat4::Mat4(aMStack_a8,param_2);
    local_68 = param_3;
    std::__ndk1::function<void()>::operator=((function<void()> *)(this + 0x420),(__bind *)&local_c0)
    ;
    Mat4::~Mat4(aMStack_a8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef3fb4 with catch @ 00ef404c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef3fdc with catch @ 00ef404c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef4004 with catch @ 00ef404c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef3f54 with catch @ 00ef4050
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef3f80 with catch @ 00ef4050
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef40c4 with catch @ 00ef4054
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef40f4 with catch @ 00ef4054
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef4124 with catch @ 00ef4054
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef414c with catch @ 00ef4054
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef4178 with catch @ 00ef4054
                        */
    Renderer::addCommand(param_1,(RenderCommand *)(this + 0x400));
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

