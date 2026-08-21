
int i2d_DHxparams(long param_1,uchar **param_2)

{
  int iVar1;
  int local_60 [2];
  long local_58;
  undefined8 uStack_50;
  undefined1 *local_48;
  long lStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 **local_18;
  
  local_38 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 00b062d4 to 00c062e3 has its CatchHandler @ 00b067f0 */
  local_28 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 00b062e4 to 00c063f3 has its CatchHandler @ 00b05eb8 */
  local_30 = *(undefined8 *)(param_1 + 0x40);
  local_20 = *(undefined8 *)(param_1 + 0x48);
  local_18 = (undefined1 **)0x0;
  if (*(long *)(param_1 + 0x60) != 0) {
    if ((*(long *)(param_1 + 0x50) == 0) || (*(int *)(param_1 + 0x58) < 1)) {
      local_18 = (undefined1 **)0x0;
    }
    else {
      local_18 = &local_48;
      uStack_50 = 8;
      local_60[0] = *(int *)(param_1 + 0x58);
      local_58 = *(long *)(param_1 + 0x50);
      local_48 = (undefined1 *)local_60;
      lStack_40 = *(long *)(param_1 + 0x60);
    }
  }
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)&local_38,param_2,(ASN1_ITEM *)&DAT_01c743a8);
  return iVar1;
}

