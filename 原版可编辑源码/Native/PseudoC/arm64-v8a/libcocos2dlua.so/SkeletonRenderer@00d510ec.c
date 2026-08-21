
/* spine::SkeletonRenderer::SkeletonRenderer() */

void __thiscall spine::SkeletonRenderer::SkeletonRenderer(SkeletonRenderer *this)

{
  cocos2d::Node::Node((Node *)this);
                    /* try { // try from 00d51104 to 00e511ab has its CatchHandler @ 00d51104
                       catch() { ... } // from try @ 00d51104 with catch @ 00d51104
                       catch() { ... } // from try @ 00d51570 with catch @ 00d51104 */
  *(undefined ***)this = &PTR__SkeletonRenderer_016d5758;
  *(undefined ***)(this + 0x2f8) = &PTR__SkeletonRenderer_016d5cc8;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  cocos2d::CustomCommand::CustomCommand((CustomCommand *)(this + 800));
  *(undefined2 *)(this + 0x394) = 0;
  this[0x396] = (SkeletonRenderer)0x0;
  *(undefined4 *)(this + 0x390) = 0x3f800000;
  *(undefined8 *)(this + 0x3a0) = 0;
  return;
}

