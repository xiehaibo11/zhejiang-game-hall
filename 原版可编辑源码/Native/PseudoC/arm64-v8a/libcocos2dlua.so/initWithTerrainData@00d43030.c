
/* cocos2d::Terrain::initWithTerrainData(cocos2d::Terrain::TerrainData&,
   cocos2d::Terrain::CrackFixedType) */

uint __thiscall
cocos2d::Terrain::initWithTerrainData(Terrain *this,TerrainData *param_1,undefined4 param_3)

{
  uint uVar1;
  
                    /* try { // try from 00d43050 to 00e4310f has its CatchHandler @ 00d43050
                       catch() { ... } // from try @ 00d43050 with catch @ 00d43050
                       catch() { ... } // from try @ 00d4311c with catch @ 00d43050
                       catch() { ... } // from try @ 00d431d4 with catch @ 00d43050 */
  *(undefined4 *)(this + 0x805e0) = *(undefined4 *)(param_1 + 0xc4);
  TerrainData::operator=((TerrainData *)(this + 0x370),param_1);
  *(undefined4 *)(this + 0x805dc) = param_3;
  this[0x368] = (Terrain)0x1;
  Size::operator=((Size *)(this + 0x80530),(Size *)param_1);
  uVar1 = initHeightMap(this,(basic_string *)(param_1 + 8));
  initTextures(this);
  initProperties(this);
  return uVar1 & 1;
}

