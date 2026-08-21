
/* v8::internal::FastKeyAccumulator::GetKeys(v8::internal::GetKeysConversion) */

long __thiscall
v8::internal::FastKeyAccumulator::GetKeys(FastKeyAccumulator *this,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(this + 0x1c) == 0x12) {
    lVar1 = GetKeysFast(this,param_2);
    if (lVar1 == 0) {
      uVar2 = *(ulong *)(*(long *)this + 0x2bd8);
      if (((uVar2 & 1) != 0) && ((int)uVar2 == *(int *)(*(long *)this + 0xa8))) goto LAB_010df5bc;
      lVar1 = 0;
    }
    return lVar1;
  }
LAB_010df5bc:
  lVar1 = GetKeysSlow(this,param_2);
  return lVar1;
}

