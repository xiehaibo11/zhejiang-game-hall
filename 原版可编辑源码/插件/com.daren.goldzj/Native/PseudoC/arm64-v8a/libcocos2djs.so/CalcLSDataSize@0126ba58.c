
/* v8::internal::CalcLSDataSize(v8::internal::LoadStoreOp) */

ulong v8::internal::CalcLSDataSize(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 >> 0x1e & 3;
  if ((((uint)param_1 >> 0x1a & 1) != 0) && ((int)uVar1 == 0)) {
    return (ulong)((uint)param_1 >> 0x15 & 4);
  }
  return uVar1;
}

