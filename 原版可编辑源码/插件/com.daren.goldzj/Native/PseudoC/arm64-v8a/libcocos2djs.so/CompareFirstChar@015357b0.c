
/* v8::internal::CompareFirstChar(v8::internal::RegExpTree* const*, v8::internal::RegExpTree*
   const*) */

uint v8::internal::CompareFirstChar(RegExpTree **param_1,RegExpTree **param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar1 = (**(code **)(*(long *)*param_1 + 0x98))();
  lVar2 = (**(code **)(*(long *)*param_2 + 0x98))(*param_2);
  uVar3 = (uint)(**(ushort **)(lVar2 + 8) < **(ushort **)(lVar1 + 8));
  if (**(ushort **)(lVar1 + 8) < **(ushort **)(lVar2 + 8)) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

