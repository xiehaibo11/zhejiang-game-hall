
/* fairygui::GObject::setSize(float, float, bool) */

void __thiscall fairygui::GObject::setSize(GObject *this,float param_1,float param_2,bool param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  GGroup *this_00;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((*(float *)(this + 0xd0) == param_1) && (*(float *)(this + 0xd4) == param_2)) {
                    /* try { // try from 00a83cb8 to 00b83ccb has its CatchHandler @ 00a83d50 */
    return;
  }
  *(float *)(this + 0xd0) = param_1;
  *(float *)(this + 0xd4) = param_2;
  fVar7 = *(float *)(this + 0x88);
  if (*(float *)(this + 0x88) <= param_1) {
    fVar7 = *(float *)(this + 0x90);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (fVar7 < param_1) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar7)) {
        bVar1 = fVar7 < 0.0;
        bVar2 = fVar7 == 0.0;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      fVar7 = param_1;
    }
  }
  fVar5 = *(float *)(this + 0x8c);
  if (*(float *)(this + 0x8c) <= param_2) {
    fVar5 = *(float *)(this + 0x94);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (fVar5 < param_2) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < 0.0;
        bVar2 = fVar5 == 0.0;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      fVar5 = param_2;
    }
  }
  fVar6 = *(float *)(this + 200);
  fVar8 = *(float *)(this + 0xcc);
  *(float *)(this + 200) = fVar7;
  *(float *)(this + 0xcc) = fVar5;
  fVar7 = fVar7 - fVar6;
  fVar5 = fVar5 - fVar8;
  (**(code **)(*(long *)this + 0x58))(this);
  if ((((*(float *)(this + 0xd8) == 0.0) && (*(float *)(this + 0xdc) == 0.0)) ||
      (this[0xe8] != (GObject)0x0)) || (param_3)) {
    (**(code **)(*(long *)this + 0x70))(this);
  }
  else {
                    /* try { // try from 00a83cd0 to 00b83d03 has its CatchHandler @ 00a83d54 */
    setPosition(this,*(float *)(this + 0xc0) - fVar7 * *(float *)(this + 0xd8),
                *(float *)(this + 0xc4) - fVar5 * *(float *)(this + 0xdc));
  }
  this_00 = (GGroup *)__dynamic_cast(this,&typeinfo,&GGroup::typeinfo,0);
  if (this_00 != (GGroup *)0x0) {
    GGroup::resizeChildren(this_00,fVar7,fVar5);
  }
  if (((this[0x98] == (GObject)0x0) && (this[0x99] == (GObject)0x0)) &&
     ((plVar4 = *(long **)(this + 0x150), plVar4 != (long *)0x0 && (plVar4[2] != 0)))) {
    (**(code **)(*plVar4 + 0x20))();
  }
  if (*(long *)(this + 0xa0) != 0) {
    Relations::onOwnerSizeChanged
              (*(Relations **)(this + 0x138),fVar7,fVar5,
               (bool)(this[0xe8] != (GObject)0x0 | (param_3 ^ 0xffU) & 1));
    GComponent::setBoundsChangedFlag(*(GComponent **)(this + 0xa0));
    if (*(GGroup **)(this + 0x128) != (GGroup *)0x0) {
                    /* try { // try from 00a83c84 to 00b83cb7 has its CatchHandler @ 00a83d84 */
      GGroup::setBoundsChangedFlag(*(GGroup **)(this + 0x128),false);
    }
  }
  UIEventDispatcher::dispatchEvent
            ((UIEventDispatcher *)this,0x15,(void *)0x0,(Value *)&cocos2d::Value::Null);
  return;
}

