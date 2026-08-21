
/* cocos2d::DrawNode::setupBuffer() */

void __thiscall cocos2d::DrawNode::setupBuffer(DrawNode *this)

{
  Configuration *this_00;
  ulong uVar1;
  
  this_00 = (Configuration *)Configuration::getInstance();
  uVar1 = Configuration::supportsShareableVAO(this_00);
  if ((uVar1 & 1) == 0) {
    glGenBuffers(1,this + 0x2fc);
    glBindBuffer(0x8892,*(undefined4 *)(this + 0x2fc));
    glBufferData(0x8892,(long)*(int *)(this + 0x310) * 0x14,*(undefined8 *)(this + 0x318),0x88e0);
    glGenBuffers(1,this + 0x30c);
    glBindBuffer(0x8892,*(undefined4 *)(this + 0x30c));
    glBufferData(0x8892,(long)*(int *)(this + 0x344) * 0x14,*(undefined8 *)(this + 0x350),0x88e0);
    glGenBuffers(1,this + 0x304);
    glBindBuffer(0x8892,*(undefined4 *)(this + 0x304));
    glBufferData(0x8892,(long)*(int *)(this + 800) * 0x14,*(undefined8 *)(this + 0x328),0x88e0);
  }
  else {
    (*glGenVertexArraysOESEXT)(1,this + 0x2f8);
    GL::bindVAO(*(uint *)(this + 0x2f8));
    glGenBuffers(1,this + 0x2fc);
    glBindBuffer(0x8892,*(undefined4 *)(this + 0x2fc));
    glBufferData(0x8892,(long)*(int *)(this + 0x310) * 0x14,*(undefined8 *)(this + 0x318),0x88e0);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0,2,0x1406,0,0x14,0);
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1,4,0x1401,1,0x14,8);
    glEnableVertexAttribArray(2);
    glVertexAttribPointer(2,2,0x1406,0,0x14,0xc);
    (*glGenVertexArraysOESEXT)(1,this + 0x308);
    GL::bindVAO(*(uint *)(this + 0x308));
    glGenBuffers(1,this + 0x30c);
    glBindBuffer(0x8892,*(undefined4 *)(this + 0x30c));
    glBufferData(0x8892,(long)*(int *)(this + 0x344) * 0x14,*(undefined8 *)(this + 0x350),0x88e0);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0,2,0x1406,0,0x14,0);
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1,4,0x1401,1,0x14,8);
    glEnableVertexAttribArray(2);
    glVertexAttribPointer(2,2,0x1406,0,0x14,0xc);
    (*glGenVertexArraysOESEXT)(1,this + 0x300);
    GL::bindVAO(*(uint *)(this + 0x300));
    glGenBuffers(1,this + 0x304);
    glBindBuffer(0x8892,*(undefined4 *)(this + 0x304));
    glBufferData(0x8892,(long)*(int *)(this + 800) * 0x14,*(undefined8 *)(this + 0x328),0x88e0);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0,2,0x1406,0,0x14,0);
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1,4,0x1401,1,0x14,8);
    glEnableVertexAttribArray(2);
    glVertexAttribPointer(2,2,0x1406,0,0x14,0xc);
    GL::bindVAO(0);
  }
  glBindBuffer(0x8892,0);
  return;
}

