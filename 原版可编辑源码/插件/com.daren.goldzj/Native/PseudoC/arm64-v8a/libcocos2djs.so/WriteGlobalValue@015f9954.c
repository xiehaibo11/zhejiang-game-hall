
/* v8::internal::wasm::InstanceBuilder::WriteGlobalValue(v8::internal::wasm::WasmGlobal const&,
   v8::internal::Handle<v8::internal::WasmGlobalObject>) */

void __thiscall
v8::internal::wasm::InstanceBuilder::WriteGlobalValue
          (InstanceBuilder *this,undefined1 *param_1,ulong *param_3)

{
  long lVar1;
  int iVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  switch(*param_1) {
  case 1:
  case 3:
    if (*(long **)(this + 0x40) == (long *)0x0) {
LAB_015f9b0c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar5 = *param_3;
    *(undefined4 *)(*(long *)(**(long **)(this + 0x40) + 0x13) + (long)*(int *)(param_1 + 0x18)) =
         *(undefined4 *)
          (*(long *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb)) + 0x13) +
          (long)(*(int *)(uVar5 + 0x13) >> 1));
    break;
  case 2:
  case 4:
    if (*(long **)(this + 0x40) == (long *)0x0) goto LAB_015f9b0c;
    uVar5 = *param_3;
    *(undefined8 *)(*(long *)(**(long **)(this + 0x40) + 0x13) + (long)*(int *)(param_1 + 0x18)) =
         *(undefined8 *)
          (*(long *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb)) + 0x13) +
          (long)(*(int *)(uVar5 + 0x13) >> 1));
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 6:
  case 7:
  case 9:
    uVar5 = *param_3;
    iVar2 = *(int *)(param_1 + 0x18);
    pIVar3 = (Isolate *)(uVar5 & 0xffffffff00000000);
    uVar7 = **(ulong **)(this + 0x48);
    uVar5 = (ulong)pIVar3 |
            (ulong)*(uint *)(((ulong)pIVar3 | (ulong)*(uint *)(uVar5 + 0xf)) +
                             (long)(int)((*(uint *)(uVar5 + 0x13) & 0x7ffffffe) << 1) + 7);
    if (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar5;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8),uVar5);
      uVar5 = *puVar4;
    }
    lVar1 = uVar7 + (long)(iVar2 << 2);
    *(int *)(lVar1 + 7) = (int)uVar5;
    if ((uVar5 & 1) != 0) {
      uVar6 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      lVar1 = lVar1 + 7;
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar7,lVar1,uVar5);
        uVar6 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar7,lVar1,uVar5);
        return;
      }
    }
  }
  return;
}

