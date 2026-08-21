
/* v8::internal::wasm::ThreadImpl::ReturnPc(v8::internal::wasm::Decoder*,
   v8::internal::wasm::InterpreterCode*, unsigned long) */

long __thiscall
v8::internal::wasm::ThreadImpl::ReturnPc
          (ThreadImpl *this,Decoder *param_1,InterpreterCode *param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  
  if (*(char *)(*(long *)(param_2 + 0x30) + param_3) == '\x11') {
    lVar1 = *(long *)(param_2 + 0x40) + param_3;
    if (*(char *)(lVar1 + 1) < '\0') {
      if (*(char *)(lVar1 + 2) < '\0') {
        if (*(char *)(lVar1 + 3) < '\0') {
          uVar2 = 4;
          if (*(char *)(lVar1 + 4) < '\0') {
            uVar2 = 5;
          }
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
    lVar1 = lVar1 + (ulong)uVar2;
    if (*(char *)(lVar1 + 1) < '\0') {
      if (*(char *)(lVar1 + 2) < '\0') {
        if (*(char *)(lVar1 + 3) < '\0') {
          iVar4 = 4;
          if (*(char *)(lVar1 + 4) < '\0') {
            iVar4 = 5;
          }
        }
        else {
          iVar4 = 3;
        }
      }
      else {
        iVar4 = 2;
      }
    }
    else {
      iVar4 = 1;
    }
    uVar3 = (ulong)(iVar4 + uVar2);
  }
  else {
    if (*(char *)(*(long *)(param_2 + 0x30) + param_3) != '\x10') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar1 = *(long *)(param_2 + 0x40) + param_3;
    if (*(char *)(lVar1 + 1) < '\0') {
      if (*(char *)(lVar1 + 2) < '\0') {
        if (*(char *)(lVar1 + 3) < '\0') {
          uVar3 = 4;
          if (*(char *)(lVar1 + 4) < '\0') {
            uVar3 = 5;
          }
        }
        else {
          uVar3 = 3;
        }
      }
      else {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  return param_3 + uVar3 + 1;
}

