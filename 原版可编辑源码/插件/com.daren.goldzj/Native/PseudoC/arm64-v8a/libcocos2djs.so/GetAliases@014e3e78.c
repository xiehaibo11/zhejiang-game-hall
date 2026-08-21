
/* v8::internal::RegisterConfiguration::GetAliases(v8::internal::MachineRepresentation, int,
   v8::internal::MachineRepresentation, int*) const */

int __thiscall
v8::internal::RegisterConfiguration::GetAliases
          (undefined8 param_1,uint param_2,int param_3,uint param_4,int *param_5)

{
  uint uVar1;
  
  param_2 = param_2 & 0xff;
  if (param_2 == (param_4 & 0xff)) {
    *param_5 = param_3;
    return 1;
  }
  param_4 = param_4 & 0xff;
  uVar1 = param_2 - param_4;
  if (param_4 <= param_2 && uVar1 != 0) {
    param_3 = param_3 << (ulong)(uVar1 & 0x1f);
    if (0x1f < param_3) {
      return 0;
    }
    *param_5 = param_3;
    return 1 << (ulong)(uVar1 & 0x1f);
  }
  *param_5 = param_3 >> (param_4 - param_2 & 0x1f);
  return 1;
}

