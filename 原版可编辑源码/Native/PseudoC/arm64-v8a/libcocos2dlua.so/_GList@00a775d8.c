
/* fairygui::GList::~GList() */

void __thiscall fairygui::GList::~GList(GList *this)

{
  long lVar1;
  void *pvVar2;
  GList *pGVar3;
  code *pcVar4;
  GObjectPool *this_00;
  
  this_00 = *(GObjectPool **)(this + 0x328);
  *(undefined ***)this = &PTR__GList_016a5be0;
  if (this_00 != (GObjectPool *)0x0) {
    GObjectPool::~GObjectPool(this_00);
    operator_delete(this_00);
  }
  if (*(int *)(this + 0x358) != 0) {
    lVar1 = cocos2d::Director::getInstance();
    cocos2d::Scheduler::unschedule
              (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_doRefreshVirtualList);
  }
  pvVar2 = *(void **)(this + 0x368);
  *(undefined8 *)(this + 800) = 0;
  this[0x2e0] = (GList)0x0;
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x370) = pvVar2;
    operator_delete(pvVar2);
  }
  if (((byte)this[0x308] & 1) != 0) {
    operator_delete(*(void **)(this + 0x318));
  }
  pGVar3 = *(GList **)(this + 0x2d0);
  if (this + 0x2b0 == pGVar3) {
    pcVar4 = *(code **)(*(long *)pGVar3 + 0x20);
LAB_00a77684:
    (*pcVar4)();
  }
  else if (pGVar3 != (GList *)0x0) {
    pcVar4 = *(code **)(*(long *)pGVar3 + 0x28);
    goto LAB_00a77684;
  }
  pGVar3 = *(GList **)(this + 0x2a0);
  if (this + 0x280 == pGVar3) {
    pcVar4 = *(code **)(*(long *)pGVar3 + 0x20);
  }
  else {
    if (pGVar3 == (GList *)0x0) goto LAB_00a776b4;
    pcVar4 = *(code **)(*(long *)pGVar3 + 0x28);
  }
  (*pcVar4)();
LAB_00a776b4:
  GComponent::~GComponent((GComponent *)this);
  return;
}

