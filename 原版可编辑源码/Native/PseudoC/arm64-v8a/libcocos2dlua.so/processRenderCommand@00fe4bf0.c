
/* cocos2d::Renderer::processRenderCommand(cocos2d::RenderCommand*) */

void __thiscall cocos2d::Renderer::processRenderCommand(Renderer *this,RenderCommand *param_1)

{
  Renderer *pRVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  RenderCommand *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  switch(*(undefined4 *)(param_1 + 8)) {
  case 2:
    drawBatchedTriangles(this);
    if (*(MeshCommand **)(this + 0x58) != (MeshCommand *)0x0) {
      MeshCommand::postBatchDraw(*(MeshCommand **)(this + 0x58));
      *(undefined8 *)(this + 0x58) = 0;
    }
    CustomCommand::execute((CustomCommand *)param_1);
    break;
  case 3:
    drawBatchedTriangles(this);
    if (*(MeshCommand **)(this + 0x58) != (MeshCommand *)0x0) {
      MeshCommand::postBatchDraw(*(MeshCommand **)(this + 0x58));
      *(undefined8 *)(this + 0x58) = 0;
    }
    BatchCommand::execute((BatchCommand *)param_1);
    break;
  case 4:
                    /* catch() { ... } // from try @ 00fe4cbc with catch @ 00fe4c88 */
    drawBatchedTriangles(this);
    if (*(MeshCommand **)(this + 0x58) != (MeshCommand *)0x0) {
      MeshCommand::postBatchDraw(*(MeshCommand **)(this + 0x58));
      *(undefined8 *)(this + 0x58) = 0;
    }
    visitRenderQueue(this,(RenderQueue *)
                          (*(long *)(this + 0x40) + (long)*(int *)(param_1 + 0x18) * 0x80));
                    /* try { // try from 00fe4cb4 to 010e4cbb has its CatchHandler @ 00fe4d54 */
    break;
  case 5:
                    /* try { // try from 00fe4cbc to 010e4d6f has its CatchHandler @ 00fe4c88 */
    drawBatchedTriangles(this);
    if ((param_1[0x11] == (RenderCommand)0x0) &&
       (*(MeshCommand **)(this + 0x58) != (MeshCommand *)0x0)) {
      iVar4 = MeshCommand::getMaterialID(*(MeshCommand **)(this + 0x58));
      iVar5 = MeshCommand::getMaterialID((MeshCommand *)param_1);
      if (iVar4 == iVar5) {
        MeshCommand::batchDraw((MeshCommand *)param_1);
        break;
      }
    }
    if (*(MeshCommand **)(this + 0x58) != (MeshCommand *)0x0) {
      MeshCommand::postBatchDraw(*(MeshCommand **)(this + 0x58));
      *(undefined8 *)(this + 0x58) = 0;
    }
    if (param_1[0x11] == (RenderCommand)0x0) {
      MeshCommand::preBatchDraw((MeshCommand *)param_1);
      MeshCommand::batchDraw((MeshCommand *)param_1);
      *(RenderCommand **)(this + 0x58) = param_1;
    }
    else {
      MeshCommand::execute((MeshCommand *)param_1);
    }
    break;
  case 6:
    drawBatchedTriangles(this);
    if (*(MeshCommand **)(this + 0x58) != (MeshCommand *)0x0) {
      MeshCommand::postBatchDraw(*(MeshCommand **)(this + 0x58));
      *(undefined8 *)(this + 0x58) = 0;
    }
    PrimitiveCommand::execute((PrimitiveCommand *)param_1);
    break;
  case 7:
    pRVar1 = this + 0x1b0090;
    if (*(MeshCommand **)(this + 0x58) != (MeshCommand *)0x0) {
      MeshCommand::postBatchDraw(*(MeshCommand **)(this + 0x58));
      *(undefined8 *)(this + 0x58) = 0;
    }
    local_40 = param_1;
                    /* catch() { ... } // from try @ 00fe4cb4 with catch @ 00fe4d54 */
    if ((0x10000 < (long)*(int *)(param_1 + 0x40) + (long)*(int *)pRVar1) ||
       (0x18000 < (long)*(int *)(param_1 + 0x44) + (long)*(int *)(this + 0x1b0094))) {
      drawBatchedTriangles(this);
    }
    puVar2 = *(undefined8 **)(this + 0x68);
    if (puVar2 == *(undefined8 **)(this + 0x70)) {
      std::__ndk1::
      vector<cocos2d::TrianglesCommand*,std::__ndk1::allocator<cocos2d::TrianglesCommand*>>::
      __push_back_slow_path<cocos2d::TrianglesCommand*const&>
                ((vector<cocos2d::TrianglesCommand*,std::__ndk1::allocator<cocos2d::TrianglesCommand*>>
                  *)(this + 0x60),(TrianglesCommand **)&local_40);
    }
    else {
      *puVar2 = param_1;
      *(undefined8 **)(this + 0x68) = puVar2 + 1;
    }
    *(ulong *)pRVar1 =
         CONCAT44((int)((ulong)*(undefined8 *)pRVar1 >> 0x20) +
                  (int)((ulong)*(undefined8 *)(local_40 + 0x40) >> 0x20),
                  (int)*(undefined8 *)pRVar1 + (int)*(undefined8 *)(local_40 + 0x40));
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

