
void Json_dispose(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    lVar1 = param_1[1];
    puVar3 = (undefined8 *)*param_1;
    while( true ) {
      puVar2 = puVar3;
      if (lVar1 != 0) {
        Json_dispose();
      }
      if ((void *)param_1[3] != (void *)0x0) {
        _spFree((void *)param_1[3]);
      }
      if ((void *)param_1[5] != (void *)0x0) {
        _spFree((void *)param_1[5]);
      }
      _spFree(param_1);
      if (puVar2 == (undefined8 *)0x0) break;
      lVar1 = puVar2[1];
      puVar3 = (undefined8 *)*puVar2;
      param_1 = puVar2;
    }
  }
  return;
}

