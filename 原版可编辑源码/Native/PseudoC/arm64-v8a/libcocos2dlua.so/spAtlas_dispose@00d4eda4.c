
void spAtlas_dispose(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *__ptr_00;
  void *pvVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)*param_1;
  while (__ptr != (void *)0x0) {
                    /* try { // try from 00d4edc0 to 00e4ee5b has its CatchHandler @ 00d4e60c */
    pvVar1 = *(void **)((long)__ptr + 0x38);
    _spAtlasPage_disposeTexture(__ptr);
    _spFree(*(void **)((long)__ptr + 8));
    _spFree(__ptr);
    __ptr = pvVar1;
  }
  __ptr_00 = (undefined8 *)param_1[1];
  while (__ptr_00 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)__ptr_00[0xc];
    _spFree((void *)*__ptr_00);
    _spFree((void *)__ptr_00[9]);
    _spFree((void *)__ptr_00[10]);
    _spFree(__ptr_00);
                    /* catch() { ... } // from try @ 00d4e668 with catch @ 00d4ee10 */
    __ptr_00 = puVar2;
  }
  _spFree(param_1);
  return;
}

