
/* v8::internal::AstConsString::ToRawStrings() const */

void v8::internal::AstConsString::ToRawStrings(void)

{
  long in_x0;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *in_x8;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *in_x8 = 0;
  lVar5 = *(long *)(in_x0 + 8);
  if (lVar5 != 0) {
    puVar1 = operator_new(0x10);
    *puVar1 = 0;
    puVar1[1] = lVar5;
    *in_x8 = puVar1;
    for (puVar4 = *(undefined8 **)(in_x0 + 0x10); puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)puVar4[1]) {
      puVar2 = operator_new(0x10);
      uVar3 = *puVar4;
      *in_x8 = puVar2;
      *puVar2 = puVar1;
      puVar2[1] = uVar3;
      puVar1 = puVar2;
    }
  }
  return;
}

