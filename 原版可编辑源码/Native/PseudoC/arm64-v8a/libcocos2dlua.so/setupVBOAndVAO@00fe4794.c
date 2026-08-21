
/* cocos2d::Renderer::setupVBOAndVAO() */

void __thiscall cocos2d::Renderer::setupVBOAndVAO(Renderer *this)

{
                    /* try { // try from 00fe47c4 to 010e47c7 has its CatchHandler @ 00fe48cc */
  (*glGenVertexArraysOESEXT)(1,this + 0x1b0078);
  GL::bindVAO(*(uint *)(this + 0x1b0078));
  glGenBuffers(2,this + 0x1b007c);
  glBindBuffer(0x8892,*(undefined4 *)(this + 0x1b007c));
  glEnableVertexAttribArray(0);
                    /* try { // try from 00fe47f4 to 010e4827 has its CatchHandler @ 00fe48f4 */
  glVertexAttribPointer(0,3,0x1406,0,0x18,0);
  glEnableVertexAttribArray(1);
  glVertexAttribPointer(1,4,0x1401,1,0x18,0xc);
  glEnableVertexAttribArray(2);
                    /* try { // try from 00fe483c to 010e4853 has its CatchHandler @ 00fe48ec */
  glVertexAttribPointer(2,2,0x1406,0,0x18,0x10);
  glBindBuffer(0x8893,*(undefined4 *)(this + 0x1b0080));
                    /* try { // try from 00fe4868 to 010e486b has its CatchHandler @ 00fe48f0 */
                    /* try { // try from 00fe486c to 010e48bf has its CatchHandler @ 00fe4778 */
  glBufferData(0x8893,0x30000,this + 0x180078,0x88e4);
  GL::bindVAO(0);
  glBindBuffer(0x8893,0);
  glBindBuffer(0x8892,0);
  return;
}

