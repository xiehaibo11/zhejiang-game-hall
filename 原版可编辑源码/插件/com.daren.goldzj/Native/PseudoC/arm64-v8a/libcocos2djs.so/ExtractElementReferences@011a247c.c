
/* v8::internal::V8HeapExplorer::ExtractElementReferences(v8::internal::JSObject,
   v8::internal::HeapEntry*) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractElementReferences
          (V8HeapExplorer *this,ulong param_2,undefined8 param_3)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  
  uVar8 = param_2 & 0xffffffff00000000;
  if ((*(byte *)((uVar8 | 10) + (ulong)*(uint *)(param_2 - 1)) & 0xf0) == 0x10) {
    uVar5 = uVar8 | *(uint *)(param_2 + 7);
    puVar2 = (uint *)(param_2 + 0xb);
    if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(param_2 - 1)) != 0x423) {
      puVar2 = (uint *)(uVar5 + 3);
    }
    uVar3 = *puVar2;
    if (1 < (int)uVar3) {
      iVar4 = 0;
      uVar6 = 0;
      lVar1 = uVar5 + 7;
      do {
        if (*(int *)(lVar1 + iVar4) != *(int *)(uVar8 + 0xa8)) {
          SetElementReference(this,param_3,uVar6 & 0xffffffff,uVar8 | *(uint *)(iVar4 + lVar1));
        }
        uVar6 = uVar6 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar6 < uVar3 >> 1);
    }
  }
  else if ((*(byte *)((uVar8 | 10) + (ulong)*(uint *)(param_2 - 1)) & 0xf8) == 0x60) {
    uVar5 = uVar8 | *(uint *)(param_2 + 7);
    uVar3 = *(uint *)(uVar5 + 0xf);
    if ((int)uVar3 >> 1 != 0) {
      lVar7 = (long)((ulong)uVar3 << 0x20) >> 0x21;
      lVar1 = uVar5 + 7;
      lVar9 = 0x1400000000;
      lVar10 = 0x1000000000;
      do {
        uVar3 = *(uint *)(lVar1 + (lVar10 >> 0x20));
        if ((uVar3 != *(uint *)(uVar8 + 0xa8)) && (uVar3 != *(uint *)(uVar8 + 0xa0))) {
          if ((uVar3 & 1) == 0) {
            dVar11 = (double)((int)uVar3 >> 1);
          }
          else {
            dVar11 = *(double *)((uVar8 | uVar3) + 3);
          }
          SetElementReference(this,param_3,(int)dVar11,uVar8 | *(uint *)(lVar1 + (lVar9 >> 0x20)));
        }
        lVar9 = lVar9 + 0xc00000000;
        lVar7 = lVar7 + -1;
        lVar10 = lVar10 + 0xc00000000;
      } while (lVar7 != 0);
    }
  }
  return;
}

