
void FUN_015397d8(undefined8 *param_1,uint param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  Zone *pZVar6;
  undefined8 *puVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  
  lVar4 = (**(code **)(**(long **)(*(long *)param_1[1] + (long)(int)param_2 * 8) + 0x78))();
  if ((int)param_2 < (int)param_3) {
    lVar14 = (long)(int)param_2 << 3;
    iVar10 = *(int *)(lVar4 + 0xc);
    uVar13 = 0;
    bVar3 = false;
    uVar9 = param_2;
    do {
      lVar4 = (**(code **)(**(long **)(*(long *)param_1[1] + lVar14) + 0x78))();
      bVar3 = (bool)(bVar3 | *(int *)(lVar4 + 0xc) != iVar10);
      uVar2 = 1 << (ulong)(*(uint *)(lVar4 + 8) & 0x1f);
      if ((!bVar3) && ((uVar2 & uVar13) != 0)) {
        pZVar6 = (Zone *)*param_1;
        plVar1 = (long *)param_1[1];
        puVar5 = *(undefined8 **)(pZVar6 + 0x10);
        if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar5) < 8) {
          puVar5 = (undefined8 *)v8::internal::Zone::NewExpand(pZVar6,8);
        }
        else {
          *(undefined8 **)(pZVar6 + 0x10) = puVar5 + 1;
        }
        *puVar5 = &PTR__RegExpTree_01cc7e90;
        *(undefined8 **)(*plVar1 + lVar14) = puVar5;
      }
      uVar9 = uVar9 + 1;
      uVar13 = uVar2 | uVar13;
      lVar14 = lVar14 + 8;
    } while (param_3 != uVar9);
    if ((~uVar13 & 0x30) == 0) {
      pZVar6 = (Zone *)*param_1;
      puVar5 = *(undefined8 **)(pZVar6 + 0x10);
      if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar5) < 0x10) {
        puVar5 = (undefined8 *)v8::internal::Zone::NewExpand(pZVar6,0x10);
      }
      else {
        *(undefined8 **)(pZVar6 + 0x10) = puVar5 + 2;
      }
      *puVar5 = 0;
      puVar5[1] = 0;
      pZVar6 = (Zone *)*param_1;
      puVar7 = *(undefined8 **)(pZVar6 + 0x10);
      if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar7) < 0x20) {
        puVar7 = (undefined8 *)v8::internal::Zone::NewExpand(pZVar6,0x20);
      }
      else {
        *(undefined8 **)(pZVar6 + 0x10) = puVar7 + 4;
      }
      pZVar6 = (Zone *)*param_1;
      *(undefined2 *)(puVar7 + 2) = 0;
      puVar7[3] = 0;
      *puVar7 = &PTR__RegExpTree_01cc7550;
      puVar7[1] = puVar5;
      if (*(int *)((long)puVar5 + 0xc) == 0) {
        uVar9 = *(uint *)(puVar5 + 1);
        if ((int)uVar9 < 1) {
          pvVar8 = *(void **)(pZVar6 + 0x10);
          uVar13 = uVar9 << 1 | 1;
          uVar12 = -(ulong)((uVar9 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar13 << 3;
          if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)pvVar8) < uVar12) {
            pvVar8 = (void *)v8::internal::Zone::NewExpand(pZVar6,uVar12);
          }
          else {
            *(ulong *)(pZVar6 + 0x10) = (long)pvVar8 + uVar12;
          }
          uVar9 = *(uint *)((long)puVar5 + 0xc);
          if (0 < (int)uVar9) {
            v8::internal::MemCopy(pvVar8,(void *)*puVar5,(ulong)uVar9 << 3);
            uVar9 = *(uint *)((long)puVar5 + 0xc);
          }
          puVar11 = (undefined8 *)((long)pvVar8 + (long)(int)uVar9 * 8);
          *puVar5 = pvVar8;
          *(uint *)(puVar5 + 1) = uVar13;
          *(uint *)((long)puVar5 + 0xc) = uVar9 + 1;
        }
        else {
          puVar11 = (undefined8 *)*puVar5;
          *(undefined4 *)((long)puVar5 + 0xc) = 1;
        }
        *puVar11 = 0x10ffff00000000;
        *(uint *)((long)puVar7 + 0x1c) = *(uint *)((long)puVar7 + 0x1c) ^ 1;
      }
      *(undefined8 **)(*(long *)param_1[1] + (long)(int)param_2 * 8) = puVar7;
      pZVar6 = (Zone *)*param_1;
      puVar5 = *(undefined8 **)(pZVar6 + 0x10);
      if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar5) < 8) {
        puVar5 = (undefined8 *)v8::internal::Zone::NewExpand(pZVar6,8);
      }
      else {
        *(undefined8 **)(pZVar6 + 0x10) = puVar5 + 1;
      }
      uVar9 = param_2 + 1;
      *puVar5 = &PTR__RegExpTree_01cc7e90;
      if ((int)uVar9 < (int)param_3) {
        iVar10 = ~param_2 + param_3;
        uVar12 = -(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar9 << 3;
        do {
          iVar10 = iVar10 + -1;
          *(undefined8 **)(*(long *)param_1[1] + uVar12) = puVar5;
          uVar12 = uVar12 + 8;
        } while (iVar10 != 0);
      }
    }
  }
  return;
}

