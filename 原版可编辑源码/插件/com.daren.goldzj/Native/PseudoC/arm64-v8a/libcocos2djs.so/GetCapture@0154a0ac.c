
/* v8::internal::RegExpParser::GetCapture(int) */

undefined8 __thiscall v8::internal::RegExpParser::GetCapture(RegExpParser *this,int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  Zone *pZVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  uint *puVar12;
  
  plVar11 = *(long **)(this + 0x18);
  lVar8 = 0x44;
  if (this[0x4f] != (RegExpParser)0x0) {
    lVar8 = 0x48;
  }
  uVar4 = *(uint *)(this + lVar8);
  if (plVar11 != (long *)0x0) goto LAB_0154a15c;
  pZVar5 = *(Zone **)(this + 8);
  plVar11 = *(long **)(pZVar5 + 0x10);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)plVar11) < 0x10) {
    plVar11 = (long *)Zone::NewExpand(pZVar5,0x10);
    if ((int)uVar4 < 1) goto LAB_0154a14c;
LAB_0154a114:
    pZVar5 = *(Zone **)(this + 8);
    uVar9 = (ulong)uVar4 * 8;
    lVar8 = *(long *)(pZVar5 + 0x10);
    if (uVar9 < (ulong)(*(long *)(pZVar5 + 0x18) - lVar8) ||
        uVar9 - (*(long *)(pZVar5 + 0x18) - lVar8) == 0) {
      *(ulong *)(pZVar5 + 0x10) = lVar8 + uVar9;
    }
    else {
      lVar8 = Zone::NewExpand(pZVar5,uVar9);
    }
  }
  else {
    *(long **)(pZVar5 + 0x10) = plVar11 + 2;
    if (0 < (int)uVar4) goto LAB_0154a114;
LAB_0154a14c:
    lVar8 = 0;
  }
  *plVar11 = lVar8;
  *(uint *)(plVar11 + 1) = uVar4;
  *(undefined4 *)((long)plVar11 + 0xc) = 0;
  *(long **)(this + 0x18) = plVar11;
LAB_0154a15c:
  puVar12 = (uint *)((long)plVar11 + 0xc);
  uVar10 = *puVar12;
  while ((int)uVar10 < (int)uVar4) {
    pZVar5 = *(Zone **)(this + 8);
    puVar6 = *(undefined8 **)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar6) < 0x20) {
      puVar6 = (undefined8 *)Zone::NewExpand(pZVar5,0x20);
    }
    else {
      *(undefined8 **)(pZVar5 + 0x10) = puVar6 + 4;
    }
    iVar2 = *(int *)(*(long *)(this + 0x18) + 0xc);
    *puVar6 = &PTR__RegExpTree_01cc79f0;
    puVar6[1] = 0;
    puVar6[3] = 0;
    *(int *)(puVar6 + 2) = iVar2 + 1;
    uVar10 = *puVar12;
    uVar3 = *(uint *)(plVar11 + 1);
    if ((int)uVar10 < (int)uVar3) {
      pvVar7 = (void *)*plVar11;
    }
    else {
      pZVar5 = *(Zone **)(this + 8);
      uVar1 = uVar3 << 1 | 1;
      uVar9 = -(ulong)((uVar3 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      pvVar7 = *(void **)(pZVar5 + 0x10);
      if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)pvVar7) < uVar9) {
        pvVar7 = (void *)Zone::NewExpand(pZVar5,uVar9);
      }
      else {
        *(ulong *)(pZVar5 + 0x10) = (long)pvVar7 + uVar9;
      }
      uVar10 = *puVar12;
      if (0 < (int)uVar10) {
        MemCopy(pvVar7,(void *)*plVar11,(ulong)uVar10 << 3);
        uVar10 = *puVar12;
      }
      *plVar11 = (long)pvVar7;
      *(uint *)(plVar11 + 1) = uVar1;
    }
    *puVar12 = uVar10 + 1;
    *(undefined8 **)((long)pvVar7 + (long)(int)uVar10 * 8) = puVar6;
    plVar11 = *(long **)(this + 0x18);
    puVar12 = (uint *)((long)plVar11 + 0xc);
    uVar10 = *puVar12;
  }
  return *(undefined8 *)(*plVar11 + (long)(param_1 + -1) * 8);
}

