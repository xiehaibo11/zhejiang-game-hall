
/* cocos2d::ui::Layout::getLayoutAccumulatedSize() const */

void cocos2d::ui::Layout::getLayoutAccumulatedSize(void)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *in_x0;
  long *plVar4;
  long lVar5;
  long *plVar6;
  LayoutParameter *this;
  Margin *pMVar7;
  Size *pSVar8;
  Size *in_x8;
  long lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  Size aSStack_a8 [8];
  Size aSStack_a0 [8];
  Size aSStack_98 [8];
  float local_90;
  float local_8c;
  float fStack_88;
  float local_84;
  Size aSStack_80 [8];
  long local_78;
  
                    /* try { // try from 00db0594 to 00eb0633 has its CatchHandler @ 00db06ac */
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)(**(code **)(*in_x0 + 0x248))();
  Size::Size(in_x8,(Size *)&Size::ZERO);
  plVar1 = (long *)*plVar4;
  plVar4 = (long *)plVar4[1];
  if (plVar1 != plVar4) {
    iVar10 = 0;
    lVar9 = *plVar1;
    do {
      if (lVar9 != 0) {
        lVar5 = __dynamic_cast(lVar9,&Node::typeinfo,&typeinfo,0);
        if (lVar5 == 0) {
          plVar6 = (long *)__dynamic_cast(lVar9,&Node::typeinfo,&Widget::typeinfo,0);
          if (plVar6 == (long *)0x0) goto LAB_00db0634;
          iVar10 = iVar10 + 1;
          this = (LayoutParameter *)(**(code **)(*plVar6 + 0x5f8))();
          pMVar7 = (Margin *)LayoutParameter::getMargin(this);
          Margin::Margin((Margin *)&local_90,pMVar7);
          pSVar8 = (Size *)(**(code **)(*plVar6 + 0x168))(plVar6);
                    /* catch() { ... } // from try @ 00db0594 with catch @ 00db06ac */
          Size::operator+(in_x8,pSVar8);
                    /* try { // try from 00db06c8 to 00eb0753 has its CatchHandler @ 00db06c8
                       catch() { ... } // from try @ 00db06c8 with catch @ 00db06c8
                       catch() { ... } // from try @ 00db07dc with catch @ 00db06c8
                       catch() { ... } // from try @ 00db0810 with catch @ 00db06c8 */
          Size::Size(aSStack_a8,fStack_88 + local_90,local_8c + local_84);
          Size::operator*(aSStack_a8,0.5);
          Size::operator+(aSStack_98,aSStack_a0);
          pSVar8 = aSStack_80;
        }
        else {
          getLayoutAccumulatedSize();
          Size::operator+(in_x8,aSStack_80);
          pSVar8 = (Size *)&local_90;
        }
        Size::operator=(in_x8,pSVar8);
      }
LAB_00db0634:
                    /* try { // try from 00db0634 to 00eb06c7 has its CatchHandler @ 00db0568 */
      plVar1 = plVar1 + 1;
      if (plVar4 == plVar1) goto LAB_00db0704;
      lVar9 = *plVar1;
    } while( true );
  }
  iVar10 = 0;
LAB_00db0704:
  iVar3 = (**(code **)(*in_x0 + 0x698))();
  if (iVar3 == 1) {
                    /* try { // try from 00db0754 to 00eb07db has its CatchHandler @ 00db0814 */
    fVar11 = (*(float *)in_x8 / (float)iVar10) * (float)(iVar10 + -1);
    fVar12 = 0.0;
  }
  else {
    if (iVar3 != 2) goto LAB_00db0790;
    fVar12 = (*(float *)(in_x8 + 4) / (float)iVar10) * (float)(iVar10 + -1);
    fVar11 = 0.0;
  }
  Size::Size(aSStack_80,fVar11,fVar12);
  Size::operator-(in_x8,aSStack_80);
  Size::operator=(in_x8,(Size *)&local_90);
LAB_00db0790:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

