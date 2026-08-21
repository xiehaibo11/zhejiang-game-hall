
/* v8::internal::RegExpAtom::ToNode(v8::internal::RegExpCompiler*, v8::internal::RegExpNode*) */

void __thiscall
v8::internal::RegExpAtom::ToNode(RegExpAtom *this,RegExpCompiler *param_1,RegExpNode *param_2)

{
  uint uVar1;
  int iVar2;
  RegExpCompiler RVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  uint uVar9;
  Zone *pZVar10;
  undefined1 (*pauVar11) [16];
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  pZVar10 = *(Zone **)(param_1 + 0x448);
  plVar4 = *(long **)(pZVar10 + 0x10);
  if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)plVar4) < 0x10) {
    plVar4 = (long *)Zone::NewExpand(pZVar10,0x10);
  }
  else {
    *(long **)(pZVar10 + 0x10) = plVar4 + 2;
  }
  pZVar10 = *(Zone **)(param_1 + 0x448);
  lVar5 = *(long *)(pZVar10 + 0x10);
  if ((ulong)(*(long *)(pZVar10 + 0x18) - lVar5) < 0x10) {
    lVar5 = Zone::NewExpand(pZVar10,0x10);
  }
  else {
    *(long *)(pZVar10 + 0x10) = lVar5 + 0x10;
  }
  *plVar4 = lVar5;
  plVar4[1] = 1;
  auVar13 = TextElement::Atom(this);
  uVar9 = *(uint *)(plVar4 + 1);
  iVar2 = *(int *)((long)plVar4 + 0xc);
  if (iVar2 < (int)uVar9) {
    *(int *)((long)plVar4 + 0xc) = iVar2 + 1;
    pauVar11 = (undefined1 (*) [16])(*plVar4 + (long)iVar2 * 0x10);
  }
  else {
    pZVar10 = *(Zone **)(param_1 + 0x448);
    uVar1 = uVar9 << 1 | 1;
    uVar8 = -(ulong)((uVar9 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 | (ulong)uVar1 << 4;
    pvVar7 = *(void **)(pZVar10 + 0x10);
    if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pvVar7) < uVar8) {
      pvVar7 = (void *)Zone::NewExpand(pZVar10,uVar8);
    }
    else {
      *(ulong *)(pZVar10 + 0x10) = (long)pvVar7 + uVar8;
    }
    uVar9 = *(uint *)((long)plVar4 + 0xc);
    if (0 < (int)uVar9) {
      MemCopy(pvVar7,(void *)*plVar4,(ulong)uVar9 << 4);
      uVar9 = *(uint *)((long)plVar4 + 0xc);
    }
    pauVar11 = (undefined1 (*) [16])((long)pvVar7 + (long)(int)uVar9 * 0x10);
    *plVar4 = (long)pvVar7;
    *(uint *)(plVar4 + 1) = uVar1;
    *(uint *)((long)plVar4 + 0xc) = uVar9 + 1;
  }
  *pauVar11 = auVar13;
  pZVar10 = *(Zone **)(param_1 + 0x448);
  puVar6 = *(undefined8 **)(pZVar10 + 0x10);
  if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)puVar6) < 0x50) {
    puVar6 = (undefined8 *)Zone::NewExpand(pZVar10,0x50);
  }
  else {
    *(undefined8 **)(pZVar10 + 0x10) = puVar6 + 10;
  }
  RVar3 = param_1[0x34];
  uVar12 = *(undefined8 *)(param_2 + 0x30);
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[8] = plVar4;
  puVar6[6] = uVar12;
  puVar6[7] = param_2;
  *(RegExpCompiler *)(puVar6 + 9) = RVar3;
  *puVar6 = &PTR__RegExpNode_01cc85f8;
  puVar6[1] = 0;
  return;
}

