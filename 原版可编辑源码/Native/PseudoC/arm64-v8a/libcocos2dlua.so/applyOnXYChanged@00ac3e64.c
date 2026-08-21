
/* fairygui::RelationItem::applyOnXYChanged(fairygui::GObject*, fairygui::RelationDef const&, float,
   float) */

void __thiscall
fairygui::RelationItem::applyOnXYChanged
          (RelationItem *this,GObject *param_1,RelationDef *param_2,float param_3,float param_4)

{
  GObject *pGVar1;
  float fVar2;
  float fVar3;
  
  switch(*(undefined4 *)(param_2 + 4)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    GObject::setX(*(GObject **)this,*(float *)(*(GObject **)this + 0xc0) + param_3);
    return;
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    GObject::setY(*(GObject **)this,*(float *)(*(GObject **)this + 0xc4) + param_4);
    return;
  default:
    return;
  case 0x10:
  case 0x11:
    pGVar1 = *(GObject **)this;
    if (pGVar1 != *(GObject **)(param_1 + 0xa0)) {
      fVar2 = (float)GObject::getXMin(pGVar1);
      pGVar1 = *(GObject **)this;
      GObject::setSize(pGVar1,*(float *)(pGVar1 + 0xd0) - param_3,*(float *)(pGVar1 + 0xd4),false);
      pGVar1 = *(GObject **)this;
      fVar2 = fVar2 + param_3;
LAB_00ac3f48:
      GObject::setXMin(pGVar1,fVar2);
      return;
    }
    fVar3 = *(float *)(pGVar1 + 0xd4);
    fVar2 = *(float *)(pGVar1 + 0xd0) - param_3;
    break;
  case 0x12:
  case 0x13:
    pGVar1 = *(GObject **)this;
    if (pGVar1 != *(GObject **)(param_1 + 0xa0)) {
      fVar2 = (float)GObject::getXMin(pGVar1);
      pGVar1 = *(GObject **)this;
      GObject::setSize(pGVar1,*(float *)(pGVar1 + 0xd0) + param_3,*(float *)(pGVar1 + 0xd4),false);
      pGVar1 = *(GObject **)this;
      goto LAB_00ac3f48;
    }
    fVar3 = *(float *)(pGVar1 + 0xd4);
    fVar2 = *(float *)(pGVar1 + 0xd0) + param_3;
    break;
  case 0x14:
  case 0x15:
    pGVar1 = *(GObject **)this;
    if (pGVar1 != *(GObject **)(param_1 + 0xa0)) {
      fVar2 = (float)GObject::getYMin(pGVar1);
      pGVar1 = *(GObject **)this;
      GObject::setSize(pGVar1,*(float *)(pGVar1 + 0xd0),*(float *)(pGVar1 + 0xd4) - param_4,false);
      pGVar1 = *(GObject **)this;
      fVar2 = fVar2 + param_4;
LAB_00ac3fc4:
      GObject::setYMin(pGVar1,fVar2);
      return;
    }
    fVar2 = *(float *)(pGVar1 + 0xd0);
    fVar3 = *(float *)(pGVar1 + 0xd4) - param_4;
    break;
  case 0x16:
  case 0x17:
    pGVar1 = *(GObject **)this;
    if (pGVar1 != *(GObject **)(param_1 + 0xa0)) {
      fVar2 = (float)GObject::getYMin(pGVar1);
      pGVar1 = *(GObject **)this;
      GObject::setSize(pGVar1,*(float *)(pGVar1 + 0xd0),*(float *)(pGVar1 + 0xd4) + param_4,false);
      pGVar1 = *(GObject **)this;
      goto LAB_00ac3fc4;
    }
    fVar2 = *(float *)(pGVar1 + 0xd0);
    fVar3 = *(float *)(pGVar1 + 0xd4) + param_4;
  }
  GObject::setSize(pGVar1,fVar2,fVar3,false);
  return;
}

