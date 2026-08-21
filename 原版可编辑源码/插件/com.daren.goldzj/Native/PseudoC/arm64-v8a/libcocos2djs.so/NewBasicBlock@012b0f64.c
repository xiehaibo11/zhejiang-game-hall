
/* v8::internal::compiler::Schedule::NewBasicBlock() */

void __thiscall v8::internal::compiler::Schedule::NewBasicBlock(Schedule *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  Zone *pZVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  pZVar3 = *(Zone **)this;
  puVar2 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar2) < 0xa8) {
    puVar2 = (undefined8 *)Zone::NewExpand(pZVar3,0xa8);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar2 + 0x15;
  }
  lVar7 = *(long *)(this + 8);
  lVar4 = *(long *)(this + 0x10);
  uVar5 = *(undefined8 *)this;
  *puVar2 = 0xffffffffffffffff;
  *(undefined4 *)((long)puVar2 + 0xc) = 0xffffffff;
  *(undefined1 *)(puVar2 + 1) = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = uVar5;
  puVar2[0xe] = 0;
  puVar2[0xf] = uVar5;
  puVar2[0x12] = 0;
  puVar2[0x13] = uVar5;
  puVar2[0x14] = lVar4 - lVar7 >> 3;
  puVar6 = *(undefined8 **)(this + 0x10);
  if (puVar6 == *(undefined8 **)(this + 0x18)) {
    lVar7 = (long)puVar6 - *(long *)(this + 8) >> 3;
    uVar1 = lVar7 + 1;
    if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = (long)*(undefined8 **)(this + 0x18) - *(long *)(this + 8);
    uVar9 = lVar4 >> 2;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (0x7fffffe < (ulong)(lVar4 >> 3)) {
      uVar1 = 0xfffffff;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      pZVar3 = *(Zone **)(this + 0x20);
      uVar9 = uVar1 * 8;
      lVar4 = *(long *)(pZVar3 + 0x10);
      if (uVar9 < (ulong)(*(long *)(pZVar3 + 0x18) - lVar4) ||
          uVar9 - (*(long *)(pZVar3 + 0x18) - lVar4) == 0) {
        *(ulong *)(pZVar3 + 0x10) = lVar4 + uVar9;
      }
      else {
        lVar4 = Zone::NewExpand(pZVar3,uVar9);
      }
    }
    puVar6 = (undefined8 *)(lVar4 + lVar7 * 8);
    puVar8 = puVar6 + 1;
    *puVar6 = puVar2;
    puVar2 = *(undefined8 **)(this + 8);
    puVar10 = *(undefined8 **)(this + 0x10);
    while (puVar10 != puVar2) {
      puVar10 = puVar10 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar10;
    }
    *(undefined8 **)(this + 8) = puVar6;
    *(undefined8 **)(this + 0x10) = puVar8;
    *(ulong *)(this + 0x18) = lVar4 + uVar1 * 8;
  }
  else {
    *puVar6 = puVar2;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  }
  return;
}

