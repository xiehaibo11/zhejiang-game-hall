
/* v8::internal::TurboAssembler::IsImmMovz(unsigned long, unsigned int) */

bool v8::internal::TurboAssembler::IsImmMovz(ulong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (uVar1 = param_2 >> 4; uVar1 != 0; uVar1 = uVar1 - 1) {
    if ((param_1 & 0xffff) == 0) {
      uVar2 = uVar2 + 1;
    }
    param_1 = param_1 >> 0x10;
  }
  return (param_2 >> 4) - 1 <= uVar2;
}

