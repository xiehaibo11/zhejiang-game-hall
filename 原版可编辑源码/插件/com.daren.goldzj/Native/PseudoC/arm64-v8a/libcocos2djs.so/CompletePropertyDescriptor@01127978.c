
/* v8::internal::PropertyDescriptor::CompletePropertyDescriptor(v8::internal::Isolate*,
   v8::internal::PropertyDescriptor*) */

void v8::internal::PropertyDescriptor::CompletePropertyDescriptor
               (Isolate *param_1,PropertyDescriptor *param_2)

{
  uint uVar1;
  PropertyDescriptor PVar2;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    if (*(long *)(param_2 + 0x18) == 0) {
      if (*(long *)(param_2 + 8) == 0) {
        *(Isolate **)(param_2 + 8) = param_1 + 0xa0;
      }
      if (((byte)*param_2 >> 5 & 1) == 0) {
        *param_2 = (PropertyDescriptor)((byte)*param_2 & 0xcf | 0x20);
      }
    }
    else {
      *(Isolate **)(param_2 + 0x10) = param_1 + 0xa0;
    }
  }
  else if (*(long *)(param_2 + 0x18) == 0) {
    *(Isolate **)(param_2 + 0x18) = param_1 + 0xa0;
  }
  PVar2 = *param_2;
  uVar1 = (byte)PVar2 & 0xfc | 2;
  if (((byte)PVar2 & 2) != 0) {
    uVar1 = (uint)(byte)PVar2;
  }
  if ((((byte)PVar2 >> 1 & 1) != 0) && ((uVar1 >> 3 & 1) != 0)) {
    return;
  }
  PVar2 = (PropertyDescriptor)((byte)SUB41(uVar1,0) & 0xf3 | 8);
  if ((uVar1 & 8) != 0) {
    PVar2 = SUB41(uVar1,0);
  }
  *param_2 = PVar2;
  return;
}

