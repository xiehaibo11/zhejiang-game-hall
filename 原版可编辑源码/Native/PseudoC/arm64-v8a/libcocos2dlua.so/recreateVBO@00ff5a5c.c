
/* cocos2d::IndexBuffer::recreateVBO() const */

void __thiscall cocos2d::IndexBuffer::recreateVBO(IndexBuffer *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  glGenBuffers(*(undefined4 *)(this + 0x30),*(undefined8 *)(this + 0x28));
  if (0 < *(int *)(this + 0x30)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      glBindBuffer(0x8892,*(undefined4 *)(*(long *)(this + 0x28) + lVar4 * 4));
      if (_enableShadowCopy == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined8 *)(*(long *)(this + 0x48) + lVar3);
      }
      lVar1 = 2;
      if (*(int *)(this + 0x34) != 0) {
        lVar1 = 4;
      }
      glBufferData(0x8892,lVar1 * *(int *)(*(long *)(this + 0x38) + lVar4 * 4),uVar2,
                   *(undefined4 *)(this + 0x50));
      glBindBuffer(0x8892,0);
      glIsBuffer(*(undefined4 *)(*(long *)(this + 0x28) + lVar4 * 4));
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (lVar4 < *(int *)(this + 0x30));
  }
  return;
}

