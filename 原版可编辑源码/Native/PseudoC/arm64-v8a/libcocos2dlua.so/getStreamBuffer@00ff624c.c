
/* cocos2d::VertexData::getStreamBuffer(int) const */

undefined8 __thiscall cocos2d::VertexData::getStreamBuffer(VertexData *this,int param_1)

{
  VertexData *pVVar1;
  VertexData *pVVar2;
  VertexData *pVVar3;
  
  pVVar1 = this + 0x30;
  pVVar3 = *(VertexData **)pVVar1;
  pVVar2 = pVVar1;
  if (pVVar3 != (VertexData *)0x0) {
    do {
      if (param_1 <= *(int *)(pVVar3 + 0x20)) {
        pVVar2 = pVVar3;
      }
      pVVar3 = *(VertexData **)(pVVar3 + (ulong)(*(int *)(pVVar3 + 0x20) < param_1) * 8);
    } while (pVVar3 != (VertexData *)0x0);
    if ((pVVar2 != pVVar1) && (*(int *)(pVVar2 + 0x20) <= param_1)) {
      return *(undefined8 *)(pVVar2 + 0x28);
    }
  }
  return 0;
}

