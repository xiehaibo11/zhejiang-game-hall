
/* cocos2d::TextureAtlas::setupVBO() */

void __thiscall cocos2d::TextureAtlas::setupVBO(TextureAtlas *this)

{
                    /* try { // try from 00fee4e8 to 010ee51f has its CatchHandler @ 00fee4e8
                       catch() { ... } // from try @ 00fee4e8 with catch @ 00fee4e8
                       catch() { ... } // from try @ 00fee540 with catch @ 00fee4e8 */
  glGenBuffers(2,this + 0x34);
  GL::bindVAO(0);
  glBindBuffer(0x8892,*(undefined4 *)(this + 0x34));
                    /* try { // try from 00fee520 to 010ee53f has its CatchHandler @ 00fee54c */
  glBufferData(0x8892,*(long *)(this + 0x48) * 0x60,*(undefined8 *)(this + 0x58),0x88e8);
  glBindBuffer(0x8892,0);
                    /* try { // try from 00fee540 to 010ee55f has its CatchHandler @ 00fee4e8 */
  glBindBuffer(0x8893,*(undefined4 *)(this + 0x38));
                    /* catch() { ... } // from try @ 00fee520 with catch @ 00fee54c */
  glBufferData(0x8893,*(long *)(this + 0x48) * 0xc,*(undefined8 *)(this + 0x28),0x88e4);
  glBindBuffer(0x8893,0);
  return;
}

