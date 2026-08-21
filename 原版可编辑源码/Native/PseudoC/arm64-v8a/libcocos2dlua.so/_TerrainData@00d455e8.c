
/* cocos2d::Terrain::TerrainData::~TerrainData() */

void __thiscall cocos2d::Terrain::TerrainData::~TerrainData(TerrainData *this)

{
  TerrainData TVar1;
  
  if (((byte)this[0x98] & 1) == 0) {
    TVar1 = this[0x78];
  }
  else {
    operator_delete(*(void **)(this + 0xa8));
    TVar1 = this[0x78];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0x58];
  }
  else {
    operator_delete(*(void **)(this + 0x88));
    TVar1 = this[0x58];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0x38];
  }
  else {
    operator_delete(*(void **)(this + 0x68));
    TVar1 = this[0x38];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0x20];
  }
  else {
    operator_delete(*(void **)(this + 0x48));
    TVar1 = this[0x20];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[8];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d455e0 with catch @ 00d45624
                        */
  }
  else {
    operator_delete(*(void **)(this + 0x30));
    TVar1 = this[8];
  }
  if (((byte)TVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
    return;
  }
  return;
}

