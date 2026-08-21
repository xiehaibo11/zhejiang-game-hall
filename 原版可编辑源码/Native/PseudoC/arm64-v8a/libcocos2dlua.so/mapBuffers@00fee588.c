
/* cocos2d::TextureAtlas::mapBuffers() */

void __thiscall cocos2d::TextureAtlas::mapBuffers(TextureAtlas *this)

{
                    /* try { // try from 00fee590 to 010ee593 has its CatchHandler @ 00fee5ac */
  GL::bindVAO(0);
  glBindBuffer(0x8892,*(undefined4 *)(this + 0x34));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fee590 with catch @ 00fee5ac
                        */
  glBufferData(0x8892,*(long *)(this + 0x48) * 0x60,*(undefined8 *)(this + 0x58),0x88e8);
  glBindBuffer(0x8892,0);
  glBindBuffer(0x8893,*(undefined4 *)(this + 0x38));
  glBufferData(0x8893,*(long *)(this + 0x48) * 0xc,*(undefined8 *)(this + 0x28),0x88e4);
                    /* try { // try from 00fee600 to 010ee603 has its CatchHandler @ 00fee620 */
  glBindBuffer(0x8893,0);
  return;
}

