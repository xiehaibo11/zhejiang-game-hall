
/* fairygui::RelationItem::applyOnSizeChanged(fairygui::GObject*, fairygui::RelationDef const&) */

void __thiscall
fairygui::RelationItem::applyOnSizeChanged(RelationItem *this,GObject *param_1,RelationDef *param_2)

{
  RelationDef RVar1;
  ulong uVar2;
  bool bVar3;
  GObject *pGVar4;
  RelationItem *pRVar5;
  GObject *pGVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pGVar6 = *(GObject **)this;
  pGVar4 = *(GObject **)(pGVar6 + 0xa0);
  fVar12 = 0.0;
  if (*(int *)(param_2 + 8) == 0) {
    if (pGVar4 == param_1) {
      fVar11 = 0.0;
      RVar1 = *param_2;
    }
    else {
      fVar11 = *(float *)(param_1 + 0xc0);
      if (param_1[0xe8] != (GObject)0x0) {
        fVar12 = *(float *)(param_1 + 0xd8);
      }
      RVar1 = *param_2;
    }
    if (RVar1 == (RelationDef)0x0) {
      fVar9 = *(float *)(param_1 + 200);
      fVar7 = *(float *)(this + 0x30);
      goto LAB_00ac4100;
    }
    fVar7 = *(float *)(this + 0x30);
    if (fVar7 != 0.0) {
      fVar9 = *(float *)(param_1 + 200);
      goto LAB_00ac40bc;
    }
LAB_00ac40e0:
    fVar9 = 0.0;
    bVar3 = true;
  }
  else {
    if (pGVar4 == param_1) {
      fVar11 = 0.0;
      RVar1 = *param_2;
    }
    else {
      fVar11 = *(float *)(param_1 + 0xc4);
      if (param_1[0xe8] != (GObject)0x0) {
        fVar12 = *(float *)(param_1 + 0xdc);
      }
      RVar1 = *param_2;
    }
    if (RVar1 == (RelationDef)0x0) {
      fVar9 = *(float *)(param_1 + 0xcc);
      fVar7 = *(float *)(this + 0x34);
LAB_00ac4100:
      bVar3 = false;
      fVar9 = fVar9 - fVar7;
    }
    else {
      fVar7 = *(float *)(this + 0x34);
      if (fVar7 == 0.0) goto LAB_00ac40e0;
      fVar9 = *(float *)(param_1 + 0xcc);
LAB_00ac40bc:
      fVar9 = fVar9 / fVar7;
      bVar3 = true;
    }
  }
                    /* try { // try from 00ac4108 to 00bc414b has its CatchHandler @ 00ac4108
                       catch() { ... } // from try @ 00ac4108 with catch @ 00ac4108
                       catch() { ... } // from try @ 00ac4194 with catch @ 00ac4108
                       catch() { ... } // from try @ 00ac42e4 with catch @ 00ac4108 */
  switch(*(undefined4 *)(param_2 + 4)) {
  case 0:
    if (bVar3) {
LAB_00ac413c:
      fVar12 = (float)GObject::getXMin(pGVar6);
                    /* try { // try from 00ac414c to 00bc4153 has its CatchHandler @ 00ac4330 */
      fVar8 = fVar11 + fVar9 * (fVar12 - fVar11);
      goto LAB_00ac4510;
    }
    goto LAB_00ac4178;
  case 1:
    if (bVar3) goto LAB_00ac413c;
    break;
  case 2:
    if (bVar3) goto LAB_00ac413c;
    goto LAB_00ac4444;
  case 3:
    if (bVar3) {
                    /* try { // try from 00ac4158 to 00bc4193 has its CatchHandler @ 00ac4338 */
      fVar12 = (float)GObject::getXMin(pGVar6);
      fVar8 = *(float *)(*(long *)this + 0xd0) * 0.5;
LAB_00ac41b4:
      fVar8 = (fVar11 + fVar9 * ((fVar12 + fVar8) - fVar11)) - fVar8;
      goto LAB_00ac4510;
    }
    break;
  case 4:
    if (bVar3) {
LAB_00ac41a4:
      fVar12 = (float)GObject::getXMin(pGVar6);
      fVar8 = *(float *)(*(long *)this + 0xd0);
      goto LAB_00ac41b4;
    }
LAB_00ac4178:
    if (fVar12 == 0.0) {
switchD_00ac4124_default:
      return;
    }
    fVar11 = *(float *)(pGVar6 + 0xc0) - fVar12 * fVar9;
    goto LAB_00ac4458;
  case 5:
    if (bVar3) goto LAB_00ac41a4;
    break;
  case 6:
    if (bVar3) goto LAB_00ac41a4;
LAB_00ac4444:
    fVar11 = *(float *)(pGVar6 + 0xc0);
    fVar7 = 1.0;
    goto LAB_00ac444c;
  case 7:
    if (bVar3) {
LAB_00ac41e4:
      fVar12 = (float)GObject::getYMin(pGVar6);
      fVar7 = fVar11 + fVar9 * (fVar12 - fVar11);
      goto LAB_00ac4578;
    }
    goto LAB_00ac4220;
  case 8:
    if (bVar3) goto LAB_00ac41e4;
    goto LAB_00ac4254;
  case 9:
    if (bVar3) goto LAB_00ac41e4;
    goto LAB_00ac4474;
  case 10:
    if (bVar3) {
      fVar12 = (float)GObject::getYMin(pGVar6);
      fVar7 = *(float *)(*(long *)this + 0xd4) * 0.5;
LAB_00ac4274:
      fVar7 = (fVar11 + fVar9 * ((fVar12 + fVar7) - fVar11)) - fVar7;
      goto LAB_00ac4578;
    }
    goto LAB_00ac4254;
  case 0xb:
    if (bVar3) {
LAB_00ac4264:
      fVar12 = (float)GObject::getYMin(pGVar6);
      fVar7 = *(float *)(*(long *)this + 0xd4);
      goto LAB_00ac4274;
    }
LAB_00ac4220:
    if (fVar12 == 0.0) {
      return;
    }
    fVar11 = *(float *)(pGVar6 + 0xc4) - fVar12 * fVar9;
    goto LAB_00ac4488;
  case 0xc:
    if (bVar3) goto LAB_00ac4264;
LAB_00ac4254:
    fVar11 = *(float *)(pGVar6 + 0xc4);
    fVar7 = 0.5;
LAB_00ac447c:
    fVar11 = fVar9 * (fVar7 - fVar12) + fVar11;
LAB_00ac4488:
    GObject::setY(pGVar6,fVar11);
    return;
  case 0xd:
    if (bVar3) goto LAB_00ac4264;
LAB_00ac4474:
    fVar11 = *(float *)(pGVar6 + 0xc4);
    fVar7 = 1.0;
    goto LAB_00ac447c;
  case 0xe:
    if ((pGVar6[0x98] == (GObject)0x0) || (pGVar6 != *(GObject **)(param_1 + 0xa0))) {
      pGVar6 = pGVar6 + 0xd0;
      pRVar5 = this + 0x30;
    }
    else {
      pGVar6 = pGVar6 + 0x78;
      pRVar5 = (RelationItem *)(param_1 + 0x80);
    }
    fVar7 = *(float *)pGVar6 - *(float *)pRVar5;
    if (bVar3) {
      fVar7 = fVar9 * (*(float *)pGVar6 - *(float *)pRVar5);
    }
    uVar2 = WeakPtr::operator==((WeakPtr *)(this + 8),pGVar4);
    pGVar6 = *(GObject **)this;
    if ((uVar2 & 1) == 0) {
      fVar10 = *(float *)(pGVar6 + 0xd4);
      fVar7 = fVar7 + *(float *)(param_1 + 200);
      goto LAB_00ac4688;
    }
    if (pGVar6[0xe8] == (GObject)0x0) {
      fVar10 = *(float *)(pGVar6 + 0xd4);
      fVar7 = fVar7 + *(float *)(param_1 + 200);
LAB_00ac4740:
      bVar3 = true;
      goto LAB_00ac468c;
    }
    fVar8 = (float)GObject::getXMin(pGVar6);
    pGVar6 = *(GObject **)this;
    bVar3 = true;
    fVar10 = *(float *)(pGVar6 + 0xd4);
    fVar7 = fVar7 + *(float *)(param_1 + 200);
    goto LAB_00ac4504;
  case 0xf:
                    /* try { // try from 00ac42c0 to 00bc42d3 has its CatchHandler @ 00ac4338 */
    if ((pGVar6[0x98] == (GObject)0x0) || (pGVar6 != *(GObject **)(param_1 + 0xa0))) {
      pGVar6 = pGVar6 + 0xd4;
      pRVar5 = this + 0x34;
    }
    else {
      pGVar6 = pGVar6 + 0x7c;
      pRVar5 = (RelationItem *)(param_1 + 0x84);
    }
    fVar10 = *(float *)pGVar6 - *(float *)pRVar5;
    if (bVar3) {
      fVar10 = fVar9 * (*(float *)pGVar6 - *(float *)pRVar5);
    }
    uVar2 = WeakPtr::operator==((WeakPtr *)(this + 8),pGVar4);
    pGVar6 = *(GObject **)this;
    if ((uVar2 & 1) != 0) {
      if (pGVar6[0xe8] == (GObject)0x0) {
        fVar7 = *(float *)(pGVar6 + 0xd0);
        fVar10 = fVar10 + *(float *)(param_1 + 0xcc);
        goto LAB_00ac4740;
      }
      fVar7 = (float)GObject::getYMin(pGVar6);
      pGVar6 = *(GObject **)this;
      bVar3 = true;
      fVar8 = *(float *)(pGVar6 + 0xd0);
      fVar9 = fVar10 + *(float *)(param_1 + 0xcc);
      goto LAB_00ac456c;
    }
    fVar7 = *(float *)(pGVar6 + 0xd0);
    fVar10 = fVar10 + *(float *)(param_1 + 0xcc);
    goto LAB_00ac4688;
  case 0x10:
    fVar8 = (float)GObject::getXMin(pGVar6);
                    /* try { // try from 00ac42dc to 00bc42e3 has its CatchHandler @ 00ac432c */
    if (*param_2 == (RelationDef)0x0) {
                    /* try { // try from 00ac42e4 to 00bc4353 has its CatchHandler @ 00ac4108 */
      fVar9 = -(fVar12 * fVar9);
    }
    else {
LAB_00ac4300:
      fVar9 = (fVar11 + fVar9 * (fVar8 - fVar11)) - fVar8;
    }
    goto LAB_00ac44b0;
  case 0x11:
    fVar8 = (float)GObject::getXMin(pGVar6);
    if (*param_2 != (RelationDef)0x0) goto LAB_00ac4300;
    fVar9 = fVar9 * (1.0 - fVar12);
LAB_00ac44b0:
    pGVar6 = *(GObject **)this;
    GObject::setSize(pGVar6,*(float *)(pGVar6 + 0xd0) - fVar9,*(float *)(pGVar6 + 0xd4),false);
    pGVar6 = *(GObject **)this;
    fVar8 = fVar8 + fVar9;
    goto LAB_00ac4510;
  case 0x12:
    fVar8 = (float)GObject::getXMin(pGVar6);
    if (*param_2 == (RelationDef)0x0) {
      pGVar6 = *(GObject **)this;
      fVar7 = -(fVar12 * fVar9);
      fVar12 = *(float *)(pGVar6 + 0xd0);
    }
    else {
      pGVar6 = *(GObject **)this;
                    /* catch() { ... } // from try @ 00ac4288 with catch @ 00ac432c
                       catch() { ... } // from try @ 00ac42dc with catch @ 00ac432c */
      fVar12 = *(float *)(pGVar6 + 0xd0);
                    /* catch() { ... } // from try @ 00ac414c with catch @ 00ac4330 */
                    /* catch() { ... } // from try @ 00ac4158 with catch @ 00ac4338
                       catch() { ... } // from try @ 00ac41c8 with catch @ 00ac4338
                       catch() { ... } // from try @ 00ac42c0 with catch @ 00ac4338 */
      fVar7 = (fVar11 + fVar9 * ((fVar8 + fVar12) - fVar11)) - (fVar8 + fVar12);
    }
    fVar10 = *(float *)(pGVar6 + 0xd4);
    fVar7 = fVar7 + fVar12;
LAB_00ac4500:
    bVar3 = false;
LAB_00ac4504:
    GObject::setSize(pGVar6,fVar7,fVar10,bVar3);
    pGVar6 = *(GObject **)this;
LAB_00ac4510:
    GObject::setXMin(pGVar6,fVar8);
    return;
  case 0x13:
    fVar8 = (float)GObject::getXMin(pGVar6);
    pGVar6 = *(GObject **)this;
                    /* try { // try from 00ac4354 to 00bc439f has its CatchHandler @ 00ac4354
                       catch() { ... } // from try @ 00ac4354 with catch @ 00ac4354
                       catch() { ... } // from try @ 00ac43a4 with catch @ 00ac4354 */
    if (*param_2 == (RelationDef)0x0) {
      if (pGVar6 != *(GObject **)(param_1 + 0xa0)) {
        fVar11 = *(float *)(pGVar6 + 0xd0);
        fVar10 = *(float *)(pGVar6 + 0xd4);
        fVar7 = fVar9 * (1.0 - fVar12);
        goto LAB_00ac44fc;
      }
      if (pGVar6[0x98] == (GObject)0x0) {
        fVar10 = *(float *)(pGVar6 + 0xd4);
        fVar7 = fVar9 * (1.0 - fVar12) + *(float *)(pGVar6 + 0xd0);
      }
      else {
        fVar10 = *(float *)(pGVar6 + 0xd4);
        fVar7 = *(float *)(pGVar6 + 0x78) +
                (1.0 - fVar12) * (*(float *)(param_1 + 200) - *(float *)(param_1 + 0x80));
      }
    }
    else {
      if (pGVar6 != *(GObject **)(param_1 + 0xa0)) {
        fVar7 = *(float *)(pGVar6 + 0xd0);
        fVar10 = *(float *)(pGVar6 + 0xd4);
        fVar11 = (fVar11 + fVar9 * ((fVar8 + fVar7) - fVar11)) - (fVar8 + fVar7);
LAB_00ac44fc:
        fVar7 = fVar7 + fVar11;
        goto LAB_00ac4500;
      }
      if (pGVar6[0x98] == (GObject)0x0) {
        fVar10 = *(float *)(pGVar6 + 0xd4);
        fVar7 = fVar11 + fVar9 * (*(float *)(pGVar6 + 0xd0) - fVar11);
      }
      else {
        fVar10 = *(float *)(pGVar6 + 0xd4);
        fVar7 = ((fVar11 + *(float *)(param_1 + 200)) - fVar12 * *(float *)(param_1 + 200)) +
                fVar9 * (((*(float *)(pGVar6 + 0x78) - fVar11) - *(float *)(param_1 + 0x80)) +
                        fVar12 * *(float *)(param_1 + 0x80));
      }
    }
    goto LAB_00ac4688;
  case 0x14:
    fVar7 = (float)GObject::getYMin(pGVar6);
    if (*param_2 == (RelationDef)0x0) {
      fVar9 = -(fVar12 * fVar9);
                    /* try { // try from 00ac43a0 to 00bc43a3 has its CatchHandler @ 00ac43f0 */
    }
    else {
LAB_00ac43b8:
      fVar9 = (fVar11 + fVar9 * (fVar7 - fVar11)) - fVar7;
    }
    goto LAB_00ac4534;
  case 0x15:
                    /* try { // try from 00ac43a4 to 00bc4403 has its CatchHandler @ 00ac4354 */
    fVar7 = (float)GObject::getYMin(pGVar6);
    if (*param_2 != (RelationDef)0x0) goto LAB_00ac43b8;
    fVar9 = fVar9 * (1.0 - fVar12);
LAB_00ac4534:
    pGVar6 = *(GObject **)this;
    GObject::setSize(pGVar6,*(float *)(pGVar6 + 0xd0),*(float *)(pGVar6 + 0xd4) - fVar9,false);
    pGVar6 = *(GObject **)this;
    fVar7 = fVar7 + fVar9;
LAB_00ac4578:
    GObject::setYMin(pGVar6,fVar7);
    return;
  case 0x16:
    fVar7 = (float)GObject::getYMin(pGVar6);
    if (*param_2 == (RelationDef)0x0) {
      pGVar6 = *(GObject **)this;
      fVar9 = -(fVar12 * fVar9);
      fVar10 = *(float *)(pGVar6 + 0xd4);
    }
    else {
      pGVar6 = *(GObject **)this;
      fVar10 = *(float *)(pGVar6 + 0xd4);
                    /* catch() { ... } // from try @ 00ac43a0 with catch @ 00ac43f0 */
      fVar9 = (fVar11 + fVar9 * ((fVar7 + fVar10) - fVar11)) - (fVar7 + fVar10);
    }
    fVar8 = *(float *)(pGVar6 + 0xd0);
LAB_00ac4564:
    fVar9 = fVar9 + fVar10;
LAB_00ac4568:
    bVar3 = false;
LAB_00ac456c:
    GObject::setSize(pGVar6,fVar8,fVar9,bVar3);
    pGVar6 = *(GObject **)this;
    goto LAB_00ac4578;
  case 0x17:
                    /* try { // try from 00ac4404 to 00bc4ab7 has its CatchHandler @ 00ac4404
                       catch() { ... } // from try @ 00ac4404 with catch @ 00ac4404
                       catch() { ... } // from try @ 00ac4b38 with catch @ 00ac4404 */
    fVar7 = (float)GObject::getYMin(pGVar6);
    pGVar6 = *(GObject **)this;
    if (*param_2 == (RelationDef)0x0) {
      if (pGVar6 != *(GObject **)(param_1 + 0xa0)) {
        fVar8 = *(float *)(pGVar6 + 0xd0);
        fVar10 = *(float *)(pGVar6 + 0xd4);
        fVar9 = fVar9 * (1.0 - fVar12);
        goto LAB_00ac4564;
      }
      if (pGVar6[0x98] == (GObject)0x0) {
        fVar7 = *(float *)(pGVar6 + 0xd0);
        fVar10 = fVar9 * (1.0 - fVar12) + *(float *)(pGVar6 + 0xd4);
      }
      else {
        fVar7 = *(float *)(pGVar6 + 0xd0);
        fVar10 = *(float *)(pGVar6 + 0x7c) +
                 (1.0 - fVar12) * (*(float *)(param_1 + 0xcc) - *(float *)(param_1 + 0x84));
      }
    }
    else {
      if (pGVar6 != *(GObject **)(param_1 + 0xa0)) {
        fVar8 = *(float *)(pGVar6 + 0xd0);
        fVar12 = fVar7 + *(float *)(pGVar6 + 0xd4);
        fVar9 = *(float *)(pGVar6 + 0xd4) + ((fVar11 + fVar9 * (fVar12 - fVar11)) - fVar12);
        goto LAB_00ac4568;
      }
      if (pGVar6[0x98] == (GObject)0x0) {
        fVar7 = *(float *)(pGVar6 + 0xd0);
        fVar10 = fVar11 + fVar9 * (*(float *)(pGVar6 + 0xd4) - fVar11);
      }
      else {
        fVar7 = *(float *)(pGVar6 + 0xd0);
        fVar10 = ((fVar11 + *(float *)(param_1 + 0xcc)) - fVar12 * *(float *)(param_1 + 0xcc)) +
                 fVar9 * (((*(float *)(pGVar6 + 0x7c) - fVar11) - *(float *)(param_1 + 0x84)) +
                         fVar12 * *(float *)(param_1 + 0x84));
      }
    }
LAB_00ac4688:
    bVar3 = false;
LAB_00ac468c:
    GObject::setSize(pGVar6,fVar7,fVar10,bVar3);
    return;
  default:
    goto switchD_00ac4124_default;
  }
                    /* try { // try from 00ac4194 to 00bc41c7 has its CatchHandler @ 00ac4108 */
  fVar11 = *(float *)(pGVar6 + 0xc0);
  fVar7 = 0.5;
LAB_00ac444c:
  fVar11 = fVar9 * (fVar7 - fVar12) + fVar11;
LAB_00ac4458:
  GObject::setX(pGVar6,fVar11);
  return;
}

