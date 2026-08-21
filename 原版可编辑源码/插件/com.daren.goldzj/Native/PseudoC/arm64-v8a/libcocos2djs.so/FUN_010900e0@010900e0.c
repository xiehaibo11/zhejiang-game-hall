
Factory * FUN_010900e0(undefined8 param_1,ulong *param_2,int param_3)

{
  Factory *pFVar1;
  ulong uVar2;
  ulong uVar3;
  
  pFVar1 = (Factory *)(*param_2 & 0xffffffff00000000);
  uVar2 = (ulong)pFVar1 | (ulong)*(uint *)(*param_2 + 7);
  uVar3 = (long)(param_3 << 3) | 7;
  if (*(long *)(uVar2 + uVar3) == -0x8000000080001) {
    return pFVar1 + 0xa8;
  }
  pFVar1 = (Factory *)
           v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                     (pFVar1,*(double *)(uVar3 + uVar2));
  return pFVar1;
}

