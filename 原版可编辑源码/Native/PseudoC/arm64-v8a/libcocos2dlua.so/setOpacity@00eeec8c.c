
/* cocos2d::AtlasNode::setOpacity(unsigned char) */

void __thiscall cocos2d::AtlasNode::setOpacity(AtlasNode *this,uchar param_1)

{
                    /* try { // try from 00eeec8c to 00feec97 has its CatchHandler @ 00eeecf4 */
                    /* try { // try from 00eeec98 to 00feed0f has its CatchHandler @ 00eeebcc */
  Node::setOpacity((Node *)this,param_1);
  if (this[800] != (AtlasNode)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00eeecc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x4c0))(this,this + 0x310);
    return;
  }
  return;
}

