
/* v8::internal::Object::GetSimpleHash(v8::internal::Object) */

ulong v8::internal::Object::GetSimpleHash(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  double dVar3;
  ulong local_18;
  
  if ((param_1 & 1) == 0) {
    uVar1 = (int)param_1 >> 1;
  }
  else {
    uVar2 = param_1 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar2 + *(uint *)(param_1 - 1)) != 0x42) {
      local_18 = param_1;
      if (*(ushort *)(uVar2 + *(uint *)(param_1 - 1)) < 0x41) {
        if ((*(uint *)(param_1 + 3) & 1) == 0) {
          return (ulong)(*(uint *)(param_1 + 3) >> 3) << 1;
        }
      }
      else {
        if (*(short *)(uVar2 + *(uint *)(param_1 - 1)) != 0x43) {
          if (*(short *)(uVar2 + *(uint *)(param_1 - 1)) != 0x41) {
            if (*(short *)(uVar2 + *(uint *)(param_1 - 1)) != 0xa6) {
              return param_1;
            }
            uVar1 = SharedFunctionInfo::Hash((SharedFunctionInfo *)&local_18);
            return (ulong)((uVar1 & 0x3fffffff) << 1);
          }
          if ((*(uint *)(param_1 + 3) & 0x7ffffffe) != 0) {
            uVar2 = ~*(ulong *)(param_1 + 7) + *(ulong *)(param_1 + 7) * 0x40000;
            uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
            uVar2 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
            return (ulong)(((uint)(uVar2 >> 0x16) ^ (uint)uVar2) << 1) & 0x7ffffffe;
          }
          return 0;
        }
        local_18 = param_1 & 0xffffffff00000000 | (ulong)*(uint *)(param_1 + 0xb);
        if ((*(uint *)(local_18 + 3) & 1) == 0) {
          return (ulong)(*(uint *)(local_18 + 3) >> 3) << 1;
        }
      }
      uVar2 = String::ComputeAndSetHash((String *)&local_18);
      return -(uVar2 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar2 & 0xffffffff) << 1;
    }
    dVar3 = *(double *)(param_1 + 3);
    if (NAN(dVar3)) {
      return 0x7ffffffe;
    }
    if (((dVar3 < -2147483648.0) || (2147483647.0 < dVar3)) ||
       (uVar1 = (uint)dVar3, dVar3 != (double)(int)uVar1)) {
      uVar2 = ~(ulong)dVar3 + (long)dVar3 * 0x40000;
      uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
      uVar2 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
      return (ulong)((((uint)(uVar2 >> 0x16) ^ (uint)uVar2) & 0x3fffffff) << 1);
    }
  }
  uVar1 = ~uVar1 + uVar1 * 0x8000;
  uVar1 = (uVar1 ^ uVar1 >> 0xc) * 5;
  uVar1 = (uVar1 ^ uVar1 >> 4) * 0x809;
  return (ulong)((uVar1 & 0x3fffffff ^ uVar1 >> 0x10) << 1);
}

