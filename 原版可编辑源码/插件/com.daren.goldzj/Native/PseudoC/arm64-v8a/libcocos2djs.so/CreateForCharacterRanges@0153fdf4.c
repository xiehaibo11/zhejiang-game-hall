
/* v8::internal::TextNode::CreateForCharacterRanges(v8::internal::Zone*,
   v8::internal::ZoneList<v8::internal::CharacterRange>*, bool, v8::internal::RegExpNode*,
   v8::base::Flags<v8::internal::JSRegExp::Flag, int>) */

void v8::internal::TextNode::CreateForCharacterRanges
               (Zone *param_1,undefined8 *param_2,byte param_3,long param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  
  plVar3 = *(long **)(param_1 + 0x10);
  lVar10 = *(long *)(param_1 + 0x18);
  if ((ulong)(lVar10 - (long)plVar3) < 0x10) {
    plVar3 = (long *)Zone::NewExpand(param_1,0x10);
    plVar4 = *(long **)(param_1 + 0x10);
    lVar10 = *(long *)(param_1 + 0x18);
  }
  else {
    plVar4 = plVar3 + 2;
    *(long **)(param_1 + 0x10) = plVar4;
  }
  if ((ulong)(lVar10 - (long)plVar4) < 0x10) {
    plVar4 = (long *)Zone::NewExpand(param_1,0x10);
  }
  else {
    *(long **)(param_1 + 0x10) = plVar4 + 2;
  }
  *plVar3 = (long)plVar4;
  plVar3[1] = 1;
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar5) < 0x20) {
    puVar5 = (undefined8 *)Zone::NewExpand(param_1,0x20);
  }
  else {
    *(undefined8 **)(param_1 + 0x10) = puVar5 + 4;
  }
  *(undefined2 *)(puVar5 + 2) = 0;
  *(undefined4 *)(puVar5 + 3) = param_5;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *puVar5 = &PTR__RegExpTree_01cc7550;
  puVar5[1] = param_2;
  if (*(int *)((long)param_2 + 0xc) == 0) {
    uVar8 = *(uint *)(param_2 + 1);
    if ((int)uVar8 < 1) {
      pvVar6 = *(void **)(param_1 + 0x10);
      uVar1 = uVar8 << 1 | 1;
      uVar7 = -(ulong)((uVar8 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      if ((ulong)(*(long *)(param_1 + 0x18) - (long)pvVar6) < uVar7) {
        pvVar6 = (void *)Zone::NewExpand(param_1,uVar7);
      }
      else {
        *(ulong *)(param_1 + 0x10) = (long)pvVar6 + uVar7;
      }
      uVar8 = *(uint *)((long)param_2 + 0xc);
      if (0 < (int)uVar8) {
        MemCopy(pvVar6,(void *)*param_2,(ulong)uVar8 << 3);
        uVar8 = *(uint *)((long)param_2 + 0xc);
      }
      puVar9 = (undefined8 *)((long)pvVar6 + (long)(int)uVar8 * 8);
      *param_2 = pvVar6;
      *(uint *)(param_2 + 1) = uVar1;
      *(uint *)((long)param_2 + 0xc) = uVar8 + 1;
    }
    else {
      puVar9 = (undefined8 *)*param_2;
      *(undefined4 *)((long)param_2 + 0xc) = 1;
    }
    *puVar9 = 0x10ffff00000000;
    *(uint *)((long)puVar5 + 0x1c) = *(uint *)((long)puVar5 + 0x1c) ^ 1;
  }
  uVar8 = *(uint *)(plVar3 + 1);
  iVar2 = *(int *)((long)plVar3 + 0xc);
  if (iVar2 < (int)uVar8) {
    *(int *)((long)plVar3 + 0xc) = iVar2 + 1;
    puVar9 = (undefined8 *)(*plVar3 + (long)iVar2 * 0x10);
    *puVar9 = 0x1ffffffff;
  }
  else {
    pvVar6 = *(void **)(param_1 + 0x10);
    uVar1 = uVar8 << 1 | 1;
    uVar7 = -(ulong)((uVar8 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 | (ulong)uVar1 << 4;
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)pvVar6) < uVar7) {
      pvVar6 = (void *)Zone::NewExpand(param_1,uVar7);
    }
    else {
      *(ulong *)(param_1 + 0x10) = (long)pvVar6 + uVar7;
    }
    uVar8 = *(uint *)((long)plVar3 + 0xc);
    if (0 < (int)uVar8) {
      MemCopy(pvVar6,(void *)*plVar3,(ulong)uVar8 << 4);
      uVar8 = *(uint *)((long)plVar3 + 0xc);
    }
    puVar9 = (undefined8 *)((long)pvVar6 + (long)(int)uVar8 * 0x10);
    *plVar3 = (long)pvVar6;
    *(uint *)(plVar3 + 1) = uVar1;
    *(uint *)((long)plVar3 + 0xc) = uVar8 + 1;
    *puVar9 = 0x1ffffffff;
  }
  puVar9[1] = puVar5;
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar5) < 0x50) {
    puVar5 = (undefined8 *)Zone::NewExpand(param_1,0x50);
  }
  else {
    *(undefined8 **)(param_1 + 0x10) = puVar5 + 10;
  }
  uVar11 = *(undefined8 *)(param_4 + 0x30);
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[8] = plVar3;
  puVar5[6] = uVar11;
  puVar5[7] = param_4;
  *(byte *)(puVar5 + 9) = param_3 & 1;
  *puVar5 = &PTR__RegExpNode_01cc85f8;
  puVar5[1] = 0;
  return;
}

