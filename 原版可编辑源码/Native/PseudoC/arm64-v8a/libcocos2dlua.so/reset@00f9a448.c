
/* cocos2d::Director::reset() */

void __thiscall cocos2d::Director::reset(Director *this)

{
  Director *pDVar1;
  undefined8 *puVar2;
  Ref *this_00;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  pDVar1 = this + 0x158;
  if (*(long **)(this + 0x158) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x158) + 0x330))();
    (**(code **)(**(long **)pDVar1 + 0x340))();
    Ref::release(*(Ref **)pDVar1);
  }
  *(undefined8 *)pDVar1 = 0;
  *(undefined8 *)(this + 0x160) = 0;
  if (*(EventDispatcher **)(this + 0xb0) != (EventDispatcher *)0x0) {
    EventDispatcher::dispatchEvent(*(EventDispatcher **)(this + 0xb0),*(Event **)(this + 0xe8));
  }
  Scheduler::unscheduleAll(*(Scheduler **)(this + 0xa0));
  if (*(EventDispatcher **)(this + 0xb0) != (EventDispatcher *)0x0) {
    EventDispatcher::removeAllEventListeners(*(EventDispatcher **)(this + 0xb0));
  }
  if (*(long **)(this + 0x1a8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a8) + 0x330))();
    (**(code **)(**(long **)(this + 0x1a8) + 0x340))();
    Ref::release(*(Ref **)(this + 0x1a8));
  }
  puVar3 = *(undefined8 **)(this + 0x170);
  puVar2 = *(undefined8 **)(this + 0x178);
  *(undefined8 *)(this + 0x1a8) = 0;
  if (puVar3 == puVar2) {
    *(undefined8 **)(this + 0x178) = puVar3;
    this[0x1d0] = (Director)0x1;
    this_00 = *(Ref **)(this + 0x130);
  }
  else {
    do {
      puVar4 = puVar3 + 1;
      Ref::release((Ref *)*puVar3);
      puVar3 = puVar4;
    } while (puVar2 != puVar4);
    this[0x1d0] = (Director)0x1;
    *(undefined8 *)(this + 0x178) = *(undefined8 *)(this + 0x170);
    if (*(Ref **)(this + 0x1a8) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x1a8));
      *(undefined8 *)(this + 0x1a8) = 0;
    }
    this_00 = *(Ref **)(this + 0x130);
  }
  if (this_00 != (Ref *)0x0) {
                    /* try { // try from 00f9a528 to 0109a52b has its CatchHandler @ 00f9a65c */
    Ref::release(this_00);
    *(undefined8 *)(this + 0x130) = 0;
  }
  if (*(Ref **)(this + 0x138) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x138));
    *(undefined8 *)(this + 0x138) = 0;
  }
  if (*(Ref **)(this + 0x140) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x140));
    *(undefined8 *)(this + 0x140) = 0;
  }
  FontFNT::purgeCachedData();
  FontAtlasCache::purgeCachedData();
  FontFreeType::shutdownFreeType();
  DrawPrimitives::free();
  AnimationCache::destroyInstance();
  SpriteFrameCache::destroyInstance();
  GLProgramCache::destroyInstance();
  GLProgramStateCache::destroyInstance();
                    /* try { // try from 00f9a570 to 0109a573 has its CatchHandler @ 00f9a648 */
  FileUtils::destroyInstance();
  AsyncTaskPool::destroyInstance();
  UserDefault::destroyInstance();
  GL::invalidateStateCache();
  RenderState::finalize();
  if (*(TextureCache **)(this + 0x110) != (TextureCache *)0x0) {
    TextureCache::waitForQuit(*(TextureCache **)(this + 0x110));
    if (*(Ref **)(this + 0x110) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x110));
      *(undefined8 *)(this + 0x110) = 0;
    }
  }
  return;
}

