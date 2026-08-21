
/* fairygui::TweenPropTypeUtils::setProps(cocos2d::Node*, fairygui::TweenPropType,
   fairygui::TweenValue const&) */

void fairygui::TweenPropTypeUtils::setProps(long param_1,undefined4 param_2,float *param_3)

{
  GObject *this;
  GProgressBar *this_00;
  float fVar1;
  float fVar2;
  
  if ((param_1 == 0) ||
     (this = (GObject *)
             __dynamic_cast(param_1,&cocos2d::Node::typeinfo,&GObject::typeinfo,0xfffffffffffffffe),
     this == (GObject *)0x0)) {
switchD_00ac2e54_default:
    return;
  }
  switch(param_2) {
  case 1:
    GObject::setX(this,*param_3);
    return;
  case 2:
    GObject::setY(this,*param_3);
    return;
  case 3:
    GObject::setPosition(this,*param_3,param_3[1]);
    return;
  case 4:
    fVar1 = *param_3;
    fVar2 = *(float *)(this + 0xd4);
    break;
  case 5:
    fVar2 = *param_3;
    fVar1 = *(float *)(this + 0xd0);
    break;
  case 6:
    fVar1 = *param_3;
    fVar2 = param_3[1];
    break;
  case 7:
    fVar1 = *param_3;
    fVar2 = *(float *)(this + 0xe4);
    goto LAB_00ac2f24;
  case 8:
    fVar2 = *param_3;
    fVar1 = *(float *)(this + 0xe0);
    goto LAB_00ac2f24;
  case 9:
    fVar1 = *param_3;
    fVar2 = param_3[1];
LAB_00ac2f24:
    GObject::setScale(this,fVar1,fVar2);
    return;
  case 10:
    GObject::setRotation(this,*param_3);
    return;
  case 0xb:
    GObject::setAlpha(this,*param_3);
    return;
  case 0xc:
    this_00 = (GProgressBar *)__dynamic_cast(this,&GObject::typeinfo,&GProgressBar::typeinfo,0);
    GProgressBar::update(this_00,*(double *)(param_3 + 4));
    return;
  default:
    goto switchD_00ac2e54_default;
  }
  GObject::setSize(this,fVar1,fVar2,false);
  return;
}

