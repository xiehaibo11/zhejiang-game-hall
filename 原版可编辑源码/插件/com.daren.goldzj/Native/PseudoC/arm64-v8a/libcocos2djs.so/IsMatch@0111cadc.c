
/* v8::internal::StringSharedKey::IsMatch(v8::internal::Object) */

byte __thiscall v8::internal::StringSharedKey::IsMatch(StringSharedKey *this,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  ulong local_18;
  
  if ((param_2 & 1) == 0) {
    dVar4 = (double)((int)param_2 >> 1);
  }
  else {
    uVar3 = param_2 & 0xffffffff00000000 | 7;
    if (*(ushort *)(uVar3 + *(uint *)(param_2 - 1)) - 0x76 < 0xf) {
      if (((*(int *)(param_2 + 7) == **(int **)(this + 0x18)) &&
          ((uint)(this[0x20] != (StringSharedKey)0x0) == (*(uint *)(param_2 + 0xf) & 2) >> 1)) &&
         (*(int *)(this + 0x24) == *(int *)(param_2 + 0x13) >> 1)) {
        local_18 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb);
        uVar2 = **(ulong **)(this + 0x10);
        if (*(uint *)(param_2 + 0xb) == (uint)uVar2) {
          bVar1 = 1;
          goto LAB_0111cbbc;
        }
        if ((0x1f < *(ushort *)(uVar3 + *(uint *)(local_18 - 1))) ||
           (0x1f < *(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)))) {
          bVar1 = String::SlowEquals((String *)&local_18);
          goto LAB_0111cbbc;
        }
      }
      bVar1 = 0;
      goto LAB_0111cbbc;
    }
    dVar4 = *(double *)(param_2 + 3);
  }
  bVar1 = *(int *)(this + 8) == (int)dVar4;
LAB_0111cbbc:
  return bVar1 & 1;
}

