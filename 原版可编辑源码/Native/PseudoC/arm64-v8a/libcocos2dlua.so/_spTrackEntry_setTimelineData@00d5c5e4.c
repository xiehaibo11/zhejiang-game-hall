
long * _spTrackEntry_setTimelineData(long *param_1,long *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d5c5b4 with catch @ 00d5c5f8
                        */
  if (param_2 != (long *)0x0) {
    iVar6 = *param_3;
    if (iVar6 == param_3[1]) {
      uVar7 = (uint)((float)iVar6 * 1.75);
      if ((int)uVar7 < 9) {
        uVar7 = 8;
      }
      param_3[1] = uVar7;
      pvVar3 = _spRealloc(*(void **)(param_3 + 2),(ulong)uVar7 << 3);
      iVar6 = *param_3;
      *(void **)(param_3 + 2) = pvVar3;
    }
    else {
      pvVar3 = *(void **)(param_3 + 2);
    }
    *param_3 = iVar6 + 1;
    *(long **)((long)pvVar3 + (long)iVar6 * 8) = param_2;
  }
  plVar4 = param_1;
  if (param_1[2] != 0) {
    plVar4 = (long *)_spTrackEntry_setTimelineData(param_1[2],param_1,param_3,param_4);
  }
  iVar6 = *param_3;
  if (param_2 != (long *)0x0) {
    iVar6 = iVar6 + -1;
    *param_3 = iVar6;
  }
  lVar9 = *(long *)(param_3 + 2);
  uVar7 = *(uint *)(*param_1 + 0xc);
  lVar15 = *(long *)(*param_1 + 0x10);
  lVar5 = spIntArray_setSize(param_1[0xe],(ulong)uVar7);
  puVar10 = (uint *)param_1[0xf];
  lVar5 = *(long *)(lVar5 + 8);
  *puVar10 = uVar7;
  if ((int)puVar10[1] < (int)uVar7) {
    uVar8 = (uint)((float)(int)uVar7 * 1.75);
    if ((int)uVar8 < 9) {
      uVar8 = 8;
    }
    puVar10[1] = uVar8;
    pvVar3 = _spRealloc(*(void **)(puVar10 + 2),(ulong)uVar8 << 3);
    *(void **)(puVar10 + 2) = pvVar3;
  }
  else {
    pvVar3 = *(void **)(puVar10 + 2);
  }
  if ((int)uVar7 < 1) {
    return plVar4;
  }
  uVar12 = 0;
LAB_00d5c754:
  iVar1 = spTimeline_getPropertyId(*(undefined8 *)(lVar15 + uVar12 * 8));
  iVar2 = _spAnimationState_addPropertyID(param_4,iVar1);
  uVar8 = (uint)(iVar2 != 0);
  if ((iVar2 != 0) && (param_2 != (long *)0x0)) {
    uVar8 = *(uint *)(*param_2 + 0xc);
    uVar13 = (ulong)uVar8;
    if (0 < (int)uVar8) {
      puVar11 = *(undefined8 **)(*param_2 + 0x10);
      do {
        iVar2 = spTimeline_getPropertyId(*puVar11);
        if (iVar2 == iVar1) {
          if (iVar6 < 1) goto LAB_00d5c804;
          plVar14 = *(long **)(lVar9 + (long)(iVar6 + -1) * 8);
          uVar8 = *(uint *)(*plVar14 + 0xc);
          uVar13 = (ulong)uVar8;
          if ((int)uVar8 < 1) goto LAB_00d5c7f4;
          puVar11 = *(undefined8 **)(*plVar14 + 0x10);
          goto LAB_00d5c7d8;
        }
        uVar13 = uVar13 - 1;
        puVar11 = puVar11 + 1;
      } while (uVar13 != 0);
    }
    uVar8 = 1;
  }
  goto LAB_00d5c744;
  while( true ) {
    uVar13 = uVar13 - 1;
    puVar11 = puVar11 + 1;
    if (uVar13 == 0) break;
LAB_00d5c7d8:
    iVar2 = spTimeline_getPropertyId(*puVar11);
    if (iVar2 == iVar1) goto LAB_00d5c804;
  }
LAB_00d5c7f4:
  if (0.0 < *(float *)((long)plVar14 + 100)) {
    *(undefined4 *)(lVar5 + (uVar12 & 0xffffffff) * 4) = 3;
    *(long **)((long)pvVar3 + (uVar12 & 0xffffffff) * 8) = plVar14;
    return plVar4;
  }
LAB_00d5c804:
  uVar8 = 2;
LAB_00d5c744:
  *(uint *)(lVar5 + uVar12 * 4) = uVar8;
  uVar12 = uVar12 + 1;
  if (uVar12 == uVar7) {
    return plVar4;
  }
  goto LAB_00d5c754;
}

