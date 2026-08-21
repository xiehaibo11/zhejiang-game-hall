
/* cocos2d::ParticleBatchNode::ParticleBatchNode() */

void __thiscall cocos2d::ParticleBatchNode::ParticleBatchNode(ParticleBatchNode *this)

{
  Node::Node((Node *)this);
                    /* try { // try from 00f2cc10 to 0102cc17 has its CatchHandler @ 00f2ccc4 */
                    /* try { // try from 00f2cc18 to 0102cceb has its CatchHandler @ 00f2c744 */
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined ***)this = &PTR__ParticleBatchNode_01708450;
  *(undefined ***)(this + 0x2f8) = &PTR__ParticleBatchNode_017089b0;
  BatchCommand::BatchCommand((BatchCommand *)(this + 0x310));
  return;
}

