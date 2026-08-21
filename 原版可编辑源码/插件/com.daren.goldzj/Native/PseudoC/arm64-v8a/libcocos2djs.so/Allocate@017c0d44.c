
/* v8::internal::interpreter::ConstantArrayBuilder::ConstantArraySlice::Allocate(v8::internal::interpreter::ConstantArrayBuilder::Entry,
   unsigned long) */

long v8::internal::interpreter::ConstantArrayBuilder::ConstantArraySlice::Allocate
               (long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  Zone *this;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  lVar3 = param_1[4];
  puVar5 = (undefined8 *)param_1[5];
  if (param_4 != 0) {
    lVar10 = 0;
    puVar6 = puVar5;
    do {
      if (puVar6 == (undefined8 *)param_1[6]) {
        lVar7 = param_1[6] - param_1[4];
        uVar11 = lVar7 >> 4;
        uVar1 = uVar11 + 1;
        if (uVar1 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar8 = lVar7 >> 3;
        if (uVar1 <= uVar8) {
          uVar1 = uVar8;
        }
        if (0x3fffffe < uVar11) {
          uVar1 = 0x7ffffff;
        }
        if (uVar1 == 0) {
          lVar7 = 0;
        }
        else {
          this = (Zone *)param_1[7];
          uVar8 = uVar1 * 0x10;
          lVar7 = *(long *)(this + 0x10);
          if (uVar8 < (ulong)(*(long *)(this + 0x18) - lVar7) ||
              uVar8 - (*(long *)(this + 0x18) - lVar7) == 0) {
            *(ulong *)(this + 0x10) = lVar7 + uVar8;
          }
          else {
            lVar7 = Zone::NewExpand(this,uVar8);
          }
        }
        puVar2 = (undefined8 *)(lVar7 + uVar11 * 0x10);
        *puVar2 = param_2;
        puVar2[1] = param_3;
        lVar4 = param_1[4];
        puVar6 = puVar2 + 2;
        for (lVar9 = param_1[5]; lVar9 != lVar4; lVar9 = lVar9 + -0x10) {
          uVar12 = *(undefined8 *)(lVar9 + -0x10);
          puVar2[-1] = *(undefined8 *)(lVar9 + -8);
          puVar2[-2] = uVar12;
          puVar2 = puVar2 + -2;
        }
        param_1[4] = (long)puVar2;
        param_1[5] = (long)puVar6;
        param_1[6] = lVar7 + uVar1 * 0x10;
      }
      else {
        *puVar6 = param_2;
        puVar6[1] = param_3;
        puVar6 = (undefined8 *)(param_1[5] + 0x10);
        param_1[5] = (long)puVar6;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != param_4);
  }
  return *param_1 + ((long)puVar5 - lVar3 >> 4);
}

