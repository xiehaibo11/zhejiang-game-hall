
/* cocos2d::RenderQueue::operator[](long) const */

undefined8 __thiscall cocos2d::RenderQueue::operator[](RenderQueue *this,long param_1)

{
  long lVar1;
  long lVar2;
  RenderQueue *pRVar3;
  long lVar4;
  
  lVar1 = *(long *)(this + 8) - *(long *)this >> 3;
  pRVar3 = this;
  if (lVar1 <= param_1) {
    pRVar3 = this + 0x18;
    param_1 = param_1 - lVar1;
    lVar2 = *(long *)(this + 0x20) - *(long *)pRVar3 >> 3;
    lVar1 = param_1 - lVar2;
    if (lVar2 <= param_1) {
      pRVar3 = this + 0x30;
      lVar4 = *(long *)(this + 0x38) - *(long *)pRVar3 >> 3;
      lVar2 = lVar1 - lVar4;
      param_1 = lVar1;
      if (lVar4 <= lVar1) {
        pRVar3 = this + 0x48;
        lVar4 = *(long *)(this + 0x50) - *(long *)pRVar3 >> 3;
        lVar1 = lVar2 - lVar4;
        param_1 = lVar2;
        if ((lVar4 <= lVar2) &&
           (pRVar3 = this + 0x60, param_1 = lVar1,
           *(long *)(this + 0x68) - *(long *)pRVar3 >> 3 <= lVar1)) {
          return 0;
        }
      }
    }
  }
  return *(undefined8 *)(*(long *)pRVar3 + param_1 * 8);
}

