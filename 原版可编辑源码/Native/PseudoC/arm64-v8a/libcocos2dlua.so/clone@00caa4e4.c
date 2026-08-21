
/* cocostudio::timeline::ActionTimeline::clone() const */

long * __thiscall cocostudio::timeline::ActionTimeline::clone(ActionTimeline *this)

{
  undefined8 *puVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  ActionTimeline *pAVar5;
  long lVar6;
  ActionTimeline *pAVar7;
  undefined8 *puVar8;
  
  plVar3 = (long *)create();
  (**(code **)(*plVar3 + 0xb0))(plVar3,*(undefined4 *)(this + 0x88));
  (**(code **)(*plVar3 + 0xa0))(*(undefined4 *)(this + 0x98),plVar3);
  pAVar7 = *(ActionTimeline **)(this + 0x58);
  while (pAVar7 != this + 0x60) {
    puVar1 = *(undefined8 **)(pAVar7 + 0x30);
    for (puVar8 = *(undefined8 **)(pAVar7 + 0x28); puVar8 != puVar1; puVar8 = puVar8 + 1) {
      uVar4 = (**(code **)(*(long *)*puVar8 + 0x70))();
      (**(code **)(*plVar3 + 0xe0))(plVar3,uVar4);
    }
    pAVar5 = *(ActionTimeline **)(pAVar7 + 8);
    if (*(ActionTimeline **)(pAVar7 + 8) == (ActionTimeline *)0x0) {
      pAVar5 = pAVar7 + 0x10;
      bVar2 = *(ActionTimeline **)*(ActionTimeline **)pAVar5 != pAVar7;
      pAVar7 = *(ActionTimeline **)pAVar5;
      if (bVar2) {
        do {
          lVar6 = *(long *)pAVar5;
          pAVar5 = (ActionTimeline *)(lVar6 + 0x10);
          pAVar7 = *(ActionTimeline **)pAVar5;
        } while (*(long *)pAVar7 != lVar6);
      }
    }
    else {
      do {
        pAVar7 = pAVar5;
        pAVar5 = *(ActionTimeline **)pAVar7;
      } while (*(ActionTimeline **)pAVar7 != (ActionTimeline *)0x0);
    }
  }
  pAVar7 = *(ActionTimeline **)(this + 0x138);
  while (pAVar7 != this + 0x140) {
    (**(code **)(*plVar3 + 0xf8))(plVar3,pAVar7 + 0x40);
    pAVar5 = *(ActionTimeline **)(pAVar7 + 8);
    if (*(ActionTimeline **)(pAVar7 + 8) == (ActionTimeline *)0x0) {
      pAVar5 = pAVar7 + 0x10;
      bVar2 = *(ActionTimeline **)*(ActionTimeline **)pAVar5 != pAVar7;
      pAVar7 = *(ActionTimeline **)pAVar5;
      if (bVar2) {
        do {
          lVar6 = *(long *)pAVar5;
          pAVar5 = (ActionTimeline *)(lVar6 + 0x10);
          pAVar7 = *(ActionTimeline **)pAVar5;
        } while (*(long *)pAVar7 != lVar6);
      }
    }
    else {
      do {
        pAVar7 = pAVar5;
        pAVar5 = *(ActionTimeline **)pAVar7;
      } while (*(ActionTimeline **)pAVar7 != (ActionTimeline *)0x0);
    }
  }
  return plVar3;
}

