
/* v8::internal::compiler::CallBuffer::CallBuffer(v8::internal::Zone*,
   v8::internal::compiler::CallDescriptor const*, v8::internal::compiler::FrameStateDescriptor*) */

void __thiscall
v8::internal::compiler::CallBuffer::CallBuffer
          (CallBuffer *this,Zone *param_1,CallDescriptor *param_2,FrameStateDescriptor *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  Zone *pZVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  
  *(CallDescriptor **)this = param_2;
  *(FrameStateDescriptor **)(this + 8) = param_3;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(Zone **)(this + 0x28) = param_1;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(Zone **)(this + 0x48) = param_1;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(Zone **)(this + 0x68) = param_1;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(Zone **)(this + 0x88) = param_1;
  lVar12 = **(long **)(param_2 + 0x10);
  if (lVar12 == 0) {
    lVar6 = 0;
    lVar12 = 0;
    uVar4 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
    uVar4 = lVar12 * 0x10;
    if (uVar4 < (ulong)(*(long *)(param_1 + 0x18) - lVar6) ||
        uVar4 - (*(long *)(param_1 + 0x18) - lVar6) == 0) {
      *(ulong *)(param_1 + 0x10) = lVar6 + uVar4;
    }
    else {
      lVar6 = Zone::NewExpand(param_1,uVar4);
    }
    lVar8 = *(long *)(this + 0x10);
    lVar7 = lVar6;
    for (lVar10 = *(long *)(this + 0x18); lVar10 != lVar8; lVar10 = lVar10 + -0x10) {
      uVar13 = *(undefined8 *)(lVar10 + -0x10);
      *(undefined8 *)(lVar7 + -8) = *(undefined8 *)(lVar10 + -8);
      *(undefined8 *)(lVar7 + -0x10) = uVar13;
      lVar7 = lVar7 + -0x10;
    }
    *(long *)(this + 0x10) = lVar7;
    *(long *)(this + 0x18) = lVar6;
    *(long *)(this + 0x20) = lVar6 + lVar12 * 0x10;
    lVar12 = *(long *)(this + 0x40);
    uVar4 = **(ulong **)(param_2 + 0x10);
    lVar6 = *(long *)(this + 0x30);
  }
  if ((ulong)(lVar12 - lVar6 >> 3) < uVar4) {
    pZVar5 = *(Zone **)(this + 0x48);
    lVar8 = *(long *)(this + 0x38);
    uVar3 = uVar4 * 8;
    lVar12 = *(long *)(pZVar5 + 0x10);
    if (uVar3 < (ulong)(*(long *)(pZVar5 + 0x18) - lVar12) ||
        uVar3 - (*(long *)(pZVar5 + 0x18) - lVar12) == 0) {
      *(ulong *)(pZVar5 + 0x10) = lVar12 + uVar3;
    }
    else {
      lVar12 = Zone::NewExpand(pZVar5,uVar3);
    }
    puVar2 = *(undefined8 **)(this + 0x30);
    puVar11 = *(undefined8 **)(this + 0x38);
    puVar1 = (undefined8 *)(lVar12 + (lVar8 - lVar6 >> 3) * 8);
    puVar9 = puVar1;
    while (puVar11 != puVar2) {
      puVar11 = puVar11 + -1;
      puVar9 = puVar9 + -1;
      *puVar9 = *puVar11;
    }
    *(undefined8 **)(this + 0x30) = puVar9;
    *(undefined8 **)(this + 0x38) = puVar1;
    *(ulong *)(this + 0x40) = lVar12 + uVar4 * 8;
  }
  lVar12 = *(long *)(this + 0x70);
  uVar4 = *(long *)(*(long *)(*(long *)this + 0x10) + 8) + 1;
  if ((ulong)(*(long *)(this + 0x80) - lVar12 >> 4) < uVar4) {
    pZVar5 = *(Zone **)(this + 0x88);
    lVar8 = *(long *)(this + 0x78);
    uVar3 = uVar4 * 0x10;
    lVar6 = *(long *)(pZVar5 + 0x10);
    if (uVar3 < (ulong)(*(long *)(pZVar5 + 0x18) - lVar6) ||
        uVar3 - (*(long *)(pZVar5 + 0x18) - lVar6) == 0) {
      *(ulong *)(pZVar5 + 0x10) = lVar6 + uVar3;
    }
    else {
      lVar6 = Zone::NewExpand(pZVar5,uVar3);
    }
    lVar10 = *(long *)(this + 0x70);
    lVar12 = lVar6 + (lVar8 - lVar12 >> 4) * 0x10;
    lVar7 = lVar12;
    for (lVar8 = *(long *)(this + 0x78); lVar8 != lVar10; lVar8 = lVar8 + -0x10) {
      uVar13 = *(undefined8 *)(lVar8 + -0x10);
      *(undefined8 *)(lVar7 + -8) = *(undefined8 *)(lVar8 + -8);
      *(undefined8 *)(lVar7 + -0x10) = uVar13;
      lVar7 = lVar7 + -0x10;
    }
    *(long *)(this + 0x70) = lVar7;
    *(long *)(this + 0x78) = lVar12;
    *(ulong *)(this + 0x80) = lVar6 + uVar4 * 0x10;
    uVar4 = *(long *)(*(long *)(*(long *)this + 0x10) + 8) + 1;
  }
  if (*(FrameStateDescriptor **)(this + 8) == (FrameStateDescriptor *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = FrameStateDescriptor::GetTotalSize(*(FrameStateDescriptor **)(this + 8));
    lVar12 = lVar12 + 1;
  }
  lVar6 = *(long *)(this + 0x50);
  uVar4 = uVar4 + lVar12;
  if ((ulong)(*(long *)(this + 0x60) - lVar6 >> 3) < uVar4) {
    pZVar5 = *(Zone **)(this + 0x68);
    lVar8 = *(long *)(this + 0x58);
    uVar3 = uVar4 * 8;
    lVar12 = *(long *)(pZVar5 + 0x10);
    if (uVar3 < (ulong)(*(long *)(pZVar5 + 0x18) - lVar12) ||
        uVar3 - (*(long *)(pZVar5 + 0x18) - lVar12) == 0) {
      *(ulong *)(pZVar5 + 0x10) = lVar12 + uVar3;
    }
    else {
      lVar12 = Zone::NewExpand(pZVar5,uVar3);
    }
    puVar2 = *(undefined8 **)(this + 0x50);
    puVar11 = *(undefined8 **)(this + 0x58);
    puVar1 = (undefined8 *)(lVar12 + (lVar8 - lVar6 >> 3) * 8);
    puVar9 = puVar1;
    while (puVar11 != puVar2) {
      puVar11 = puVar11 + -1;
      puVar9 = puVar9 + -1;
      *puVar9 = *puVar11;
    }
    *(undefined8 **)(this + 0x50) = puVar9;
    *(undefined8 **)(this + 0x58) = puVar1;
    *(ulong *)(this + 0x60) = lVar12 + uVar4 * 8;
  }
  return;
}

