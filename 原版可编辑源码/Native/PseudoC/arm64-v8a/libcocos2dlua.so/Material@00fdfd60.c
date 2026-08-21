
/* cocos2d::Material::Material() */

void __thiscall cocos2d::Material::Material(Material *this)

{
  RenderState::RenderState((RenderState *)this);
  *(undefined ***)this = &PTR__Material_01724038;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x60),"");
  *(undefined8 *)(this + 0x99) = 0;
  *(undefined8 *)(this + 0x91) = 0;
                    /* catch() { ... } // from try @ 00fdfd2c with catch @ 00fdfda4 */
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined2 *)(this + 0xa1) = 0x101;
  this[0xa3] = (Material)0x1;
  return;
}

