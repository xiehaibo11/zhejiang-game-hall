
/* v8::internal::interpreter::TestTypeOfFlags::GetFlagForLiteral(v8::internal::AstStringConstants
   const*, v8::internal::Literal*) */

undefined4
v8::internal::interpreter::TestTypeOfFlags::GetFlagForLiteral
          (AstStringConstants *param_1,Literal *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 8);
  if (lVar2 == *(long *)(param_1 + 0x178)) {
    return 0;
  }
  if (lVar2 == *(long *)(param_1 + 0x1c0)) {
    return 1;
  }
  if (lVar2 == *(long *)(param_1 + 0x1c8)) {
    return 2;
  }
  if (lVar2 != *(long *)(param_1 + 0x98)) {
    if (lVar2 == *(long *)(param_1 + 0x90)) {
      return 4;
    }
    if (lVar2 != *(long *)(param_1 + 0x1f0)) {
      if (lVar2 != *(long *)(param_1 + 0x128)) {
        uVar1 = 7;
        if (lVar2 != *(long *)(param_1 + 0x180)) {
          uVar1 = 8;
        }
        return uVar1;
      }
      return 6;
    }
    return 5;
  }
  return 3;
}

