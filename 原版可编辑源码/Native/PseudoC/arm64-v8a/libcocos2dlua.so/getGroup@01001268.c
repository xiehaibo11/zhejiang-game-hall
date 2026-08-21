
/* cocos2d::PhysicsBody::getGroup() const */

undefined4 __thiscall cocos2d::PhysicsBody::getGroup(PhysicsBody *this)

{
  if (*(long **)(this + 0x68) != *(long **)(this + 0x70)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01001190 with catch @ 01001278
                        */
    return *(undefined4 *)(**(long **)(this + 0x68) + 0x88);
  }
  return 0;
}

