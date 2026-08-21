
/* v8::internal::wasm::NativeModuleSerializer::Measure() const */

long v8::internal::wasm::NativeModuleSerializer::Measure(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long in_x0;
  long lVar7;
  long in_x2;
  long in_x3;
  long in_x4;
  long in_x5;
  long in_x6;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  
  lVar9 = *(long *)(in_x0 + 0x10);
  if (lVar9 == 0) {
    return 8;
  }
  plVar10 = *(long **)(in_x0 + 8);
  uVar1 = (lVar9 * 8 - 8U >> 3) + 1;
  if (uVar1 < 2) {
    lVar7 = 8;
    plVar8 = plVar10;
  }
  else {
    uVar12 = uVar1 & 0x3ffffffffffffffe;
    lVar7 = 0;
    plVar8 = plVar10 + uVar12;
    lVar11 = 8;
    lVar3 = *plVar10;
    lVar4 = plVar10[1];
    uVar5 = uVar12;
    plVar6 = plVar10 + 1;
    while( true ) {
      if (lVar3 != 0) {
        in_x2 = *(long *)(lVar3 + 8);
      }
      if (lVar4 != 0) {
        in_x4 = *(long *)(lVar4 + 8);
      }
      if (lVar3 != 0) {
        in_x3 = *(long *)(lVar3 + 0x18);
      }
      if (lVar4 != 0) {
        in_x6 = *(long *)(lVar4 + 0x18);
      }
      if (lVar3 != 0) {
        in_x5 = *(long *)(lVar3 + 0x28);
      }
      lVar2 = in_x2 + 0x5d;
      if (lVar4 != 0) {
        in_x2 = *(long *)(lVar4 + 0x28);
      }
      lVar2 = lVar2 + in_x3;
      in_x4 = in_x4 + 0x5d + in_x6;
      if (lVar3 != 0) {
        in_x3 = *(long *)(lVar3 + 0x80);
      }
      in_x5 = lVar2 + in_x5;
      lVar2 = in_x4 + in_x2;
      if (lVar4 != 0) {
        in_x4 = *(long *)(lVar4 + 0x80);
      }
      in_x3 = in_x5 + in_x3 * 8;
      in_x2 = lVar2 + in_x4 * 8;
      lVar2 = 8;
      if (lVar3 != 0) {
        lVar2 = in_x3;
      }
      lVar3 = 8;
      if (lVar4 != 0) {
        lVar3 = in_x2;
      }
      lVar11 = lVar2 + lVar11;
      uVar5 = uVar5 - 2;
      lVar7 = lVar3 + lVar7;
      if (uVar5 == 0) break;
      lVar3 = plVar6[1];
      lVar4 = plVar6[2];
      plVar6 = plVar6 + 2;
    }
    lVar7 = lVar7 + lVar11;
    if (uVar1 == uVar12) {
      return lVar7;
    }
  }
  lVar11 = *plVar8;
  if (lVar11 == 0) goto LAB_01258a58;
  do {
    lVar11 = *(long *)(lVar11 + 8) + *(long *)(lVar11 + 0x18) + *(long *)(lVar11 + 0x28) +
             *(long *)(lVar11 + 0x80) * 8 + 0x5d;
    while( true ) {
      plVar8 = plVar8 + 1;
      lVar7 = lVar11 + lVar7;
      if (plVar10 + lVar9 == plVar8) {
        return lVar7;
      }
      lVar11 = *plVar8;
      if (lVar11 != 0) break;
LAB_01258a58:
      lVar11 = 8;
    }
  } while( true );
}

