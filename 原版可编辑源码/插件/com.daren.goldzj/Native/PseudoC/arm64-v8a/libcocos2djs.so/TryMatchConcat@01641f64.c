
/* v8::internal::compiler::InstructionSelector::TryMatchConcat(unsigned char const*, unsigned char*)
    */

undefined8
v8::internal::compiler::InstructionSelector::TryMatchConcat(uchar *param_1,uchar *param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (uint)*param_1;
  if (uVar2 == 0) {
    return 0;
  }
  lVar3 = 1;
  while ((bVar1 = param_1[lVar3], uVar2 + 1 == (uint)bVar1 ||
         ((uVar2 == 0xf && ((bVar1 & 0xf) == 0))))) {
    lVar3 = lVar3 + 1;
    uVar2 = (uint)bVar1;
    if (lVar3 == 0x10) {
      *param_2 = *param_1;
      return 1;
    }
  }
  return 0;
}

