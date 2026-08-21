
/* fairygui::RelationItem::onTargetSizeChanged(fairygui::EventContext*) */

void __thiscall
fairygui::RelationItem::onTargetSizeChanged(RelationItem *this,EventContext *param_1)

{
  RelationDef *pRVar1;
  long lVar2;
  long lVar3;
  GObject *pGVar4;
  undefined8 *puVar5;
  RelationDef *pRVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar2 = *(long *)this;
  pGVar4 = *(GObject **)param_1;
  if ((**(long **)(lVar2 + 0x138) == 0) &&
     ((*(long *)(lVar2 + 0x128) == 0 || (*(int *)(*(long *)(lVar2 + 0x128) + 0x1d8) == 0)))) {
    **(long **)(lVar2 + 0x138) = (long)pGVar4;
    fVar9 = *(float *)(lVar2 + 0xc0);
    fVar10 = *(float *)(lVar2 + 0xc4);
    pRVar6 = *(RelationDef **)(this + 0x10);
    pRVar1 = *(RelationDef **)(this + 0x18);
    fVar12 = *(float *)(lVar2 + 0xd0);
    fVar11 = *(float *)(lVar2 + 0xd4);
    fVar8 = fVar9;
    if (pRVar6 != pRVar1) {
      do {
        applyOnSizeChanged(this,pGVar4,pRVar6);
        pRVar6 = pRVar6 + 0xc;
      } while (pRVar1 != pRVar6);
      lVar2 = *(long *)this;
      fVar8 = *(float *)(lVar2 + 0xc0);
    }
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(pGVar4 + 200);
    if ((fVar9 != fVar8) || (fVar10 != *(float *)(lVar2 + 0xc4))) {
      fVar10 = *(float *)(lVar2 + 0xc4) - fVar10;
      GObject::updateGearFromRelations((int)lVar2,fVar8 - fVar9,fVar10);
      lVar2 = *(long *)this;
      lVar3 = *(long *)(lVar2 + 0xa0);
      if (lVar3 != 0) {
        puVar7 = *(undefined8 **)(lVar3 + 0x218);
        for (puVar5 = *(undefined8 **)(lVar3 + 0x210); puVar5 != puVar7; puVar5 = puVar5 + 1) {
          Transition::updateFromRelations
                    ((Transition *)*puVar5,(basic_string *)(lVar2 + 0x48),fVar8 - fVar9,fVar10);
          lVar2 = *(long *)this;
        }
      }
    }
    if ((fVar12 != *(float *)(lVar2 + 0xd0)) || (fVar11 != *(float *)(lVar2 + 0xd4))) {
      GObject::updateGearFromRelations
                ((int)lVar2,*(float *)(lVar2 + 0xd0) - fVar12,*(float *)(lVar2 + 0xd4) - fVar11);
      lVar2 = *(long *)this;
    }
    **(undefined8 **)(lVar2 + 0x138) = 0;
  }
  else {
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(pGVar4 + 200);
  }
  return;
}

