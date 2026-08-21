
/* fairygui::FUIRichText::formarRenderers() */

void __thiscall fairygui::FUIRichText::formarRenderers(FUIRichText *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  Size *pSVar4;
  float *pfVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 *puVar8;
  vector *pvVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  vector *pvVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_a0;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  pvVar9 = *(vector **)(this + 0x328);
  pvVar13 = *(vector **)(this + 0x330);
  if (pvVar9 == pvVar13) {
    fVar17 = 0.0;
    fVar21 = 2.0;
LAB_00aa8eb8:
    fVar16 = fVar17;
    if (((1 < *(int *)(this + 0x354)) ||
        ((*(int *)(this + 0x38c) != 0 && (*(int *)(this + 0x358) != 0)))) &&
       (fVar16 = *(float *)(this + 0x344), *(float *)(this + 0x344) <= fVar17)) {
      fVar16 = fVar17;
    }
  }
  else {
    fVar16 = 2.0;
    fVar17 = 0.0;
    fVar21 = 2.0;
    do {
      fVar19 = fVar16;
      if (fVar21 != 2.0) {
        fVar19 = fVar21 + (float)(*(int *)(this + 900) + -3);
      }
      puVar8 = *(undefined8 **)pvVar9;
      puVar11 = *(undefined8 **)(pvVar9 + 8);
      fVar20 = fVar16;
      if (puVar8 == puVar11) {
        fVar21 = fVar19 + 0.0;
      }
      else {
        fVar22 = 0.0;
        fVar23 = 0.0;
        do {
          lVar2 = (**(code **)(*(long *)*puVar8 + 0x2d8))();
          lVar3 = (**(code **)(*(long *)*puVar8 + 0x168))((long *)*puVar8);
          if (fVar22 < *(float *)(lVar3 + 4)) {
            lVar3 = (**(code **)(*(long *)*puVar8 + 0x168))();
            fVar22 = *(float *)(lVar3 + 4);
          }
          if ((*(long *)(lVar2 + 0x88) == 0) &&
             (lVar2 = (**(code **)(*(long *)*puVar8 + 0x168))(), fVar23 < *(float *)(lVar2 + 4))) {
            lVar2 = (**(code **)(*(long *)*puVar8 + 0x168))();
            fVar23 = *(float *)(lVar2 + 4);
          }
          puVar8 = puVar8 + 1;
        } while (puVar11 != puVar8);
        puVar8 = *(undefined8 **)(pvVar9 + 8);
        fVar21 = fVar19 + fVar22;
        if (*(undefined8 **)pvVar9 != puVar8) {
          puVar11 = *(undefined8 **)pvVar9;
          fVar20 = 2.0;
          do {
            lVar2 = (**(code **)(*(long *)*puVar11 + 0x2d8))();
            if (*(long *)(lVar2 + 0x88) == 0) {
              (**(code **)(*(long *)*puVar11 + 200))
                        (fVar20,(*(float *)(this + 0x348) - fVar21) +
                                (float)(int)((fVar22 - fVar23) * 0.5));
              pfVar5 = (float *)(**(code **)(*(long *)*puVar11 + 0x168))();
              fVar20 = fVar20 + *pfVar5;
            }
            else {
              pSVar4 = (Size *)(**(code **)(*(long *)*puVar11 + 0x168))();
              cocos2d::Size::Size((Size *)&local_a0,pSVar4);
              plVar12 = (long *)*puVar11;
              fVar19 = fVar22 - local_a0._4_4_;
              pfVar5 = (float *)(**(code **)(*plVar12 + 0x150))(plVar12);
              fVar18 = *(float *)(this + 0x348);
              fVar15 = *pfVar5 * (float)local_a0;
              lVar2 = (**(code **)(*(long *)*puVar11 + 0x150))((long *)*puVar11);
              (**(code **)(*plVar12 + 200))
                        (fVar20 + 2.0 + fVar15,
                         (fVar18 - fVar21) + (float)(int)(fVar19 * 0.5) +
                         *(float *)(lVar2 + 4) * local_a0._4_4_,plVar12);
              fVar20 = fVar20 + 2.0 + (float)local_a0 + 2.0;
            }
            puVar6 = puVar11 + 1;
            (**(code **)(*(long *)this + 0x210))(this,*puVar11,1);
            puVar11 = puVar6;
          } while (puVar8 != puVar6);
        }
      }
      fVar20 = fVar20 + 2.0;
      fVar19 = fVar20;
      if (fVar20 <= fVar17) {
        fVar19 = fVar17;
      }
      fVar17 = fVar19;
      if (*(int *)(this + 0x358) != 0) {
        doHorizontalAlignment(this,pvVar9,fVar20);
      }
      pvVar9 = pvVar9 + 0x18;
    } while (pvVar9 != pvVar13);
    fVar16 = 0.0;
    if (fVar17 != 4.0) goto LAB_00aa8eb8;
  }
  fVar17 = fVar21 + 2.0;
  if (fVar21 == 2.0) {
    fVar17 = 0.0;
  }
  cocos2d::Size::Size((Size *)&local_a0,fVar16,fVar17);
  (**(code **)(*(long *)this + 0x160))(this,&local_a0);
  fVar21 = *(float *)(this + 0x348);
  if (*(int *)(this + 0x358) == 3) {
    *(undefined4 *)(this + 0x348) = *(undefined4 *)(this + 0x84);
  }
  else if (*(int *)(this + 0x358) == 0) {
    cocos2d::Size::operator=((Size *)(this + 0x344),(Size *)(this + 0x80));
  }
  fVar21 = *(float *)(this + 0x84) - fVar21;
  if (*(int *)(this + 0x390) == 2) {
    fVar17 = *(float *)(this + 0x348) - fVar17;
  }
  else {
    if (*(int *)(this + 0x390) != 1) goto LAB_00aa8f84;
    fVar17 = (float)(int)((*(float *)(this + 0x348) - fVar17) * 0.5);
  }
  fVar21 = fVar21 - fVar17;
LAB_00aa8f84:
  if (fVar21 != 0.0) {
    plVar14 = *(long **)(this + 0x330);
    for (plVar12 = *(long **)(this + 0x328); plVar12 != plVar14; plVar12 = plVar12 + 3) {
      puVar11 = (undefined8 *)plVar12[1];
      for (puVar8 = (undefined8 *)*plVar12; puVar8 != puVar11; puVar8 = puVar8 + 1) {
        plVar10 = (long *)*puVar8;
        puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0xb0))(plVar10);
        local_a0 = CONCAT44((float)((ulong)*puVar6 >> 0x20) + fVar21,(float)*puVar6 + 0.0);
        (**(code **)(*plVar10 + 0x98))(plVar10,&local_a0);
      }
    }
  }
  puVar11 = *(undefined8 **)(this + 0x328);
  puVar8 = *(undefined8 **)(this + 0x330);
  if (puVar8 != puVar11) {
    pvVar7 = (void *)puVar8[-3];
    puVar6 = puVar8 + -3;
    while( true ) {
      if (pvVar7 != (void *)0x0) {
        puVar8[-2] = pvVar7;
        operator_delete(pvVar7);
      }
      if (puVar11 == puVar6) break;
      pvVar7 = (void *)puVar6[-3];
      puVar8 = puVar6;
      puVar6 = puVar6 + -3;
    }
  }
  *(undefined8 **)(this + 0x330) = puVar11;
  if (*(long *)(lVar1 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

