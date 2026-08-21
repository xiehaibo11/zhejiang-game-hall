
/* cocos2d::Physics3DWorld::debugDraw(cocos2d::Renderer*) */

void __thiscall cocos2d::Physics3DWorld::debugDraw(Physics3DWorld *this,Renderer *param_1)

{
  if (*(Physics3DDebugDrawer **)(this + 0x90) != (Physics3DDebugDrawer *)0x0) {
    Physics3DDebugDrawer::clear(*(Physics3DDebugDrawer **)(this + 0x90));
    (**(code **)(**(long **)(this + 0x60) + 0x30))();
    Physics3DDebugDrawer::draw(*(Physics3DDebugDrawer **)(this + 0x90),param_1);
    return;
  }
  return;
}

