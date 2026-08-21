
/* v8::internal::interpreter::BlockCoverageBuilder::AllocateNaryBlockCoverageSlot(v8::internal::NaryOperation*,
   unsigned long) */

ulong __thiscall
v8::internal::interpreter::BlockCoverageBuilder::AllocateNaryBlockCoverageSlot
          (BlockCoverageBuilder *this,NaryOperation *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  Zone *this_00;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  plVar3 = (long *)(*(long *)(this + 0x28) + 8);
  plVar7 = (long *)*plVar3;
  plVar5 = plVar3;
  if (plVar7 != (long *)0x0) {
    do {
      if ((NaryOperation *)plVar7[4] >= param_1) {
        plVar5 = plVar7;
      }
      plVar7 = (long *)plVar7[(NaryOperation *)plVar7[4] < param_1];
    } while (plVar7 != (long *)0x0);
    if ((((plVar5 != plVar3) && ((NaryOperation *)plVar5[4] <= param_1)) && (plVar5[5] != 0)) &&
       (uVar9 = *(undefined8 *)(*(long *)(plVar5[5] + 8) + param_2 * 8), (int)uVar9 != -1)) {
      puVar8 = *(undefined8 **)(this + 8);
      uVar4 = (long)puVar8 - *(long *)this >> 3;
      if (puVar8 < *(undefined8 **)(this + 0x10)) {
        *puVar8 = uVar9;
        *(long *)(this + 8) = *(long *)(this + 8) + 8;
      }
      else {
        uVar1 = uVar4 + 1;
        if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar6 = (long)*(undefined8 **)(this + 0x10) - *(long *)this;
        uVar10 = lVar6 >> 2;
        if (uVar1 <= uVar10) {
          uVar1 = uVar10;
        }
        if (0x7fffffe < (ulong)(lVar6 >> 3)) {
          uVar1 = 0xfffffff;
        }
        if (uVar1 == 0) {
          lVar6 = 0;
        }
        else {
          this_00 = *(Zone **)(this + 0x18);
          uVar10 = uVar1 * 8;
          lVar6 = *(long *)(this_00 + 0x10);
          if (uVar10 < (ulong)(*(long *)(this_00 + 0x18) - lVar6) ||
              uVar10 - (*(long *)(this_00 + 0x18) - lVar6) == 0) {
            *(ulong *)(this_00 + 0x10) = lVar6 + uVar10;
          }
          else {
            lVar6 = Zone::NewExpand(this_00,uVar10);
          }
        }
        puVar8 = (undefined8 *)(lVar6 + uVar4 * 8);
        puVar11 = puVar8 + 1;
        *puVar8 = uVar9;
        puVar2 = *(undefined8 **)this;
        puVar12 = *(undefined8 **)(this + 8);
        while (puVar12 != puVar2) {
          puVar12 = puVar12 + -1;
          puVar8 = puVar8 + -1;
          *puVar8 = *puVar12;
        }
        *(undefined8 **)this = puVar8;
        *(undefined8 **)(this + 8) = puVar11;
        *(ulong *)(this + 0x10) = lVar6 + uVar1 * 8;
      }
      goto LAB_0151fbbc;
    }
  }
  uVar4 = 0xffffffff;
LAB_0151fbbc:
  return uVar4 & 0xffffffff;
}

