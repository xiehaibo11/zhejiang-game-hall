
/* v8::internal::RegisterConfiguration::AreAliases(v8::internal::MachineRepresentation, int,
   v8::internal::MachineRepresentation, int) const */

bool __thiscall
v8::internal::RegisterConfiguration::AreAliases
          (undefined8 param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  param_2 = param_2 & 0xff;
  if (param_2 == (param_4 & 0xff)) {
    return param_3 == param_5;
  }
  param_4 = param_4 & 0xff;
  if (param_4 <= param_2 && param_2 - param_4 != 0) {
    return param_5 >> (param_2 - param_4 & 0x1f) == param_3;
  }
  return param_3 >> (param_4 - param_2 & 0x1f) == param_5;
}

