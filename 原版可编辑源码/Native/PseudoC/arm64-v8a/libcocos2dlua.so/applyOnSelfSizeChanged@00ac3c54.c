
/* fairygui::RelationItem::applyOnSelfSizeChanged(float, float, bool) */

void __thiscall
fairygui::RelationItem::applyOnSelfSizeChanged
          (RelationItem *this,float param_1,float param_2,bool param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  GObject *pGVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar2 = WeakPtr::operator==((WeakPtr *)(this + 8),(GObject *)0x0);
  if ((uVar2 & 1) == 0) {
    lVar5 = *(long *)(this + 0x10);
    lVar1 = *(long *)(this + 0x18);
    if (lVar1 != lVar5) {
      lVar3 = *(long *)this;
      fVar9 = *(float *)(lVar3 + 0xc0);
      fVar10 = *(float *)(lVar3 + 0xc4);
      fVar8 = fVar9;
      if (lVar5 != lVar1) {
        do {
          switch(*(undefined4 *)(lVar5 + 4)) {
          case 3:
            pGVar4 = *(GObject **)this;
            fVar8 = 0.0;
            if (param_3) {
              fVar8 = *(float *)(pGVar4 + 0xd8);
            }
            fVar8 = *(float *)(pGVar4 + 0xc0) - (0.5 - fVar8) * param_1;
            break;
          case 4:
          case 5:
          case 6:
            pGVar4 = *(GObject **)this;
            fVar8 = 0.0;
            if (param_3) {
              fVar8 = *(float *)(pGVar4 + 0xd8);
            }
            fVar8 = *(float *)(pGVar4 + 0xc0) - (1.0 - fVar8) * param_1;
            break;
          default:
            goto switchD_00ac3d08_caseD_7;
          case 10:
            pGVar4 = *(GObject **)this;
            fVar8 = 0.0;
            if (param_3) {
              fVar8 = *(float *)(pGVar4 + 0xdc);
            }
            fVar8 = *(float *)(pGVar4 + 0xc4) - (0.5 - fVar8) * param_2;
            goto LAB_00ac3da4;
          case 0xb:
          case 0xc:
          case 0xd:
            pGVar4 = *(GObject **)this;
            fVar8 = 0.0;
            if (param_3) {
              fVar8 = *(float *)(pGVar4 + 0xdc);
            }
            fVar8 = *(float *)(pGVar4 + 0xc4) - (1.0 - fVar8) * param_2;
LAB_00ac3da4:
            GObject::setY(pGVar4,fVar8);
            goto switchD_00ac3d08_caseD_7;
          }
          GObject::setX(pGVar4,fVar8);
switchD_00ac3d08_caseD_7:
          lVar5 = lVar5 + 0xc;
        } while (lVar1 != lVar5);
        lVar3 = *(long *)this;
        fVar8 = *(float *)(lVar3 + 0xc0);
      }
      if ((fVar9 != fVar8) || (fVar10 != *(float *)(lVar3 + 0xc4))) {
        fVar8 = fVar8 - fVar9;
        fVar10 = *(float *)(lVar3 + 0xc4) - fVar10;
        GObject::updateGearFromRelations((int)lVar3,fVar8,fVar10);
        lVar5 = *(long *)(*(long *)this + 0xa0);
        if (lVar5 != 0) {
          puVar6 = *(undefined8 **)(lVar5 + 0x210);
          puVar7 = *(undefined8 **)(lVar5 + 0x218);
          if (puVar6 != puVar7) {
            Transition::updateFromRelations
                      ((Transition *)*puVar6,(basic_string *)(*(long *)this + 0x48),fVar8,fVar10);
            while (puVar6 = puVar6 + 1, puVar6 != puVar7) {
              Transition::updateFromRelations
                        ((Transition *)*puVar6,(basic_string *)(*(long *)this + 0x48),fVar8,fVar10);
            }
          }
        }
      }
    }
  }
  return;
}

