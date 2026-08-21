
/* cocos2d::Material::setTechnique(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Material::setTechnique(Material *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = getTechniqueByName(this,param_1);
  if (lVar1 != 0) {
    *(long *)(this + 0x90) = lVar1;
  }
                    /* try { // try from 00fe0260 to 010e0267 has its CatchHandler @ 00fe02d8 */
                    /* try { // try from 00fe0268 to 010e02f3 has its CatchHandler @ 00fe022c */
  return;
}

