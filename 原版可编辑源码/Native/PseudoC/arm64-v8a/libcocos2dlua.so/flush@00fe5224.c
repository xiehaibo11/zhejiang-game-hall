
/* cocos2d::Renderer::flush() */

void __thiscall cocos2d::Renderer::flush(Renderer *this)

{
                    /* try { // try from 00fe5234 to 010e52cb has its CatchHandler @ 00fe51a0 */
  drawBatchedTriangles(this);
  if (*(MeshCommand **)(this + 0x58) != (MeshCommand *)0x0) {
    MeshCommand::postBatchDraw(*(MeshCommand **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
  }
  return;
}

