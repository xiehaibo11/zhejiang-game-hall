
/* cocos2d::PhysicsBody::getContactTestBitmask() const */

undefined4 __thiscall cocos2d::PhysicsBody::getContactTestBitmask(PhysicsBody *this)

{
  if (*(long **)(this + 0x68) != *(long **)(this + 0x70)) {
    return *(undefined4 *)(**(long **)(this + 0x68) + 0x84);
  }
                    /* try { // try from 01001190 to 01101197 has its CatchHandler @ 01001278 */
  return 0;
}

