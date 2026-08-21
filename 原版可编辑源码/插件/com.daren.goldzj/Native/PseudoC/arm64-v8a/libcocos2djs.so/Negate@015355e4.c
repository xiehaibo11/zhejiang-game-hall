
/* v8::internal::CharacterRange::Negate(v8::internal::ZoneList<v8::internal::CharacterRange>*,
   v8::internal::ZoneList<v8::internal::CharacterRange>*, v8::internal::Zone*) */

void v8::internal::CharacterRange::Negate(ZoneList *param_1,ZoneList *param_2,Zone *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  if (((int)uVar2 < 1) || (**(int **)param_1 != 0)) {
    uVar4 = 0;
    uVar9 = 0;
    if ((int)uVar2 < 1) goto LAB_015356f8;
  }
  else {
    uVar9 = 1;
    uVar4 = (*(int **)param_1)[1] + 1;
    if ((int)uVar2 < 2) goto LAB_015356f8;
  }
  do {
    uVar5 = (ulong)uVar4;
    lVar7 = *(long *)(*(long *)param_1 + uVar9 * 8);
    uVar4 = *(uint *)(param_2 + 8);
    uVar6 = *(uint *)(param_2 + 0xc);
    if ((int)uVar6 < (int)uVar4) {
      pvVar8 = *(void **)param_2;
    }
    else {
      pvVar8 = *(void **)(param_3 + 0x10);
      uVar1 = uVar4 << 1 | 1;
      uVar3 = -(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      if ((ulong)(*(long *)(param_3 + 0x18) - (long)pvVar8) < uVar3) {
        pvVar8 = (void *)Zone::NewExpand(param_3,uVar3);
      }
      else {
        *(ulong *)(param_3 + 0x10) = (long)pvVar8 + uVar3;
      }
      uVar6 = *(uint *)(param_2 + 0xc);
      if (0 < (int)uVar6) {
        MemCopy(pvVar8,*(void **)param_2,(ulong)uVar6 << 3);
        uVar6 = *(uint *)(param_2 + 0xc);
      }
      *(void **)param_2 = pvVar8;
      *(uint *)(param_2 + 8) = uVar1;
    }
    uVar9 = uVar9 + 1;
    *(uint *)(param_2 + 0xc) = uVar6 + 1;
    uVar4 = (int)((ulong)lVar7 >> 0x20) + 1;
    *(ulong *)((long)pvVar8 + (long)(int)uVar6 * 8) = (uVar5 | lVar7 << 0x20) - 0x100000000;
  } while (uVar2 != uVar9);
LAB_015356f8:
  if ((int)uVar4 < 0x10ffff) {
    uVar2 = *(uint *)(param_2 + 8);
    uVar6 = *(uint *)(param_2 + 0xc);
    if ((int)uVar6 < (int)uVar2) {
      pvVar8 = *(void **)param_2;
    }
    else {
      pvVar8 = *(void **)(param_3 + 0x10);
      uVar1 = uVar2 << 1 | 1;
      uVar9 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      if ((ulong)(*(long *)(param_3 + 0x18) - (long)pvVar8) < uVar9) {
        pvVar8 = (void *)Zone::NewExpand(param_3,uVar9);
      }
      else {
        *(ulong *)(param_3 + 0x10) = (long)pvVar8 + uVar9;
      }
      uVar6 = *(uint *)(param_2 + 0xc);
      if (0 < (int)uVar6) {
        MemCopy(pvVar8,*(void **)param_2,(ulong)uVar6 << 3);
        uVar6 = *(uint *)(param_2 + 0xc);
      }
      *(void **)param_2 = pvVar8;
      *(uint *)(param_2 + 8) = uVar1;
    }
    *(uint *)(param_2 + 0xc) = uVar6 + 1;
    *(ulong *)((long)pvVar8 + (long)(int)uVar6 * 8) = (ulong)uVar4 | 0x10ffff00000000;
  }
  return;
}

