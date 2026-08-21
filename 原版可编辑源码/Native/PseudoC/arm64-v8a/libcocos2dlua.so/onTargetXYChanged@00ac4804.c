
/* fairygui::RelationItem::onTargetXYChanged(fairygui::EventContext*) */

void __thiscall fairygui::RelationItem::onTargetXYChanged(RelationItem *this,EventContext *param_1)

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
  float fVar13;
  
  lVar2 = *(long *)this;
  pGVar4 = *(GObject **)param_1;
  if ((**(long **)(lVar2 + 0x138) == 0) &&
     ((*(long *)(lVar2 + 0x128) == 0 || (*(int *)(*(long *)(lVar2 + 0x128) + 0x1d8) == 0)))) {
    **(long **)(lVar2 + 0x138) = (long)pGVar4;
    pRVar6 = *(RelationDef **)(this + 0x10);
    pRVar1 = *(RelationDef **)(this + 0x18);
    fVar12 = *(float *)(lVar2 + 0xc0);
    fVar13 = *(float *)(lVar2 + 0xc4);
    fVar8 = *(float *)(pGVar4 + 0xc0);
    fVar9 = *(float *)(pGVar4 + 0xc4);
    fVar10 = fVar12;
    if (pRVar6 != pRVar1) {
      fVar10 = *(float *)(this + 0x28);
      fVar11 = *(float *)(this + 0x2c);
      do {
        applyOnXYChanged(this,pGVar4,pRVar6,fVar8 - fVar10,fVar9 - fVar11);
        pRVar6 = pRVar6 + 0xc;
      } while (pRVar1 != pRVar6);
      lVar2 = *(long *)this;
      fVar8 = *(float *)(pGVar4 + 0xc0);
      fVar9 = *(float *)(pGVar4 + 0xc4);
      fVar10 = *(float *)(lVar2 + 0xc0);
    }
    *(float *)(this + 0x28) = fVar8;
    *(float *)(this + 0x2c) = fVar9;
    if ((fVar12 != fVar10) || (fVar13 != *(float *)(lVar2 + 0xc4))) {
      fVar13 = *(float *)(lVar2 + 0xc4) - fVar13;
      GObject::updateGearFromRelations((int)lVar2,fVar10 - fVar12,fVar13);
      lVar2 = *(long *)this;
      lVar3 = *(long *)(lVar2 + 0xa0);
      if (lVar3 != 0) {
        puVar7 = *(undefined8 **)(lVar3 + 0x218);
        for (puVar5 = *(undefined8 **)(lVar3 + 0x210); puVar5 != puVar7; puVar5 = puVar5 + 1) {
          Transition::updateFromRelations
                    ((Transition *)*puVar5,(basic_string *)(lVar2 + 0x48),fVar10 - fVar12,fVar13);
          lVar2 = *(long *)this;
        }
      }
    }
    **(undefined8 **)(lVar2 + 0x138) = 0;
  }
  else {
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(pGVar4 + 0xc0);
  }
  return;
}

