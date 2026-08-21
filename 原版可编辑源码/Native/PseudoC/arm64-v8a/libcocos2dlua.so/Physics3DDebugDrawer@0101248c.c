
/* cocos2d::Physics3DDebugDrawer::Physics3DDebugDrawer() */

void __thiscall cocos2d::Physics3DDebugDrawer::Physics3DDebugDrawer(Physics3DDebugDrawer *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__Physics3DDebugDrawer_01726608;
  *(undefined8 *)(this + 8) = 0;
                    /* catch() { ... } // from try @ 010124e8 with catch @ 010124bc */
  *(undefined8 *)(this + 0x20) = 1;
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x30));
  this[0x88] = (Physics3DDebugDrawer)0x1;
  *(undefined4 *)(this + 0x8c) = 0x1801;
                    /* try { // try from 010124e0 to 011124e7 has its CatchHandler @ 01012500 */
  init(this);
                    /* try { // try from 010124e8 to 0111251b has its CatchHandler @ 010124bc */
  return;
}

