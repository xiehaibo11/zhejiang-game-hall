
/* v8::internal::RegExpText::AddElement(v8::internal::TextElement, v8::internal::Zone*) */

void v8::internal::RegExpText::AddElement
               (long param_1,undefined8 param_2,long param_3,Zone *param_4)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  iVar7 = *(int *)(param_1 + 0x14);
  iVar6 = (int)((ulong)param_2 >> 0x20);
  if (iVar7 < (int)uVar4) {
    *(int *)(param_1 + 0x14) = iVar7 + 1;
    puVar5 = (undefined8 *)(*(long *)(param_1 + 8) + (long)iVar7 * 0x10);
  }
  else {
    pvVar2 = *(void **)(param_4 + 0x10);
    uVar1 = uVar4 << 1 | 1;
    uVar3 = -(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 | (ulong)uVar1 << 4;
    if ((ulong)(*(long *)(param_4 + 0x18) - (long)pvVar2) < uVar3) {
      pvVar2 = (void *)Zone::NewExpand(param_4,uVar3);
    }
    else {
      *(ulong *)(param_4 + 0x10) = (long)pvVar2 + uVar3;
    }
    uVar4 = *(uint *)(param_1 + 0x14);
    if (0 < (int)uVar4) {
      MemCopy(pvVar2,*(void **)(param_1 + 8),(ulong)uVar4 << 4);
      uVar4 = *(uint *)(param_1 + 0x14);
    }
    puVar5 = (undefined8 *)((long)pvVar2 + (long)(int)uVar4 * 0x10);
    *(void **)(param_1 + 8) = pvVar2;
    *(uint *)(param_1 + 0x10) = uVar1;
    *(uint *)(param_1 + 0x14) = uVar4 + 1;
  }
  *puVar5 = param_2;
  puVar5[1] = param_3;
  iVar7 = 1;
  if (iVar6 != 1) {
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    iVar7 = *(int *)(param_3 + 0x10);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar7;
  return;
}

