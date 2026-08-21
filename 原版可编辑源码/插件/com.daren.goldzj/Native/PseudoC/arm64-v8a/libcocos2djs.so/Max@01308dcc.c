
/* v8::internal::compiler::Type::Max() const */

undefined1  [16] __thiscall v8::internal::compiler::Type::Max(Type *this)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  long local_38;
  
  piVar3 = *(int **)this;
  if (((ulong)piVar3 & 1) == 0) {
    if (*piVar3 == 4) {
      dVar7 = *(double *)(piVar3 + 4);
      uVar9 = 0;
    }
    else if (*piVar3 == 3) {
      uVar1 = piVar3[1];
      if ((int)uVar1 < 2) {
        dVar6 = -INFINITY;
      }
      else {
        local_38 = *(undefined8 *)(*(long *)(piVar3 + 2) + 8);
        dVar6 = (double)Max((Type *)&local_38);
        if (dVar6 <= -INFINITY) {
          dVar6 = -INFINITY;
        }
        if (uVar1 != 2) {
          uVar5 = 2;
          dVar7 = dVar6;
          do {
            local_38 = *(undefined8 *)(*(long *)(*(long *)this + 8) + uVar5 * 8);
            dVar6 = (double)Max((Type *)&local_38);
            uVar5 = uVar5 + 1;
            if (dVar6 <= dVar7) {
              dVar6 = dVar7;
            }
            dVar7 = dVar6;
          } while (uVar1 != uVar5);
        }
        piVar3 = *(int **)this;
      }
      uVar9 = 0;
      local_38 = **(long **)(piVar3 + 2);
      dVar7 = dVar6;
      if ((local_38 != 0x1001) && (uVar5 = BitsetLub((Type *)&local_38), (uVar5 & 0xffffefff) != 0))
      {
        dVar7 = (double)Max((Type *)&local_38);
        uVar9 = 0;
        if (dVar7 <= dVar6) {
          uVar9 = 0;
          dVar7 = dVar6;
        }
      }
    }
    else {
      dVar7 = *(double *)(piVar3 + 2);
      uVar9 = 0;
    }
  }
  else {
    uVar1 = (uint)piVar3 ^ 1;
    if ((uVar1 | 0x10) == uVar1) {
      dVar7 = INFINITY;
      uVar9 = 0;
    }
    else {
      lVar2 = 0;
      do {
        lVar4 = lVar2;
        if (lVar4 + -0x10 == -0x70) {
          dVar7 = 0.0;
          uVar9 = 0;
          goto LAB_01308f34;
        }
        lVar2 = lVar4 + -0x10;
      } while ((*(uint *)(BitsetType::BoundariesArray + lVar4 + 0x50) | uVar1) != uVar1);
      dVar7 = *(double *)(BitsetType::BoundariesArray + lVar4 + 0x68) + -1.0;
      uVar9 = 0;
      if (((uint)piVar3 >> 0xb & 1) != 0) {
        if (dVar7 <= 0.0) {
          dVar7 = 0.0;
        }
        uVar9 = 0;
      }
    }
  }
LAB_01308f34:
  auVar8._8_8_ = uVar9;
  auVar8._0_8_ = dVar7;
  return auVar8;
}

