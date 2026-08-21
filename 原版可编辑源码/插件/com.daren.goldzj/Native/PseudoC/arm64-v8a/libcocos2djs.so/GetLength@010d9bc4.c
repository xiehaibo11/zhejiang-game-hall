
/* v8::internal::JSBoundFunction::GetLength(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSBoundFunction>) */

ulong v8::internal::JSBoundFunction::GetLength(Isolate *param_1,ulong *param_2)

{
  uint *puVar1;
  Isolate *pIVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  CanonicalHandleScope *this;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  
  uVar8 = *param_2;
  uVar9 = uVar8 & 0xffffffff00000000;
  pIVar2 = param_1 + 0x95a0;
  uVar10 = uVar9 | *(uint *)(uVar8 + 0xb);
  this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
  iVar11 = *(int *)((uVar9 | *(uint *)(uVar8 + 0x13)) + 3) >> 1;
  bVar6 = this == (CanonicalHandleScope *)0x0;
  if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x438) {
    if (bVar6) goto LAB_010d9c8c;
    do {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup(this,uVar10);
      uVar10 = *puVar7;
      while( true ) {
        puVar1 = (uint *)(uVar10 + 0x13);
        uVar8 = uVar10 & 0xffffffff00000000;
        iVar4 = 0x3fffffff - iVar11;
        uVar10 = uVar8 | *(uint *)(uVar10 + 0xb);
        this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
        iVar3 = *(int *)((uVar8 | *puVar1) + 3) >> 1;
        iVar11 = iVar3 + iVar11;
        if (iVar4 <= iVar3) {
          iVar11 = 0x3fffffff;
        }
        bVar6 = this == (CanonicalHandleScope *)0x0;
        if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x438) goto LAB_010d9cb0;
        if (!bVar6) break;
LAB_010d9c8c:
        puVar7 = *(ulong **)pIVar2;
        if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar2 = puVar7 + 1;
        *puVar7 = uVar10;
      }
    } while( true );
  }
LAB_010d9cb0:
  if (bVar6) {
    puVar7 = *(ulong **)pIVar2;
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar7 + 1;
    *puVar7 = uVar10;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup(this,uVar10);
    uVar10 = *puVar7;
  }
  uVar5 = (uint)*(ushort *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xb)) + 0x13) -
          iVar11;
  return (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) << 0x20 | 1;
}

