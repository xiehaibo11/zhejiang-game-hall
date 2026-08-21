
/* v8::internal::compiler::MoveOptimizer::CompressGaps(v8::internal::compiler::Instruction*) */

void __thiscall
v8::internal::compiler::MoveOptimizer::CompressGaps(MoveOptimizer *this,Instruction *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar3;
    puVar2 = (undefined8 *)puVar3[1];
    if (puVar4 != puVar2) {
      do {
        puVar5 = (ulong *)*puVar4;
        uVar6 = *puVar5;
        if ((uVar6 & 7) != 0) {
          if (((uint)uVar6 >> 2 & 1) == 0) {
            uVar8 = puVar5[1];
            uVar7 = (uint)uVar8;
          }
          else {
            uVar8 = 0x180;
            if (((uint)uVar6 >> 5 & 0xff) < 0xb || (uVar6 & 0x1c) != 4) {
              uVar8 = 0;
            }
            uVar6 = uVar6 & 0xffffffffffffe018 | uVar8 | 4;
            uVar8 = puVar5[1];
            uVar7 = (uint)uVar8;
          }
          if ((uVar7 >> 2 & 1) != 0) {
            uVar1 = 0x180;
            if (((uint)uVar8 >> 5 & 0xff) < 0xb || (uVar8 & 0x1c) != 4) {
              uVar1 = 0;
            }
            uVar8 = uVar8 & 0xffffffffffffe018 | uVar1 | 4;
          }
          if (uVar6 != uVar8) {
            CompressMoves(this,*(ParallelMove **)(param_1 + 8),*(ZoneVector **)(param_1 + 0x10));
            return;
          }
        }
        puVar4 = puVar4 + 1;
        *puVar5 = 0;
        puVar5[1] = 0;
      } while (puVar2 != puVar4);
      puVar4 = (undefined8 *)*puVar3;
    }
    puVar3[1] = puVar4;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar4 = (undefined8 *)*puVar3;
  puVar2 = (undefined8 *)puVar3[1];
  if (puVar4 != puVar2) {
    do {
      puVar5 = (ulong *)*puVar4;
      uVar6 = *puVar5;
      if ((uVar6 & 7) != 0) {
        if (((uint)uVar6 >> 2 & 1) == 0) {
          uVar8 = puVar5[1];
          uVar7 = (uint)uVar8;
        }
        else {
          uVar8 = 0x180;
          if (((uint)uVar6 >> 5 & 0xff) < 0xb || (uVar6 & 0x1c) != 4) {
            uVar8 = 0;
          }
          uVar6 = uVar6 & 0xffffffffffffe018 | uVar8 | 4;
          uVar8 = puVar5[1];
          uVar7 = (uint)uVar8;
        }
        if ((uVar7 >> 2 & 1) != 0) {
          uVar1 = 0x180;
          if (((uint)uVar8 >> 5 & 0xff) < 0xb || (uVar8 & 0x1c) != 4) {
            uVar1 = 0;
          }
          uVar8 = uVar8 & 0xffffffffffffe018 | uVar1 | 4;
        }
        if (uVar6 != uVar8) {
          auVar9 = NEON_ext(*(undefined1 (*) [16])(param_1 + 8),*(undefined1 (*) [16])(param_1 + 8),
                            8,1);
          *(long *)(param_1 + 0x10) = auVar9._8_8_;
          *(long *)(param_1 + 8) = auVar9._0_8_;
          return;
        }
      }
      puVar4 = puVar4 + 1;
      *puVar5 = 0;
      puVar5[1] = 0;
    } while (puVar2 != puVar4);
    puVar4 = (undefined8 *)*puVar3;
  }
  puVar3[1] = puVar4;
  return;
}

