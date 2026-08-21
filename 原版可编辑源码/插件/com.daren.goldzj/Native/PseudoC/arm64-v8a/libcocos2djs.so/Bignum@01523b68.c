
/* v8::internal::Bignum::Bignum() */

void __thiscall v8::internal::Bignum::Bignum(Bignum *this)

{
  long lVar1;
  
  *(undefined8 *)(this + 0x208) = 0x80;
  lVar1 = 4;
  *(Bignum **)(this + 0x200) = this;
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 0x210) = 0;
  do {
    *(undefined4 *)(*(long *)(this + 0x200) + lVar1) = 0;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x200);
  return;
}

