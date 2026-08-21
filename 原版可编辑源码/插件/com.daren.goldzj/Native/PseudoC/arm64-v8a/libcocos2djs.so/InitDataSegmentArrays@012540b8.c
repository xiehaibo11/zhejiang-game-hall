
/* v8::internal::WasmInstanceObject::InitDataSegmentArrays(v8::internal::Handle<v8::internal::WasmInstanceObject>,
   v8::internal::Handle<v8::internal::WasmModuleObject>) */

void v8::internal::WasmInstanceObject::InitDataSegmentArrays(long *param_1,ulong *param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = **(long **)(*(long *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) +
                               3) + 0x18);
  lVar4 = *(long *)(lVar6 + 200);
  uVar3 = *(uint *)(lVar4 + 0x4c);
  if (uVar3 != 0) {
    lVar5 = 0;
    uVar7 = 0;
    lVar6 = **(long **)(lVar6 + 0xe0);
    do {
      lVar1 = *(long *)(lVar4 + 0xa0) + lVar5;
      uVar2 = *(undefined4 *)(lVar1 + 0x14);
      lVar5 = lVar5 + 0x20;
      *(ulong *)(*(long *)(*param_1 + 0xab) + uVar7 * 8) = lVar6 + (ulong)*(uint *)(lVar1 + 0x10);
      if (*(char *)(lVar1 + 0x18) != '\0') {
        uVar2 = 0;
      }
      *(undefined4 *)(*(long *)(*param_1 + 0xb3) + uVar7 * 4) = uVar2;
      uVar7 = uVar7 + 1;
    } while (uVar3 != uVar7);
  }
  return;
}

