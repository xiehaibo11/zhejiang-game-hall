
/* v8::internal::TurboAssembler::IsImmMovn(unsigned long, unsigned int) */

bool v8::internal::TurboAssembler::IsImmMovn(ulong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  uVar1 = param_2 >> 4;
  if (uVar1 != 0) {
    uVar4 = ~param_1;
    uVar2 = uVar1;
    do {
      if ((uVar4 & 0xffff) == 0) {
        uVar3 = uVar3 + 1;
      }
      uVar2 = uVar2 - 1;
      uVar4 = uVar4 >> 0x10;
    } while (uVar2 != 0);
  }
  return uVar1 - 1 <= uVar3;
}

