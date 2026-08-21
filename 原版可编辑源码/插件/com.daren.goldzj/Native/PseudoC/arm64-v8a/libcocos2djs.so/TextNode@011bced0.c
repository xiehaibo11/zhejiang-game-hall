
/* v8::internal::TextNode::TextNode(v8::internal::RegExpCharacterClass*, bool,
   v8::internal::RegExpNode*) */

void __thiscall
v8::internal::TextNode::TextNode
          (TextNode *this,RegExpCharacterClass *param_1,bool param_2,RegExpNode *param_3)

{
  uint uVar1;
  int iVar2;
  Zone *pZVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 auVar10 [16];
  
  pZVar3 = *(Zone **)(param_3 + 0x30);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(Zone **)(this + 0x30) = pZVar3;
  *(RegExpNode **)(this + 0x38) = param_3;
  *(undefined ***)this = &PTR__RegExpNode_01cc85f8;
  *(undefined8 *)(this + 8) = 0;
  plVar4 = *(long **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)plVar4) < 0x10) {
    plVar4 = (long *)Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(long **)(pZVar3 + 0x10) = plVar4 + 2;
  }
  pZVar3 = *(Zone **)(this + 0x30);
  lVar5 = *(long *)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - lVar5) < 0x10) {
    lVar5 = Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(long *)(pZVar3 + 0x10) = lVar5 + 0x10;
  }
  *plVar4 = lVar5;
  plVar4[1] = 1;
  *(long **)(this + 0x40) = plVar4;
  this[0x48] = (TextNode)param_2;
  auVar10 = TextElement::CharClass(param_1);
  uVar8 = *(uint *)(plVar4 + 1);
  iVar2 = *(int *)((long)plVar4 + 0xc);
  if (iVar2 < (int)uVar8) {
    *(int *)((long)plVar4 + 0xc) = iVar2 + 1;
    pauVar9 = (undefined1 (*) [16])(*plVar4 + (long)iVar2 * 0x10);
  }
  else {
    pZVar3 = *(Zone **)(this + 0x30);
    uVar1 = uVar8 << 1 | 1;
    uVar7 = -(ulong)((uVar8 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 | (ulong)uVar1 << 4;
    pvVar6 = *(void **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar6) < uVar7) {
      pvVar6 = (void *)Zone::NewExpand(pZVar3,uVar7);
    }
    else {
      *(ulong *)(pZVar3 + 0x10) = (long)pvVar6 + uVar7;
    }
    uVar8 = *(uint *)((long)plVar4 + 0xc);
    if (0 < (int)uVar8) {
      MemCopy(pvVar6,(void *)*plVar4,(ulong)uVar8 << 4);
      uVar8 = *(uint *)((long)plVar4 + 0xc);
    }
    pauVar9 = (undefined1 (*) [16])((long)pvVar6 + (long)(int)uVar8 * 0x10);
    *plVar4 = (long)pvVar6;
    *(uint *)(plVar4 + 1) = uVar1;
    *(uint *)((long)plVar4 + 0xc) = uVar8 + 1;
  }
  *pauVar9 = auVar10;
  return;
}

