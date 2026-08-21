
/* cocos2d::CameraBackgroundDepthBrush::initBuffer() */

void __thiscall cocos2d::CameraBackgroundDepthBrush::initBuffer(CameraBackgroundDepthBrush *this)

{
  long lVar1;
  Configuration *this_00;
  ulong uVar2;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
                    /* try { // try from 00ef0ee4 to 00ff0ee7 has its CatchHandler @ 00ef0fe8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00ef0f04 to 00ff0f07 has its CatchHandler @ 00ef0fa8 */
  this_00 = (Configuration *)Configuration::getInstance();
  uVar2 = Configuration::supportsShareableVAO(this_00);
  if ((uVar2 & 1) != 0) {
    (*glGenVertexArraysOESEXT)(1,this + 0xa0);
                    /* try { // try from 00ef0f30 to 00ff0f33 has its CatchHandler @ 00ef1004 */
    GL::bindVAO(*(uint *)(this + 0xa0));
  }
                    /* try { // try from 00ef0f34 to 00ff0fbb has its CatchHandler @ 00ef0ac0 */
  glGenBuffers(1,this + 0xa4);
  glBindBuffer(0x8892,*(undefined4 *)(this + 0xa4));
  glBufferData(0x8892,0x60,this + 0x40,0x88e4);
  local_48 = 0x3000200010000;
  local_40 = 0x10002;
  glGenBuffers(1,this + 0xa8);
  glBindBuffer(0x8893,*(undefined4 *)(this + 0xa8));
  glBufferData(0x8893,0xc,&local_48,0x88e4);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef0ecc with catch @ 00ef0fa4
                        */
  if ((uVar2 & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef0f04 with catch @ 00ef0fa8
                        */
    glEnableVertexAttribArray(0);
                    /* try { // try from 00ef0fbc to 00ff0fbf has its CatchHandler @ 00ef0fe4 */
                    /* try { // try from 00ef0fc0 to 00ff1017 has its CatchHandler @ 00ef0ac0 */
    glVertexAttribPointer(0,3,0x1406,0,0x18,0);
    glEnableVertexAttribArray(1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef0fbc with catch @ 00ef0fe4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef0ee4 with catch @ 00ef0fe8
                        */
    glVertexAttribPointer(1,4,0x1401,1,0x18,0xc);
    glEnableVertexAttribArray(2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef0f30 with catch @ 00ef1004
                        */
    glVertexAttribPointer(2,2,0x1406,0,0x18,0x10);
    GL::bindVAO(0);
  }
  glBindBuffer(0x8892,0);
  glBindBuffer(0x8893,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

