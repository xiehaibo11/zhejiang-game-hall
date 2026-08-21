
/* v8::internal::Isolate::SetIdle(bool) */

void __thiscall v8::internal::Isolate::SetIdle(Isolate *this,bool param_1)

{
  undefined4 uVar1;
  
  if ((this[0xb7fc] != (Isolate)0x0) && (*(long *)(this + 0x2c50) == 0)) {
    if (param_1) {
      uVar1 = 7;
    }
    else {
      if (*(int *)(this + 0x2c60) != 7) {
        return;
      }
      uVar1 = 6;
    }
    *(undefined4 *)(this + 0x2c60) = uVar1;
  }
  return;
}

