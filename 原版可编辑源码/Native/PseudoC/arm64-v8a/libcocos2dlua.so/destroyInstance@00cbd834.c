
/* cocostudio::FlatBuffersSerialize::destroyInstance() */

void cocostudio::FlatBuffersSerialize::destroyInstance(void)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = DAT_01786988;
  if (DAT_01786988 != (undefined8 *)0x0) {
    if ((*(byte *)(DAT_01786988 + 9) & 1) != 0) {
      operator_delete((void *)DAT_01786988[0xb]);
    }
    pvVar2 = (void *)puVar1[3];
    if (pvVar2 != (void *)0x0) {
      puVar1[4] = pvVar2;
      operator_delete(pvVar2);
    }
    pvVar2 = (void *)*puVar1;
    if (pvVar2 != (void *)0x0) {
      puVar1[1] = pvVar2;
      operator_delete(pvVar2);
    }
    operator_delete(puVar1);
  }
  DAT_01786988 = (undefined8 *)0x0;
  return;
}

