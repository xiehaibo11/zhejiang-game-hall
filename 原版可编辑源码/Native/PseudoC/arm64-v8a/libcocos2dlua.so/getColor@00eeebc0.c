
/* cocos2d::AtlasNode::getColor() const */

AtlasNode * __thiscall cocos2d::AtlasNode::getColor(AtlasNode *this)

{
  AtlasNode *pAVar1;
  
  if (this[800] != (AtlasNode)0x0) {
                    /* try { // try from 00eeebcc to 00feec8b has its CatchHandler @ 00eeebcc
                       catch() { ... } // from try @ 00eeebcc with catch @ 00eeebcc
                       catch() { ... } // from try @ 00eeec98 with catch @ 00eeebcc */
    return this + 0x310;
  }
  pAVar1 = (AtlasNode *)Node::getColor((Node *)this);
  return pAVar1;
}

