
/* v8::internal::BigInt::CompareToNumber(v8::internal::Handle<v8::internal::BigInt>,
   v8::internal::Handle<v8::internal::Object>) */

ulong v8::internal::BigInt::CompareToNumber(long *param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    uVar4 = CompareToDouble(*(undefined8 *)(uVar4 + 3));
    return uVar4;
  }
  lVar3 = *param_1;
  uVar1 = *(uint *)(lVar3 + 3) & 1;
  if (uVar1 == -((int)uVar4 >> 0x1f)) {
    iVar2 = (int)uVar4 >> 1;
    if ((*(uint *)(lVar3 + 3) & 0x7ffffffe) == 0) {
      return (ulong)(iVar2 == 0);
    }
    if ((*(uint *)(lVar3 + 3) & 0x7ffffffc) == 0) {
      uVar5 = (ulong)iVar2;
      uVar4 = -uVar5;
      if (-1 < (long)uVar5) {
        uVar4 = uVar5;
      }
      if (*(ulong *)(lVar3 + 7) <= uVar4) {
        uVar1 = uVar1 << 1;
        if (uVar4 <= *(ulong *)(lVar3 + 7)) {
          uVar1 = 1;
        }
        return (ulong)uVar1;
      }
    }
  }
  return (ulong)(uVar1 << 1 ^ 2);
}

