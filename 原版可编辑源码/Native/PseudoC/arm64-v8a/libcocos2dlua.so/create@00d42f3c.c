
/* cocos2d::Terrain::create(cocos2d::Terrain::TerrainData&, cocos2d::Terrain::CrackFixedType) */

Terrain * cocos2d::Terrain::create(TerrainData *param_1,undefined4 param_2)

{
  Terrain *this;
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 00d42dd4 with catch @ 00d42f48 */
                    /* catch() { ... } // from try @ 00d42e68 with catch @ 00d42f4c */
                    /* catch() { ... } // from try @ 00d42e08 with catch @ 00d42f50
                       catch() { ... } // from try @ 00d42f10 with catch @ 00d42f50 */
  this = operator_new(0x80640,(nothrow_t *)&std::nothrow);
  if (this != (Terrain *)0x0) {
    Terrain(this);
  }
  *(undefined4 *)(this + 0x805e0) = *(undefined4 *)(param_1 + 0xc4);
  TerrainData::operator=((TerrainData *)(this + 0x370),param_1);
  *(undefined4 *)(this + 0x805dc) = param_2;
  this[0x368] = (Terrain)0x1;
  Size::operator=((Size *)(this + 0x80530),(Size *)param_1);
  uVar1 = initHeightMap(this,(basic_string *)(param_1 + 8));
  initTextures(this);
  initProperties(this);
  if ((uVar1 & 1) == 0) {
    if (this != (Terrain *)0x0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Terrain *)0x0;
    }
  }
  else {
    Ref::autorelease((Ref *)this);
  }
  return this;
}

