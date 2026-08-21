
/* cocos2d::MeshVertexData::hasVertexAttrib(int) const */

undefined8 __thiscall cocos2d::MeshVertexData::hasVertexAttrib(MeshVertexData *this,int param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x50);
  while( true ) {
    if (lVar1 == *(long *)(this + 0x58)) {
      return 0;
    }
    if (*(int *)(lVar1 + 8) == param_1) break;
    lVar1 = lVar1 + 0x10;
  }
  return 1;
}

