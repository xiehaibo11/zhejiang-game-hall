
void FUN_00bfef08(long param_1)

{
  ulong uVar1;
  MeshBuffer *this;
  
  this = *(MeshBuffer **)(param_1 + 8);
  uVar1 = *(ulong *)(this + 0x58);
  if (uVar1 != 0) {
    cocos2d::renderer::VertexBuffer::update
              (*(VertexBuffer **)(*(long *)(this + 0x20) + *(long *)(this + 0x38) * 8),0,
               *(void **)(this + 0x48),uVar1);
  }
  uVar1 = *(ulong *)(this + 0xf8);
  if (uVar1 != 0) {
    cocos2d::renderer::IndexBuffer::update
              (*(IndexBuffer **)(*(long *)(this + 8) + *(long *)(this + 0x38) * 8),0,
               *(void **)(this + 0xe8),uVar1);
  }
  *(ulong *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(ulong *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  cocos2d::middleware::MeshBuffer::next(this);
  return;
}

