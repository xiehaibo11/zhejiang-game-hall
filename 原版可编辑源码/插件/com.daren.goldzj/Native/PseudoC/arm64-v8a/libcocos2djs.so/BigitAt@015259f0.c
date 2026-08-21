
/* v8::internal::Bignum::BigitAt(int) const */

undefined4 __thiscall v8::internal::Bignum::BigitAt(Bignum *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(this + 0x214);
  uVar2 = 0;
  if ((iVar1 <= param_1) && (param_1 < iVar1 + *(int *)(this + 0x210))) {
    uVar2 = *(undefined4 *)(*(long *)(this + 0x200) + (long)(param_1 - iVar1) * 4);
  }
  return uVar2;
}

