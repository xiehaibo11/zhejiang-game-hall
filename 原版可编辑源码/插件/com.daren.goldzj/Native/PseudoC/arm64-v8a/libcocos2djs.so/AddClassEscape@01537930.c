
/* v8::internal::CharacterRange::AddClassEscape(char,
   v8::internal::ZoneList<v8::internal::CharacterRange>*, bool, v8::internal::Zone*) */

void v8::internal::CharacterRange::AddClassEscape
               (char param_1,ZoneList *param_2,bool param_3,Zone *param_4)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  ZoneList *pZVar4;
  ZoneList *pZVar5;
  ZoneList *pZVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  void *pvVar11;
  ulong uVar12;
  long lVar13;
  
  if ((param_3) && ((byte)(param_1 | 0x20U) == 0x77)) {
    pZVar4 = *(ZoneList **)(param_4 + 0x10);
    lVar13 = *(long *)(param_4 + 0x18);
    if ((ulong)(lVar13 - (long)pZVar4) < 0x10) {
      pZVar4 = (ZoneList *)Zone::NewExpand(param_4,0x10);
      pZVar5 = *(ZoneList **)(param_4 + 0x10);
      lVar13 = *(long *)(param_4 + 0x18);
    }
    else {
      pZVar5 = pZVar4 + 0x10;
      *(ZoneList **)(param_4 + 0x10) = pZVar5;
    }
    if ((ulong)(lVar13 - (long)pZVar5) < 0x10) {
      pZVar5 = (ZoneList *)Zone::NewExpand(param_4,0x10);
    }
    else {
      *(ZoneList **)(param_4 + 0x10) = pZVar5 + 0x10;
    }
    uVar10 = 0;
    uVar12 = 0;
    *(ZoneList **)pZVar4 = pZVar5;
    uVar8 = 2;
    *(undefined8 *)(pZVar4 + 8) = 2;
    while( true ) {
      uVar3 = (&DAT_01a4b180)[uVar12];
      iVar9 = (&DAT_01a4b184)[uVar12];
      if ((int)uVar10 < (int)uVar8) {
        pvVar11 = *(void **)pZVar4;
      }
      else {
        pvVar11 = *(void **)(param_4 + 0x10);
        uVar2 = uVar8 << 1 | 1;
        uVar7 = -(ulong)((uVar8 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar2 << 3;
        if ((ulong)(*(long *)(param_4 + 0x18) - (long)pvVar11) < uVar7) {
          pvVar11 = (void *)Zone::NewExpand(param_4,uVar7);
        }
        else {
          *(ulong *)(param_4 + 0x10) = (long)pvVar11 + uVar7;
        }
        uVar10 = *(uint *)(pZVar4 + 0xc);
        if (0 < (int)uVar10) {
          MemCopy(pvVar11,*(void **)pZVar4,(ulong)uVar10 << 3);
          uVar10 = *(uint *)(pZVar4 + 0xc);
        }
        *(void **)pZVar4 = pvVar11;
        *(uint *)(pZVar4 + 8) = uVar2;
      }
      uVar12 = uVar12 + 2;
      *(uint *)(pZVar4 + 0xc) = uVar10 + 1;
      *(ulong *)((long)pvVar11 + (long)(int)uVar10 * 8) = CONCAT44(iVar9 + -1,uVar3);
      if (7 < uVar12) break;
      uVar8 = *(uint *)(pZVar4 + 8);
      uVar10 = *(uint *)(pZVar4 + 0xc);
    }
    pZVar5 = pZVar4;
    if (param_1 == 'W') {
      pZVar5 = *(ZoneList **)(param_4 + 0x10);
      lVar13 = *(long *)(param_4 + 0x18);
      if ((ulong)(lVar13 - (long)pZVar5) < 0x10) {
        pZVar5 = (ZoneList *)Zone::NewExpand(param_4,0x10);
        pZVar6 = *(ZoneList **)(param_4 + 0x10);
        lVar13 = *(long *)(param_4 + 0x18);
      }
      else {
        pZVar6 = pZVar5 + 0x10;
        *(ZoneList **)(param_4 + 0x10) = pZVar6;
      }
      if ((ulong)(lVar13 - (long)pZVar6) < 0x10) {
        pZVar6 = (ZoneList *)Zone::NewExpand(param_4,0x10);
      }
      else {
        *(ZoneList **)(param_4 + 0x10) = pZVar6 + 0x10;
      }
      *(ZoneList **)pZVar5 = pZVar6;
      *(undefined8 *)(pZVar5 + 8) = 2;
      Negate(pZVar4,pZVar5,param_4);
    }
    uVar10 = *(uint *)(pZVar5 + 0xc);
    lVar13 = *(long *)pZVar5;
    uVar8 = *(int *)(param_2 + 0xc) + uVar10;
    if (*(int *)(param_2 + 8) < (int)uVar8) {
      pvVar11 = *(void **)(param_4 + 0x10);
      uVar12 = -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3;
      if ((ulong)(*(long *)(param_4 + 0x18) - (long)pvVar11) < uVar12) {
        pvVar11 = (void *)Zone::NewExpand(param_4,uVar12);
      }
      else {
        *(ulong *)(param_4 + 0x10) = (long)pvVar11 + uVar12;
      }
      if (0 < (int)*(uint *)(param_2 + 0xc)) {
        MemCopy(pvVar11,*(void **)param_2,(ulong)*(uint *)(param_2 + 0xc) << 3);
      }
      *(void **)param_2 = pvVar11;
      *(uint *)(param_2 + 8) = uVar8;
    }
    if (0 < (int)uVar10) {
      uVar12 = 0;
      do {
        lVar1 = uVar12 * 8;
        iVar9 = (int)uVar12;
        uVar12 = uVar12 + 1;
        *(undefined8 *)(*(long *)param_2 + (long)(iVar9 + *(int *)(param_2 + 0xc)) * 8) =
             *(undefined8 *)(lVar13 + lVar1);
      } while (uVar10 != uVar12);
    }
    *(uint *)(param_2 + 0xc) = uVar8;
    return;
  }
  AddClassEscape(param_1,param_2,param_4);
  return;
}

