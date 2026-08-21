
void FUN_00c064c4(long param_1,int param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  param_3 = param_3 & 0xffffffff;
  uVar2 = 0;
  local_28 = param_4;
  local_20 = param_5;
  local_18 = param_6;
  local_10 = param_7;
  local_8 = param_8;
  if (param_2 != 0) {
    if (2 < param_2 - 0x11eU) goto LAB_00c06584;
    puVar1 = *(undefined1 **)(param_1 + 0x40);
    if ((int)*(undefined8 *)(param_1 + 0x48) == (int)puVar1) {
      puVar1 = (undefined1 *)FUN_00c1a4a8(param_1 + 0x40,1);
    }
    *puVar1 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined1 **)(param_1 + 0x40) = puVar1 + 1;
  }
  do {
    local_e0 = auStack_30;
    uStack_d8 = 0xffffff80ffffffd8;
    local_f0 = (undefined1 *)register0x00000008;
    puStack_e8 = (undefined1 *)register0x00000008;
    FUN_00bfaf60(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x78),uVar2,
                 *(undefined4 *)(param_1 + 0x70),param_3,&local_f0);
LAB_00c06584:
    uVar2 = FUN_00c06478();
  } while( true );
}

