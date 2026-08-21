
/* cocos2d::DataPool<cocos2d::Particle3D>::DataPool(cocos2d::DataPool<cocos2d::Particle3D> const&)
    */

void __thiscall
cocos2d::DataPool<cocos2d::Particle3D>::DataPool
          (DataPool<cocos2d::Particle3D> *this,DataPool *param_1)

{
  DataPool<cocos2d::Particle3D> *pDVar1;
  DataPool<cocos2d::Particle3D> *pDVar2;
  undefined8 uVar3;
  long lVar4;
  DataPool *pDVar5;
  DataPool<cocos2d::Particle3D> *pDVar6;
  
                    /* try { // try from 00e1c23c to 00f1c243 has its CatchHandler @ 00e1c308 */
  uVar3 = *(undefined8 *)param_1;
  pDVar1 = this + 8;
  *(DataPool<cocos2d::Particle3D> **)(this + 0x10) = pDVar1;
  *(undefined8 *)(this + 0x18) = 0;
                    /* try { // try from 00e1c24c to 00f1c253 has its CatchHandler @ 00e1c2e8 */
  *(undefined8 *)this = uVar3;
  *(DataPool<cocos2d::Particle3D> **)(this + 8) = pDVar1;
  pDVar5 = *(DataPool **)(param_1 + 0x10);
                    /* try { // try from 00e1c25c to 00f1c263 has its CatchHandler @ 00e1c2c8 */
  if (param_1 + 8 != pDVar5) {
    lVar4 = 0;
    pDVar6 = pDVar1;
    do {
                    /* try { // try from 00e1c26c to 00f1c26f has its CatchHandler @ 00e1c284 */
                    /* try { // try from 00e1c270 to 00f1c323 has its CatchHandler @ 00e1c214 */
      pDVar2 = operator_new(0x18);
      uVar3 = *(undefined8 *)(pDVar5 + 0x10);
      lVar4 = lVar4 + 1;
      *(DataPool<cocos2d::Particle3D> **)pDVar2 = pDVar6;
      *(DataPool<cocos2d::Particle3D> **)(pDVar2 + 8) = pDVar1;
      *(undefined8 *)(pDVar2 + 0x10) = uVar3;
                    /* catch() { ... } // from try @ 00e1c26c with catch @ 00e1c284 */
      *(DataPool<cocos2d::Particle3D> **)(pDVar6 + 8) = pDVar2;
      *(DataPool<cocos2d::Particle3D> **)(this + 8) = pDVar2;
      *(long *)(this + 0x18) = lVar4;
      pDVar5 = *(DataPool **)(pDVar5 + 8);
      pDVar6 = pDVar2;
    } while (param_1 + 8 != pDVar5);
  }
  pDVar1 = this + 0x20;
  *(DataPool<cocos2d::Particle3D> **)(this + 0x20) = pDVar1;
  *(DataPool<cocos2d::Particle3D> **)(this + 0x28) = pDVar1;
  *(undefined8 *)(this + 0x30) = 0;
  pDVar5 = *(DataPool **)(param_1 + 0x28);
  if (param_1 + 0x20 != pDVar5) {
    lVar4 = 1;
                    /* catch() { ... } // from try @ 00e1c25c with catch @ 00e1c2c8 */
    pDVar6 = pDVar1;
    do {
      pDVar2 = operator_new(0x18);
      uVar3 = *(undefined8 *)(pDVar5 + 0x10);
      *(DataPool<cocos2d::Particle3D> **)pDVar2 = pDVar6;
      *(DataPool<cocos2d::Particle3D> **)(pDVar2 + 8) = pDVar1;
      *(undefined8 *)(pDVar2 + 0x10) = uVar3;
      *(DataPool<cocos2d::Particle3D> **)(pDVar6 + 8) = pDVar2;
      *(DataPool<cocos2d::Particle3D> **)(this + 0x20) = pDVar2;
                    /* catch() { ... } // from try @ 00e1c24c with catch @ 00e1c2e8 */
      *(long *)(this + 0x30) = lVar4;
      pDVar5 = *(DataPool **)(pDVar5 + 8);
      lVar4 = lVar4 + 1;
      pDVar6 = pDVar2;
    } while (param_1 + 0x20 != pDVar5);
  }
                    /* catch() { ... } // from try @ 00e1c23c with catch @ 00e1c308 */
  return;
}

