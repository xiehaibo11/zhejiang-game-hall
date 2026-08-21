
/* v8::internal::interpreter::BlockCoverageBuilder::AllocateBlockCoverageSlot(v8::internal::ZoneObject*,
   v8::internal::SourceRangeKind) */

long __thiscall
v8::internal::interpreter::BlockCoverageBuilder::AllocateBlockCoverageSlot
          (BlockCoverageBuilder *this,ulong param_1,undefined4 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  Zone *this_00;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  plVar6 = (long *)(*(long *)(this + 0x28) + 8);
  plVar8 = (long *)*plVar6;
  plVar3 = plVar6;
  if (plVar8 != (long *)0x0) {
    do {
      if ((ulong)plVar8[4] >= param_1) {
        plVar3 = plVar8;
      }
      plVar8 = (long *)plVar8[(ulong)plVar8[4] < param_1];
    } while (plVar8 != (long *)0x0);
    if ((((plVar3 != plVar6) && ((ulong)plVar3[4] <= param_1)) &&
        (plVar3 = (long *)plVar3[5], plVar3 != (long *)0x0)) &&
       (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_3), (int)uVar4 != -1)) {
      puVar9 = *(undefined8 **)(this + 8);
      lVar5 = (long)puVar9 - *(long *)this >> 3;
      if (puVar9 < *(undefined8 **)(this + 0x10)) {
        *puVar9 = uVar4;
        *(long *)(this + 8) = *(long *)(this + 8) + 8;
        return lVar5;
      }
      uVar1 = lVar5 + 1;
      if (uVar1 >> 0x1c == 0) {
        lVar7 = (long)*(undefined8 **)(this + 0x10) - *(long *)this;
        uVar10 = lVar7 >> 2;
        if (uVar1 <= uVar10) {
          uVar1 = uVar10;
        }
        if (0x7fffffe < (ulong)(lVar7 >> 3)) {
          uVar1 = 0xfffffff;
        }
        if (uVar1 == 0) {
          lVar7 = 0;
        }
        else {
          this_00 = *(Zone **)(this + 0x18);
          uVar10 = uVar1 * 8;
          lVar7 = *(long *)(this_00 + 0x10);
          if (uVar10 < (ulong)(*(long *)(this_00 + 0x18) - lVar7) ||
              uVar10 - (*(long *)(this_00 + 0x18) - lVar7) == 0) {
            *(ulong *)(this_00 + 0x10) = lVar7 + uVar10;
          }
          else {
            lVar7 = Zone::NewExpand(this_00,uVar10);
          }
        }
        puVar9 = (undefined8 *)(lVar7 + lVar5 * 8);
        puVar11 = puVar9 + 1;
        *puVar9 = uVar4;
        puVar2 = *(undefined8 **)this;
        puVar12 = *(undefined8 **)(this + 8);
        while (puVar12 != puVar2) {
          puVar12 = puVar12 + -1;
          puVar9 = puVar9 + -1;
          *puVar9 = *puVar12;
        }
        *(undefined8 **)this = puVar9;
        *(undefined8 **)(this + 8) = puVar11;
        *(ulong *)(this + 0x10) = lVar7 + uVar1 * 8;
        return lVar5;
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return 0xffffffff;
}

