
/* cocos2d::PhysicsBody::isResting() const */

bool __thiscall cocos2d::PhysicsBody::isResting(PhysicsBody *this)

{
  char cVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01000e00 with catch @ 01000f7c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01000fd8 with catch @ 01000f80
                       catch(type#1 @ 00000000) { ... } // from try @ 01001198 with catch @ 01000f80
                        */
  cVar1 = cpBodyIsSleeping(*(undefined8 *)(this + 0x88));
  return cVar1 != '\0';
}

