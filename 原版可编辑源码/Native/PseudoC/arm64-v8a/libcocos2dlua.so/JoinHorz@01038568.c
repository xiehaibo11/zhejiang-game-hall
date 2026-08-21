
/* ClipperLib::JoinHorz(ClipperLib::OutPt*, ClipperLib::OutPt*, ClipperLib::OutPt*,
   ClipperLib::OutPt*, ClipperLib::IntPoint, bool) */

undefined8 __thiscall
ClipperLib::JoinHorz
          (ClipperLib *this,long param_1,undefined4 *param_2,long param_3,long param_4,long param_6,
          byte param_7)

{
  undefined4 uVar1;
  ClipperLib *pCVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ClipperLib *pCVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ClipperLib *pCVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar9 = *(long *)(this + 8);
  lVar10 = *(long *)(param_1 + 8);
  lVar12 = *(long *)(param_2 + 2);
  lVar14 = *(long *)(param_3 + 8);
  if (lVar9 <= lVar10 == lVar12 <= lVar14) {
    return 0;
  }
  if (lVar10 < lVar9) {
    do {
      pCVar11 = this;
      this = *(ClipperLib **)(pCVar11 + 0x18);
      if ((*(long *)(this + 8) < param_4) || (*(long *)(pCVar11 + 8) < *(long *)(this + 8))) break;
    } while (*(long *)(this + 0x10) == param_6);
    if (((param_7 & 1) == 0) && (*(long *)(pCVar11 + 8) != param_4)) {
      pCVar11 = this;
    }
    pCVar2 = operator_new(0x28);
    uVar15 = *(undefined8 *)(pCVar11 + 8);
    *(undefined8 *)(pCVar2 + 0x10) = *(undefined8 *)(pCVar11 + 0x10);
    *(undefined8 *)(pCVar2 + 8) = uVar15;
    uVar1 = *(undefined4 *)pCVar11;
    *(undefined4 *)pCVar2 = uVar1;
    if ((param_7 & 1) == 0) {
      pCVar5 = pCVar11 + 0x20;
      lVar8 = *(long *)pCVar5;
      *(ClipperLib **)(pCVar2 + 0x18) = pCVar11;
      *(long *)(pCVar2 + 0x20) = lVar8;
      puVar7 = (undefined8 *)(lVar8 + 0x18);
    }
    else {
      pCVar5 = pCVar11 + 0x18;
      lVar8 = *(long *)pCVar5;
      *(long *)(pCVar2 + 0x18) = lVar8;
      *(ClipperLib **)(pCVar2 + 0x20) = pCVar11;
      puVar7 = (undefined8 *)(lVar8 + 0x20);
    }
    *puVar7 = pCVar2;
    *(ClipperLib **)pCVar5 = pCVar2;
    if ((*(long *)(pCVar2 + 8) != param_4) || (pCVar5 = pCVar2, *(long *)(pCVar2 + 0x10) != param_6)
       ) {
      *(long *)(pCVar2 + 8) = param_4;
      *(long *)(pCVar2 + 0x10) = param_6;
      pCVar5 = operator_new(0x28);
      uVar16 = *(undefined8 *)(pCVar2 + 0x10);
      uVar15 = *(undefined8 *)(pCVar2 + 8);
      *(undefined4 *)pCVar5 = uVar1;
      *(undefined8 *)(pCVar5 + 0x10) = uVar16;
      *(undefined8 *)(pCVar5 + 8) = uVar15;
      if ((param_7 & 1) == 0) goto LAB_01038764;
LAB_01038700:
      lVar8 = *(long *)(pCVar2 + 0x18);
      *(long *)(pCVar5 + 0x18) = lVar8;
      *(ClipperLib **)(pCVar5 + 0x20) = pCVar2;
      *(ClipperLib **)(lVar8 + 0x20) = pCVar5;
      *(ClipperLib **)(pCVar2 + 0x18) = pCVar5;
      pCVar11 = pCVar2;
    }
  }
  else {
    do {
      pCVar11 = this;
      this = *(ClipperLib **)(pCVar11 + 0x18);
      if ((param_4 < *(long *)(this + 8)) || (*(long *)(this + 8) < *(long *)(pCVar11 + 8))) break;
    } while (*(long *)(this + 0x10) == param_6);
    if (((param_7 & 1) != 0) && (*(long *)(pCVar11 + 8) != param_4)) {
      pCVar11 = this;
    }
    pCVar2 = operator_new(0x28);
    uVar15 = *(undefined8 *)(pCVar11 + 8);
    *(undefined8 *)(pCVar2 + 0x10) = *(undefined8 *)(pCVar11 + 0x10);
    *(undefined8 *)(pCVar2 + 8) = uVar15;
    uVar1 = *(undefined4 *)pCVar11;
    *(undefined4 *)pCVar2 = uVar1;
    if ((param_7 & 1) == 0) {
      pCVar5 = pCVar11 + 0x18;
      lVar8 = *(long *)pCVar5;
      *(long *)(pCVar2 + 0x18) = lVar8;
      *(ClipperLib **)(pCVar2 + 0x20) = pCVar11;
      puVar7 = (undefined8 *)(lVar8 + 0x20);
    }
    else {
      pCVar5 = pCVar11 + 0x20;
      lVar8 = *(long *)pCVar5;
      *(ClipperLib **)(pCVar2 + 0x18) = pCVar11;
      *(long *)(pCVar2 + 0x20) = lVar8;
      puVar7 = (undefined8 *)(lVar8 + 0x18);
    }
    *puVar7 = pCVar2;
    *(ClipperLib **)pCVar5 = pCVar2;
    if ((*(long *)(pCVar2 + 8) != param_4) || (pCVar5 = pCVar2, *(long *)(pCVar2 + 0x10) != param_6)
       ) {
      *(long *)(pCVar2 + 8) = param_4;
      *(long *)(pCVar2 + 0x10) = param_6;
      pCVar5 = operator_new(0x28);
      uVar16 = *(undefined8 *)(pCVar2 + 0x10);
      uVar15 = *(undefined8 *)(pCVar2 + 8);
      *(undefined4 *)pCVar5 = uVar1;
      *(undefined8 *)(pCVar5 + 0x10) = uVar16;
      *(undefined8 *)(pCVar5 + 8) = uVar15;
      if ((param_7 & 1) == 0) goto LAB_01038700;
LAB_01038764:
      lVar8 = *(long *)(pCVar2 + 0x20);
      *(ClipperLib **)(pCVar5 + 0x18) = pCVar2;
      *(long *)(pCVar5 + 0x20) = lVar8;
      *(ClipperLib **)(lVar8 + 0x18) = pCVar5;
      *(ClipperLib **)(pCVar2 + 0x20) = pCVar5;
      pCVar11 = pCVar2;
    }
  }
  if (lVar14 < lVar12) {
    do {
      puVar13 = param_2;
      param_2 = *(undefined4 **)(puVar13 + 6);
      if ((*(long *)(param_2 + 2) < param_4) || (*(long *)(puVar13 + 2) < *(long *)(param_2 + 2)))
      break;
    } while (*(long *)(param_2 + 4) == param_6);
    if (((param_7 & 1) == 0) && (*(long *)(puVar13 + 2) != param_4)) {
      puVar13 = param_2;
    }
    puVar4 = operator_new(0x28);
    uVar15 = *(undefined8 *)(puVar13 + 2);
    *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar13 + 4);
    *(undefined8 *)(puVar4 + 2) = uVar15;
    uVar1 = *puVar13;
    *puVar4 = uVar1;
    if ((param_7 & 1) == 0) {
      plVar6 = (long *)(puVar13 + 8);
      lVar12 = *plVar6;
      *(undefined4 **)(puVar4 + 6) = puVar13;
      *(long *)(puVar4 + 8) = lVar12;
      puVar7 = (undefined8 *)(lVar12 + 0x18);
    }
    else {
      plVar6 = (long *)(puVar13 + 6);
      lVar12 = *plVar6;
      *(long *)(puVar4 + 6) = lVar12;
      *(undefined4 **)(puVar4 + 8) = puVar13;
      puVar7 = (undefined8 *)(lVar12 + 0x20);
    }
    *puVar7 = puVar4;
    *plVar6 = (long)puVar4;
    if ((*(long *)(puVar4 + 2) == param_4) && (puVar3 = puVar4, *(long *)(puVar4 + 4) == param_6))
    goto joined_r0x01038994;
    *(long *)(puVar4 + 2) = param_4;
    *(long *)(puVar4 + 4) = param_6;
    puVar3 = operator_new(0x28);
    uVar16 = *(undefined8 *)(puVar4 + 4);
    uVar15 = *(undefined8 *)(puVar4 + 2);
    *puVar3 = uVar1;
    *(undefined8 *)(puVar3 + 4) = uVar16;
    *(undefined8 *)(puVar3 + 2) = uVar15;
    if ((param_7 & 1) == 0) {
      lVar12 = *(long *)(puVar4 + 8);
      *(undefined4 **)(puVar3 + 6) = puVar4;
      *(long *)(puVar3 + 8) = lVar12;
      *(undefined4 **)(lVar12 + 0x18) = puVar3;
      *(undefined4 **)(puVar4 + 8) = puVar3;
      if (lVar9 <= lVar10) goto LAB_01038998;
      goto LAB_01038918;
    }
    lVar12 = *(long *)(puVar4 + 6);
    *(long *)(puVar3 + 6) = lVar12;
    *(undefined4 **)(puVar3 + 8) = puVar4;
                    /* catch() { ... } // from try @ 01038914 with catch @ 01038960 */
    *(undefined4 **)(lVar12 + 0x20) = puVar3;
    *(undefined4 **)(puVar4 + 6) = puVar3;
    if (lVar9 <= lVar10) goto LAB_01038918;
  }
  else {
    do {
      puVar13 = param_2;
      param_2 = *(undefined4 **)(puVar13 + 6);
      if ((param_4 < *(long *)(param_2 + 2)) || (*(long *)(param_2 + 2) < *(long *)(puVar13 + 2)))
      break;
    } while (*(long *)(param_2 + 4) == param_6);
    if (((param_7 & 1) != 0) && (*(long *)(puVar13 + 2) != param_4)) {
      puVar13 = param_2;
    }
    puVar3 = operator_new(0x28);
    uVar15 = *(undefined8 *)(puVar13 + 2);
    *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar13 + 4);
    *(undefined8 *)(puVar3 + 2) = uVar15;
    uVar1 = *puVar13;
    *puVar3 = uVar1;
    if ((param_7 & 1) == 0) {
      plVar6 = (long *)(puVar13 + 6);
      lVar12 = *plVar6;
      *(long *)(puVar3 + 6) = lVar12;
      *(undefined4 **)(puVar3 + 8) = puVar13;
      puVar7 = (undefined8 *)(lVar12 + 0x20);
    }
    else {
      plVar6 = (long *)(puVar13 + 8);
      lVar12 = *plVar6;
      *(undefined4 **)(puVar3 + 6) = puVar13;
      *(long *)(puVar3 + 8) = lVar12;
      puVar7 = (undefined8 *)(lVar12 + 0x18);
    }
    *puVar7 = puVar3;
    *plVar6 = (long)puVar3;
                    /* try { // try from 01038880 to 01138913 has its CatchHandler @ 01038880
                       catch() { ... } // from try @ 01038880 with catch @ 01038880
                       catch() { ... } // from try @ 0103891c with catch @ 01038880 */
    if ((*(long *)(puVar3 + 2) != param_4) || (*(long *)(puVar3 + 4) != param_6)) {
      *(long *)(puVar3 + 2) = param_4;
      *(long *)(puVar3 + 4) = param_6;
      puVar4 = operator_new(0x28);
      uVar16 = *(undefined8 *)(puVar3 + 4);
      uVar15 = *(undefined8 *)(puVar3 + 2);
      *puVar4 = uVar1;
      *(undefined8 *)(puVar4 + 4) = uVar16;
      *(undefined8 *)(puVar4 + 2) = uVar15;
      puVar13 = puVar3;
      if ((param_7 & 1) == 0) {
                    /* try { // try from 01038974 to 011389cb has its CatchHandler @ 01038974
                       catch() { ... } // from try @ 01038974 with catch @ 01038974
                       catch() { ... } // from try @ 01038a04 with catch @ 01038974 */
        lVar12 = *(long *)(puVar3 + 6);
        *(long *)(puVar4 + 6) = lVar12;
        *(undefined4 **)(puVar4 + 8) = puVar3;
        *(undefined4 **)(lVar12 + 0x20) = puVar4;
        *(undefined4 **)(puVar3 + 6) = puVar4;
        puVar3 = puVar4;
      }
      else {
        lVar12 = *(long *)(puVar3 + 8);
        *(undefined4 **)(puVar4 + 6) = puVar3;
        *(long *)(puVar4 + 8) = lVar12;
        *(undefined4 **)(lVar12 + 0x18) = puVar4;
        *(undefined4 **)(puVar3 + 8) = puVar4;
        puVar3 = puVar4;
      }
    }
joined_r0x01038994:
    puVar4 = puVar13;
    if (((lVar9 <= lVar10 ^ param_7) & 1) == 0) {
LAB_01038918:
      *(undefined4 **)(pCVar11 + 0x20) = puVar4;
                    /* try { // try from 0103891c to 01138973 has its CatchHandler @ 01038880 */
      *(ClipperLib **)(puVar4 + 6) = pCVar11;
      *(undefined4 **)(pCVar5 + 0x18) = puVar3;
      puVar7 = (undefined8 *)(puVar3 + 8);
      goto LAB_010389a8;
    }
  }
LAB_01038998:
  puVar7 = (undefined8 *)(puVar3 + 6);
  *(undefined4 **)(pCVar11 + 0x18) = puVar4;
  *(ClipperLib **)(puVar4 + 8) = pCVar11;
  *(undefined4 **)(pCVar5 + 0x20) = puVar3;
LAB_010389a8:
  *puVar7 = pCVar5;
                    /* try { // try from 010389cc to 011389d3 has its CatchHandler @ 01038a8c */
  return 1;
}

