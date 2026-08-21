
/* ClipperLib::Clipper::JoinPoints(ClipperLib::Join*, ClipperLib::OutRec*, ClipperLib::OutRec*) */

ulong __thiscall
ClipperLib::Clipper::JoinPoints(Clipper *this,Join *param_1,OutRec *param_2,OutRec *param_3)

{
  long *plVar1;
  bool bVar2;
  undefined4 *puVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined4 *puVar17;
  int local_8c;
  long local_80;
  undefined8 uStack_78;
  
                    /* try { // try from 010389fc to 01138a03 has its CatchHandler @ 01038a7c */
                    /* try { // try from 01038a04 to 01138a9f has its CatchHandler @ 01038974 */
  puVar11 = *(undefined4 **)param_1;
  puVar15 = *(undefined4 **)(param_1 + 8);
  lVar12 = *(long *)(param_1 + 0x18);
  lVar10 = *(long *)(puVar11 + 4);
  plVar1 = (long *)(puVar11 + 2);
  if (lVar10 == lVar12) {
    lVar12 = *(long *)(param_1 + 0x10);
    puVar7 = puVar11;
    if (((lVar12 == *plVar1) && (plVar13 = (long *)(puVar15 + 2), lVar12 == *plVar13)) &&
       (lVar10 == *(long *)(puVar15 + 4))) {
      do {
        puVar7 = *(undefined4 **)(puVar7 + 6);
        puVar3 = puVar11;
                    /* catch() { ... } // from try @ 010389fc with catch @ 01038a7c */
        if ((puVar7 == puVar11) || (puVar3 = puVar7, *(long *)(puVar7 + 2) != lVar12)) break;
                    /* catch() { ... } // from try @ 010389cc with catch @ 01038a8c */
      } while (*(long *)(puVar7 + 4) == lVar10);
      lVar14 = *(long *)(puVar3 + 4);
      puVar7 = puVar15;
      do {
        puVar7 = *(undefined4 **)(puVar7 + 6);
        puVar3 = puVar15;
        if ((puVar7 == puVar15) || (puVar3 = puVar7, *(long *)(puVar7 + 2) != lVar12)) break;
      } while (*(long *)(puVar7 + 4) == lVar10);
      if (lVar10 < lVar14 == *(long *)(puVar3 + 4) <= lVar10) {
        puVar7 = operator_new(0x28);
        lVar12 = *plVar1;
        *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar11 + 4);
        *(long *)(puVar7 + 2) = lVar12;
        *puVar7 = *puVar11;
        if (lVar10 < lVar14) {
          lVar10 = *(long *)(puVar11 + 8);
          *(undefined4 **)(puVar7 + 6) = puVar11;
          *(long *)(puVar7 + 8) = lVar10;
          *(undefined4 **)(lVar10 + 0x18) = puVar7;
          *(undefined4 **)(puVar11 + 8) = puVar7;
          puVar3 = operator_new(0x28);
          lVar10 = *plVar13;
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar15 + 4);
          *(long *)(puVar3 + 2) = lVar10;
          *puVar3 = *puVar15;
          lVar10 = *(long *)(puVar15 + 6);
          *(long *)(puVar3 + 6) = lVar10;
          *(undefined4 **)(lVar10 + 0x20) = puVar3;
          *(undefined4 **)(puVar11 + 8) = puVar15;
          *(undefined4 **)(puVar15 + 6) = puVar11;
          *(undefined4 **)(puVar7 + 6) = puVar3;
          *(undefined4 **)(puVar3 + 8) = puVar7;
          *(undefined4 **)(param_1 + 8) = puVar7;
        }
        else {
          lVar10 = *(long *)(puVar11 + 6);
          *(long *)(puVar7 + 6) = lVar10;
          *(undefined4 **)(puVar7 + 8) = puVar11;
          *(undefined4 **)(lVar10 + 0x20) = puVar7;
          *(undefined4 **)(puVar11 + 6) = puVar7;
          puVar3 = operator_new(0x28);
          lVar10 = *plVar13;
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar15 + 4);
          *(long *)(puVar3 + 2) = lVar10;
          *puVar3 = *puVar15;
          lVar10 = *(long *)(puVar15 + 8);
          *(long *)(puVar3 + 8) = lVar10;
          *(undefined4 **)(lVar10 + 0x18) = puVar3;
          *(undefined4 **)(puVar11 + 6) = puVar15;
          *(undefined4 **)(puVar15 + 8) = puVar11;
          *(undefined4 **)(puVar7 + 8) = puVar3;
          *(undefined4 **)(puVar3 + 6) = puVar7;
          *(undefined4 **)(param_1 + 8) = puVar7;
        }
        goto LAB_010390cc;
      }
    }
    else {
      do {
        puVar3 = puVar7;
        puVar7 = *(undefined4 **)(puVar3 + 8);
        if ((puVar7 == puVar15) || (puVar7 == puVar11)) break;
      } while (*(long *)(puVar7 + 4) == lVar10);
      do {
        puVar7 = puVar11;
        puVar11 = *(undefined4 **)(puVar7 + 6);
        if ((puVar11 == puVar15) || (puVar11 == puVar3)) break;
        bVar2 = *(long *)(puVar11 + 4) == lVar10;
        lVar10 = *(long *)(puVar11 + 4);
      } while (bVar2);
                    /* try { // try from 01038ae8 to 01138b2b has its CatchHandler @ 01038ae8
                       catch() { ... } // from try @ 01038ae8 with catch @ 01038ae8
                       catch() { ... } // from try @ 01038b30 with catch @ 01038ae8 */
      uVar5 = 0;
      if ((puVar11 == puVar3) || (puVar11 == puVar15)) goto LAB_01038f3c;
      lVar10 = *(long *)(puVar15 + 4);
      puVar11 = puVar15;
      do {
        puVar17 = puVar11;
        puVar11 = *(undefined4 **)(puVar17 + 8);
        if ((puVar11 == puVar7) || (puVar11 == puVar15)) break;
      } while (*(long *)(puVar11 + 4) == lVar10);
      do {
        puVar11 = puVar15;
                    /* try { // try from 01038b2c to 01138b2f has its CatchHandler @ 01038b48 */
        puVar15 = *(undefined4 **)(puVar11 + 6);
                    /* try { // try from 01038b30 to 01138b5b has its CatchHandler @ 01038ae8 */
        if ((puVar15 == puVar3) || (puVar15 == puVar17)) break;
                    /* catch() { ... } // from try @ 01038b2c with catch @ 01038b48 */
        bVar2 = *(long *)(puVar15 + 4) == lVar10;
        lVar10 = *(long *)(puVar15 + 4);
      } while (bVar2);
      uVar5 = 0;
      if ((puVar15 == puVar17) || (puVar15 == puVar3)) goto LAB_01038f3c;
      lVar8 = *(long *)(puVar3 + 2);
      lVar14 = *(long *)(puVar7 + 2);
      lVar10 = *(long *)(puVar17 + 2);
      lVar12 = *(long *)(puVar11 + 2);
      if (lVar8 < lVar14) {
        if (lVar10 < lVar12) {
          if (lVar10 <= lVar8) {
            lVar10 = lVar8;
          }
          if (lVar14 <= lVar12) {
            lVar12 = lVar14;
          }
          if (lVar10 < lVar12) {
LAB_01039054:
            *(undefined4 **)param_1 = puVar3;
            *(undefined4 **)(param_1 + 8) = puVar17;
            uVar4 = JoinHorz();
            return uVar4;
          }
        }
        else {
          if (lVar12 <= lVar8) {
            lVar12 = lVar8;
          }
          if (lVar14 <= lVar10) {
            lVar10 = lVar14;
          }
          if (lVar12 < lVar10) goto LAB_01039054;
        }
      }
      else if (lVar10 < lVar12) {
        if (lVar10 <= lVar14) {
          lVar10 = lVar14;
        }
        if (lVar8 <= lVar12) {
          lVar12 = lVar8;
        }
        if (lVar10 < lVar12) goto LAB_01039054;
      }
      else {
        if (lVar12 <= lVar14) {
          lVar12 = lVar14;
        }
        if (lVar8 <= lVar10) {
          lVar10 = lVar8;
        }
        if (lVar12 < lVar10) goto LAB_01039054;
      }
    }
  }
  else {
    puVar7 = *(undefined4 **)(puVar11 + 6);
    lVar9 = *(long *)(puVar11 + 2);
    lVar16 = *(long *)(puVar7 + 2);
    lVar14 = lVar9;
    lVar8 = lVar9;
    while (((lVar16 == lVar8 && (lVar14 = lVar16, puVar7 != puVar11)) &&
           (*(long *)(puVar7 + 4) == lVar10))) {
      puVar7 = *(undefined4 **)(puVar7 + 6);
      lVar8 = *(long *)(puVar7 + 2);
    }
    puVar3 = puVar11;
    if (*(long *)(puVar7 + 4) <= lVar10) {
      uStack_78 = *(undefined8 *)(param_1 + 0x10);
      local_80 = *(long *)(*(long *)this + -0x18);
      uVar4 = SlopesEqual(lVar9,lVar10,*(undefined8 *)(puVar7 + 2),*(long *)(puVar7 + 4),uStack_78,
                          lVar12,this[local_80 + 0x18]);
      if ((uVar4 & 1) == 0) goto LAB_01038c64;
      local_8c = 0;
LAB_01038cc8:
      plVar13 = (long *)(puVar15 + 2);
      lVar16 = *plVar13;
      lVar10 = *(long *)(puVar15 + 4);
      puVar3 = *(undefined4 **)(puVar15 + 6);
      lVar9 = *(long *)(puVar3 + 2);
      lVar14 = lVar16;
      lVar8 = lVar16;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01038c94 with catch @ 01038cf0
                        */
      while (((lVar9 == lVar8 && (lVar14 = lVar9, puVar3 != puVar15)) &&
             (*(long *)(puVar3 + 4) == lVar10))) {
        puVar3 = *(undefined4 **)(puVar3 + 6);
        lVar8 = *(long *)(puVar3 + 2);
      }
      puVar17 = puVar15;
                    /* catch() { ... } // from try @ 01038d70 with catch @ 01038d44 */
      if ((lVar10 < *(long *)(puVar3 + 4)) ||
         (uVar4 = SlopesEqual(lVar16,lVar10,*(undefined8 *)(puVar3 + 2),*(long *)(puVar3 + 4),
                              uStack_78,lVar12,this[local_80 + 0x18]), (uVar4 & 1) == 0)) {
        do {
          puVar3 = *(undefined4 **)(puVar17 + 8);
          lVar8 = *(long *)(puVar3 + 4);
                    /* try { // try from 01038d68 to 01138d6f has its CatchHandler @ 01038dcc */
          puVar17 = puVar3;
        } while ((*(long *)(puVar3 + 2) == lVar14 && puVar3 != puVar15) && lVar8 == lVar10);
                    /* try { // try from 01038d70 to 01138de7 has its CatchHandler @ 01038d44 */
        if ((lVar10 < lVar8) ||
           (uVar4 = SlopesEqual(lVar16,lVar10,*(long *)(puVar3 + 2),lVar8,uStack_78,lVar12,
                                this[local_80 + 0x18]), (uVar4 & 1) == 0)) goto LAB_01038f38;
        iVar6 = 1;
      }
      else {
        iVar6 = 0;
      }
      uVar5 = 0;
                    /* catch() { ... } // from try @ 01038d68 with catch @ 01038dcc */
      if ((((puVar7 == puVar3) || (puVar7 == puVar11)) || (puVar3 == puVar15)) ||
         ((param_2 == param_3 && (uVar5 = 0, local_8c == iVar6)))) goto LAB_01038f3c;
      puVar7 = operator_new(0x28);
      lVar10 = *plVar1;
      *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar11 + 4);
      *(long *)(puVar7 + 2) = lVar10;
      *puVar7 = *puVar11;
      if (local_8c == 0) {
        lVar10 = *(long *)(puVar11 + 6);
        *(long *)(puVar7 + 6) = lVar10;
        *(undefined4 **)(puVar7 + 8) = puVar11;
        *(undefined4 **)(lVar10 + 0x20) = puVar7;
        *(undefined4 **)(puVar11 + 6) = puVar7;
        puVar3 = operator_new(0x28);
        lVar10 = *plVar13;
        *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar15 + 4);
        *(long *)(puVar3 + 2) = lVar10;
        *puVar3 = *puVar15;
        lVar10 = *(long *)(puVar15 + 8);
        *(long *)(puVar3 + 8) = lVar10;
        *(undefined4 **)(lVar10 + 0x18) = puVar3;
        *(undefined4 **)(puVar11 + 6) = puVar15;
        *(undefined4 **)(puVar15 + 8) = puVar11;
        *(undefined4 **)(puVar7 + 8) = puVar3;
        *(undefined4 **)(puVar3 + 6) = puVar7;
      }
      else {
        lVar10 = *(long *)(puVar11 + 8);
        *(undefined4 **)(puVar7 + 6) = puVar11;
        *(long *)(puVar7 + 8) = lVar10;
        *(undefined4 **)(lVar10 + 0x18) = puVar7;
        *(undefined4 **)(puVar11 + 8) = puVar7;
        puVar3 = operator_new(0x28);
        lVar10 = *plVar13;
        *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar15 + 4);
        *(long *)(puVar3 + 2) = lVar10;
        *puVar3 = *puVar15;
        lVar10 = *(long *)(puVar15 + 6);
        *(long *)(puVar3 + 6) = lVar10;
        *(undefined4 **)(lVar10 + 0x20) = puVar3;
        *(undefined4 **)(puVar11 + 8) = puVar15;
        *(undefined4 **)(puVar15 + 6) = puVar11;
        *(undefined4 **)(puVar7 + 6) = puVar3;
        *(undefined4 **)(puVar3 + 8) = puVar7;
      }
      *(undefined4 **)(param_1 + 8) = puVar7;
LAB_010390cc:
      uVar5 = 1;
      goto LAB_01038f3c;
    }
LAB_01038c64:
    do {
      puVar7 = *(undefined4 **)(puVar3 + 8);
      lVar8 = *(long *)(puVar7 + 4);
      puVar3 = puVar7;
    } while ((*(long *)(puVar7 + 2) == lVar14 && puVar7 != puVar11) && lVar8 == lVar10);
    if (lVar8 <= lVar10) {
      uStack_78 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 01038c94 to 01138c9b has its CatchHandler @ 01038cf0 */
      local_80 = *(long *)(*(long *)this + -0x18);
      uVar4 = SlopesEqual(lVar9,lVar10,*(long *)(puVar7 + 2),lVar8,uStack_78,lVar12,
                          this[local_80 + 0x18]);
      if ((uVar4 & 1) != 0) {
                    /* try { // try from 01038cb4 to 01138cb7 has its CatchHandler @ 01038d0c */
        local_8c = 1;
        goto LAB_01038cc8;
      }
    }
  }
LAB_01038f38:
  uVar5 = 0;
LAB_01038f3c:
  return (ulong)uVar5;
}

