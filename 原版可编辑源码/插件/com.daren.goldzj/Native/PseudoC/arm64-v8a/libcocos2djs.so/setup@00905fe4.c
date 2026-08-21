
/* se::Object::setup() */

void se::Object::setup(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  puVar3 = operator_new(0x28);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar2 = __objectMap;
  *(undefined4 *)(puVar3 + 4) = 0x3f800000;
  __objectMap = puVar3;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  puVar1 = (void *)puVar2[2];
  while (puVar1 != (void *)0x0) {
    pvVar4 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar4;
  }
  pvVar4 = (void *)*puVar2;
  *puVar2 = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  operator_delete(puVar2);
  return;
}

