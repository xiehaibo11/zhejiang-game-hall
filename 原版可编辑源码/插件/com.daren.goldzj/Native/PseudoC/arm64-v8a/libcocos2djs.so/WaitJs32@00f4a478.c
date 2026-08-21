
/* v8::internal::FutexEmulation::WaitJs32(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSArrayBuffer>, unsigned long, int, double) */

ulong v8::internal::FutexEmulation::WaitJs32(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  
  uVar2 = Wait<int>();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)uVar2 >> 1;
    if (iVar1 == 2) {
      puVar3 = (ulong *)(param_1 + 0xa58);
    }
    else if (iVar1 == 1) {
      puVar3 = (ulong *)(param_1 + 0x870);
    }
    else {
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      puVar3 = (ulong *)(param_1 + 0x8c0);
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}

