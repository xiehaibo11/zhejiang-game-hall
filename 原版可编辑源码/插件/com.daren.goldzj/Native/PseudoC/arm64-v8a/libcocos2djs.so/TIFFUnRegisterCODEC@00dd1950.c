
void TIFFUnRegisterCODEC(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  undefined8 *puVar2;
  
  if (DAT_01d3e8b8 != (undefined8 *)0x0) {
    puVar1 = DAT_01d3e8b8;
    puVar2 = &DAT_01d3e8b8;
    do {
      __ptr = puVar1;
      if ((undefined8 *)__ptr[1] == param_1) {
        *puVar2 = *__ptr;
        _TIFFfree(__ptr);
        return;
      }
      puVar1 = (undefined8 *)*__ptr;
      puVar2 = __ptr;
    } while ((undefined8 *)*__ptr != (undefined8 *)0x0);
  }
  TIFFErrorExt(0,"TIFFUnRegisterCODEC","Cannot remove compression scheme %s; not registered",
               *param_1);
  return;
}

