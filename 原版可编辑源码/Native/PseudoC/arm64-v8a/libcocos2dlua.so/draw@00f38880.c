
/* cocos2d::ProgressTimer::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::ProgressTimer::draw(ProgressTimer *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long lVar1;
  code *local_c0;
  undefined8 uStack_b8;
  ProgressTimer *local_b0;
  Mat4 aMStack_a8 [64];
  uint local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(this + 800) != 0) && (*(long *)(this + 0x310) != 0)) {
    CustomCommand::init(*(float *)(this + 0x170),(Mat4 *)(this + 0x330),(uint)param_2);
                    /* try { // try from 00f388f0 to 0103890b has its CatchHandler @ 00f388f0
                       catch() { ... } // from try @ 00f388f0 with catch @ 00f388f0
                       catch() { ... } // from try @ 00f38950 with catch @ 00f388f0 */
    uStack_b8 = 0;
    local_c0 = onDraw;
    local_b0 = this;
    Mat4::Mat4(aMStack_a8,param_2);
                    /* try { // try from 00f3890c to 01038913 has its CatchHandler @ 00f38964 */
    local_68 = param_3;
    std::__ndk1::function<void()>::operator=((function<void()> *)(this + 0x350),(__bind *)&local_c0)
    ;
    Mat4::~Mat4(aMStack_a8);
    Renderer::addCommand(param_1,(RenderCommand *)(this + 0x330));
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00f38944 to 0103894f has its CatchHandler @ 00f3896c */
                    /* try { // try from 00f38950 to 010389a7 has its CatchHandler @ 00f388f0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

