
/* v8::internal::Factory::TypeAndSizeForElementsKind(v8::internal::ElementsKind,
   v8::internal::ExternalArrayType*, unsigned long*) */

void v8::internal::Factory::TypeAndSizeForElementsKind
               (char param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = param_1 - 0x11;
  if (bVar1 < 0xb) {
    uVar2 = *(undefined8 *)(&DAT_019be560 + (long)(char)bVar1 * 8);
    *param_2 = *(undefined4 *)(&DAT_019be530 + (long)(char)bVar1 * 4);
    *param_3 = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

