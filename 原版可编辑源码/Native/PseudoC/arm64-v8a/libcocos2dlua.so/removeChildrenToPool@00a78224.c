
/* fairygui::GList::removeChildrenToPool(int, int) */

void __thiscall fairygui::GList::removeChildrenToPool(GList *this,int param_1,int param_2)

{
  bool bVar1;
  GObject *pGVar2;
  ulong uVar3;
  
  if (param_2 < 0) {
    uVar3 = *(long *)(this + 0x1e8) - *(long *)(this + 0x1e0);
  }
  else {
    uVar3 = *(long *)(this + 0x1e8) - *(long *)(this + 0x1e0);
    if ((long)param_2 < (long)uVar3 >> 3) goto joined_r0x00a782c4;
  }
  param_2 = (int)(uVar3 >> 3) + -1;
joined_r0x00a782c4:
  if (param_1 <= param_2) {
    do {
      pGVar2 = (GObject *)GComponent::getChildAt((GComponent *)this,param_2);
      GObjectPool::returnObject(*(GObjectPool **)(this + 0x328),pGVar2);
      (**(code **)(*(long *)this + 0xb8))(this,param_2);
      bVar1 = param_1 < param_2;
      param_2 = param_2 + -1;
    } while (bVar1);
  }
  return;
}

