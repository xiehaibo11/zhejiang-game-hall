
/* cocos2d::DrawNode::~DrawNode() */

void __thiscall cocos2d::DrawNode::~DrawNode(DrawNode *this)

{
  Configuration *this_00;
  ulong uVar1;
  
  *(undefined ***)this = &PTR__DrawNode_016fbec8;
  free(*(void **)(this + 0x318));
  *(undefined8 *)(this + 0x318) = 0;
  free(*(void **)(this + 0x328));
  *(undefined8 *)(this + 0x328) = 0;
  free(*(void **)(this + 0x350));
  *(undefined8 *)(this + 0x350) = 0;
  glDeleteBuffers(1,this + 0x2fc);
                    /* try { // try from 00ef37c8 to 00ff37db has its CatchHandler @ 00ef38d8 */
  glDeleteBuffers(1,this + 0x30c);
  glDeleteBuffers(1,this + 0x304);
  *(undefined4 *)(this + 0x2fc) = 0;
  *(undefined4 *)(this + 0x304) = 0;
  *(undefined4 *)(this + 0x30c) = 0;
  this_00 = (Configuration *)Configuration::getInstance();
  uVar1 = Configuration::supportsShareableVAO(this_00);
  if ((uVar1 & 1) != 0) {
    GL::bindVAO(0);
                    /* try { // try from 00ef37fc to 00ff3813 has its CatchHandler @ 00ef390c */
    (*glDeleteVertexArraysOESEXT)(1,this + 0x2f8);
    (*glDeleteVertexArraysOESEXT)(1,this + 0x308);
    (*glDeleteVertexArraysOESEXT)(1,this + 0x300);
    *(undefined4 *)(this + 0x300) = 0;
                    /* try { // try from 00ef3844 to 00ff3867 has its CatchHandler @ 00ef38dc */
    *(undefined4 *)(this + 0x308) = 0;
    *(undefined4 *)(this + 0x2f8) = 0;
  }
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x400));
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x3b0));
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x360));
                    /* try { // try from 00ef3868 to 00ff3927 has its CatchHandler @ 00ef3658 */
  Node::~Node((Node *)this);
  return;
}

