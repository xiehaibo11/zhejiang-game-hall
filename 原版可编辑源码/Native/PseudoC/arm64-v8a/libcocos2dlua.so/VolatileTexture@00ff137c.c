
/* cocos2d::VolatileTexture::VolatileTexture(cocos2d::Texture2D*) */

void __thiscall cocos2d::VolatileTexture::VolatileTexture(VolatileTexture *this,Texture2D *param_1)

{
  undefined2 uVar1;
  VolatileTexture VVar2;
  
  *(Texture2D **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  Size::Size((Size *)(this + 0x24));
  *(undefined4 *)(this + 0x2c) = 2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x30),"");
  this[0x48] = (VolatileTexture)0x0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x60),"");
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x90) = 0;
                    /* try { // try from 00ff13f4 to 010f1443 has its CatchHandler @ 00ff13f4
                       catch(type#1 @ 00000000) { ... } // from try @ 00ff13f4 with catch @ 00ff13f4
                       catch(type#1 @ 00000000) { ... } // from try @ 00ff1474 with catch @ 00ff13f4
                       catch(type#1 @ 00000000) { ... } // from try @ 00ff14c4 with catch @ 00ff13f4
                       catch(type#1 @ 00000000) { ... } // from try @ 00ff1554 with catch @ 00ff13f4
                        */
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined8 *)(this + 0x94) = 1;
  Size::Size((Size *)(this + 0xa0),(Size *)&Size::ZERO);
  VVar2 = DAT_01792432;
  uVar1 = Color3B::WHITE;
  *(undefined2 *)(this + 0xab) = 0xff;
  this[0xaa] = VVar2;
  *(undefined2 *)(this + 0xa8) = uVar1;
  Size::Size((Size *)(this + 0xb0));
  this[0xc0] = (VolatileTexture)0x0;
  *(undefined8 *)(this + 0xb8) = 0;
  VVar2 = DAT_01792444;
  uVar1 = Color3B::BLACK;
                    /* try { // try from 00ff1444 to 010f1453 has its CatchHandler @ 00ff1530 */
  this[0xcc] = (VolatileTexture)0x1;
  this[0xc4] = (VolatileTexture)0xff;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
                    /* try { // try from 00ff1468 to 010f1473 has its CatchHandler @ 00ff14ec */
  this[0xc3] = VVar2;
  *(undefined2 *)(this + 0xc1) = uVar1;
  *(undefined8 *)(this + 0x54) = 0x812f0000812f;
  *(undefined8 *)(this + 0x4c) = 0x260100002601;
                    /* try { // try from 00ff1474 to 010f14af has its CatchHandler @ 00ff13f4 */
  return;
}

