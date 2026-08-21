
/* v8::internal::compiler::SpillRange::SpillRange(v8::internal::compiler::TopLevelLiveRange*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::SpillRange::SpillRange
          (SpillRange *this,TopLevelLiveRange *param_1,Zone *param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  Zone *this_00;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  TopLevelLiveRange *pTVar10;
  undefined8 *puVar11;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(Zone **)(this + 0x18) = param_2;
  *(undefined8 *)(this + 0x28) = 0xffffffffffffffff;
  uVar2 = (*(uint *)(param_1 + 4) >> 0xd) - 1;
  if (0xc < (uVar2 & 0xff)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  puVar8 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)0x0;
  *(undefined4 *)(this + 0x30) = (&DAT_01a5b2a0)[(char)uVar2];
  puVar11 = *(undefined8 **)(param_1 + 0x10);
  pTVar10 = param_1;
  while( true ) {
    for (; puVar11 != (undefined8 *)0x0; puVar11 = (undefined8 *)puVar11[1]) {
      puVar3 = *(undefined8 **)(param_2 + 0x10);
      if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar3) < 0x10) {
        puVar3 = (undefined8 *)Zone::NewExpand(param_2,0x10);
      }
      else {
        *(undefined8 **)(param_2 + 0x10) = puVar3 + 2;
      }
      *puVar3 = *puVar11;
      puVar3[1] = 0;
      puVar9 = puVar3;
      if (puVar8 != (undefined8 *)0x0) {
        puVar7[1] = puVar3;
        puVar9 = puVar8;
      }
      puVar8 = puVar9;
      puVar7 = puVar3;
    }
    pTVar10 = *(TopLevelLiveRange **)(pTVar10 + 0x28);
    if (pTVar10 == (TopLevelLiveRange *)0x0) break;
    puVar11 = *(undefined8 **)(pTVar10 + 0x10);
  }
  puVar11 = *(undefined8 **)(this + 8);
  *(undefined8 **)(this + 0x20) = puVar8;
  if (puVar11 == *(undefined8 **)(this + 0x10)) {
    lVar6 = (long)puVar11 - *(long *)this >> 3;
    uVar1 = lVar6 + 1;
    if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = (long)*(undefined8 **)(this + 0x10) - *(long *)this;
    uVar5 = lVar4 >> 2;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x7fffffe < (ulong)(lVar4 >> 3)) {
      uVar1 = 0xfffffff;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x18);
      uVar5 = uVar1 * 8;
      lVar4 = *(long *)(this_00 + 0x10);
      if (uVar5 < (ulong)(*(long *)(this_00 + 0x18) - lVar4) ||
          uVar5 - (*(long *)(this_00 + 0x18) - lVar4) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar4 + uVar5;
      }
      else {
        lVar4 = Zone::NewExpand(this_00,uVar5);
      }
    }
    puVar8 = (undefined8 *)(lVar4 + lVar6 * 8);
    puVar9 = puVar8 + 1;
    *puVar8 = param_1;
    puVar11 = *(undefined8 **)this;
    puVar3 = *(undefined8 **)(this + 8);
    while (puVar3 != puVar11) {
      puVar3 = puVar3 + -1;
      puVar8 = puVar8 + -1;
      *puVar8 = *puVar3;
    }
    *(undefined8 **)this = puVar8;
    *(undefined8 **)(this + 8) = puVar9;
    *(ulong *)(this + 0x10) = lVar4 + uVar1 * 8;
  }
  else {
    *puVar11 = param_1;
    *(long *)(this + 8) = *(long *)(this + 8) + 8;
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)((long)puVar7 + 4);
  *(SpillRange **)(param_1 + 0x70) = this;
  return;
}

