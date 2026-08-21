
/* v8::internal::DependentCode::GetDependentCode(v8::internal::Handle<v8::internal::HeapObject>) */

ulong v8::internal::DependentCode::GetDependentCode(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = uVar1 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar2 + *(uint *)(uVar1 - 1)) == 0xa2) {
    lVar3 = 0x1b;
  }
  else if (*(short *)(uVar2 + *(uint *)(uVar1 - 1)) == 0xa5) {
    lVar3 = 0xf;
  }
  else {
    if (*(short *)(uVar2 + *(uint *)(uVar1 - 1)) != 0x55) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar3 = 0xb;
  }
  return uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + lVar3);
}

