
/* cocos2d::TextureAtlas::setupVBOandVAO() */

void __thiscall cocos2d::TextureAtlas::setupVBOandVAO(TextureAtlas *this)

{
  (*glGenVertexArraysOESEXT)(1,this + 0x30);
  GL::bindVAO(*(uint *)(this + 0x30));
  glGenBuffers(2,this + 0x34);
  glBindBuffer(0x8892,*(undefined4 *)(this + 0x34));
  glBufferData(0x8892,*(long *)(this + 0x48) * 0x60,*(undefined8 *)(this + 0x58),0x88e8);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(0,3,0x1406,0,0x18,0);
  glEnableVertexAttribArray(1);
  glVertexAttribPointer(1,4,0x1401,1,0x18,0xc);
  glEnableVertexAttribArray(2);
  glVertexAttribPointer(2,2,0x1406,0,0x18,0x10);
  glBindBuffer(0x8893,*(undefined4 *)(this + 0x38));
  glBufferData(0x8893,*(long *)(this + 0x48) * 0xc,*(undefined8 *)(this + 0x28),0x88e4);
  GL::bindVAO(0);
  glBindBuffer(0x8893,0);
  glBindBuffer(0x8892,0);
  return;
}

