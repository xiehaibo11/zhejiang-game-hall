
/* fairygui::GComponent::setupOverflow(fairygui::OverflowType) */

void __thiscall fairygui::GComponent::setupOverflow(GComponent *this,int param_2)

{
  long lVar1;
  long lVar2;
  FUIContainer *this_00;
  long *plVar3;
  undefined4 uVar4;
  float fVar5;
  Rect aRStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 == 1) {
    FUIContainer::setClippingEnabled(*(FUIContainer **)(this + 0xa8),true);
    this_00 = *(FUIContainer **)(this + 0xa8);
    cocos2d::Rect::Rect(aRStack_58,*(float *)(this + 0x238),*(float *)(this + 0x23c),
                        (*(float *)(this + 200) - *(float *)(this + 0x238)) -
                        *(float *)(this + 0x240),
                        (*(float *)(this + 0xcc) - *(float *)(this + 0x23c)) -
                        *(float *)(this + 0x244));
    FUIContainer::setClippingRegion(this_00,aRStack_58);
  }
  plVar3 = *(long **)(this + 0x228);
  uVar4 = *(undefined4 *)(this + 0x238);
  fVar5 = *(float *)(this + 0x23c);
  lVar2 = (**(code **)(*(long *)plVar3[0x32] + 0x168))();
  (**(code **)(*plVar3 + 200))(uVar4,*(float *)(lVar2 + 4) - fVar5,plVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

