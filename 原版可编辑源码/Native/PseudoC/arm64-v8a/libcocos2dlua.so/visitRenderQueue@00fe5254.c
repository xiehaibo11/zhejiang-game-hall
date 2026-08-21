
/* cocos2d::Renderer::visitRenderQueue(cocos2d::RenderQueue&) */

void __thiscall cocos2d::Renderer::visitRenderQueue(Renderer *this,RenderQueue *param_1)

{
  undefined8 *puVar1;
  Renderer RVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  
  cVar4 = glIsEnabled(0xb71);
  param_1[0x79] = (RenderQueue)(cVar4 != '\0');
  cVar4 = glIsEnabled(0xb44);
                    /* catch() { ... } // from try @ 00fe521c with catch @ 00fe5294 */
  param_1[0x78] = (RenderQueue)(cVar4 != '\0');
  glGetBooleanv(0xb72,param_1 + 0x7a);
  if (*(long *)(param_1 + 8) != *(long *)param_1) {
    RVar2 = this[0x1b00b1];
    if (RVar2 == (Renderer)0x0) {
      glDisable(0xb71);
    }
    else {
      glEnable(0xb71);
    }
    bVar3 = RVar2 != (Renderer)0x0;
    glDepthMask(bVar3);
    glEnable(0xbe2);
    RenderState::StateBlock::setDepthTest(RenderState::StateBlock::_defaultState,bVar3);
    RenderState::StateBlock::setDepthWrite(RenderState::StateBlock::_defaultState,bVar3);
    RenderState::StateBlock::setBlend(RenderState::StateBlock::_defaultState,true);
    glDisable(0xb44);
    RenderState::StateBlock::setCullFace(RenderState::StateBlock::_defaultState,false);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (puVar5 = *(undefined8 **)param_1; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      processRenderCommand(this,(RenderCommand *)*puVar5);
    }
    drawBatchedTriangles(this);
    if (*(MeshCommand **)(this + 0x58) != (MeshCommand *)0x0) {
      MeshCommand::postBatchDraw(*(MeshCommand **)(this + 0x58));
      *(undefined8 *)(this + 0x58) = 0;
    }
  }
  if (*(long *)(param_1 + 0x20) != *(long *)(param_1 + 0x18)) {
    glEnable(0xb71);
    glDepthMask(1);
    glDisable(0xbe2);
    glEnable(0xb44);
    RenderState::StateBlock::setDepthTest(RenderState::StateBlock::_defaultState,true);
                    /* try { // try from 00fe539c to 010e5417 has its CatchHandler @ 00fe539c
                       catch() { ... } // from try @ 00fe539c with catch @ 00fe539c
                       catch() { ... } // from try @ 00fe5430 with catch @ 00fe539c */
    RenderState::StateBlock::setDepthWrite(RenderState::StateBlock::_defaultState,true);
    RenderState::StateBlock::setBlend(RenderState::StateBlock::_defaultState,false);
    RenderState::StateBlock::setCullFace(RenderState::StateBlock::_defaultState,true);
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    for (puVar5 = *(undefined8 **)(param_1 + 0x18); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      processRenderCommand(this,(RenderCommand *)*puVar5);
    }
    drawBatchedTriangles(this);
    if (*(MeshCommand **)(this + 0x58) != (MeshCommand *)0x0) {
      MeshCommand::postBatchDraw(*(MeshCommand **)(this + 0x58));
      *(undefined8 *)(this + 0x58) = 0;
    }
  }
  if (*(long *)(param_1 + 0x38) != *(long *)(param_1 + 0x30)) {
    glEnable(0xb71);
    glDepthMask(0);
                    /* try { // try from 00fe5418 to 010e542f has its CatchHandler @ 00fe5490 */
    glEnable(0xbe2);
    glEnable(0xb44);
    RenderState::StateBlock::setDepthTest(RenderState::StateBlock::_defaultState,true);
                    /* try { // try from 00fe5430 to 010e54c7 has its CatchHandler @ 00fe539c */
    RenderState::StateBlock::setDepthWrite(RenderState::StateBlock::_defaultState,false);
    RenderState::StateBlock::setBlend(RenderState::StateBlock::_defaultState,true);
    RenderState::StateBlock::setCullFace(RenderState::StateBlock::_defaultState,true);
    puVar1 = *(undefined8 **)(param_1 + 0x38);
    for (puVar5 = *(undefined8 **)(param_1 + 0x30); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      processRenderCommand(this,(RenderCommand *)*puVar5);
    }
    drawBatchedTriangles(this);
    if (*(MeshCommand **)(this + 0x58) != (MeshCommand *)0x0) {
      MeshCommand::postBatchDraw(*(MeshCommand **)(this + 0x58));
      *(undefined8 *)(this + 0x58) = 0;
    }
  }
                    /* catch() { ... } // from try @ 00fe5418 with catch @ 00fe5490 */
  if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
    RVar2 = this[0x1b00b1];
    if (RVar2 == (Renderer)0x0) {
      glDisable(0xb71);
    }
    else {
      glEnable(0xb71);
    }
    bVar3 = RVar2 != (Renderer)0x0;
    glDepthMask(bVar3);
    glEnable(0xbe2);
    RenderState::StateBlock::setDepthTest(RenderState::StateBlock::_defaultState,bVar3);
    RenderState::StateBlock::setDepthWrite(RenderState::StateBlock::_defaultState,bVar3);
    RenderState::StateBlock::setBlend(RenderState::StateBlock::_defaultState,true);
    glDisable(0xb44);
    RenderState::StateBlock::setCullFace(RenderState::StateBlock::_defaultState,false);
    puVar1 = *(undefined8 **)(param_1 + 0x50);
    for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      processRenderCommand(this,(RenderCommand *)*puVar5);
    }
    drawBatchedTriangles(this);
    if (*(MeshCommand **)(this + 0x58) != (MeshCommand *)0x0) {
      MeshCommand::postBatchDraw(*(MeshCommand **)(this + 0x58));
      *(undefined8 *)(this + 0x58) = 0;
    }
  }
  if (*(long *)(param_1 + 0x68) != *(long *)(param_1 + 0x60)) {
    RVar2 = this[0x1b00b1];
    if (RVar2 == (Renderer)0x0) {
      glDisable(0xb71);
    }
    else {
      glEnable(0xb71);
    }
    bVar3 = RVar2 != (Renderer)0x0;
    glDepthMask(bVar3);
    glEnable(0xbe2);
    RenderState::StateBlock::setDepthTest(RenderState::StateBlock::_defaultState,bVar3);
    RenderState::StateBlock::setDepthWrite(RenderState::StateBlock::_defaultState,bVar3);
    RenderState::StateBlock::setBlend(RenderState::StateBlock::_defaultState,true);
    glDisable(0xb44);
    RenderState::StateBlock::setCullFace(RenderState::StateBlock::_defaultState,false);
    puVar1 = *(undefined8 **)(param_1 + 0x68);
    for (puVar5 = *(undefined8 **)(param_1 + 0x60); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      processRenderCommand(this,(RenderCommand *)*puVar5);
    }
    drawBatchedTriangles(this);
    if (*(MeshCommand **)(this + 0x58) != (MeshCommand *)0x0) {
      MeshCommand::postBatchDraw(*(MeshCommand **)(this + 0x58));
      *(undefined8 *)(this + 0x58) = 0;
    }
  }
  RenderQueue::restoreRenderState(param_1);
  return;
}

