
/* v8::internal::wasm::InstanceBuilder::LoadTableSegments(v8::internal::Handle<v8::internal::WasmInstanceObject>)
    */

void __thiscall
v8::internal::wasm::InstanceBuilder::LoadTableSegments(InstanceBuilder *this,ulong *param_2)

{
  undefined4 uVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int *piVar10;
  Isolate *pIVar11;
  long lVar12;
  ulong local_68;
  
  lVar3 = *(long *)(this + 0x10);
  if (*(long *)(lVar3 + 0x120) != *(long *)(lVar3 + 0x118)) {
    uVar8 = 0;
    do {
      local_68 = *param_2;
      lVar3 = WasmInstanceObject::module((WasmInstanceObject *)&local_68);
      lVar3 = *(long *)(lVar3 + 0x118);
      if (*(char *)(lVar3 + uVar8 * 0x38 + 0x30) != '\0') {
        piVar10 = (int *)(lVar3 + uVar8 * 0x38);
        iVar7 = *piVar10;
        if (piVar10[2] == 1) {
          local_68 = *param_2;
          lVar12 = WasmInstanceObject::module((WasmInstanceObject *)&local_68);
          uVar5 = *param_2;
          uVar4 = uVar5 & 0xffffffff00000000;
          iVar9 = *piVar10;
          puVar6 = (undefined4 *)
                   (*(long *)((uVar4 | *(uint *)(uVar5 + 0x7f)) + 0x13) +
                   (ulong)*(uint *)(*(long *)(lVar12 + 0x18) +
                                    (ulong)*(uint *)(lVar3 + uVar8 * 0x38 + 0x10) * 0x20 + 0x18));
        }
        else {
          if (piVar10[2] != 2) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          uVar5 = *param_2;
          puVar6 = (undefined4 *)(lVar3 + uVar8 * 0x38 + 0x10);
          uVar4 = uVar5 & 0xffffffff00000000;
          iVar9 = iVar7;
        }
        uVar1 = *puVar6;
        lVar3 = lVar3 + uVar8 * 0x38;
        pIVar11 = *(Isolate **)this;
        lVar12 = *(long *)(lVar3 + 0x18);
        lVar3 = *(long *)(lVar3 + 0x20);
        uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)(uVar5 + 0x8f)) + (long)(iVar9 << 2) + 7);
        if (*(CanonicalHandleScope **)(pIVar11 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar2 = *(ulong **)(pIVar11 + 0x95a0);
          if (puVar2 == *(ulong **)(pIVar11 + 0x95a8)) {
            puVar2 = (ulong *)HandleScope::Extend(pIVar11);
          }
          *(ulong **)(pIVar11 + 0x95a0) = puVar2 + 1;
          *puVar2 = uVar4;
        }
        else {
          puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar11 + 0x95b8),uVar4);
        }
        uVar4 = LoadElemSegmentImpl(pIVar11,param_2,puVar2,iVar7,uVar8,uVar1,0,lVar3 - lVar12 >> 2);
        *(undefined1 *)(*(long *)(*param_2 + 0xbb) + uVar8) = 1;
        if (((byte)this[9] >> 1 & 1) == 0) {
          if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","success");
          }
        }
        else if ((uVar4 & 1) == 0) {
          ErrorThrower::RuntimeError(*(char **)(this + 0x18),"table initializer is out of bounds");
          lVar3 = *(long *)(this + 0x10);
          break;
        }
      }
      lVar3 = *(long *)(this + 0x10);
      uVar8 = (ulong)((int)uVar8 + 1);
      uVar4 = (*(long *)(lVar3 + 0x120) - *(long *)(lVar3 + 0x118) >> 3) * 0x6db6db6db6db6db7;
    } while (uVar8 <= uVar4 && uVar4 - uVar8 != 0);
  }
  uVar8 = *(long *)(lVar3 + 0xc0) - *(long *)(lVar3 + 0xb8);
  if (0 < (int)(uVar8 >> 4)) {
    iVar9 = 0;
    iVar7 = 0;
    lVar12 = 0;
    while( true ) {
      if (*(char *)(*(long *)(lVar3 + 0xb8) + lVar12) == '\a') {
        uVar4 = *param_2 & 0xffffffff00000000;
        pIVar11 = *(Isolate **)this;
        uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)(*param_2 + 0x8f)) + (long)iVar9 + 7);
        if (*(CanonicalHandleScope **)(pIVar11 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar2 = *(ulong **)(pIVar11 + 0x95a0);
          if (puVar2 == *(ulong **)(pIVar11 + 0x95a8)) {
            puVar2 = (ulong *)HandleScope::Extend(pIVar11);
          }
          *(ulong **)(pIVar11 + 0x95a0) = puVar2 + 1;
          *puVar2 = uVar4;
        }
        else {
          puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar11 + 0x95b8),uVar4);
        }
        WasmTableObject::AddDispatchTable(*(undefined8 *)this,puVar2,param_2,iVar7);
      }
      if ((uVar8 >> 4 & 0xffffffff) * 0x10 + -0x10 == lVar12) break;
      lVar3 = *(long *)(this + 0x10);
      lVar12 = lVar12 + 0x10;
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 4;
    }
  }
  return;
}

