
/* cocos2d::renderer::RecyclePool<cocos2d::renderer::BaseRenderer::StageInfo>::~RecyclePool() */

void __thiscall
cocos2d::renderer::RecyclePool<cocos2d::renderer::BaseRenderer::StageInfo>::~RecyclePool
          (RecyclePool<cocos2d::renderer::BaseRenderer::StageInfo> *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  RecyclePool<cocos2d::renderer::BaseRenderer::StageInfo> *pRVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulong uVar7;
  void *pvVar8;
  void *pvVar9;
  
  puVar1 = *(undefined8 **)(this + 0x40);
  lVar4 = *(long *)(this + 0x48);
  if (lVar4 - (long)puVar1 != 0) {
    uVar7 = 0;
                    /* try { // try from 009bb57c to 00abb593 has its CatchHandler @ 009bb7b8 */
    puVar6 = (undefined8 *)*puVar1;
    while( true ) {
      if (puVar6 != (undefined8 *)0x0) {
        if ((*(byte *)(puVar6 + 3) & 1) != 0) {
                    /* try { // try from 009bb59c to 00abb5a7 has its CatchHandler @ 009bb7b4 */
          operator_delete((void *)puVar6[5]);
        }
        pvVar8 = (void *)*puVar6;
                    /* try { // try from 009bb5a8 to 00abb5b3 has its CatchHandler @ 009bb7b0 */
        if (pvVar8 != (void *)0x0) {
          pvVar2 = pvVar8;
          pvVar5 = (void *)puVar6[1];
                    /* try { // try from 009bb5b4 to 00abb73b has its CatchHandler @ 009bb7c8 */
          if ((void *)puVar6[1] != pvVar8) {
            do {
              pvVar2 = *(void **)((long)pvVar5 + -0x20);
              pvVar9 = (void *)((long)pvVar5 + -0x38);
              if (pvVar2 != (void *)0x0) {
                *(void **)((long)pvVar5 + -0x18) = pvVar2;
                operator_delete(pvVar2);
              }
              pvVar5 = pvVar9;
            } while (pvVar8 != pvVar9);
            pvVar2 = (void *)*puVar6;
          }
          puVar6[1] = pvVar8;
          operator_delete(pvVar2);
        }
        operator_delete(puVar6);
      }
      uVar7 = uVar7 + 1;
      if ((ulong)(lVar4 - (long)puVar1 >> 3) <= uVar7) break;
      puVar6 = *(undefined8 **)(*(long *)(this + 0x40) + uVar7 * 8);
    }
    puVar1 = *(undefined8 **)(this + 0x40);
  }
  *(undefined8 **)(this + 0x48) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x48) = puVar1;
    operator_delete(puVar1);
  }
  pRVar3 = *(RecyclePool<cocos2d::renderer::BaseRenderer::StageInfo> **)(this + 0x30);
  if (this + 0x10 == pRVar3) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pRVar3 + 0x20);
  }
  else {
    if (pRVar3 == (RecyclePool<cocos2d::renderer::BaseRenderer::StageInfo> *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pRVar3 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x009bb64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

