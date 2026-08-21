
/* cocos2d::Renderer::render() */

void __thiscall cocos2d::Renderer::render(Renderer *this)

{
  RenderQueue *pRVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  RenderQueue *this_00;
  
  this[0x1b00b0] = (Renderer)0x1;
  if (this[0x1b0098] != (Renderer)0x0) {
    this_00 = *(RenderQueue **)(this + 0x40);
    pRVar1 = *(RenderQueue **)(this + 0x48);
    if (this_00 != pRVar1) {
      do {
        RenderQueue::sort(this_00);
        this_00 = this_00 + 0x80;
      } while (pRVar1 != this_00);
      this_00 = *(RenderQueue **)(this + 0x40);
    }
    visitRenderQueue(this,this_00);
  }
  lVar2 = *(long *)(this + 0x48) - *(long *)(this + 0x40);
  if (lVar2 != 0) {
    uVar3 = 0;
    puVar4 = (undefined8 *)(*(long *)(this + 0x40) + 0x38);
    do {
      uVar3 = uVar3 + 1;
      puVar4[-6] = puVar4[-7];
      puVar4[-3] = puVar4[-4];
      *puVar4 = puVar4[-1];
      puVar4[3] = puVar4[2];
      puVar4[6] = puVar4[5];
      puVar4 = puVar4 + 0x10;
    } while (uVar3 < (ulong)(lVar2 >> 7));
  }
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this + 0x1b0090) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  this[0x1b00b0] = (Renderer)0x0;
  return;
}

