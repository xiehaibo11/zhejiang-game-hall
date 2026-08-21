
/* cocos2d::IndexBuffer::getSize(int) const */

int __thiscall cocos2d::IndexBuffer::getSize(IndexBuffer *this,int param_1)

{
  int iVar1;
  
  iVar1 = 2;
  if (*(int *)(this + 0x34) != 0) {
    iVar1 = 4;
  }
  return iVar1 * *(int *)(*(long *)(this + 0x38) + (long)param_1 * 4);
}

