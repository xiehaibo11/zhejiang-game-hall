
/* fairygui::TweenPropTypeUtils::setProps(fairygui::GObject*, fairygui::TweenPropType,
   fairygui::TweenValue const&) */

void fairygui::TweenPropTypeUtils::setProps(GObject *param_1,undefined4 param_2,float *param_3)

{
  GProgressBar *this;
  float fVar1;
  float fVar2;
  
  if (param_1 == (GObject *)0x0) {
switchD_00ac2d24_default:
    return;
  }
  switch(param_2) {
  case 1:
    GObject::setX(param_1,*param_3);
    return;
  case 2:
    GObject::setY(param_1,*param_3);
    return;
  case 3:
    GObject::setPosition(param_1,*param_3,param_3[1]);
    return;
  case 4:
    fVar1 = *param_3;
    fVar2 = *(float *)(param_1 + 0xd4);
    break;
  case 5:
    fVar2 = *param_3;
    fVar1 = *(float *)(param_1 + 0xd0);
    break;
  case 6:
    fVar1 = *param_3;
    fVar2 = param_3[1];
    break;
  case 7:
    fVar1 = *param_3;
    fVar2 = *(float *)(param_1 + 0xe4);
    goto LAB_00ac2df4;
  case 8:
    fVar2 = *param_3;
    fVar1 = *(float *)(param_1 + 0xe0);
    goto LAB_00ac2df4;
  case 9:
    fVar1 = *param_3;
    fVar2 = param_3[1];
LAB_00ac2df4:
    GObject::setScale(param_1,fVar1,fVar2);
    return;
  case 10:
    GObject::setRotation(param_1,*param_3);
    return;
  case 0xb:
    GObject::setAlpha(param_1,*param_3);
    return;
  case 0xc:
    this = (GProgressBar *)__dynamic_cast(param_1,&GObject::typeinfo,&GProgressBar::typeinfo,0);
    GProgressBar::update(this,*(double *)(param_3 + 4));
    return;
  default:
    goto switchD_00ac2d24_default;
  }
  GObject::setSize(param_1,fVar1,fVar2,false);
  return;
}

