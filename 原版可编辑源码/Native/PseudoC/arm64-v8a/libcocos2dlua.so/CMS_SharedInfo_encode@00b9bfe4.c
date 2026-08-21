
int CMS_SharedInfo_encode(uchar **param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 *local_38;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 *local_20;
  undefined8 uStack_18;
  
  local_2c = (undefined1)(param_4 >> 0x15);
  local_20 = &local_2c;
  local_2b = (undefined1)(param_4 >> 0xd);
  local_38 = &local_28;
  local_2a = (undefined1)(param_4 >> 5);
  local_29 = (undefined1)(param_4 << 3);
  local_28 = 4;
  uStack_24 = 4;
  uStack_18 = 0;
  local_48 = param_2;
  uStack_40 = param_3;
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)&local_48,param_1,(ASN1_ITEM *)&DAT_016c5208);
  return iVar1;
}

