
long FUN_00a24258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 **ppuStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  long local_60;
  long local_58;
  long local_50;
  int local_48;
  
  puStack_70 = auStack_c0;
  ppuStack_78 = &local_80;
  uStack_68 = 0xffffff80ffffffc8;
  local_48 = 0;
  local_58 = 0;
  local_50 = 0;
  local_60 = 0;
  local_b8 = param_2;
  local_b0 = param_3;
  uStack_a8 = param_4;
  local_a0 = param_5;
  uStack_98 = param_6;
  local_90 = param_7;
  uStack_88 = param_8;
  local_80 = (undefined1 *)register0x00000008;
  iVar1 = FUN_00a22dfc(&local_60,FUN_00a24350,param_1,&local_80);
  if ((iVar1 == -1) || (local_48 != 0)) {
    if (local_50 != 0) {
      (*(code *)PTR_free_01769a00)(local_60);
    }
    local_60 = 0;
  }
  else if (local_50 == 0) {
    local_60 = (*(code *)PTR_strdup_01769a10)(&DAT_013c996e);
  }
  else {
    *(undefined1 *)(local_60 + local_58) = 0;
  }
  return local_60;
}

