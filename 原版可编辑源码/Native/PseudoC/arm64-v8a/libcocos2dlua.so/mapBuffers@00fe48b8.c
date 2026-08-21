
/* cocos2d::Renderer::mapBuffers() */

void __thiscall cocos2d::Renderer::mapBuffers(Renderer *this)

{
                    /* try { // try from 00fe48c0 to 010e48cb has its CatchHandler @ 00fe48cc */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fe47c4 with catch @ 00fe48cc
                       catch(type#1 @ 00000000) { ... } // from try @ 00fe48c0 with catch @ 00fe48cc
                       try { // try from 00fe48cc to 010e4907 has its CatchHandler @ 00fe4778 */
  GL::bindVAO(0);
  glBindBuffer(0x8892,*(undefined4 *)(this + 0x1b007c));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fe483c with catch @ 00fe48ec
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fe4868 with catch @ 00fe48f0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fe47f4 with catch @ 00fe48f4
                        */
  glBufferData(0x8892,0x180000,this + 0x78,0x88e8);
  glBindBuffer(0x8892,0);
                    /* try { // try from 00fe4908 to 010e490b has its CatchHandler @ 00fe4930 */
  glBindBuffer(0x8893,*(undefined4 *)(this + 0x1b0080));
  glBufferData(0x8893,0x30000,this + 0x180078,0x88e4);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fe4908 with catch @ 00fe4930
                        */
  glBindBuffer(0x8893,0);
  return;
}

