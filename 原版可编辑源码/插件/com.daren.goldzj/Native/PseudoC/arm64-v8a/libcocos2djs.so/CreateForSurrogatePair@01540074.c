
/* v8::internal::TextNode::CreateForSurrogatePair(v8::internal::Zone*, v8::internal::CharacterRange,
   v8::internal::CharacterRange, bool, v8::internal::RegExpNode*,
   v8::base::Flags<v8::internal::JSRegExp::Flag, int>) */

void v8::internal::TextNode::CreateForSurrogatePair
               (Zone *param_1,undefined8 param_2,undefined8 param_3,byte param_4,long param_5,
               undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  lVar12 = *(long *)(param_1 + 0x18);
  if ((ulong)(lVar12 - (long)puVar6) < 0x10) {
    puVar6 = (undefined8 *)Zone::NewExpand(param_1,0x10);
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    lVar12 = *(long *)(param_1 + 0x18);
  }
  else {
    puVar3 = puVar6 + 2;
    *(undefined8 **)(param_1 + 0x10) = puVar3;
  }
  if ((ulong)(lVar12 - (long)puVar3) < 8) {
    puVar3 = (undefined8 *)Zone::NewExpand(param_1,8);
  }
  else {
    *(undefined8 **)(param_1 + 0x10) = puVar3 + 1;
  }
  *puVar6 = puVar3;
  puVar6[1] = 0x100000001;
  *puVar3 = param_2;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  lVar12 = *(long *)(param_1 + 0x18);
  if ((ulong)(lVar12 - (long)puVar3) < 0x10) {
    puVar3 = (undefined8 *)Zone::NewExpand(param_1,0x10);
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    lVar12 = *(long *)(param_1 + 0x18);
  }
  else {
    puVar11 = puVar3 + 2;
    *(undefined8 **)(param_1 + 0x10) = puVar11;
  }
  if ((ulong)(lVar12 - (long)puVar11) < 8) {
    puVar11 = (undefined8 *)Zone::NewExpand(param_1,8);
  }
  else {
    *(undefined8 **)(param_1 + 0x10) = puVar11 + 1;
  }
  *puVar3 = puVar11;
  puVar3[1] = 0x100000001;
  *puVar11 = param_3;
  plVar4 = *(long **)(param_1 + 0x10);
  lVar12 = *(long *)(param_1 + 0x18);
  if ((ulong)(lVar12 - (long)plVar4) < 0x10) {
    plVar4 = (long *)Zone::NewExpand(param_1,0x10);
    plVar5 = *(long **)(param_1 + 0x10);
    lVar12 = *(long *)(param_1 + 0x18);
  }
  else {
    plVar5 = plVar4 + 2;
    *(long **)(param_1 + 0x10) = plVar5;
  }
  if ((ulong)(lVar12 - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand(param_1,0x20);
  }
  else {
    *(long **)(param_1 + 0x10) = plVar5 + 4;
  }
  *plVar4 = (long)plVar5;
  plVar4[1] = 2;
  puVar11 = *(undefined8 **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar11) < 0x20) {
    puVar11 = (undefined8 *)Zone::NewExpand(param_1,0x20);
  }
  else {
    *(undefined8 **)(param_1 + 0x10) = puVar11 + 4;
  }
  *(undefined2 *)(puVar11 + 2) = 0;
  *(undefined4 *)(puVar11 + 3) = param_6;
  *(undefined4 *)((long)puVar11 + 0x1c) = 0;
  *puVar11 = &PTR__RegExpTree_01cc7550;
  puVar11[1] = puVar6;
  if (*(int *)((long)puVar6 + 0xc) == 0) {
    uVar9 = *(uint *)(puVar6 + 1);
    if ((int)uVar9 < 1) {
      pvVar7 = *(void **)(param_1 + 0x10);
      uVar1 = uVar9 << 1 | 1;
      uVar8 = -(ulong)((uVar9 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      if ((ulong)(*(long *)(param_1 + 0x18) - (long)pvVar7) < uVar8) {
        pvVar7 = (void *)Zone::NewExpand(param_1,uVar8);
      }
      else {
        *(ulong *)(param_1 + 0x10) = (long)pvVar7 + uVar8;
      }
      uVar9 = *(uint *)((long)puVar6 + 0xc);
      if (0 < (int)uVar9) {
        MemCopy(pvVar7,(void *)*puVar6,(ulong)uVar9 << 3);
        uVar9 = *(uint *)((long)puVar6 + 0xc);
      }
      *(uint *)(puVar6 + 1) = uVar1;
      *(uint *)((long)puVar6 + 0xc) = uVar9 + 1;
      puVar10 = (undefined8 *)((long)pvVar7 + (long)(int)uVar9 * 8);
      *puVar6 = pvVar7;
    }
    else {
      puVar10 = (undefined8 *)*puVar6;
      *(undefined4 *)((long)puVar6 + 0xc) = 1;
    }
    *puVar10 = 0x10ffff00000000;
    *(uint *)((long)puVar11 + 0x1c) = *(uint *)((long)puVar11 + 0x1c) ^ 1;
  }
  uVar9 = *(uint *)(plVar4 + 1);
  iVar2 = *(int *)((long)plVar4 + 0xc);
  if (iVar2 < (int)uVar9) {
    *(int *)((long)plVar4 + 0xc) = iVar2 + 1;
    puVar6 = (undefined8 *)(*plVar4 + (long)iVar2 * 0x10);
    *puVar6 = 0x1ffffffff;
  }
  else {
    pvVar7 = *(void **)(param_1 + 0x10);
    uVar1 = uVar9 << 1 | 1;
    uVar8 = -(ulong)((uVar9 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 | (ulong)uVar1 << 4;
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)pvVar7) < uVar8) {
      pvVar7 = (void *)Zone::NewExpand(param_1,uVar8);
    }
    else {
      *(ulong *)(param_1 + 0x10) = (long)pvVar7 + uVar8;
    }
    uVar9 = *(uint *)((long)plVar4 + 0xc);
    if (0 < (int)uVar9) {
      MemCopy(pvVar7,(void *)*plVar4,(ulong)uVar9 << 4);
      uVar9 = *(uint *)((long)plVar4 + 0xc);
    }
    puVar6 = (undefined8 *)((long)pvVar7 + (long)(int)uVar9 * 0x10);
    *plVar4 = (long)pvVar7;
    *(uint *)(plVar4 + 1) = uVar1;
    *(uint *)((long)plVar4 + 0xc) = uVar9 + 1;
    *puVar6 = 0x1ffffffff;
  }
  puVar6[1] = puVar11;
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar6) < 0x20) {
    puVar6 = (undefined8 *)Zone::NewExpand(param_1,0x20);
  }
  else {
    *(undefined8 **)(param_1 + 0x10) = puVar6 + 4;
  }
  *(undefined2 *)(puVar6 + 2) = 0;
  *puVar6 = &PTR__RegExpTree_01cc7550;
  puVar6[1] = puVar3;
  *(undefined4 *)(puVar6 + 3) = param_6;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  if (*(int *)((long)puVar3 + 0xc) == 0) {
    uVar9 = *(uint *)(puVar3 + 1);
    if ((int)uVar9 < 1) {
      pvVar7 = *(void **)(param_1 + 0x10);
      uVar1 = uVar9 << 1 | 1;
      uVar8 = -(ulong)((uVar9 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      if ((ulong)(*(long *)(param_1 + 0x18) - (long)pvVar7) < uVar8) {
        pvVar7 = (void *)Zone::NewExpand(param_1,uVar8);
      }
      else {
        *(ulong *)(param_1 + 0x10) = (long)pvVar7 + uVar8;
      }
      uVar9 = *(uint *)((long)puVar3 + 0xc);
      if (0 < (int)uVar9) {
        MemCopy(pvVar7,(void *)*puVar3,(ulong)uVar9 << 3);
        uVar9 = *(uint *)((long)puVar3 + 0xc);
      }
      *(uint *)(puVar3 + 1) = uVar1;
      *(uint *)((long)puVar3 + 0xc) = uVar9 + 1;
      puVar11 = (undefined8 *)((long)pvVar7 + (long)(int)uVar9 * 8);
      *puVar3 = pvVar7;
    }
    else {
      puVar11 = (undefined8 *)*puVar3;
      *(undefined4 *)((long)puVar3 + 0xc) = 1;
    }
    *puVar11 = 0x10ffff00000000;
    *(uint *)((long)puVar6 + 0x1c) = *(uint *)((long)puVar6 + 0x1c) ^ 1;
  }
  uVar9 = *(uint *)(plVar4 + 1);
  iVar2 = *(int *)((long)plVar4 + 0xc);
  if (iVar2 < (int)uVar9) {
    *(int *)((long)plVar4 + 0xc) = iVar2 + 1;
    puVar3 = (undefined8 *)(*plVar4 + (long)iVar2 * 0x10);
    *puVar3 = 0x1ffffffff;
  }
  else {
    pvVar7 = *(void **)(param_1 + 0x10);
    uVar1 = uVar9 << 1 | 1;
    uVar8 = -(ulong)((uVar9 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 | (ulong)uVar1 << 4;
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)pvVar7) < uVar8) {
      pvVar7 = (void *)Zone::NewExpand(param_1,uVar8);
    }
    else {
      *(ulong *)(param_1 + 0x10) = (long)pvVar7 + uVar8;
    }
    uVar9 = *(uint *)((long)plVar4 + 0xc);
    if (0 < (int)uVar9) {
      MemCopy(pvVar7,(void *)*plVar4,(ulong)uVar9 << 4);
      uVar9 = *(uint *)((long)plVar4 + 0xc);
    }
    puVar3 = (undefined8 *)((long)pvVar7 + (long)(int)uVar9 * 0x10);
    *plVar4 = (long)pvVar7;
    *(uint *)(plVar4 + 1) = uVar1;
    *(uint *)((long)plVar4 + 0xc) = uVar9 + 1;
    *puVar3 = 0x1ffffffff;
  }
  puVar3[1] = puVar6;
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar6) < 0x50) {
    puVar6 = (undefined8 *)Zone::NewExpand(param_1,0x50);
  }
  else {
    *(undefined8 **)(param_1 + 0x10) = puVar6 + 10;
  }
  uVar13 = *(undefined8 *)(param_5 + 0x30);
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[8] = plVar4;
  puVar6[6] = uVar13;
  puVar6[7] = param_5;
  *(byte *)(puVar6 + 9) = param_4 & 1;
  *puVar6 = &PTR__RegExpNode_01cc85f8;
  puVar6[1] = 0;
  return;
}

