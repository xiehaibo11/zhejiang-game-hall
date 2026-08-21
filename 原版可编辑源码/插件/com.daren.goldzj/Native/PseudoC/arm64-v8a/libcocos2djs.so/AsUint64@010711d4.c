
/* v8::internal::BigInt::AsUint64(bool*) */

long __thiscall v8::internal::BigInt::AsUint64(BigInt *this,bool *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  if (param_1 != (bool *)0x0) {
    *param_1 = true;
  }
  if ((*(uint *)(lVar2 + 3) & 0x7ffffffe) == 0) {
    lVar1 = 0;
  }
  else {
    if ((param_1 != (bool *)0x0) && ((*(uint *)(lVar2 + 3) & 0x7ffffffc) != 0)) {
      *param_1 = false;
    }
    lVar1 = -*(long *)(lVar2 + 7);
    if ((*(uint *)(lVar2 + 3) & 1) == 0) {
      lVar1 = *(long *)(lVar2 + 7);
    }
  }
  if ((param_1 != (bool *)0x0) && ((*(uint *)(*(long *)this + 3) & 1) != 0)) {
    *param_1 = false;
  }
  return lVar1;
}

