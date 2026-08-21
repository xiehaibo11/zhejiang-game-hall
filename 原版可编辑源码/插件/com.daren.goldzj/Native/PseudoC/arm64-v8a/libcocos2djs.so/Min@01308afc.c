
/* v8::internal::compiler::Type::Min() const */

undefined1  [16] __thiscall v8::internal::compiler::Type::Min(Type *this)

{
  double *pdVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined8 in_register_00005108;
  double local_38;
  
  piVar3 = *(int **)this;
  if (((ulong)piVar3 & 1) == 0) {
    if ((*piVar3 == 4) || (*piVar3 != 3)) {
      dVar6 = *(double *)(piVar3 + 2);
      in_register_00005108 = 0;
    }
    else {
      uVar2 = piVar3[1];
      if ((int)uVar2 < 2) {
        dVar8 = INFINITY;
        in_register_00005108 = 0;
      }
      else {
        local_38 = *(double *)(*(long *)(piVar3 + 2) + 8);
        uVar5 = Min((Type *)&local_38);
        dVar8 = (double)NEON_fminnm(uVar5,0x7ff0000000000000);
        if (uVar2 != 2) {
          uVar4 = 2;
          dVar6 = dVar8;
          do {
            local_38 = *(double *)(*(long *)(*(long *)this + 8) + uVar4 * 8);
            dVar8 = (double)Min((Type *)&local_38);
            uVar4 = uVar4 + 1;
            if (dVar6 <= dVar8) {
              dVar8 = dVar6;
            }
            in_register_00005108 = 0;
            dVar6 = dVar8;
          } while (uVar2 != uVar4);
        }
        piVar3 = *(int **)this;
      }
      local_38 = **(double **)(piVar3 + 2);
      dVar6 = dVar8;
      if ((local_38 != 2.02418695101159e-320) &&
         (uVar4 = BitsetLub((Type *)&local_38), (uVar4 & 0xffffefff) != 0)) {
        dVar6 = (double)Min((Type *)&local_38);
        in_register_00005108 = 0;
        if (dVar8 <= dVar6) {
          in_register_00005108 = 0;
          dVar6 = dVar8;
        }
      }
    }
  }
  else {
    uVar2 = (uint)piVar3 ^ 1;
    if ((uVar2 | 0x10) == uVar2) {
      uVar4 = 0;
    }
    else if ((uVar2 | 8) == uVar2) {
      uVar4 = 1;
    }
    else if ((uVar2 | 0x40) == uVar2) {
      uVar4 = 2;
    }
    else if ((uVar2 | 0x400) == uVar2) {
      uVar4 = 3;
    }
    else if ((uVar2 | 2) == uVar2) {
      uVar4 = 4;
    }
    else {
      dVar6 = 0.0;
      in_register_00005108 = 0;
      if ((uVar2 | 4) != uVar2) goto LAB_01308c68;
      uVar4 = 5;
    }
    if (((uint)piVar3 >> 0xb & 1) == 0) {
      dVar6 = *(double *)(BitsetType::BoundariesArray + uVar4 * 0x10 + 8);
      in_register_00005108 = 0;
    }
    else {
      local_38 = 0.0;
      pdVar1 = (double *)(BitsetType::BoundariesArray + uVar4 * 0x10 + 8);
      if (2 < uVar4) {
        pdVar1 = &local_38;
      }
      dVar6 = *pdVar1;
      in_register_00005108 = 0;
    }
  }
LAB_01308c68:
  auVar7._8_8_ = in_register_00005108;
  auVar7._0_8_ = dVar6;
  return auVar7;
}

