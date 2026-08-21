
/* cocos2d::DataPool<cocos2d::Particle3D>::~DataPool() */

void __thiscall
cocos2d::DataPool<cocos2d::Particle3D>::~DataPool(DataPool<cocos2d::Particle3D> *this)

{
  long lVar1;
  DataPool<cocos2d::Particle3D> *pDVar2;
  long lVar3;
  DataPool<cocos2d::Particle3D> *pDVar4;
  
  if (*(long *)(this + 0x30) != 0) {
    lVar1 = *(long *)(this + 0x20);
    pDVar2 = *(DataPool<cocos2d::Particle3D> **)(this + 0x28);
    lVar3 = *(long *)pDVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    *(undefined8 *)(this + 0x30) = 0;
    while (pDVar2 != this + 0x20) {
      pDVar4 = *(DataPool<cocos2d::Particle3D> **)(pDVar2 + 8);
      operator_delete(pDVar2);
      pDVar2 = pDVar4;
    }
  }
  if (*(long *)(this + 0x18) != 0) {
    lVar1 = *(long *)(this + 8);
    pDVar2 = *(DataPool<cocos2d::Particle3D> **)(this + 0x10);
    lVar3 = *(long *)pDVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    *(undefined8 *)(this + 0x18) = 0;
    while (pDVar2 != this + 8) {
      pDVar4 = *(DataPool<cocos2d::Particle3D> **)(pDVar2 + 8);
      operator_delete(pDVar2);
      pDVar2 = pDVar4;
    }
  }
  return;
}

