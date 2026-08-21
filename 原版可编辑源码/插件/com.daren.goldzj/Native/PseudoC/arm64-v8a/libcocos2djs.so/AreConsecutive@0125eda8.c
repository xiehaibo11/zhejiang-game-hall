
/* v8::internal::AreConsecutive(v8::internal::VRegister const&, v8::internal::VRegister const&,
   v8::internal::VRegister const&, v8::internal::VRegister const&) */

bool v8::internal::AreConsecutive
               (VRegister *param_1,VRegister *param_2,VRegister *param_3,VRegister *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)param_2;
  if (iVar2 != -1) {
    iVar3 = *(int *)param_1;
    uVar1 = iVar3 + 0x20;
    if (-1 < iVar3 + 1) {
      uVar1 = iVar3 + 1;
    }
    if (iVar2 != (iVar3 + 1) - (uVar1 & 0xffffffe0)) {
      return false;
    }
    iVar3 = *(int *)param_3;
    if (iVar3 != -1) {
      uVar1 = iVar2 + 0x20;
      if (-1 < iVar2 + 1) {
        uVar1 = iVar2 + 1;
      }
      if (iVar3 != (iVar2 + 1) - (uVar1 & 0xffffffe0)) {
        return false;
      }
      if (*(int *)param_4 != -1) {
        uVar1 = iVar3 + 0x20;
        if (-1 < iVar3 + 1) {
          uVar1 = iVar3 + 1;
        }
        return *(int *)param_4 == (iVar3 + 1) - (uVar1 & 0xffffffe0);
      }
    }
  }
  return true;
}

