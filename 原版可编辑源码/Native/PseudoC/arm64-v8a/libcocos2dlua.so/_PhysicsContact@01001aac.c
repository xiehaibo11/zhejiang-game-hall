
/* cocos2d::PhysicsContact::~PhysicsContact() */

void __thiscall cocos2d::PhysicsContact::~PhysicsContact(PhysicsContact *this)

{
                    /* try { // try from 01001ac8 to 01101ad3 has its CatchHandler @ 01001bfc */
  *(undefined ***)this = &PTR__PhysicsContact_01724ea8;
  if (*(void **)(this + 0x88) != (void *)0x0) {
                    /* try { // try from 01001ad4 to 01101c17 has its CatchHandler @ 01001a7c */
    operator_delete(*(void **)(this + 0x88));
  }
  *(undefined8 *)(this + 0x88) = 0;
  if (*(void **)(this + 0x90) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x90));
  }
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined ***)this = &PTR__EventCustom_01698250;
  if (((byte)this[0x40] & 1) != 0) {
    operator_delete(*(void **)(this + 0x50));
  }
  Event::~Event((Event *)this);
  return;
}

