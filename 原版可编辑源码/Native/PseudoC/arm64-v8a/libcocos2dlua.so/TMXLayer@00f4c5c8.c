
/* cocos2d::TMXLayer::TMXLayer() */

void __thiscall cocos2d::TMXLayer::TMXLayer(TMXLayer *this)

{
                    /* try { // try from 00f4c5cc to 0104c5db has its CatchHandler @ 00f4d480 */
  SpriteBatchNode::SpriteBatchNode((SpriteBatchNode *)this);
                    /* try { // try from 00f4c5e8 to 0104c5ef has its CatchHandler @ 00f4d47c */
  *(undefined ***)this = &PTR__TMXLayer_017111b8;
  *(undefined ***)(this + 0x2f8) = &PTR__TMXLayer_01711718;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x3a0),"");
  this[0x3b8] = (TMXLayer)0x0;
  *(undefined4 *)(this + 0x3bc) = 0;
  this[0x3c0] = (TMXLayer)0x0;
  *(undefined8 *)(this + 0x3d0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined4 *)(this + 0x3d8) = 0x3f800000;
  Size::Size((Size *)(this + 0x3dc),(Size *)&Size::ZERO);
  Size::Size((Size *)(this + 0x3e4),(Size *)&Size::ZERO);
  *(undefined4 *)(this + 0x400) = 0;
  *(undefined8 *)(this + 0x3f8) = 0;
  *(undefined8 *)(this + 0x3f0) = 0;
  *(undefined8 *)(this + 0x404) = 0x100000001;
  *(undefined8 *)(this + 0x414) = 0;
  *(undefined8 *)(this + 0x40c) = 0;
  *(undefined8 *)(this + 0x424) = 0;
  *(undefined8 *)(this + 0x41c) = 0;
  *(undefined8 *)(this + 0x42c) = 0x3f80000000000000;
                    /* try { // try from 00f4c678 to 0104c68f has its CatchHandler @ 00f4d5b4 */
  return;
}

