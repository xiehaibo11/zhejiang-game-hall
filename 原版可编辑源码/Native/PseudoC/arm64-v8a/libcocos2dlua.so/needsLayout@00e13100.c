
/* cocos2d::extension::ControlSwitchSprite::needsLayout() */

void __thiscall cocos2d::extension::ControlSwitchSprite::needsLayout(ControlSwitchSprite *this)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_54;
  float local_50;
  float local_4c;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar5 = *(long **)(this + 0x558);
  pfVar2 = (float *)(**(code **)(*plVar5 + 0x168))(plVar5);
  fVar6 = *pfVar2;
  fVar7 = *(float *)(this + 0x538);
  lVar3 = (**(code **)(**(long **)(this + 0x558) + 0x168))(*(long **)(this + 0x558));
  (**(code **)(*plVar5 + 200))(fVar6 * 0.5 + fVar7,*(float *)(lVar3 + 4) * 0.5,plVar5);
  plVar5 = *(long **)(this + 0x560);
  pfVar2 = (float *)(**(code **)(**(long **)(this + 0x558) + 0x168))();
  fVar8 = *pfVar2;
  pfVar2 = (float *)(**(code **)(**(long **)(this + 0x560) + 0x168))(*(long **)(this + 0x560));
  fVar6 = *pfVar2;
  fVar7 = *(float *)(this + 0x538);
  lVar3 = (**(code **)(**(long **)(this + 0x560) + 0x168))(*(long **)(this + 0x560));
  (**(code **)(*plVar5 + 200))(fVar7 + fVar8 + fVar6 * 0.5,*(float *)(lVar3 + 4) * 0.5,plVar5);
  plVar5 = *(long **)(this + 0x568);
  pfVar2 = (float *)(**(code **)(**(long **)(this + 0x558) + 0x168))();
  fVar6 = *pfVar2;
  fVar7 = *(float *)(this + 0x538);
  Texture2D::getContentSize();
  (**(code **)(*plVar5 + 200))(fVar6 + fVar7,local_4c * 0.5,plVar5);
  plVar5 = *(long **)(this + 0x580);
  Texture2D::getContentSize();
  Texture2D::getContentSize();
  (**(code **)(*plVar5 + 200))(local_50 * 0.5,local_54 * 0.5,plVar5);
  plVar5 = *(long **)(this + 0x570);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x148))(plVar5,&Vec2::ANCHOR_MIDDLE);
    plVar5 = *(long **)(this + 0x570);
    pfVar2 = (float *)(**(code **)(**(long **)(this + 0x558) + 0xb0))();
    fVar7 = *pfVar2;
    pfVar2 = (float *)(**(code **)(**(long **)(this + 0x568) + 0x168))(*(long **)(this + 0x568));
    fVar6 = *pfVar2;
    lVar3 = (**(code **)(**(long **)(this + 0x558) + 0x168))(*(long **)(this + 0x558));
    (**(code **)(*plVar5 + 200))(fVar7 + fVar6 / -6.0,*(float *)(lVar3 + 4) * 0.5,plVar5);
  }
  plVar5 = *(long **)(this + 0x578);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x148))(plVar5,&Vec2::ANCHOR_MIDDLE);
    plVar5 = *(long **)(this + 0x578);
    pfVar2 = (float *)(**(code **)(**(long **)(this + 0x560) + 0xb0))();
    fVar7 = *pfVar2;
    pfVar2 = (float *)(**(code **)(**(long **)(this + 0x568) + 0x168))(*(long **)(this + 0x568));
    fVar6 = *pfVar2;
    lVar3 = (**(code **)(**(long **)(this + 0x560) + 0x168))(*(long **)(this + 0x560));
    (**(code **)(*plVar5 + 200))(fVar7 + fVar6 / 6.0,*(float *)(lVar3 + 4) * 0.5,plVar5);
  }
  Sprite::setFlippedY((Sprite *)this,true);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

