
/* v8::internal::Bignum::AssignUInt16(unsigned short) */

void __thiscall v8::internal::Bignum::AssignUInt16(Bignum *this,ushort param_1)

{
  long lVar1;
  
  if (0 < *(int *)(this + 0x210)) {
    lVar1 = 0;
    do {
      *(undefined4 *)(*(long *)(this + 0x200) + lVar1 * 4) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0x210));
  }
  *(undefined8 *)(this + 0x210) = 0;
  if (param_1 != 0) {
    **(uint **)(this + 0x200) = (uint)param_1;
    *(undefined4 *)(this + 0x210) = 1;
  }
  return;
}

