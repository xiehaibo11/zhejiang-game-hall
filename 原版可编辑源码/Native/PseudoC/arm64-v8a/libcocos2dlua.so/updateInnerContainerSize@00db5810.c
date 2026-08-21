
/* cocos2d::ui::ListView::updateInnerContainerSize() */

void __thiscall cocos2d::ui::ListView::updateInnerContainerSize(ListView *this)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  Size aSStack_50 [8];
  long local_48;
  
                    /* catch() { ... } // from try @ 00db57b4 with catch @ 00db5814 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x7c0) == 2) {
    puVar4 = *(undefined8 **)(this + 0x8c0);
    puVar5 = *(undefined8 **)(this + 0x8b8);
    lVar2 = (long)puVar4 - (long)puVar5;
    if (lVar2 == 0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = *(float *)(this + 0x8dc) * (float)((lVar2 >> 3) - 1) +
              *(float *)(this + 0x8e0) + *(float *)(this + 0x8e8);
    }
    for (; puVar5 != puVar4; puVar5 = puVar5 + 1) {
      pfVar3 = (float *)(**(code **)(*(long *)*puVar5 + 0x168))();
      fVar6 = fVar6 + *pfVar3;
    }
    fVar7 = *(float *)(this + 0x84);
  }
  else {
    if (*(int *)(this + 0x7c0) != 1) goto LAB_00db5938;
    puVar4 = *(undefined8 **)(this + 0x8c0);
    puVar5 = *(undefined8 **)(this + 0x8b8);
    lVar2 = (long)puVar4 - (long)puVar5;
    if (lVar2 == 0) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = *(float *)(this + 0x8dc) * (float)((lVar2 >> 3) - 1) +
              *(float *)(this + 0x8e4) + *(float *)(this + 0x8ec);
    }
    for (; puVar5 != puVar4; puVar5 = puVar5 + 1) {
      lVar2 = (**(code **)(*(long *)*puVar5 + 0x168))();
      fVar7 = fVar7 + *(float *)(lVar2 + 4);
    }
    fVar6 = *(float *)(this + 0x80);
  }
  Size::Size(aSStack_50,fVar6,fVar7);
  ScrollView::setInnerContainerSize((ScrollView *)this,aSStack_50);
LAB_00db5938:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

