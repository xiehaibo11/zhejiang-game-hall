
/* v8::internal::Bignum::AssignBignum(v8::internal::Bignum const&) */

void __thiscall v8::internal::Bignum::AssignBignum(Bignum *this,Bignum *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  *(undefined4 *)(this + 0x214) = *(undefined4 *)(param_1 + 0x214);
  iVar1 = *(int *)(param_1 + 0x210);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      lVar3 = lVar2 * 4;
      lVar2 = lVar2 + 1;
      *(undefined4 *)(*(long *)(this + 0x200) + lVar3) =
           *(undefined4 *)(*(long *)(param_1 + 0x200) + lVar3);
      iVar1 = *(int *)(param_1 + 0x210);
    } while (lVar2 < iVar1);
  }
  if (iVar1 < *(int *)(this + 0x210)) {
    lVar2 = (long)iVar1;
    do {
      *(undefined4 *)(*(long *)(this + 0x200) + lVar2 * 4) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x210));
    iVar1 = *(int *)(param_1 + 0x210);
  }
  *(int *)(this + 0x210) = iVar1;
  return;
}

