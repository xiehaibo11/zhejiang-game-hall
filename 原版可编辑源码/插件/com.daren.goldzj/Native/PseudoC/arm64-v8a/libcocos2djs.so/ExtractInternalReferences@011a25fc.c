
/* v8::internal::V8HeapExplorer::ExtractInternalReferences(v8::internal::JSObject,
   v8::internal::HeapEntry*) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractInternalReferences
          (V8HeapExplorer *this,ulong param_2,undefined8 param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  uint *puVar11;
  
  uVar9 = param_2 & 0xffffffff00000000;
  uVar8 = uVar9 | *(uint *)(param_2 - 1);
  bVar4 = *(byte *)(uVar8 + 3);
  if (bVar4 != 0) {
    if (*(short *)(uVar8 + 7) == 0x421) {
      iVar6 = 0xc;
    }
    else {
      iVar6 = JSObject::GetHeaderSize(*(short *)(uVar8 + 7),*(char *)(uVar8 + 9) < '\0');
    }
    iVar6 = (((int)((uint)bVar4 * 4 - iVar6) >> 2) - (uint)*(byte *)(uVar8 + 3)) +
            (uint)*(byte *)(uVar8 + 4);
    iVar2 = iVar6;
    if (iVar6 < 0) {
      iVar2 = iVar6 + 1;
    }
    if (1 < iVar6) {
      iVar10 = 0;
      iVar6 = 0;
      puVar11 = (uint *)(param_2 - 1);
      do {
        sVar5 = *(short *)((uVar9 | *puVar11) + 7);
        if (sVar5 == 0x421) {
          iVar7 = 0xc;
        }
        else {
          iVar7 = JSObject::GetHeaderSize(sVar5,*(char *)((uVar9 | *puVar11) + 9) < '\0');
        }
        puVar1 = (uint *)((long)puVar11 + (long)(iVar7 + iVar10));
        uVar3 = *puVar1;
        sVar5 = *(short *)((uVar9 | *puVar11) + 7);
        if (sVar5 == 0x421) {
          iVar7 = 0xc;
        }
        else {
          iVar7 = JSObject::GetHeaderSize(sVar5,*(char *)((uVar9 | *puVar11) + 9) < '\0');
        }
        SetInternalReference
                  (this,param_3,iVar6,(ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3,
                   iVar7 + iVar10);
        iVar6 = iVar6 + 1;
        iVar10 = iVar10 + 8;
      } while (iVar2 >> 1 != iVar6);
    }
  }
  return;
}

