
/* v8::internal::compiler::AccessInfoFactory::ConsolidateElementLoad(v8::internal::compiler::ElementAccessFeedback
   const&) const */

void v8::internal::compiler::AccessInfoFactory::ConsolidateElementLoad
               (ElementAccessFeedback *param_1)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  ElementAccessFeedback *in_x1;
  undefined1 *in_x8;
  Zone *this;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ObjectRef aOStack_80 [16];
  ObjectRef aOStack_70 [16];
  
  plVar5 = (long *)ElementAccessFeedback::transition_groups(in_x1);
  if (*plVar5 == plVar5[1]) {
    *in_x8 = 0;
    in_x8[8] = 0;
  }
  else {
    uVar15 = *(undefined8 *)param_1;
    puVar6 = (undefined8 *)ElementAccessFeedback::transition_groups(in_x1);
    ObjectRef::ObjectRef(aOStack_70,uVar15,**(undefined8 **)*puVar6,0);
    uVar7 = ObjectRef::IsMap(aOStack_70);
    if ((uVar7 & 1) == 0) {
LAB_017e5ab8:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    sVar1 = MapRef::instance_type((MapRef *)aOStack_70);
    uVar3 = MapRef::elements_kind((MapRef *)aOStack_70);
    this = *(Zone **)(param_1 + 0x18);
    uVar16 = (undefined1)uVar3;
    plVar8 = (long *)ElementAccessFeedback::transition_groups(in_x1);
    plVar5 = (long *)*plVar8;
    plVar8 = (long *)plVar8[1];
    if (plVar5 == plVar8) {
      puVar6 = (undefined8 *)0x0;
      puVar20 = (undefined8 *)0x0;
    }
    else {
      puVar20 = (undefined8 *)0x0;
      puVar6 = (undefined8 *)0x0;
      puVar14 = (undefined8 *)0x0;
      do {
        puVar12 = (undefined8 *)plVar5[1];
        for (puVar10 = (undefined8 *)*plVar5; puVar10 != puVar12; puVar10 = puVar10 + 1) {
          ObjectRef::ObjectRef(aOStack_80,*(undefined8 *)param_1,*puVar10,0);
          uVar7 = ObjectRef::IsMap(aOStack_80);
          if ((uVar7 & 1) == 0) goto LAB_017e5ab8;
          sVar2 = MapRef::instance_type((MapRef *)aOStack_80);
          if ((sVar2 != sVar1) || (uVar7 = CanInlineElementAccess(aOStack_80), (uVar7 & 1) == 0))
          goto LAB_017e59e0;
          uVar4 = MapRef::elements_kind((MapRef *)aOStack_80);
          uVar17 = uVar3;
          uVar18 = uVar4;
          if ((5 < (uVar3 & 0xff)) || ((uVar3 & 1) == 0)) {
            if (((uVar4 & 0xff) < 6) && ((uVar4 & 1) != 0)) {
              uVar17 = 1;
              switch(uVar3 & 0xff) {
              case 0:
                break;
              default:
                goto switchD_017e5818_caseD_1;
              case 2:
                uVar17 = 3;
                break;
              case 4:
                uVar17 = 5;
                break;
              case 6:
                uVar17 = 7;
              }
            }
            else {
switchD_017e5818_caseD_1:
              uVar17 = uVar3;
              uVar18 = uVar4;
            }
            goto switchD_017e5818_caseD_0;
          }
          uVar18 = 1;
          switch(uVar4 & 0xff) {
          case 0:
            break;
          default:
            goto switchD_017e5818_caseD_1;
          case 2:
            uVar18 = 3;
            break;
          case 4:
            uVar18 = 5;
            break;
          case 6:
            if ((uVar3 & 0xfe) == 4) goto LAB_017e59e0;
            uVar18 = 7;
            goto LAB_017e58a4;
          }
switchD_017e5818_caseD_0:
          uVar3 = uVar17;
          if ((uVar17 & 0xff) != (uVar18 & 0xff)) {
            if (((uVar17 & 0xfe) == 4) != ((uVar18 & 0xfe) == 4)) {
LAB_017e59e0:
              *in_x8 = 0;
              in_x8[8] = 0;
              return;
            }
LAB_017e58a4:
            uVar7 = IsMoreGeneralElementsKindTransition(uVar18,uVar3);
            if ((uVar7 & 1) == 0) {
              uVar7 = IsMoreGeneralElementsKindTransition(uVar3,uVar18);
              if ((uVar7 & 1) == 0) {
                uVar18 = 0;
              }
              uVar3 = uVar18;
              if ((uVar7 & 1) == 0) goto LAB_017e59e0;
            }
          }
          uVar15 = MapRef::object((MapRef *)aOStack_80);
          if (puVar6 < puVar14) {
            *puVar6 = uVar15;
            puVar11 = puVar6;
            puVar21 = puVar20;
          }
          else {
            lVar19 = (long)puVar6 - (long)puVar20 >> 3;
            uVar7 = lVar19 + 1;
            if (uVar7 >> 0x1c != 0) goto LAB_017e5acc;
            uVar13 = (long)puVar14 - (long)puVar20 >> 2;
            if (uVar7 <= uVar13) {
              uVar7 = uVar13;
            }
            if (0x7fffffe < (ulong)((long)puVar14 - (long)puVar20 >> 3)) {
              uVar7 = 0xfffffff;
            }
            if (uVar7 == 0) {
              lVar9 = 0;
            }
            else {
              uVar13 = uVar7 * 8;
              lVar9 = *(long *)(this + 0x10);
              if (uVar13 < (ulong)(*(long *)(this + 0x18) - lVar9) ||
                  uVar13 - (*(long *)(this + 0x18) - lVar9) == 0) {
                *(ulong *)(this + 0x10) = lVar9 + uVar13;
              }
              else {
                lVar9 = Zone::NewExpand(this,uVar13);
              }
            }
            puVar11 = (undefined8 *)(lVar9 + lVar19 * 8);
            puVar14 = (undefined8 *)(lVar9 + uVar7 * 8);
            *puVar11 = uVar15;
            puVar21 = puVar11;
            while (puVar6 != puVar20) {
              puVar6 = puVar6 + -1;
              puVar21 = puVar21 + -1;
              *puVar21 = *puVar6;
            }
          }
          puVar6 = puVar11 + 1;
          puVar20 = puVar21;
        }
        uVar16 = (undefined1)uVar3;
        plVar5 = plVar5 + 4;
      } while (plVar5 != plVar8);
    }
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = (long)puVar6 - (long)puVar20;
    if (uVar7 == 0) {
      puVar10 = (undefined8 *)0x0;
      puVar12 = (undefined8 *)0x0;
      puVar14 = (undefined8 *)0x0;
    }
    else {
      if ((ulong)((long)uVar7 >> 3) >> 0x1c != 0) {
LAB_017e5acc:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar10 = *(undefined8 **)(this + 0x10);
      if ((ulong)(*(long *)(this + 0x18) - (long)puVar10) < uVar7) {
        puVar10 = (undefined8 *)Zone::NewExpand(this,uVar7);
      }
      else {
        *(ulong *)(this + 0x10) = (long)puVar10 + uVar7;
      }
      puVar14 = puVar10 + ((long)uVar7 >> 3);
      puVar12 = puVar10;
      for (puVar11 = puVar20; puVar11 != puVar6; puVar11 = puVar11 + 1) {
        *puVar12 = *puVar11;
        puVar12 = puVar12 + 1;
      }
    }
    if (puVar20 == puVar6) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!receiver_maps.empty()");
    }
    *(undefined8 **)(in_x8 + 0x18) = puVar12;
    *(undefined8 **)(in_x8 + 0x20) = puVar14;
    in_x8[8] = uVar16;
    *(undefined8 **)(in_x8 + 0x10) = puVar10;
    *(Zone **)(in_x8 + 0x28) = this;
    *(undefined8 *)(in_x8 + 0x30) = 0;
    *(undefined8 *)(in_x8 + 0x40) = 0;
    *(undefined8 *)(in_x8 + 0x48) = uVar15;
    *in_x8 = 1;
    *(undefined8 *)(in_x8 + 0x38) = 0;
  }
  return;
}

