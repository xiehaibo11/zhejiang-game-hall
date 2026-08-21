
/* v8::internal::CompareOperation::IsLiteralCompareTypeof(v8::internal::Expression**,
   v8::internal::Literal**) */

undefined4 __thiscall
v8::internal::CompareOperation::IsLiteralCompareTypeof
          (CompareOperation *this,Expression **param_1,Literal **param_2)

{
  Literal *pLVar1;
  uint uVar2;
  Literal *pLVar3;
  uint uVar4;
  
  pLVar1 = *(Literal **)(this + 8);
  pLVar3 = *(Literal **)(this + 0x10);
  uVar2 = *(uint *)(pLVar1 + 4);
  if ((pLVar1 == (Literal *)0x0) || ((uVar2 & 0x3fbf) != 0x18b4)) {
    uVar4 = *(uint *)(pLVar3 + 4);
  }
  else {
    uVar4 = *(uint *)(pLVar3 + 4);
    if (((uVar4 & 0x7bf) == 0x1a9) && (((*(uint *)(this + 4) >> 7 & 0x7f) - 0x35 & 0xff) < 2)) {
      if ((uVar2 & 0x3f) != 0x34) {
        pLVar1 = (Literal *)0x0;
      }
      *param_1 = *(Expression **)(pLVar1 + 8);
      if ((*(uint *)(pLVar3 + 4) & 0x3f) != 0x29) {
        pLVar3 = (Literal *)0x0;
      }
      goto LAB_01498374;
    }
  }
  if ((uVar4 & 0x3fbf) != 0x18b4) {
    return 0;
  }
  if ((uVar2 & 0x7bf) != 0x1a9) {
    return 0;
  }
  if (1 < ((*(uint *)(this + 4) >> 7 & 0x7f) - 0x35 & 0xff)) {
    return 0;
  }
  if ((uVar4 & 0x3f) != 0x34) {
    pLVar3 = (Literal *)0x0;
  }
  *param_1 = *(Expression **)(pLVar3 + 8);
  pLVar3 = pLVar1;
  if ((*(uint *)(pLVar1 + 4) & 0x3f) != 0x29) {
    pLVar3 = (Literal *)0x0;
  }
LAB_01498374:
  *param_2 = pLVar3;
  return 1;
}

