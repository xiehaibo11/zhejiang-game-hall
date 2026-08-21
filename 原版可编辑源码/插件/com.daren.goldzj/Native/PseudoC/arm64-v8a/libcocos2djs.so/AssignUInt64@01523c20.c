
/* v8::internal::Bignum::AssignUInt64(unsigned long) */

void __thiscall v8::internal::Bignum::AssignUInt64(Bignum *this,ulong param_1)

{
  long lVar1;
  int *piVar2;
  
  if (0 < *(int *)(this + 0x210)) {
    lVar1 = 0;
    do {
      *(undefined4 *)(*(long *)(this + 0x200) + lVar1 * 4) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0x210));
  }
  *(undefined8 *)(this + 0x210) = 0;
  if (param_1 != 0) {
    **(uint **)(this + 0x200) = (uint)param_1 & 0xfffffff;
    *(uint *)(*(long *)(this + 0x200) + 4) = (uint)(param_1 >> 0x1c) & 0xfffffff;
    *(uint *)(*(long *)(this + 0x200) + 8) = (uint)(param_1 >> 0x38);
    piVar2 = *(int **)(this + 0x200);
    *(undefined4 *)(this + 0x210) = 3;
    if (((piVar2[2] == 0) && (*(undefined4 *)(this + 0x210) = 2, piVar2[1] == 0)) &&
       (*(undefined4 *)(this + 0x210) = 1, *piVar2 == 0)) {
      *(undefined8 *)(this + 0x210) = 0;
      return;
    }
  }
  return;
}

