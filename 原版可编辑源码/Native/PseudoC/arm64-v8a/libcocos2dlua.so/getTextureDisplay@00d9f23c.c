
/* dragonBones::CCFactory::getTextureDisplay(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) const */

undefined8 __thiscall
dragonBones::CCFactory::getTextureDisplay
          (CCFactory *this,basic_string *param_1,basic_string *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 00d9f214 with catch @ 00d9f23c */
                    /* catch() { ... } // from try @ 00d9f1fc with catch @ 00d9f240 */
                    /* catch() { ... } // from try @ 00d9f1f4 with catch @ 00d9f244 */
                    /* catch() { ... } // from try @ 00d9f1ec with catch @ 00d9f248 */
                    /* catch() { ... } // from try @ 00d9f1e4 with catch @ 00d9f24c */
                    /* catch() { ... } // from try @ 00d9f1dc with catch @ 00d9f250 */
                    /* catch() { ... } // from try @ 00d9f1cc with catch @ 00d9f254 */
                    /* catch() { ... } // from try @ 00d9f1c4 with catch @ 00d9f258 */
  lVar1 = (**(code **)(*(long *)this + 0x18))(this,param_2,param_1);
                    /* catch() { ... } // from try @ 00d9f1a8 with catch @ 00d9f25c */
                    /* catch() { ... } // from try @ 00d9f1a0 with catch @ 00d9f260 */
                    /* catch() { ... } // from try @ 00d9f190 with catch @ 00d9f264 */
  if ((lVar1 != 0) && (*(SpriteFrame **)(lVar1 + 0x48) != (SpriteFrame *)0x0)) {
                    /* catch() { ... } // from try @ 00d9f17c with catch @ 00d9f268 */
                    /* catch() { ... } // from try @ 00d9f174 with catch @ 00d9f26c */
    uVar2 = cocos2d::Sprite::createWithSpriteFrame(*(SpriteFrame **)(lVar1 + 0x48));
    return uVar2;
  }
                    /* catch() { ... } // from try @ 00d9f16c with catch @ 00d9f270 */
                    /* catch() { ... } // from try @ 00d9f164 with catch @ 00d9f274 */
                    /* catch() { ... } // from try @ 00d9f158 with catch @ 00d9f278 */
  return 0;
}

