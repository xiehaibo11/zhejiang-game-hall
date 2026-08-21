
/* cocos2d::Renderer::flush3D() */

void __thiscall cocos2d::Renderer::flush3D(Renderer *this)

{
  if (*(MeshCommand **)(this + 0x58) != (MeshCommand *)0x0) {
    MeshCommand::postBatchDraw(*(MeshCommand **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
  }
  return;
}

