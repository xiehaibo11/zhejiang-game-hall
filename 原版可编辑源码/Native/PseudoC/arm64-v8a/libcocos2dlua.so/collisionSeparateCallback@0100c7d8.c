
/* cocos2d::PhysicsWorld::collisionSeparateCallback(cocos2d::PhysicsContact&) */

void __thiscall
cocos2d::PhysicsWorld::collisionSeparateCallback(PhysicsWorld *this,PhysicsContact *param_1)

{
                    /* catch() { ... } // from try @ 0100c644 with catch @ 0100c7dc */
  if (param_1[0x74] != (PhysicsContact)0x0) {
    *(undefined4 *)(param_1 + 0x70) = 4;
    *(PhysicsWorld **)(param_1 + 0x58) = this;
                    /* catch() { ... } // from try @ 0100c730 with catch @ 0100c7f0 */
    EventDispatcher::dispatchEvent(*(EventDispatcher **)(this + 0x88),(Event *)param_1);
    return;
  }
  return;
}

