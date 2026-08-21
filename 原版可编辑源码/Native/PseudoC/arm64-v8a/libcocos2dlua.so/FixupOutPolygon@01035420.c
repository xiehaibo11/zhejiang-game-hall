
/* ClipperLib::Clipper::FixupOutPolygon(ClipperLib::OutRec&) */

void __thiscall ClipperLib::Clipper::FixupOutPolygon(Clipper *this,OutRec *param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  void *pvVar16;
  
  pvVar7 = *(void **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = 0;
  plVar9 = (long *)((long)pvVar7 + 0x20);
  pvVar16 = (void *)*plVar9;
  if (pvVar16 != pvVar7) {
    pvVar6 = (void *)0x0;
    pvVar5 = pvVar7;
    do {
      pvVar7 = *(void **)((long)pvVar5 + 0x18);
      pvVar8 = pvVar5;
      if (pvVar16 == pvVar7) goto LAB_010355e4;
      lVar10 = *(long *)((long)pvVar5 + 8);
      lVar11 = *(long *)((long)pvVar7 + 8);
      if ((lVar10 == lVar11) && (*(long *)((long)pvVar5 + 0x10) == *(long *)((long)pvVar7 + 0x10)))
      {
LAB_01035474:
        *(void **)((long)pvVar16 + 0x18) = pvVar7;
        *(long *)(*(long *)((long)pvVar5 + 0x18) + 0x20) = *plVar9;
        pvVar7 = (void *)*plVar9;
        operator_delete(pvVar5);
        pvVar5 = (void *)0x0;
      }
      else {
        lVar12 = *(long *)((long)pvVar16 + 8);
        if (lVar10 == lVar12) {
          lVar13 = *(long *)((long)pvVar5 + 0x10);
          lVar14 = *(long *)((long)pvVar16 + 0x10);
          if (lVar13 == lVar14) goto LAB_01035474;
        }
        else {
          lVar14 = *(long *)((long)pvVar16 + 0x10);
          lVar13 = *(long *)((long)pvVar5 + 0x10);
        }
        lVar4 = *(long *)((long)pvVar7 + 0x10);
        lVar15 = *(long *)(*(long *)this + -0x18);
        uVar3 = SlopesEqual(lVar12,lVar14,lVar10,lVar13,lVar11,lVar4,this[lVar15 + 0x18]);
        if ((uVar3 & 1) != 0) {
          if (this[lVar15 + 0x38] != (Clipper)0x0) {
            if (((lVar12 != lVar11 || lVar14 != lVar4) && (lVar10 != lVar12 || lVar14 != lVar13)) &&
               (lVar10 != lVar11 || lVar4 != lVar13)) {
              if (lVar12 == lVar11) {
                bVar1 = lVar13 <= lVar14;
                bVar2 = SBORROW8(lVar13,lVar4);
                lVar13 = lVar13 - lVar4;
              }
              else {
                bVar1 = lVar10 <= lVar12;
                bVar2 = SBORROW8(lVar10,lVar11);
                lVar13 = lVar10 - lVar11;
              }
              if ((bool)(bVar1 ^ lVar13 < 0 != bVar2)) goto LAB_010355c8;
            }
          }
          goto LAB_01035474;
        }
LAB_010355c8:
        if (pvVar6 == pvVar5) goto LAB_010355fc;
        if (pvVar6 != (void *)0x0) {
          pvVar5 = pvVar6;
        }
      }
      plVar9 = (long *)((long)pvVar7 + 0x20);
      pvVar16 = (void *)*plVar9;
      pvVar6 = pvVar5;
      pvVar5 = pvVar7;
    } while (pvVar16 != pvVar7);
  }
  pvVar5 = (void *)0x0;
  pvVar8 = pvVar7;
  pvVar16 = pvVar7;
  if (pvVar7 != (void *)0x0) {
LAB_010355e4:
    *(undefined8 *)((long)pvVar16 + 0x18) = 0;
    do {
      pvVar16 = *(void **)((long)pvVar8 + 0x18);
      operator_delete(pvVar8);
      pvVar5 = (void *)0x0;
      pvVar8 = pvVar16;
    } while (pvVar16 != (void *)0x0);
  }
LAB_010355fc:
  *(void **)(param_1 + 0x18) = pvVar5;
  return;
}

