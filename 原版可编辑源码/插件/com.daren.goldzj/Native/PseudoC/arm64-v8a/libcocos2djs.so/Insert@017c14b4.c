
/* v8::internal::interpreter::ConstantArrayBuilder::Insert(v8::internal::Smi) */

undefined4 __thiscall
v8::internal::interpreter::ConstantArrayBuilder::Insert(ConstantArrayBuilder *this,uint param_2)

{
  undefined4 uVar1;
  ConstantArrayBuilder *pCVar2;
  ConstantArrayBuilder *pCVar3;
  
  this = this + 0x38;
  pCVar3 = *(ConstantArrayBuilder **)this;
  pCVar2 = this;
  if (pCVar3 != (ConstantArrayBuilder *)0x0) {
    do {
      if (*(uint *)(pCVar3 + 0x20) >= param_2) {
        pCVar2 = pCVar3;
      }
      pCVar3 = *(ConstantArrayBuilder **)(pCVar3 + (ulong)(*(uint *)(pCVar3 + 0x20) < param_2) * 8);
    } while (pCVar3 != (ConstantArrayBuilder *)0x0);
    if ((pCVar2 != this) && (*(uint *)(pCVar2 + 0x20) <= param_2)) {
      return *(undefined4 *)(pCVar2 + 0x28);
    }
  }
  uVar1 = AllocateReservedEntry();
  return uVar1;
}

