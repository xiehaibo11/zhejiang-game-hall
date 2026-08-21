
/* cocos2d::ui::ListView::getIndex(cocos2d::ui::Widget*) const */

long __thiscall cocos2d::ui::ListView::getIndex(ListView *this,Widget *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  Widget *pWVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if (param_1 != (Widget *)0x0) {
    plVar1 = *(long **)(this + 0x8b8);
    plVar3 = *(long **)(this + 0x8c0);
    plVar6 = plVar3;
    plVar7 = plVar1;
    if (plVar1 != plVar3) {
      pWVar4 = (Widget *)*plVar1;
      plVar5 = plVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db5ac8 with catch @ 00db5c64
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db5b98 with catch @ 00db5c68
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db5b2c with catch @ 00db5c6c
                        */
      while ((plVar6 = plVar5, plVar7 = plVar5, pWVar4 != param_1 &&
             (plVar5 = plVar5 + 1, plVar6 = plVar3, plVar7 = plVar3, plVar3 != plVar5))) {
        pWVar4 = (Widget *)*plVar5;
      }
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db5c80 with catch @ 00db5cb0
                        */
    lVar2 = (long)plVar7 - (long)plVar1 >> 3;
    if (plVar6 == plVar3) {
      lVar2 = -1;
    }
    return lVar2;
  }
  return -1;
}

