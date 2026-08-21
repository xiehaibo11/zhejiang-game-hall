
/* v8::internal::IsMoreGeneralElementsKindTransition(v8::internal::ElementsKind,
   v8::internal::ElementsKind) */

uint v8::internal::IsMoreGeneralElementsKindTransition(byte param_1,uint param_2)

{
  if ((param_1 < 6) && (((param_2 & 0xff) < 6 || ((param_2 & 0xff) == 0xc)))) {
    switch(param_1) {
    case 0:
      return (uint)((param_2 & 0xff) != 0);
    case 1:
      return (uint)(1 < (param_2 & 0xff));
    case 2:
      param_2 = param_2 & 0xff;
      break;
    default:
      return 0;
    case 4:
      if ((param_2 & 0xff) < 5) {
        return 0xcU >> (ulong)(param_2 & 0x1f) & 1;
      }
      return 1;
    case 5:
      param_2 = param_2 & 0xff | 1;
    }
    return (uint)(param_2 == 3);
  }
  return 0;
}

