
/* v8::internal::compiler::Instruction::AreMovesRedundant() const */

undefined8 __thiscall v8::internal::compiler::Instruction::AreMovesRedundant(Instruction *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  
  plVar3 = *(long **)(this + 8);
  if (plVar3 != (long *)0x0) {
    for (puVar2 = (undefined8 *)*plVar3; puVar2 != (undefined8 *)plVar3[1]; puVar2 = puVar2 + 1) {
      puVar6 = (ulong *)*puVar2;
      uVar4 = *puVar6;
      if ((uVar4 & 7) != 0) {
        if (((uint)uVar4 >> 2 & 1) == 0) {
          uVar7 = puVar6[1];
          uVar5 = (uint)uVar7;
        }
        else {
          uVar7 = 0x180;
          if (((uint)uVar4 >> 5 & 0xff) < 0xb || (uVar4 & 0x1c) != 4) {
            uVar7 = 0;
          }
          uVar4 = uVar4 & 0xffffffffffffe018 | uVar7 | 4;
          uVar7 = puVar6[1];
          uVar5 = (uint)uVar7;
        }
        if ((uVar5 >> 2 & 1) != 0) {
          uVar1 = 0x180;
          if (((uint)uVar7 >> 5 & 0xff) < 0xb || (uVar7 & 0x1c) != 4) {
            uVar1 = 0;
          }
          uVar7 = uVar7 & 0xffffffffffffe018 | uVar1 | 4;
        }
        if (uVar4 != uVar7) {
          return 0;
        }
      }
    }
  }
  plVar3 = *(long **)(this + 0x10);
  if (plVar3 != (long *)0x0) {
    for (puVar2 = (undefined8 *)*plVar3; puVar2 != (undefined8 *)plVar3[1]; puVar2 = puVar2 + 1) {
      puVar6 = (ulong *)*puVar2;
      uVar4 = *puVar6;
      if ((uVar4 & 7) != 0) {
        if (((uint)uVar4 >> 2 & 1) == 0) {
          uVar7 = puVar6[1];
          uVar5 = (uint)uVar7;
        }
        else {
          uVar7 = 0x180;
          if (((uint)uVar4 >> 5 & 0xff) < 0xb || (uVar4 & 0x1c) != 4) {
            uVar7 = 0;
          }
          uVar4 = uVar4 & 0xffffffffffffe018 | uVar7 | 4;
          uVar7 = puVar6[1];
          uVar5 = (uint)uVar7;
        }
        if ((uVar5 >> 2 & 1) != 0) {
          uVar1 = 0x180;
          if (((uint)uVar7 >> 5 & 0xff) < 0xb || (uVar7 & 0x1c) != 4) {
            uVar1 = 0;
          }
          uVar7 = uVar7 & 0xffffffffffffe018 | uVar1 | 4;
        }
        if (uVar4 != uVar7) {
          return 0;
        }
      }
    }
  }
  return 1;
}

