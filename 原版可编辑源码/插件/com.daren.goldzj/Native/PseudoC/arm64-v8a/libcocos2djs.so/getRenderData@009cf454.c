
/* cocos2d::renderer::RenderDataList::getRenderData(unsigned long) */

long __thiscall cocos2d::renderer::RenderDataList::getRenderData(RenderDataList *this,ulong param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = (*(long *)(this + 0x18) - *(long *)(this + 0x10) >> 3) * 0x6db6db6db6db6db7;
  lVar1 = *(long *)(this + 0x10) + param_1 * 0x38;
  if (uVar2 < param_1 || uVar2 - param_1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}

