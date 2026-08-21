
/* v8::internal::compiler::JSHeapBroker::SerializeTypedArrayStringTags() */

void __thiscall
v8::internal::compiler::JSHeapBroker::SerializeTypedArrayStringTags(JSHeapBroker *this)

{
  JSHeapBroker *pJVar1;
  JSHeapBroker *pJVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  Zone *pZVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  Factory *pFVar12;
  long lVar13;
  char *local_50;
  undefined8 uStack_48;
  
  pFVar12 = *(Factory **)this;
  uStack_48 = __strlen_chk("Uint8Array",0xb);
  local_50 = "Uint8Array";
  uVar4 = Factory::InternalizeUtf8String(pFVar12,(Vector *)&local_50);
  uVar4 = GetOrCreateData(this,uVar4);
  puVar6 = *(undefined8 **)(this + 0x230);
  pJVar1 = this + 0x228;
  pJVar2 = this + 0x230;
  if (puVar6 == *(undefined8 **)(this + 0x238)) {
    lVar13 = (long)puVar6 - *(long *)pJVar1 >> 3;
    uVar3 = lVar13 + 1;
    if (uVar3 >> 0x1c != 0) goto LAB_017173cc;
    lVar5 = (long)*(undefined8 **)(this + 0x238) - *(long *)pJVar1;
    uVar9 = lVar5 >> 2;
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    if (0x7fffffe < (ulong)(lVar5 >> 3)) {
      uVar3 = 0xfffffff;
    }
    if (uVar3 == 0) {
      lVar5 = 0;
    }
    else {
      pZVar7 = *(Zone **)(this + 0x240);
      uVar9 = uVar3 * 8;
      lVar5 = *(long *)(pZVar7 + 0x10);
      if (uVar9 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar5) ||
          uVar9 - (*(long *)(pZVar7 + 0x18) - lVar5) == 0) {
        *(ulong *)(pZVar7 + 0x10) = lVar5 + uVar9;
      }
      else {
        lVar5 = Zone::NewExpand(pZVar7,uVar9);
      }
    }
    puVar6 = (undefined8 *)(lVar5 + lVar13 * 8);
    puVar8 = puVar6 + 1;
    *puVar6 = uVar4;
    puVar10 = *(undefined8 **)pJVar1;
    puVar11 = *(undefined8 **)pJVar2;
    while (puVar11 != puVar10) {
      puVar11 = puVar11 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar11;
    }
    *(undefined8 **)(this + 0x228) = puVar6;
    *(undefined8 **)(this + 0x230) = puVar8;
    *(ulong *)(this + 0x238) = lVar5 + uVar3 * 8;
  }
  else {
    *puVar6 = uVar4;
    *(long *)pJVar2 = *(long *)pJVar2 + 8;
  }
  pFVar12 = *(Factory **)this;
  uStack_48 = __strlen_chk("Int8Array",10);
  local_50 = "Int8Array";
  uVar4 = Factory::InternalizeUtf8String(pFVar12,(Vector *)&local_50);
  uVar4 = GetOrCreateData(this,uVar4);
  puVar6 = *(undefined8 **)(this + 0x230);
  if (puVar6 == *(undefined8 **)(this + 0x238)) {
    lVar13 = (long)puVar6 - *(long *)pJVar1 >> 3;
    uVar3 = lVar13 + 1;
    if (uVar3 >> 0x1c != 0) goto LAB_017173cc;
    lVar5 = (long)*(undefined8 **)(this + 0x238) - *(long *)pJVar1;
    uVar9 = lVar5 >> 2;
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    if (0x7fffffe < (ulong)(lVar5 >> 3)) {
      uVar3 = 0xfffffff;
    }
    if (uVar3 == 0) {
      lVar5 = 0;
    }
    else {
      pZVar7 = *(Zone **)(this + 0x240);
      uVar9 = uVar3 * 8;
      lVar5 = *(long *)(pZVar7 + 0x10);
      if (uVar9 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar5) ||
          uVar9 - (*(long *)(pZVar7 + 0x18) - lVar5) == 0) {
        *(ulong *)(pZVar7 + 0x10) = lVar5 + uVar9;
      }
      else {
        lVar5 = Zone::NewExpand(pZVar7,uVar9);
      }
    }
    puVar6 = (undefined8 *)(lVar5 + lVar13 * 8);
    puVar8 = puVar6 + 1;
    *puVar6 = uVar4;
    puVar10 = *(undefined8 **)pJVar1;
    puVar11 = *(undefined8 **)pJVar2;
    while (puVar11 != puVar10) {
      puVar11 = puVar11 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar11;
    }
    *(undefined8 **)(this + 0x228) = puVar6;
    *(undefined8 **)(this + 0x230) = puVar8;
    *(ulong *)(this + 0x238) = lVar5 + uVar3 * 8;
  }
  else {
    *puVar6 = uVar4;
    *(long *)pJVar2 = *(long *)pJVar2 + 8;
  }
  pFVar12 = *(Factory **)this;
  uStack_48 = __strlen_chk("Uint16Array",0xc);
  local_50 = "Uint16Array";
  uVar4 = Factory::InternalizeUtf8String(pFVar12,(Vector *)&local_50);
  uVar4 = GetOrCreateData(this,uVar4);
  puVar6 = *(undefined8 **)(this + 0x230);
  if (puVar6 == *(undefined8 **)(this + 0x238)) {
    lVar13 = (long)puVar6 - *(long *)pJVar1 >> 3;
    uVar3 = lVar13 + 1;
    if (uVar3 >> 0x1c != 0) goto LAB_017173cc;
    lVar5 = (long)*(undefined8 **)(this + 0x238) - *(long *)pJVar1;
    uVar9 = lVar5 >> 2;
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    if (0x7fffffe < (ulong)(lVar5 >> 3)) {
      uVar3 = 0xfffffff;
    }
    if (uVar3 == 0) {
      lVar5 = 0;
    }
    else {
      pZVar7 = *(Zone **)(this + 0x240);
      uVar9 = uVar3 * 8;
      lVar5 = *(long *)(pZVar7 + 0x10);
      if (uVar9 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar5) ||
          uVar9 - (*(long *)(pZVar7 + 0x18) - lVar5) == 0) {
        *(ulong *)(pZVar7 + 0x10) = lVar5 + uVar9;
      }
      else {
        lVar5 = Zone::NewExpand(pZVar7,uVar9);
      }
    }
    puVar6 = (undefined8 *)(lVar5 + lVar13 * 8);
    puVar8 = puVar6 + 1;
    *puVar6 = uVar4;
    puVar10 = *(undefined8 **)pJVar1;
    puVar11 = *(undefined8 **)pJVar2;
    while (puVar11 != puVar10) {
      puVar11 = puVar11 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar11;
    }
    *(undefined8 **)(this + 0x228) = puVar6;
    *(undefined8 **)(this + 0x230) = puVar8;
    *(ulong *)(this + 0x238) = lVar5 + uVar3 * 8;
  }
  else {
    *puVar6 = uVar4;
    *(long *)pJVar2 = *(long *)pJVar2 + 8;
  }
  pFVar12 = *(Factory **)this;
  uStack_48 = __strlen_chk("Int16Array",0xb);
  local_50 = "Int16Array";
  uVar4 = Factory::InternalizeUtf8String(pFVar12,(Vector *)&local_50);
  uVar4 = GetOrCreateData(this,uVar4);
  puVar6 = *(undefined8 **)(this + 0x230);
  if (puVar6 == *(undefined8 **)(this + 0x238)) {
    lVar13 = (long)puVar6 - *(long *)pJVar1 >> 3;
    uVar3 = lVar13 + 1;
    if (uVar3 >> 0x1c != 0) goto LAB_017173cc;
    lVar5 = (long)*(undefined8 **)(this + 0x238) - *(long *)pJVar1;
    uVar9 = lVar5 >> 2;
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    if (0x7fffffe < (ulong)(lVar5 >> 3)) {
      uVar3 = 0xfffffff;
    }
    if (uVar3 == 0) {
      lVar5 = 0;
    }
    else {
      pZVar7 = *(Zone **)(this + 0x240);
      uVar9 = uVar3 * 8;
      lVar5 = *(long *)(pZVar7 + 0x10);
      if (uVar9 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar5) ||
          uVar9 - (*(long *)(pZVar7 + 0x18) - lVar5) == 0) {
        *(ulong *)(pZVar7 + 0x10) = lVar5 + uVar9;
      }
      else {
        lVar5 = Zone::NewExpand(pZVar7,uVar9);
      }
    }
    puVar6 = (undefined8 *)(lVar5 + lVar13 * 8);
    puVar8 = puVar6 + 1;
    *puVar6 = uVar4;
    puVar10 = *(undefined8 **)pJVar1;
    puVar11 = *(undefined8 **)pJVar2;
    while (puVar11 != puVar10) {
      puVar11 = puVar11 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar11;
    }
    *(undefined8 **)(this + 0x228) = puVar6;
    *(undefined8 **)(this + 0x230) = puVar8;
    *(ulong *)(this + 0x238) = lVar5 + uVar3 * 8;
  }
  else {
    *puVar6 = uVar4;
    *(long *)pJVar2 = *(long *)pJVar2 + 8;
  }
  pFVar12 = *(Factory **)this;
  uStack_48 = __strlen_chk("Uint32Array",0xc);
  local_50 = "Uint32Array";
  uVar4 = Factory::InternalizeUtf8String(pFVar12,(Vector *)&local_50);
  uVar4 = GetOrCreateData(this,uVar4);
  puVar6 = *(undefined8 **)(this + 0x230);
  if (puVar6 == *(undefined8 **)(this + 0x238)) {
    lVar13 = (long)puVar6 - *(long *)pJVar1 >> 3;
    uVar3 = lVar13 + 1;
    if (uVar3 >> 0x1c != 0) goto LAB_017173cc;
    lVar5 = (long)*(undefined8 **)(this + 0x238) - *(long *)pJVar1;
    uVar9 = lVar5 >> 2;
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    if (0x7fffffe < (ulong)(lVar5 >> 3)) {
      uVar3 = 0xfffffff;
    }
    if (uVar3 == 0) {
      lVar5 = 0;
    }
    else {
      pZVar7 = *(Zone **)(this + 0x240);
      uVar9 = uVar3 * 8;
      lVar5 = *(long *)(pZVar7 + 0x10);
      if (uVar9 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar5) ||
          uVar9 - (*(long *)(pZVar7 + 0x18) - lVar5) == 0) {
        *(ulong *)(pZVar7 + 0x10) = lVar5 + uVar9;
      }
      else {
        lVar5 = Zone::NewExpand(pZVar7,uVar9);
      }
    }
    puVar6 = (undefined8 *)(lVar5 + lVar13 * 8);
    puVar8 = puVar6 + 1;
    *puVar6 = uVar4;
    puVar10 = *(undefined8 **)pJVar1;
    puVar11 = *(undefined8 **)pJVar2;
    while (puVar11 != puVar10) {
      puVar11 = puVar11 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar11;
    }
    *(undefined8 **)(this + 0x228) = puVar6;
    *(undefined8 **)(this + 0x230) = puVar8;
    *(ulong *)(this + 0x238) = lVar5 + uVar3 * 8;
  }
  else {
    *puVar6 = uVar4;
    *(long *)pJVar2 = *(long *)pJVar2 + 8;
  }
  pFVar12 = *(Factory **)this;
  uStack_48 = __strlen_chk("Int32Array",0xb);
  local_50 = "Int32Array";
  uVar4 = Factory::InternalizeUtf8String(pFVar12,(Vector *)&local_50);
  uVar4 = GetOrCreateData(this,uVar4);
  puVar6 = *(undefined8 **)(this + 0x230);
  if (puVar6 == *(undefined8 **)(this + 0x238)) {
    lVar13 = (long)puVar6 - *(long *)pJVar1 >> 3;
    uVar3 = lVar13 + 1;
    if (uVar3 >> 0x1c != 0) goto LAB_017173cc;
    lVar5 = (long)*(undefined8 **)(this + 0x238) - *(long *)pJVar1;
    uVar9 = lVar5 >> 2;
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    if (0x7fffffe < (ulong)(lVar5 >> 3)) {
      uVar3 = 0xfffffff;
    }
    if (uVar3 == 0) {
      lVar5 = 0;
    }
    else {
      pZVar7 = *(Zone **)(this + 0x240);
      uVar9 = uVar3 * 8;
      lVar5 = *(long *)(pZVar7 + 0x10);
      if (uVar9 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar5) ||
          uVar9 - (*(long *)(pZVar7 + 0x18) - lVar5) == 0) {
        *(ulong *)(pZVar7 + 0x10) = lVar5 + uVar9;
      }
      else {
        lVar5 = Zone::NewExpand(pZVar7,uVar9);
      }
    }
    puVar6 = (undefined8 *)(lVar5 + lVar13 * 8);
    puVar8 = puVar6 + 1;
    *puVar6 = uVar4;
    puVar10 = *(undefined8 **)pJVar1;
    puVar11 = *(undefined8 **)pJVar2;
    while (puVar11 != puVar10) {
      puVar11 = puVar11 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar11;
    }
    *(undefined8 **)(this + 0x228) = puVar6;
    *(undefined8 **)(this + 0x230) = puVar8;
    *(ulong *)(this + 0x238) = lVar5 + uVar3 * 8;
  }
  else {
    *puVar6 = uVar4;
    *(long *)pJVar2 = *(long *)pJVar2 + 8;
  }
  pFVar12 = *(Factory **)this;
  uStack_48 = __strlen_chk("Float32Array",0xd);
  local_50 = "Float32Array";
  uVar4 = Factory::InternalizeUtf8String(pFVar12,(Vector *)&local_50);
  uVar4 = GetOrCreateData(this,uVar4);
  puVar6 = *(undefined8 **)(this + 0x230);
  if (puVar6 == *(undefined8 **)(this + 0x238)) {
    lVar13 = (long)puVar6 - *(long *)pJVar1 >> 3;
    uVar3 = lVar13 + 1;
    if (uVar3 >> 0x1c != 0) goto LAB_017173cc;
    lVar5 = (long)*(undefined8 **)(this + 0x238) - *(long *)pJVar1;
    uVar9 = lVar5 >> 2;
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    if (0x7fffffe < (ulong)(lVar5 >> 3)) {
      uVar3 = 0xfffffff;
    }
    if (uVar3 == 0) {
      lVar5 = 0;
    }
    else {
      pZVar7 = *(Zone **)(this + 0x240);
      uVar9 = uVar3 * 8;
      lVar5 = *(long *)(pZVar7 + 0x10);
      if (uVar9 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar5) ||
          uVar9 - (*(long *)(pZVar7 + 0x18) - lVar5) == 0) {
        *(ulong *)(pZVar7 + 0x10) = lVar5 + uVar9;
      }
      else {
        lVar5 = Zone::NewExpand(pZVar7,uVar9);
      }
    }
    puVar6 = (undefined8 *)(lVar5 + lVar13 * 8);
    puVar8 = puVar6 + 1;
    *puVar6 = uVar4;
    puVar10 = *(undefined8 **)pJVar1;
    puVar11 = *(undefined8 **)pJVar2;
    while (puVar11 != puVar10) {
      puVar11 = puVar11 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar11;
    }
    *(undefined8 **)(this + 0x228) = puVar6;
    *(undefined8 **)(this + 0x230) = puVar8;
    *(ulong *)(this + 0x238) = lVar5 + uVar3 * 8;
  }
  else {
    *puVar6 = uVar4;
    *(long *)pJVar2 = *(long *)pJVar2 + 8;
  }
  pFVar12 = *(Factory **)this;
  uStack_48 = __strlen_chk("Float64Array",0xd);
  local_50 = "Float64Array";
  uVar4 = Factory::InternalizeUtf8String(pFVar12,(Vector *)&local_50);
  uVar4 = GetOrCreateData(this,uVar4);
  puVar6 = *(undefined8 **)(this + 0x230);
  if (puVar6 == *(undefined8 **)(this + 0x238)) {
    lVar13 = (long)puVar6 - *(long *)pJVar1 >> 3;
    uVar3 = lVar13 + 1;
    if (uVar3 >> 0x1c != 0) goto LAB_017173cc;
    lVar5 = (long)*(undefined8 **)(this + 0x238) - *(long *)pJVar1;
    uVar9 = lVar5 >> 2;
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    if (0x7fffffe < (ulong)(lVar5 >> 3)) {
      uVar3 = 0xfffffff;
    }
    if (uVar3 == 0) {
      lVar5 = 0;
    }
    else {
      pZVar7 = *(Zone **)(this + 0x240);
      uVar9 = uVar3 * 8;
      lVar5 = *(long *)(pZVar7 + 0x10);
      if (uVar9 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar5) ||
          uVar9 - (*(long *)(pZVar7 + 0x18) - lVar5) == 0) {
        *(ulong *)(pZVar7 + 0x10) = lVar5 + uVar9;
      }
      else {
        lVar5 = Zone::NewExpand(pZVar7,uVar9);
      }
    }
    puVar6 = (undefined8 *)(lVar5 + lVar13 * 8);
    puVar8 = puVar6 + 1;
    *puVar6 = uVar4;
    puVar10 = *(undefined8 **)pJVar1;
    puVar11 = *(undefined8 **)pJVar2;
    while (puVar11 != puVar10) {
      puVar11 = puVar11 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar11;
    }
    *(undefined8 **)(this + 0x228) = puVar6;
    *(undefined8 **)(this + 0x230) = puVar8;
    *(ulong *)(this + 0x238) = lVar5 + uVar3 * 8;
  }
  else {
    *puVar6 = uVar4;
    *(long *)pJVar2 = *(long *)pJVar2 + 8;
  }
  pFVar12 = *(Factory **)this;
  uStack_48 = __strlen_chk("Uint8ClampedArray",0x12);
  local_50 = "Uint8ClampedArray";
  uVar4 = Factory::InternalizeUtf8String(pFVar12,(Vector *)&local_50);
  uVar4 = GetOrCreateData(this,uVar4);
  puVar6 = *(undefined8 **)(this + 0x230);
  if (puVar6 == *(undefined8 **)(this + 0x238)) {
    lVar13 = (long)puVar6 - *(long *)pJVar1 >> 3;
    uVar3 = lVar13 + 1;
    if (uVar3 >> 0x1c != 0) goto LAB_017173cc;
    lVar5 = (long)*(undefined8 **)(this + 0x238) - *(long *)pJVar1;
    uVar9 = lVar5 >> 2;
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    if (0x7fffffe < (ulong)(lVar5 >> 3)) {
      uVar3 = 0xfffffff;
    }
    if (uVar3 == 0) {
      lVar5 = 0;
    }
    else {
      pZVar7 = *(Zone **)(this + 0x240);
      uVar9 = uVar3 * 8;
      lVar5 = *(long *)(pZVar7 + 0x10);
      if (uVar9 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar5) ||
          uVar9 - (*(long *)(pZVar7 + 0x18) - lVar5) == 0) {
        *(ulong *)(pZVar7 + 0x10) = lVar5 + uVar9;
      }
      else {
        lVar5 = Zone::NewExpand(pZVar7,uVar9);
      }
    }
    puVar6 = (undefined8 *)(lVar5 + lVar13 * 8);
    puVar8 = puVar6 + 1;
    *puVar6 = uVar4;
    puVar10 = *(undefined8 **)pJVar1;
    puVar11 = *(undefined8 **)pJVar2;
    while (puVar11 != puVar10) {
      puVar11 = puVar11 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar11;
    }
    *(undefined8 **)(this + 0x228) = puVar6;
    *(undefined8 **)(this + 0x230) = puVar8;
    *(ulong *)(this + 0x238) = lVar5 + uVar3 * 8;
  }
  else {
    *puVar6 = uVar4;
    *(long *)pJVar2 = *(long *)pJVar2 + 8;
  }
  pFVar12 = *(Factory **)this;
  uStack_48 = __strlen_chk("BigUint64Array",0xf);
  local_50 = "BigUint64Array";
  uVar4 = Factory::InternalizeUtf8String(pFVar12,(Vector *)&local_50);
  uVar4 = GetOrCreateData(this,uVar4);
  puVar6 = *(undefined8 **)(this + 0x230);
  if (puVar6 == *(undefined8 **)(this + 0x238)) {
    lVar13 = (long)puVar6 - *(long *)pJVar1 >> 3;
    uVar3 = lVar13 + 1;
    if (uVar3 >> 0x1c != 0) goto LAB_017173cc;
    lVar5 = (long)*(undefined8 **)(this + 0x238) - *(long *)pJVar1;
    uVar9 = lVar5 >> 2;
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    if (0x7fffffe < (ulong)(lVar5 >> 3)) {
      uVar3 = 0xfffffff;
    }
    if (uVar3 == 0) {
      lVar5 = 0;
    }
    else {
      pZVar7 = *(Zone **)(this + 0x240);
      uVar9 = uVar3 * 8;
      lVar5 = *(long *)(pZVar7 + 0x10);
      if (uVar9 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar5) ||
          uVar9 - (*(long *)(pZVar7 + 0x18) - lVar5) == 0) {
        *(ulong *)(pZVar7 + 0x10) = lVar5 + uVar9;
      }
      else {
        lVar5 = Zone::NewExpand(pZVar7,uVar9);
      }
    }
    puVar6 = (undefined8 *)(lVar5 + lVar13 * 8);
    puVar8 = puVar6 + 1;
    *puVar6 = uVar4;
    puVar10 = *(undefined8 **)pJVar1;
    puVar11 = *(undefined8 **)pJVar2;
    while (puVar11 != puVar10) {
      puVar11 = puVar11 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar11;
    }
    *(undefined8 **)(this + 0x228) = puVar6;
    *(undefined8 **)(this + 0x230) = puVar8;
    *(ulong *)(this + 0x238) = lVar5 + uVar3 * 8;
  }
  else {
    *puVar6 = uVar4;
    *(long *)pJVar2 = *(long *)pJVar2 + 8;
  }
  pFVar12 = *(Factory **)this;
  uStack_48 = __strlen_chk("BigInt64Array",0xe);
  local_50 = "BigInt64Array";
  uVar4 = Factory::InternalizeUtf8String(pFVar12,(Vector *)&local_50);
  uVar4 = GetOrCreateData(this,uVar4);
  puVar6 = *(undefined8 **)(this + 0x230);
  if (puVar6 == *(undefined8 **)(this + 0x238)) {
    lVar13 = (long)puVar6 - *(long *)pJVar1 >> 3;
    uVar3 = lVar13 + 1;
    if (uVar3 >> 0x1c != 0) {
LAB_017173cc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = (long)*(undefined8 **)(this + 0x238) - *(long *)pJVar1;
    uVar9 = lVar5 >> 2;
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    if (0x7fffffe < (ulong)(lVar5 >> 3)) {
      uVar3 = 0xfffffff;
    }
    if (uVar3 == 0) {
      lVar5 = 0;
    }
    else {
      pZVar7 = *(Zone **)(this + 0x240);
      uVar9 = uVar3 * 8;
      lVar5 = *(long *)(pZVar7 + 0x10);
      if (uVar9 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar5) ||
          uVar9 - (*(long *)(pZVar7 + 0x18) - lVar5) == 0) {
        *(ulong *)(pZVar7 + 0x10) = lVar5 + uVar9;
      }
      else {
        lVar5 = Zone::NewExpand(pZVar7,uVar9);
      }
    }
    puVar6 = (undefined8 *)(lVar5 + lVar13 * 8);
    puVar8 = puVar6 + 1;
    *puVar6 = uVar4;
    puVar10 = *(undefined8 **)pJVar1;
    puVar11 = *(undefined8 **)pJVar2;
    while (puVar11 != puVar10) {
      puVar11 = puVar11 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar11;
    }
    *(undefined8 **)(this + 0x228) = puVar6;
    *(undefined8 **)(this + 0x230) = puVar8;
    *(ulong *)(this + 0x238) = lVar5 + uVar3 * 8;
  }
  else {
    *puVar6 = uVar4;
    *(long *)pJVar2 = *(long *)pJVar2 + 8;
  }
  return;
}

