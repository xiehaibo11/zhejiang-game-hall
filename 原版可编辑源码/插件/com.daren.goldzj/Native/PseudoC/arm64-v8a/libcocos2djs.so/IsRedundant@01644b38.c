
/* v8::internal::compiler::ParallelMove::IsRedundant() const */

undefined8 __thiscall v8::internal::compiler::ParallelMove::IsRedundant(ParallelMove *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  
  puVar2 = *(undefined8 **)this;
  do {
    if (puVar2 == *(undefined8 **)(this + 8)) {
      return 1;
    }
    puVar5 = (ulong *)*puVar2;
    uVar3 = *puVar5;
    if ((uVar3 & 7) != 0) {
      if (((uint)uVar3 >> 2 & 1) == 0) {
        uVar6 = puVar5[1];
        uVar4 = (uint)uVar6;
      }
      else {
        uVar6 = 0x180;
        if (((uint)uVar3 >> 5 & 0xff) < 0xb || (uVar3 & 0x1c) != 4) {
          uVar6 = 0;
        }
        uVar3 = uVar3 & 0xffffffffffffe018 | uVar6 | 4;
        uVar6 = puVar5[1];
        uVar4 = (uint)uVar6;
      }
      if ((uVar4 >> 2 & 1) != 0) {
        uVar1 = 0x180;
        if (((uint)uVar6 >> 5 & 0xff) < 0xb || (uVar6 & 0x1c) != 4) {
          uVar1 = 0;
        }
        uVar6 = uVar6 & 0xffffffffffffe018 | uVar1 | 4;
      }
      if (uVar3 != uVar6) {
        return 0;
      }
    }
    puVar2 = puVar2 + 1;
  } while( true );
}

