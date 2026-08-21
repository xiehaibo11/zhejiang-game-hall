
/* v8::internal::WasmInstanceObject::GetGlobalValue(v8::internal::Handle<v8::internal::WasmInstanceObject>,
   v8::internal::wasm::WasmGlobal const&) */

void __thiscall
v8::internal::WasmInstanceObject::GetGlobalValue
          (undefined1 *param_1,WasmInstanceObject *this,byte *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  ulong *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  ulong uVar8;
  Isolate *pIVar9;
  undefined1 auVar10 [12];
  
  bVar2 = *param_3;
  uVar8 = *(ulong *)this;
  if ((bVar2 < 10) && ((1 << (ulong)(bVar2 & 0x1f) & 0x2c0U) != 0)) {
    pIVar9 = (Isolate *)(uVar8 & 0xffffffff00000000);
    auVar10 = GetGlobalBufferAndIndex();
    uVar8 = *auVar10._0_8_ & 0xffffffff00000000 |
            (ulong)*(uint *)(*auVar10._0_8_ + (long)(auVar10._8_4_ << 2) + 7);
    if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar9 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar9 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar9);
      }
      *(ulong **)(pIVar9 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar8;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar8);
    }
    *(undefined8 *)(param_1 + 9) = 0;
    *param_1 = 6;
    *(ulong **)(param_1 + 1) = puVar3;
    return;
  }
  if ((param_3[1] == 0) || (param_3[0x1c] == 0)) {
    puVar5 = (undefined8 *)(*(long *)(uVar8 + 0x4f) + (ulong)*(uint *)(param_3 + 0x18));
  }
  else {
    puVar5 = *(undefined8 **)(*(long *)(uVar8 + 0x57) + (ulong)*(uint *)(param_3 + 0x18) * 8);
  }
  switch((uint)bVar2) {
  case 1:
    uVar4 = *(undefined4 *)puVar5;
    uVar7 = 1;
    break;
  case 2:
    uVar6 = *puVar5;
    uVar7 = 2;
    goto LAB_01254f18;
  case 3:
    uVar4 = *(undefined4 *)puVar5;
    uVar7 = 3;
    break;
  case 4:
    uVar6 = *puVar5;
    uVar7 = 4;
LAB_01254f18:
    *param_1 = uVar7;
    *(undefined8 *)(param_1 + 9) = 0;
    *(undefined8 *)(param_1 + 1) = uVar6;
    return;
  case 5:
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    *param_1 = 5;
    *(undefined8 *)(param_1 + 9) = 0;
    *(undefined8 *)(param_1 + 1) = 0;
    *(undefined8 *)(param_1 + 9) = uVar1;
    *(undefined8 *)(param_1 + 1) = uVar6;
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  *param_1 = uVar7;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 1) = uVar4;
  return;
}

