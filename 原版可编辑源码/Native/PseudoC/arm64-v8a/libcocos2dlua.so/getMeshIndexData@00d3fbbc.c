
/* cocos2d::Sprite3D::getMeshIndexData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

long __thiscall cocos2d::Sprite3D::getMeshIndexData(Sprite3D *this,basic_string *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 00d3fbc4 to 00e3fbf7 has its CatchHandler @ 00d3fbc4
                       catch() { ... } // from try @ 00d3fbc4 with catch @ 00d3fbc4
                       catch() { ... } // from try @ 00d3fc04 with catch @ 00d3fbc4 */
  puVar3 = *(undefined8 **)(this + 0x310);
  puVar1 = *(undefined8 **)(this + 0x308);
  do {
    if (puVar1 == puVar3) {
      return 0;
    }
    lVar2 = MeshVertexData::getMeshIndexDataById((MeshVertexData *)*puVar1,param_1);
    puVar1 = puVar1 + 1;
  } while (lVar2 == 0);
                    /* try { // try from 00d3fc04 to 00e3fc2b has its CatchHandler @ 00d3fbc4 */
  return lVar2;
}

