
void FUN_008d45c8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  
  puVar1 = DAT_01d36df0;
  lVar2 = DAT_01d36de8;
  if (DAT_01d36df8 != 0) {
    while (DAT_01d36de8 = lVar2, puVar1 != (void *)0x0) {
      pvVar4 = (void *)*puVar1;
      se::Value::~Value((Value *)(puVar1 + 3));
      operator_delete(puVar1);
      puVar1 = pvVar4;
      lVar2 = DAT_01d36de8;
    }
    DAT_01d36df0 = (undefined8 *)0x0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(DAT_01d36de0 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    DAT_01d36df8 = 0;
  }
  return;
}

