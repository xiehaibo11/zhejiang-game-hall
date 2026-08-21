
/* fairygui::GComponent::removeController(fairygui::GController*) */

void __thiscall fairygui::GComponent::removeController(GComponent *this,GController *param_1)

{
  undefined8 *__dest;
  long *plVar1;
  size_t __n;
  long *plVar2;
  long lVar3;
  GController *pGVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar2 = *(long **)(this + 0x1f8);
  plVar1 = *(long **)(this + 0x200);
                    /* try { // try from 00a71a2c to 00b71aab has its CatchHandler @ 00a71a2c
                       catch() { ... } // from try @ 00a71a2c with catch @ 00a71a2c
                       catch() { ... } // from try @ 00a71db8 with catch @ 00a71a2c
                       catch() { ... } // from try @ 00a72024 with catch @ 00a71a2c */
  plVar6 = plVar1;
  plVar7 = plVar2;
  if (plVar2 != plVar1) {
    pGVar4 = (GController *)*plVar2;
    plVar5 = plVar2;
    while ((plVar6 = plVar5, plVar7 = plVar5, pGVar4 != param_1 &&
           (plVar5 = plVar5 + 1, plVar6 = plVar1, plVar7 = plVar1, plVar1 != plVar5))) {
      pGVar4 = (GController *)*plVar5;
    }
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar3 = *(long *)(this + 0x1e0);
  lVar8 = (long)plVar7 - (long)plVar2 >> 3;
  if (plVar6 == plVar1) {
    lVar8 = -1;
  }
  *(GController **)(this + 0x278) = param_1;
                    /* try { // try from 00a71aac to 00b71ac3 has its CatchHandler @ 00a7211c */
  if (0 < *(long *)(this + 0x1e8) - lVar3) {
    lVar9 = 0;
    do {
      plVar2 = *(long **)(lVar3 + lVar9 * 8);
      (**(code **)(*plVar2 + 0x78))(plVar2,param_1);
      lVar3 = *(long *)(this + 0x1e0);
      lVar9 = lVar9 + 1;
                    /* try { // try from 00a71ad0 to 00b71ae7 has its CatchHandler @ 00a720f0 */
    } while (lVar9 < *(long *)(this + 0x1e8) - lVar3 >> 3);
  }
  *(undefined8 *)(this + 0x278) = 0;
  GController::runActions(param_1);
                    /* try { // try from 00a71aec to 00b71b03 has its CatchHandler @ 00a720dc */
  __dest = (undefined8 *)(*(long *)(this + 0x1f8) + lVar8 * 8);
  cocos2d::Ref::release((Ref *)*__dest);
  __n = *(long *)(this + 0x200) - (long)(__dest + 1);
  if (__n != 0) {
                    /* try { // try from 00a71b0c to 00b71b37 has its CatchHandler @ 00a720b4 */
    memmove(__dest,__dest + 1,__n);
  }
  *(undefined8 **)(this + 0x200) = __dest + ((long)__n >> 3);
  return;
}

