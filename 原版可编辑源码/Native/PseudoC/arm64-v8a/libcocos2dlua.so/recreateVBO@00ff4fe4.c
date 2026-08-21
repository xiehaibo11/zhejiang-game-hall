
/* cocos2d::VertexBuffer::recreateVBO() const */

void __thiscall cocos2d::VertexBuffer::recreateVBO(VertexBuffer *this)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  glGenBuffers(*(undefined4 *)(this + 0x38),*(undefined8 *)(this + 0x30));
  if (0 < *(int *)(this + 0x38)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      glBindBuffer(0x8892,*(undefined4 *)(*(long *)(this + 0x30) + lVar3 * 4));
      if (_enableShadowCopy == '\0') {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(this + 0x48) + lVar2);
      }
      glBufferData(0x8892,(long)*(int *)(*(long *)(this + 0x40) + lVar3 * 4) *
                          (long)*(int *)(this + 0x3c),uVar1,*(undefined4 *)(this + 0x50));
      glBindBuffer(0x8892,0);
      glIsBuffer(*(undefined4 *)(*(long *)(this + 0x30) + lVar3 * 4));
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x18;
    } while (lVar3 < *(int *)(this + 0x38));
  }
  return;
}

