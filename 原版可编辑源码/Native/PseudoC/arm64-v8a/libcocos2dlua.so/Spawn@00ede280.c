
/* cocos2d::Spawn::Spawn() */

void __thiscall cocos2d::Spawn::Spawn(Spawn *this)

{
                    /* catch() { ... } // from try @ 00ede2ac with catch @ 00ede280 */
  Action::Action((Action *)this);
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
                    /* try { // try from 00ede2a4 to 00fde2ab has its CatchHandler @ 00ede30c */
                    /* try { // try from 00ede2ac to 00fde327 has its CatchHandler @ 00ede280 */
  *(undefined ***)this = &PTR__Spawn_016f86b8;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f8718;
  return;
}

