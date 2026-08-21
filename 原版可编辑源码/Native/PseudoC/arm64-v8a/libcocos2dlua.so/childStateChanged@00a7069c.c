
/* fairygui::GComponent::childStateChanged(fairygui::GObject*) */

void __thiscall fairygui::GComponent::childStateChanged(GComponent *this,GObject *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  GObject *pGVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  if (this[0x1d8] == (GComponent)0x0) {
                    /* try { // try from 00a706cc to 00b706ff has its CatchHandler @ 00a705d4 */
    lVar10 = *(long *)(this + 0x1e0);
    uVar11 = *(long *)(this + 0x1e8) - lVar10;
                    /* try { // try from 00a70700 to 00b70713 has its CatchHandler @ 00a7076c */
    if (((param_1 != (GObject *)0x0) &&
        (lVar2 = __dynamic_cast(param_1,&GObject::typeinfo,&GGroup::typeinfo,0), lVar2 != 0)) &&
       (0 < (int)(uVar11 >> 3))) {
      lVar2 = 0;
      while( true ) {
                    /* try { // try from 00a70718 to 00b7072b has its CatchHandler @ 00a70770 */
        pGVar6 = *(GObject **)(lVar10 + lVar2 * 8);
        if (*(GObject **)(pGVar6 + 0x128) == param_1) {
                    /* try { // try from 00a7072c to 00b7078b has its CatchHandler @ 00a705d4 */
          childStateChanged(this,pGVar6);
        }
        if ((uVar11 >> 3 & 0xffffffff) - 1 == lVar2) break;
        lVar10 = *(long *)(this + 0x1e0);
        lVar2 = lVar2 + 1;
      }
    }
    if ((*(long *)(param_1 + 0xa8) != 0) && (*(GObject **)(this + 0x260) != param_1)) {
      uVar3 = GObject::internalVisible(param_1);
                    /* catch() { ... } // from try @ 00a70628 with catch @ 00a7076c
                       catch() { ... } // from try @ 00a70700 with catch @ 00a7076c */
                    /* catch() { ... } // from try @ 00a70670 with catch @ 00a70770
                       catch() { ... } // from try @ 00a70718 with catch @ 00a70770 */
      lVar10 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x260))(*(long **)(param_1 + 0xa8));
      if ((uVar3 & 1) == 0) {
        if (lVar10 == 0) {
          return;
        }
        (**(code **)(**(long **)(this + 0x228) + 0x280))
                  (*(long **)(this + 0x228),*(undefined8 *)(param_1 + 0xa8),0);
        if (*(int *)(this + 0x250) != 2) {
          return;
        }
      }
      else {
        if (lVar10 != 0) {
          return;
        }
        if (*(int *)(this + 0x250) == 1) {
          plVar4 = *(long **)(this + 0x1e0);
          plVar1 = *(long **)(this + 0x1e8);
          plVar8 = plVar1;
          plVar9 = plVar4;
          if (plVar4 != plVar1) {
            pGVar6 = (GObject *)*plVar4;
            plVar7 = plVar4;
            while ((plVar8 = plVar7, plVar9 = plVar7, pGVar6 != param_1 &&
                   (plVar7 = plVar7 + 1, plVar8 = plVar1, plVar9 = plVar1, plVar1 != plVar7))) {
              pGVar6 = (GObject *)*plVar7;
            }
          }
          lVar10 = (long)plVar9 - (long)plVar4 >> 3;
          if (plVar8 == plVar1) {
            lVar10 = -1;
          }
                    /* try { // try from 00a70970 to 00b709a3 has its CatchHandler @ 00a70878 */
          uVar11 = uVar11 * 0x20000000 - 0x100000000;
          uVar3 = uVar11 >> 0x20;
          (**(code **)(**(long **)(this + 0x228) + 0x210))
                    (*(long **)(this + 0x228),*(undefined8 *)(param_1 + 0xa8),
                     (int)(uVar11 >> 0x20) - (int)lVar10);
          if (lVar10 < 1) {
            return;
          }
          lVar2 = 0;
          do {
                    /* try { // try from 00a709a4 to 00b709b7 has its CatchHandler @ 00a70a10 */
            lVar12 = *(long *)(*(long *)(this + 0x1e0) + lVar2 * 8);
            lVar5 = (**(code **)(**(long **)(lVar12 + 0xa8) + 0x260))();
                    /* try { // try from 00a709bc to 00b709cf has its CatchHandler @ 00a70a14 */
            if (lVar5 != 0) {
              plVar4 = *(long **)(lVar12 + 0xa8);
                    /* try { // try from 00a709d0 to 00b70a2f has its CatchHandler @ 00a70878 */
              (**(code **)(*plVar4 + 0x18))(plVar4,uVar3);
            }
            lVar2 = lVar2 + 1;
            uVar3 = (ulong)((int)uVar3 - 1);
          } while (lVar10 != lVar2);
          return;
        }
        if (*(int *)(this + 0x250) == 0) {
          plVar4 = *(long **)(this + 0x1e0);
          plVar1 = *(long **)(this + 0x1e8);
          plVar8 = plVar1;
          plVar9 = plVar4;
          if (plVar4 != plVar1) {
            pGVar6 = (GObject *)*plVar4;
            plVar7 = plVar4;
            while ((plVar8 = plVar7, plVar9 = plVar7, pGVar6 != param_1 &&
                   (plVar7 = plVar7 + 1, plVar8 = plVar1, plVar9 = plVar1, plVar1 != plVar7))) {
              pGVar6 = (GObject *)*plVar7;
            }
          }
          uVar11 = (long)plVar9 - (long)plVar4 >> 3;
                    /* try { // try from 00a708cc to 00b70907 has its CatchHandler @ 00a70a10 */
          if (plVar8 == plVar1) {
            uVar11 = 0xffffffffffffffff;
          }
          (**(code **)(**(long **)(this + 0x228) + 0x210))
                    (*(long **)(this + 0x228),*(undefined8 *)(param_1 + 0xa8),uVar11 & 0xffffffff);
          lVar10 = *(long *)(this + 0x1e0);
          uVar11 = (long)((uVar11 << 0x20) + 0x100000000) >> 0x20;
          uVar3 = *(long *)(this + 0x1e8) - lVar10 >> 3;
          if (uVar3 <= uVar11) {
            return;
          }
          while( true ) {
            lVar2 = *(long *)(lVar10 + uVar11 * 8);
                    /* try { // try from 00a70914 to 00b7096f has its CatchHandler @ 00a70a14 */
            lVar10 = (**(code **)(**(long **)(lVar2 + 0xa8) + 0x260))();
            if (lVar10 != 0) {
              plVar4 = *(long **)(lVar2 + 0xa8);
              (**(code **)(*plVar4 + 0x18))(plVar4,uVar11 & 0xffffffff);
            }
            if (uVar3 - 1 == uVar11) break;
            lVar10 = *(long *)(this + 0x1e0);
            uVar11 = uVar11 + 1;
          }
          return;
        }
      }
      lVar10 = cocos2d::Director::getInstance();
      uVar11 = cocos2d::Scheduler::isScheduled
                         (*(_func_void_float **)(lVar10 + 0xa0),
                          (Ref *)__selector_buildNativeDisplayList);
      if ((uVar11 & 1) == 0) {
        lVar10 = cocos2d::Director::getInstance();
        cocos2d::Scheduler::schedule
                  (*(Scheduler **)(lVar10 + 0xa0),__selector_buildNativeDisplayList,(Ref *)0x0,0.0,
                   SUB81(this,0));
        return;
      }
    }
  }
  return;
}

