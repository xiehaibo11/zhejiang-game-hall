
/* btCollisionWorld::setDebugDrawer(btIDebugDraw*) */

void __thiscall btCollisionWorld::setDebugDrawer(btCollisionWorld *this,btIDebugDraw *param_1)

{
  *(btIDebugDraw **)(this + 0x68) = param_1;
  return;
}

