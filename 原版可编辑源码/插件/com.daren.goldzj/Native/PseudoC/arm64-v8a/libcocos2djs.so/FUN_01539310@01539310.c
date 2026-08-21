
ZoneList * FUN_01539310(long *param_1,Zone *param_2)

{
  uint uVar1;
  void *pvVar2;
  ZoneList *pZVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  
  if (param_1[1] == *param_1) {
    pZVar3 = (ZoneList *)0x0;
  }
  else {
    pZVar3 = *(ZoneList **)(param_2 + 0x10);
    if ((ulong)(*(long *)(param_2 + 0x18) - (long)pZVar3) < 0x10) {
      pZVar3 = (ZoneList *)v8::internal::Zone::NewExpand(param_2,0x10);
    }
    else {
      *(ZoneList **)(param_2 + 0x10) = pZVar3 + 0x10;
    }
    uVar8 = (uint)((ulong)(param_1[1] - *param_1) >> 3);
    if ((int)uVar8 < 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_2 + 0x10);
      uVar5 = param_1[1] - *param_1 & 0x7fffffff8;
      if ((ulong)(*(long *)(param_2 + 0x18) - lVar4) < uVar5) {
        lVar4 = v8::internal::Zone::NewExpand(param_2,uVar5);
      }
      else {
        *(ulong *)(param_2 + 0x10) = lVar4 + uVar5;
      }
    }
    *(long *)pZVar3 = lVar4;
    *(uint *)(pZVar3 + 8) = uVar8;
    *(undefined4 *)(pZVar3 + 0xc) = 0;
    lVar4 = *param_1;
    if (param_1[1] != lVar4) {
      iVar7 = 0;
      uVar5 = 0;
      if ((int)uVar8 < 1) goto LAB_015393d0;
      do {
        *(int *)(pZVar3 + 0xc) = iVar7 + 1;
        *(undefined8 *)(*(long *)pZVar3 + (long)iVar7 * 8) = *(undefined8 *)(lVar4 + uVar5 * 8);
        while( true ) {
          lVar4 = *param_1;
          uVar5 = uVar5 + 1;
          if ((ulong)(param_1[1] - lVar4 >> 3) <= uVar5) goto LAB_0153945c;
          uVar8 = *(uint *)(pZVar3 + 8);
          iVar7 = *(int *)(pZVar3 + 0xc);
          if (iVar7 < (int)uVar8) break;
LAB_015393d0:
          pvVar2 = *(void **)(param_2 + 0x10);
          uVar1 = uVar8 << 1 | 1;
          uVar9 = *(undefined8 *)(lVar4 + uVar5 * 8);
          uVar6 = -(ulong)((uVar8 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          if ((ulong)(*(long *)(param_2 + 0x18) - (long)pvVar2) < uVar6) {
            pvVar2 = (void *)v8::internal::Zone::NewExpand(param_2,uVar6);
          }
          else {
            *(ulong *)(param_2 + 0x10) = (long)pvVar2 + uVar6;
          }
          uVar8 = *(uint *)(pZVar3 + 0xc);
          if (0 < (int)uVar8) {
            v8::internal::MemCopy(pvVar2,*(void **)pZVar3,(ulong)uVar8 << 3);
            uVar8 = *(uint *)(pZVar3 + 0xc);
          }
          *(void **)pZVar3 = pvVar2;
          *(uint *)(pZVar3 + 8) = uVar1;
          *(uint *)(pZVar3 + 0xc) = uVar8 + 1;
          *(undefined8 *)((long)pvVar2 + (long)(int)uVar8 * 8) = uVar9;
        }
      } while( true );
    }
LAB_0153945c:
    v8::internal::CharacterRange::Canonicalize(pZVar3);
  }
  return pZVar3;
}

