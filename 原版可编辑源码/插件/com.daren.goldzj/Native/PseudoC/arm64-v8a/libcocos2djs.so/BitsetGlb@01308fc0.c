
/* v8::internal::compiler::Type::BitsetGlb() const */

uint __thiscall v8::internal::compiler::Type::BitsetGlb(Type *this)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 local_30;
  undefined8 local_28;
  
  piVar5 = *(int **)this;
  if (((ulong)piVar5 & 1) == 0) {
    if (*piVar5 == 4) {
      dVar7 = *(double *)(piVar5 + 2);
      uVar3 = 0;
      if ((dVar7 <= 0.0) && (-1.0 <= *(double *)(piVar5 + 4))) {
        dVar8 = *(double *)(piVar5 + 4) + 1.0;
        if (dVar7 <= -2147483648.0) {
          if (dVar8 < -1073741824.0) {
            return 0;
          }
          uVar3 = 0x48;
        }
        else {
          uVar3 = 0;
        }
        if (dVar7 <= -1073741824.0) {
          if (dVar8 < 0.0) {
            return uVar3;
          }
          uVar3 = uVar3 | 0x40;
        }
        if (dVar7 <= 0.0) {
          if (dVar8 < 1073741824.0) {
            return uVar3;
          }
          uVar3 = uVar3 | 0x400;
        }
        if (dVar7 <= 1073741824.0) {
          if (dVar8 < 2147483648.0) {
            return uVar3;
          }
          uVar3 = uVar3 | 0x402;
        }
        bVar1 = false;
        bVar2 = true;
        if (4294967296.0 <= dVar8) {
          bVar1 = false;
          bVar2 = true;
          if (!NAN(dVar7)) {
            bVar1 = dVar7 == 2147483648.0;
            bVar2 = 2147483648.0 <= dVar7;
          }
        }
        if (!bVar2 || bVar1) {
          uVar3 = uVar3 | 0x406;
        }
      }
    }
    else if (*piVar5 == 3) {
      puVar6 = *(undefined8 **)(piVar5 + 2);
      local_28 = *puVar6;
      uVar3 = BitsetGlb((Type *)&local_28);
      local_30 = puVar6[1];
      uVar4 = BitsetGlb((Type *)&local_30);
      uVar3 = uVar4 | uVar3;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = (uint)piVar5 ^ 1;
  }
  return uVar3;
}

