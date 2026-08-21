
/* cocos2d::TileMapAtlas::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int, int) */

AtlasNode *
cocos2d::TileMapAtlas::create(basic_string *param_1,basic_string *param_2,int param_3,int param_4)

{
  AtlasNode *this;
  ulong uVar1;
  
  this = operator_new(0x420,(nothrow_t *)&std::nothrow);
  if (this != (AtlasNode *)0x0) {
    AtlasNode::AtlasNode(this);
                    /* try { // try from 00f574a8 to 010574b7 has its CatchHandler @ 00f5764c */
                    /* try { // try from 00f574b8 to 010574cf has its CatchHandler @ 00f57634 */
    *(undefined ***)this = &PTR__TileMapAtlas_01712650;
    *(undefined ***)(this + 0x2f8) = &PTR__TileMapAtlas_01712bb8;
    *(undefined8 *)(this + 0x3f0) = 0;
    *(undefined8 *)(this + 1000) = 0;
    *(undefined8 *)(this + 0x400) = 0;
    *(undefined8 *)(this + 0x3f8) = 0;
    *(undefined4 *)(this + 0x408) = 0x3f800000;
                    /* try { // try from 00f574d0 to 010574df has its CatchHandler @ 00f5761c */
    *(undefined4 *)(this + 0x410) = 0;
    *(undefined8 *)(this + 0x418) = 0;
  }
  uVar1 = initWithTileFile((TileMapAtlas *)this,param_1,param_2,param_3,param_4);
  if ((uVar1 & 1) == 0) {
    if (this != (AtlasNode *)0x0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (AtlasNode *)0x0;
    }
  }
  else {
    Ref::autorelease((Ref *)this);
                    /* try { // try from 00f574fc to 01057503 has its CatchHandler @ 00f5766c */
  }
  return this;
}

