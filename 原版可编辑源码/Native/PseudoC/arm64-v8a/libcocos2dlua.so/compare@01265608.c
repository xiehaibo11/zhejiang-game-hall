
/* btConvexHullInternal::Rational128::compare(btConvexHullInternal::Rational128 const&) const */

int __thiscall btConvexHullInternal::Rational128::compare(Rational128 *this,Rational128 *param_1)

{
  int iVar1;
  uint uVar2;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  iVar1 = *(int *)(this + 0x20);
  if (iVar1 != *(int *)(param_1 + 0x20)) {
    return iVar1 - *(int *)(param_1 + 0x20);
  }
  if (iVar1 == 0) {
    return 0;
  }
  if (this[0x24] != (Rational128)0x0) {
    iVar1 = compare(param_1,*(long *)this * (long)iVar1);
    return -iVar1;
  }
  DMul<btConvexHullInternal::Int128,unsigned_long>::mul
            (*(undefined8 *)this,*(undefined8 *)(this + 8),*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(param_1 + 0x18),&local_30,&local_40);
  DMul<btConvexHullInternal::Int128,unsigned_long>::mul
            (*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18),*(undefined8 *)param_1,
             *(undefined8 *)(param_1 + 8),&local_50,&local_60);
  if (local_58 <= local_38) {
    if (local_38 != local_58) {
LAB_012656a8:
      uVar2 = 1;
      goto LAB_012656ac;
    }
    if (local_60 <= local_40) {
      if (local_60 < local_40) goto LAB_012656a8;
      if (local_48 <= local_28) {
        if (local_48 < local_28) goto LAB_012656a8;
        if (local_50 <= local_30) {
          uVar2 = (uint)(local_50 < local_30);
          goto LAB_012656ac;
        }
      }
    }
  }
  uVar2 = 0xffffffff;
LAB_012656ac:
  return *(int *)(this + 0x20) * uVar2;
}

