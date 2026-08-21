
/* cocos2d::IndexBuffer::getSizePerIndex() const */

undefined4 __thiscall cocos2d::IndexBuffer::getSizePerIndex(IndexBuffer *this)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(int *)(this + 0x34) != 0) {
    uVar1 = 4;
  }
  return uVar1;
}

