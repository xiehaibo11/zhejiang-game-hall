
/* v8::internal::UnionElementsKindUptoSize(v8::internal::ElementsKind*, v8::internal::ElementsKind)
    */

undefined8 v8::internal::UnionElementsKindUptoSize(byte *param_1,byte param_2)

{
  byte bVar1;
  
  switch(*param_1) {
  case 0:
    if (3 < param_2) {
      return 0;
    }
    goto LAB_01078a98;
  case 1:
    if (1 < param_2 - 2) {
      if (1 < param_2) {
        return 0;
      }
      *param_1 = 1;
      return 1;
    }
    break;
  case 2:
    switch(param_2) {
    case 0:
    case 2:
      bVar1 = 2;
      goto LAB_01078ab0;
    case 1:
    case 3:
      break;
    default:
      goto switchD_01078a0c_default;
    }
  case 3:
    if (3 < param_2) {
      return 0;
    }
    break;
  case 4:
    if ((param_2 & 0xfe) != 4) {
      return 0;
    }
LAB_01078a98:
    *param_1 = param_2;
    return 1;
  case 5:
    if ((param_2 & 0xfe) != 4) {
      return 0;
    }
    bVar1 = 5;
    goto LAB_01078ab0;
  default:
switchD_01078a0c_default:
    return 0;
  }
  bVar1 = 3;
LAB_01078ab0:
  *param_1 = bVar1;
  return 1;
}

