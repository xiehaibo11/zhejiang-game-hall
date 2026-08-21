
/* v8::internal::compiler::BitsetType::Glb(double, double) */

uint v8::internal::compiler::BitsetType::Glb(double param_1,double param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  double dVar4;
  
  uVar3 = 0;
  if ((param_1 <= 0.0) && (-1.0 <= param_2)) {
    dVar4 = param_2 + 1.0;
    if (param_1 <= -2147483648.0) {
      if (dVar4 < -1073741824.0) {
        return 0;
      }
      uVar3 = 0x48;
    }
    else {
      uVar3 = 0;
    }
    if (param_1 <= -1073741824.0) {
      if (dVar4 < 0.0) {
        return uVar3;
      }
      uVar3 = uVar3 | 0x40;
    }
    if (param_1 <= 0.0) {
      if (dVar4 < 1073741824.0) {
        return uVar3;
      }
      uVar3 = uVar3 | 0x400;
    }
    if (param_1 <= 1073741824.0) {
      if (dVar4 < 2147483648.0) {
        return uVar3;
      }
      uVar3 = uVar3 | 0x402;
    }
    bVar1 = false;
    bVar2 = true;
    if (4294967296.0 <= dVar4) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(param_1)) {
        bVar1 = param_1 == 2147483648.0;
        bVar2 = 2147483648.0 <= param_1;
      }
    }
    if (!bVar2 || bVar1) {
      uVar3 = uVar3 | 0x406;
    }
  }
  return uVar3;
}

