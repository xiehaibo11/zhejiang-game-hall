
/* cocos2d::Sprite3DMaterial::updateWithFilename(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool, bool, bool) */

undefined8 __thiscall
cocos2d::Sprite3DMaterial::updateWithFilename
          (Sprite3DMaterial *this,basic_string *param_1,bool param_2,bool param_3,bool param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 00d33cc0 to 00e33cfb has its CatchHandler @ 00d33cc0
                       catch() { ... } // from try @ 00d33cc0 with catch @ 00d33cc0
                       catch() { ... } // from try @ 00d33d0c with catch @ 00d33cc0 */
  if ((((Sprite3DMaterial)param_4 == this[0xa2]) && ((Sprite3DMaterial)param_3 == this[0xa1])) &&
     ((Sprite3DMaterial)param_2 == this[0xa3])) {
                    /* try { // try from 00d33cfc to 00e33d0b has its CatchHandler @ 00d33d20 */
    return 0;
  }
                    /* try { // try from 00d33d0c to 00e33d53 has its CatchHandler @ 00d33cc0 */
  puVar4 = *(undefined8 **)(this + 0x78);
  puVar1 = *(undefined8 **)(this + 0x80);
  this[0xa2] = (Sprite3DMaterial)param_4;
  this[0xa1] = (Sprite3DMaterial)param_3;
                    /* catch() { ... } // from try @ 00d33cfc with catch @ 00d33d20 */
  this[0xa3] = (Sprite3DMaterial)param_2;
  if (puVar4 != puVar1) {
    do {
      puVar3 = puVar4 + 1;
      Ref::release((Ref *)*puVar4);
      puVar4 = puVar3;
    } while (puVar1 != puVar3);
    puVar4 = *(undefined8 **)(this + 0x78);
  }
  *(undefined8 **)(this + 0x80) = puVar4;
  this[0xa0] = (Sprite3DMaterial)0x1;
  uVar2 = Material::initWithFile((Material *)this,param_1);
  return uVar2;
}

