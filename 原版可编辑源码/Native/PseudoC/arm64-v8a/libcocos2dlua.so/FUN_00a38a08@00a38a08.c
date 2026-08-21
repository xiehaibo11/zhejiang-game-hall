
void FUN_00a38a08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *__s;
  char cVar1;
  size_t __size;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  puStack_60 = &local_a0;
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd0;
  __s = (char *)(param_1 + 0xb08);
  local_a0 = param_3;
  local_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  FUN_00a22d94(__s,0x4000,param_2,&local_70);
  if ((*(long *)(param_1 + 0x230) == 0) || (*(char *)(param_1 + 0x8b60) != '\0')) {
    cVar1 = *(char *)(param_1 + 0x628);
  }
  else {
    FUN_00a241ac(*(long *)(param_1 + 0x230),0x100,"%s",__s);
    *(char *)(param_1 + 0x8b60) = '\x01';
    cVar1 = *(char *)(param_1 + 0x628);
  }
  if (cVar1 != '\0') {
    __size = strlen(__s);
    if (__size < 0x3fff) {
      *(undefined1 *)(param_1 + 0xb08 + __size) = 10;
      __size = __size + 1;
      *(undefined1 *)(param_1 + 0xb08 + __size) = 0;
    }
    if (*(code **)(param_1 + 0x2e8) == (code *)0x0) {
      fwrite(&DAT_013c44af,2,1,*(FILE **)(param_1 + 0x220));
      fwrite(__s,__size,1,*(FILE **)(param_1 + 0x220));
    }
    else {
      (**(code **)(param_1 + 0x2e8))(param_1,0,__s,__size,*(undefined8 *)(param_1 + 0x228));
    }
  }
  return;
}

