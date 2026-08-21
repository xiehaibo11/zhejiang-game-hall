
void FUN_009d08d4(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puStack_50 = auStack_a0;
  ppuStack_58 = &local_60;
  uStack_48 = 0xffffff80ffffffc8;
  local_98 = param_2;
  uStack_90 = param_3;
  local_88 = param_4;
  uStack_80 = param_5;
  local_78 = param_6;
  uStack_70 = param_7;
  local_68 = param_8;
  local_60 = (undefined1 *)register0x00000008;
  vfprintf((FILE *)pthread_rwlock_tryrdlock,param_1,&local_60);
  fputc(10,(FILE *)pthread_rwlock_tryrdlock);
                    /* WARNING: Subroutine does not return */
  exit(-1);
}

