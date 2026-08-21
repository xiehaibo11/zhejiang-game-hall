
/* cocos2d::PhysicsBody::setResting(bool) const */

void __thiscall cocos2d::PhysicsBody::setResting(PhysicsBody *this,bool param_1)

{
  char cVar1;
  
  cVar1 = cpBodyIsSleeping(*(undefined8 *)(this + 0x88));
  if (param_1) {
    if (cVar1 == '\0') {
      cpBodySleep(*(undefined8 *)(this + 0x88));
      return;
    }
  }
  else if (cVar1 != '\0') {
                    /* try { // try from 01000fd0 to 01100fd7 has its CatchHandler @ 010012a4 */
                    /* try { // try from 01000fd8 to 0110112f has its CatchHandler @ 01000f80 */
    cpBodyActivate(*(undefined8 *)(this + 0x88));
    return;
  }
  return;
}

