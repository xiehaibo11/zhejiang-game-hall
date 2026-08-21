
/* cocos2d::DataPool<cocos2d::Particle3D>::removeAllDatas() */

void __thiscall
cocos2d::DataPool<cocos2d::Particle3D>::removeAllDatas(DataPool<cocos2d::Particle3D> *this)

{
  DataPool<cocos2d::Particle3D> *pDVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  DataPool<cocos2d::Particle3D> *pDVar6;
  DataPool<cocos2d::Particle3D> *pDVar7;
  
  lVar3 = *(long *)(this + 0x18);
  pDVar1 = this + 0x20;
  if (lVar3 != 0) {
    lVar4 = *(long *)(this + 8);
    plVar2 = *(long **)(this + 0x10);
    lVar5 = *plVar2;
    *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar4 + 8);
    **(long **)(lVar4 + 8) = lVar5;
    lVar5 = *(long *)(this + 0x20);
    *(long **)(lVar5 + 8) = plVar2;
    *plVar2 = lVar5;
    *(long *)(this + 0x20) = lVar4;
    *(DataPool<cocos2d::Particle3D> **)(lVar4 + 8) = pDVar1;
    *(undefined8 *)(this + 0x18) = 0;
    *(long *)(this + 0x30) = *(long *)(this + 0x30) + lVar3;
  }
  pDVar7 = *(DataPool<cocos2d::Particle3D> **)(this + 0x28);
  *(undefined8 *)this = *(undefined8 *)(this + 0x10);
  for (; pDVar1 != pDVar7; pDVar7 = *(DataPool<cocos2d::Particle3D> **)(pDVar7 + 8)) {
    if (*(long **)(pDVar7 + 0x10) != (long *)0x0) {
                    /* try { // try from 00e1c214 to 00f1c23b has its CatchHandler @ 00e1c214
                       catch() { ... } // from try @ 00e1c214 with catch @ 00e1c214
                       catch() { ... } // from try @ 00e1c270 with catch @ 00e1c214 */
      (**(code **)(**(long **)(pDVar7 + 0x10) + 8))();
    }
  }
  if (*(long *)(this + 0x30) != 0) {
    lVar3 = *(long *)(this + 0x20);
    pDVar7 = *(DataPool<cocos2d::Particle3D> **)(this + 0x28);
    lVar4 = *(long *)pDVar7;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = lVar4;
    *(undefined8 *)(this + 0x30) = 0;
    while (pDVar7 != pDVar1) {
      pDVar6 = *(DataPool<cocos2d::Particle3D> **)(pDVar7 + 8);
      operator_delete(pDVar7);
      pDVar7 = pDVar6;
    }
  }
  return;
}

