
/* cocos2d::renderer::MeshBuffer::updateOffset(unsigned int, unsigned int, unsigned int) */

void __thiscall
cocos2d::renderer::MeshBuffer::updateOffset(MeshBuffer *this,uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 0x1c);
  *(uint *)(this + 0x1c) = param_3;
  *(undefined4 *)(this + 0x98) = uVar1;
  *(int *)(this + 0x9c) = *(int *)(this + 0x24);
  *(int *)(this + 0xa0) = *(int *)(this + 0x2c);
  *(uint *)(this + 0x2c) = *(int *)(this + 0x2c) + param_1;
  *(uint *)(this + 0x24) = *(int *)(this + 0x24) + param_2;
  this[0x44] = (MeshBuffer)0x1;
  return;
}

