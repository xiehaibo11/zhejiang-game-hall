
/* cocos2d::Menu::getItemForTouch(cocos2d::Touch*, cocos2d::Camera const*) */

long * __thiscall cocos2d::Menu::getItemForTouch(Menu *this,Touch *param_1,Camera *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  Size *pSVar6;
  long *plVar7;
  Rect aRStack_c0 [8];
  Size aSStack_b8 [8];
  undefined4 local_b0 [2];
  Mat4 aMStack_a8 [64];
  long local_68;
  
                    /* try { // try from 00f1c538 to 0101c57b has its CatchHandler @ 00f1c538
                       catch() { ... } // from try @ 00f1c538 with catch @ 00f1c538
                       catch() { ... } // from try @ 00f1c5d8 with catch @ 00f1c538 */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_b0[0] = Touch::getLocation(param_1);
  plVar7 = *(long **)(this + 0x178);
  plVar1 = *(long **)(this + 0x180);
  if (plVar7 == plVar1) {
LAB_00f1c644:
    plVar4 = (long *)0x0;
  }
  else {
                    /* try { // try from 00f1c57c to 0101c587 has its CatchHandler @ 00f1c63c */
                    /* try { // try from 00f1c588 to 0101c59f has its CatchHandler @ 00f1c638 */
    lVar3 = *plVar7;
    if (lVar3 != 0) goto LAB_00f1c5a4;
    do {
      do {
        do {
          plVar7 = plVar7 + 1;
          if (plVar1 == plVar7) goto LAB_00f1c644;
          lVar3 = *plVar7;
        } while (lVar3 == 0);
LAB_00f1c5a4:
                    /* try { // try from 00f1c5a8 to 0101c5d7 has its CatchHandler @ 00f1c658 */
        plVar4 = (long *)__dynamic_cast(lVar3,&Node::typeinfo,&MenuItem::typeinfo,0);
      } while (((plVar4 == (long *)0x0) ||
               (uVar5 = (**(code **)(*plVar4 + 0x178))(), (uVar5 & 1) == 0)) ||
              (uVar5 = (**(code **)(*plVar4 + 0x548))(plVar4), (uVar5 & 1) == 0
                    /* try { // try from 00f1c5d8 to 0101c687 has its CatchHandler @ 00f1c538 */));
      Rect::Rect(aRStack_c0);
      pSVar6 = (Size *)(**(code **)(*plVar4 + 0x168))(plVar4);
      Size::operator=(aSStack_b8,pSVar6);
      (**(code **)(*plVar4 + 0x448))(aMStack_a8,plVar4);
      uVar5 = isScreenPointInRect((Vec2 *)local_b0,param_2,aMStack_a8,aRStack_c0,(Vec3 *)0x0);
                    /* catch() { ... } // from try @ 00f1c588 with catch @ 00f1c638 */
      Mat4::~Mat4(aMStack_a8);
                    /* catch() { ... } // from try @ 00f1c57c with catch @ 00f1c63c */
    } while ((uVar5 & 1) == 0);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00f1c5a8 with catch @ 00f1c658 */
  return plVar4;
}

