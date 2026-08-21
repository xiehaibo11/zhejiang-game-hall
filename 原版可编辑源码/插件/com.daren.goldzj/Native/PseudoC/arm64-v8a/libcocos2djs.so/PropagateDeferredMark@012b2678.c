
/* v8::internal::compiler::Schedule::PropagateDeferredMark() */

void __thiscall v8::internal::compiler::Schedule::PropagateDeferredMark(Schedule *this)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  bool bVar8;
  ulong *puVar9;
  ulong uVar10;
  uint in_w6;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  bool bVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  int unaff_w20;
  
  do {
    plVar13 = *(long **)(this + 8);
    plVar3 = *(long **)(this + 0x10);
    if (plVar13 == plVar3) {
      return;
    }
    bVar14 = true;
    do {
      lVar15 = *plVar13;
      if (*(char *)(lVar15 + 8) == '\0') {
        plVar16 = *(long **)(lVar15 + 0x80);
        plVar4 = *(long **)(lVar15 + 0x88);
        bVar8 = (long)plVar4 - (long)plVar16 != 0;
        if (plVar16 != plVar4) {
          uVar2 = (((long)plVar4 - (long)plVar16) - 8U >> 3) + 1;
          if (1 < uVar2) {
            uVar17 = uVar2 & 0x3ffffffffffffffe;
            puVar9 = (ulong *)(plVar16 + 1);
            plVar16 = plVar16 + uVar17;
            bVar7 = 1;
            uVar10 = uVar17;
            do {
              uVar12 = puVar9[-1];
              uVar18 = *puVar9;
              cVar5 = *(char *)(uVar12 + 8);
              cVar6 = *(char *)(uVar18 + 8);
              if (cVar5 == '\0') {
                in_w6 = *(uint *)(uVar12 + 4);
                if (cVar6 != '\0') goto LAB_012b2744;
LAB_012b2758:
                uVar12 = (ulong)*(uint *)(uVar18 + 4);
                if (cVar5 != '\0') goto LAB_012b2748;
LAB_012b2760:
                iVar11 = (int)uVar12;
                uVar18 = (ulong)*(uint *)(lVar15 + 4);
              }
              else {
                if (cVar6 == '\0') goto LAB_012b2758;
LAB_012b2744:
                if (cVar5 == '\0') goto LAB_012b2760;
LAB_012b2748:
                iVar11 = (int)uVar12;
              }
              if (cVar6 == '\0') {
                unaff_w20 = *(int *)(lVar15 + 4);
              }
              bVar1 = (int)uVar18 <= (int)in_w6;
              in_w6 = (uint)bVar1;
              bVar8 = (bool)(bVar8 & (bVar1 || cVar5 != '\0'));
              uVar10 = uVar10 - 2;
              bVar7 = bVar7 & (unaff_w20 <= iVar11 || cVar6 != '\0');
              puVar9 = puVar9 + 2;
            } while (uVar10 != 0);
            bVar8 = (bool)(bVar7 & bVar8);
            if (uVar2 == uVar17) goto LAB_012b27b0;
          }
          do {
            if (*(char *)(*plVar16 + 8) == '\0') {
              bVar8 = (bool)(bVar8 & *(int *)(lVar15 + 4) <= *(int *)(*plVar16 + 4));
            }
            plVar16 = plVar16 + 1;
          } while (plVar4 != plVar16);
        }
LAB_012b27b0:
        if (bVar8) {
          bVar14 = false;
          *(undefined1 *)(lVar15 + 8) = 1;
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar3);
    if (bVar14) {
      return;
    }
  } while( true );
}

