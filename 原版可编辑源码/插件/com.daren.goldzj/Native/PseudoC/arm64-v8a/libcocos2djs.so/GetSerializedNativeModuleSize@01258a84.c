
/* v8::internal::wasm::WasmSerializer::GetSerializedNativeModuleSize() const */

long v8::internal::wasm::WasmSerializer::GetSerializedNativeModuleSize(void)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long in_x0;
  long in_x1;
  long in_x2;
  long in_x3;
  long in_x4;
  long in_x5;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  plVar3 = *(long **)(in_x0 + 8);
  lVar8 = (long)*(long **)(in_x0 + 0x10) - (long)plVar3;
  if (lVar8 == 0) {
    return 0x18;
  }
  uVar1 = (lVar8 - 8U >> 3) + 1;
  if (uVar1 < 2) {
    lVar8 = 8;
    lVar9 = *plVar3;
    plVar7 = plVar3;
    if (lVar9 == 0) goto LAB_01258ae8;
    do {
      lVar9 = *(long *)(lVar9 + 8) + *(long *)(lVar9 + 0x18) + *(long *)(lVar9 + 0x28) +
              *(long *)(lVar9 + 0x80) * 8 + 0x5d;
      while( true ) {
        plVar7 = plVar7 + 1;
        lVar8 = lVar9 + lVar8;
        if (*(long **)(in_x0 + 0x10) == plVar7) goto LAB_01258bb8;
LAB_01258ae0:
        lVar9 = *plVar7;
        if (lVar9 != 0) break;
LAB_01258ae8:
        lVar9 = 8;
      }
    } while( true );
  }
  uVar10 = uVar1 & 0x3ffffffffffffffe;
  lVar8 = 0;
  plVar7 = plVar3 + uVar10;
  lVar9 = 8;
  lVar4 = *plVar3;
  lVar5 = plVar3[1];
  uVar6 = uVar10;
  plVar3 = plVar3 + 1;
  while( true ) {
    if (lVar4 != 0) {
      in_x1 = *(long *)(lVar4 + 8);
    }
    if (lVar5 != 0) {
      in_x3 = *(long *)(lVar5 + 8);
    }
    if (lVar4 != 0) {
      in_x2 = *(long *)(lVar4 + 0x18);
    }
    if (lVar5 != 0) {
      in_x5 = *(long *)(lVar5 + 0x18);
    }
    if (lVar4 != 0) {
      in_x4 = *(long *)(lVar4 + 0x28);
    }
    lVar2 = in_x1 + 0x5d;
    if (lVar5 != 0) {
      in_x1 = *(long *)(lVar5 + 0x28);
    }
    lVar2 = lVar2 + in_x2;
    in_x3 = in_x3 + 0x5d + in_x5;
    if (lVar4 != 0) {
      in_x2 = *(long *)(lVar4 + 0x80);
    }
    in_x4 = lVar2 + in_x4;
    lVar2 = in_x3 + in_x1;
    if (lVar5 != 0) {
      in_x3 = *(long *)(lVar5 + 0x80);
    }
    in_x2 = in_x4 + in_x2 * 8;
    in_x1 = lVar2 + in_x3 * 8;
    lVar2 = 8;
    if (lVar4 != 0) {
      lVar2 = in_x2;
    }
    lVar4 = 8;
    if (lVar5 != 0) {
      lVar4 = in_x1;
    }
    lVar9 = lVar2 + lVar9;
    uVar6 = uVar6 - 2;
    lVar8 = lVar4 + lVar8;
    if (uVar6 == 0) break;
    lVar4 = plVar3[1];
    lVar5 = plVar3[2];
    plVar3 = plVar3 + 2;
  }
  lVar8 = lVar8 + lVar9;
  if (uVar1 != uVar10) goto LAB_01258ae0;
LAB_01258bb8:
  return lVar8 + 0x10;
}

