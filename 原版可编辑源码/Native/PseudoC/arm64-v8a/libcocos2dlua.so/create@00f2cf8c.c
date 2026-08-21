
/* cocos2d::ParticleBatchNode::create(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int) */

Node * cocos2d::ParticleBatchNode::create(basic_string *param_1,int param_2)

{
  Node *this;
  Director *this_00;
  TextureCache *this_01;
  Texture2D *pTVar1;
  
                    /* try { // try from 00f2cf9c to 0102cfab has its CatchHandler @ 00f2d044 */
                    /* try { // try from 00f2cfb0 to 0102cfb7 has its CatchHandler @ 00f2d038 */
  this = operator_new(0x390,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined8 *)(this + 0x300) = 0;
                    /* try { // try from 00f2cfd4 to 0102cfe3 has its CatchHandler @ 00f2d044 */
    *(undefined ***)this = &PTR__ParticleBatchNode_01708450;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleBatchNode_017089b0;
    BatchCommand::BatchCommand((BatchCommand *)(this + 0x310));
                    /* try { // try from 00f2cfe8 to 0102cfef has its CatchHandler @ 00f2d034 */
    this_00 = (Director *)Director::getInstance();
    this_01 = (TextureCache *)Director::getTextureCache(this_00);
                    /* try { // try from 00f2cff0 to 0102d057 has its CatchHandler @ 00f2ccec */
    pTVar1 = (Texture2D *)TextureCache::addImage(this_01,param_1);
    initWithTexture((ParticleBatchNode *)this,pTVar1,param_2);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

