
/* cocos2d::ui::ListView::removeChild(cocos2d::Node*, bool) */

void __thiscall cocos2d::ui::ListView::removeChild(ListView *this,Node *param_1,bool param_2)

{
  size_t __n;
  Ref *this_00;
  long *plVar1;
  long lVar2;
  Ref *pRVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *__dest;
  
  if ((param_1 == (Node *)0x0) ||
     (this_00 = (Ref *)__dynamic_cast(param_1,&Node::typeinfo,&Widget::typeinfo,0),
     this_00 == (Ref *)0x0)) goto LAB_00db63c4;
  lVar2 = *(long *)(this + 0x8f8);
  __dest = *(long **)(this + 0x8b8);
  plVar1 = *(long **)(this + 0x8c0);
  if (lVar2 != -1) {
                    /* try { // try from 00db62c8 to 00eb62db has its CatchHandler @ 00db63ec */
    plVar5 = plVar1;
    plVar6 = __dest;
    if (__dest != plVar1) {
      pRVar3 = (Ref *)*__dest;
      plVar4 = __dest;
      while ((plVar5 = plVar4, plVar6 = plVar4, pRVar3 != this_00 &&
             (plVar4 = plVar4 + 1, plVar5 = plVar1, plVar6 = plVar1, plVar1 != plVar4))) {
        pRVar3 = (Ref *)*plVar4;
      }
    }
    lVar7 = (long)plVar6 - (long)__dest >> 3;
                    /* try { // try from 00db632c to 00eb6333 has its CatchHandler @ 00db63f4 */
    if (plVar5 == plVar1) {
      lVar7 = -1;
    }
    if (lVar7 < lVar2) {
      lVar2 = lVar2 + -1;
    }
    else {
      if (lVar2 != lVar7) goto LAB_00db634c;
      lVar2 = -1;
    }
    *(long *)(this + 0x8f8) = lVar2;
  }
LAB_00db634c:
  if (__dest != plVar1) {
                    /* try { // try from 00db6354 to 00eb638b has its CatchHandler @ 00db63f8 */
    if ((Ref *)*__dest != this_00) {
      do {
        if (plVar1 + -1 == __dest) goto LAB_00db63b4;
        plVar5 = __dest + 1;
        __dest = __dest + 1;
      } while ((Ref *)*plVar5 != this_00);
    }
    if (__dest != plVar1) {
      __n = (long)plVar1 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      *(long **)(this + 0x8c0) = __dest + ((long)__n >> 3);
      Ref::release(this_00);
    }
  }
LAB_00db63b4:
                    /* try { // try from 00db63b8 to 00eb63bb has its CatchHandler @ 00db63f0 */
                    /* try { // try from 00db63bc to 00eb6423 has its CatchHandler @ 00db61d4 */
  (**(code **)(*(long *)this + 0x7f8))(this);
LAB_00db63c4:
  ScrollView::removeChild((ScrollView *)this,param_1,param_2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db62c8 with catch @ 00db63ec
                        */
                    /* WARNING: Could not recover jumptable at 0x00db63f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db63b8 with catch @ 00db63f0
                        */
  (**(code **)(*(long *)this + 0x6a8))(this);
  return;
}

