
/* cocos2d::Director::drawScene() */

void __thiscall cocos2d::Director::drawScene(Director *this)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  Mat4 *this_00;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  
  if (this[400] == (Director)0x0) {
    if (this[0x104] == (Director)0x0) {
      lVar4 = std::__ndk1::chrono::steady_clock::now();
                    /* catch() { ... } // from try @ 00f98810 with catch @ 00f98944 */
      fVar9 = (float)((lVar4 - *(long *)(this + 0x188)) / 1000) / 1e+06;
      *(float *)(this + 0x100) = fVar9;
      *(long *)(this + 0x188) = lVar4;
    }
    else {
      fVar9 = *(float *)(this + 0x100);
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    *(float *)(this + 0x100) = fVar9;
    plVar3 = *(long **)(this + 0x108);
  }
  else {
    *(undefined4 *)(this + 0x100) = 0;
    this[400] = (Director)0x0;
    uVar2 = std::__ndk1::chrono::steady_clock::now();
    *(undefined8 *)(this + 0x188) = uVar2;
    plVar3 = *(long **)(this + 0x108);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
  }
  if (this[0x148] == (Director)0x0) {
    EventDispatcher::dispatchEvent(*(EventDispatcher **)(this + 0xb0),*(Event **)(this + 0xd8));
    Scheduler::update(*(Scheduler **)(this + 0xa0),*(float *)(this + 0x100));
    EventDispatcher::dispatchEvent(*(EventDispatcher **)(this + 0xb0),*(Event **)(this + 0xe0));
  }
  Renderer::clear(*(Renderer **)(this + 0x1b0));
  experimental::FrameBuffer::clearAllFBOs();
                    /* try { // try from 00f98710 to 01098717 has its CatchHandler @ 00f98934 */
                    /* try { // try from 00f98718 to 010987bf has its CatchHandler @ 00f985ac */
  EventDispatcher::dispatchEvent(*(EventDispatcher **)(this + 0xb0),*(Event **)(this + 0xc0));
  if (*(long *)(this + 0x160) != 0) {
    setNextScene(this);
  }
  lVar4 = *(long *)(this + 0x30);
  lVar6 = *(long *)(this + 0x38);
  uVar5 = *(long *)(this + 0x48) + *(long *)(this + 0x50);
  uVar7 = uVar5 - 1;
  lVar8 = *(long *)(lVar4 + (uVar7 >> 3 & 0x1ffffffffffffff8));
  uVar1 = 0;
  if (lVar6 - lVar4 != 0) {
    uVar1 = (lVar6 - lVar4) * 8 - 1;
  }
  if (uVar1 == uVar5) {
    std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::__add_back_capacity
              ((deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)(this + 0x28));
    lVar4 = *(long *)(this + 0x30);
    lVar6 = *(long *)(this + 0x38);
    uVar5 = *(long *)(this + 0x48) + *(long *)(this + 0x50);
  }
  if (lVar6 == lVar4) {
    this_00 = (Mat4 *)0x0;
  }
  else {
    this_00 = (Mat4 *)(*(long *)(lVar4 + (uVar5 >> 3 & 0x1ffffffffffffff8)) + (uVar5 & 0x3f) * 0x40)
    ;
  }
  Mat4::Mat4(this_00,(Mat4 *)(lVar8 + (uVar7 & 0x3f) * 0x40));
                    /* try { // try from 00f987c0 to 010987c7 has its CatchHandler @ 00f98914 */
  *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
                    /* try { // try from 00f987c8 to 0109880f has its CatchHandler @ 00f985ac */
  if (*(Scene **)(this + 0x158) != (Scene *)0x0) {
    Scene::stepPhysicsAndNavigation(*(Scene **)(this + 0x158),*(float *)(this + 0x100));
    lVar4 = *(long *)(this + 0x1b0);
    *(undefined8 *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4) = 0;
    *(undefined8 *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar4) = 0;
    if (*(GLView **)(this + 0x108) != (GLView *)0x0) {
      GLView::renderScene(*(GLView **)(this + 0x108),*(Scene **)(this + 0x158),
                          *(Renderer **)(this + 0x1b0));
    }
    EventDispatcher::dispatchEvent(*(EventDispatcher **)(this + 0xb0),*(Event **)(this + 0xd0));
  }
  plVar3 = *(long **)(this + 0x1a8);
  if (plVar3 != (long *)0x0) {
                    /* try { // try from 00f98810 to 01098817 has its CatchHandler @ 00f98944 */
    (**(code **)(*plVar3 + 0x358))(plVar3,*(undefined8 *)(this + 0x1b0),Mat4::IDENTITY,0);
  }
  *(float *)(this + 0x128) = 1.0 / *(float *)(this + 0x100);
  if (this[0x120] != (Director)0x0) {
                    /* try { // try from 00f98844 to 0109884b has its CatchHandler @ 00f988fc */
    showStats();
  }
  Renderer::render(*(Renderer **)(this + 0x1b0));
  EventDispatcher::dispatchEvent(*(EventDispatcher **)(this + 0xb0),*(Event **)(this + 200));
  uVar5 = (*(long *)(this + 0x50) + *(long *)(this + 0x48)) - 1;
  Mat4::~Mat4((Mat4 *)(*(long *)(*(long *)(this + 0x30) + (uVar5 >> 3 & 0x1ffffffffffffff8)) +
                      (uVar5 & 0x3f) * 0x40));
  lVar6 = *(long *)(this + 0x50);
  lVar8 = *(long *)(this + 0x38) - *(long *)(this + 0x30);
  lVar4 = 0;
  if (lVar8 != 0) {
    lVar4 = lVar8 * 8 + -1;
  }
  *(long *)(this + 0x50) = lVar6 + -1;
  if (0x7f < (lVar4 - (lVar6 + *(long *)(this + 0x48))) + 1U) {
    operator_delete(*(void **)(*(long *)(this + 0x38) + -8));
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + -8;
  }
                    /* try { // try from 00f988d8 to 010988df has its CatchHandler @ 00f988f4 */
  *(int *)(this + 0x14c) = *(int *)(this + 0x14c) + 1;
                    /* try { // try from 00f988e0 to 010988ef has its CatchHandler @ 00f988f8 */
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 0x20))();
  }
                    /* try { // try from 00f988f0 to 010989c7 has its CatchHandler @ 00f985ac */
                    /* catch() { ... } // from try @ 00f988d8 with catch @ 00f988f4 */
  if (this[0x120] != (Director)0x0) {
                    /* catch() { ... } // from try @ 00f988e0 with catch @ 00f988f8 */
                    /* catch() { ... } // from try @ 00f98844 with catch @ 00f988fc */
                    /* catch() { ... } // from try @ 00f98600 with catch @ 00f98900 */
                    /* catch() { ... } // from try @ 00f987c0 with catch @ 00f98914 */
    DAT_0178fc58 = *(float *)(this + 0x100) * 0.1 + DAT_0178fc58 * 0.9;
    *(float *)(this + 0x154) = DAT_0178fc58;
  }
                    /* catch() { ... } // from try @ 00f98710 with catch @ 00f98934 */
  return;
}

