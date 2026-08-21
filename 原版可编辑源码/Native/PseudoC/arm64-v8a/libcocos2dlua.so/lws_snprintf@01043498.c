
int lws_snprintf(char *param_1,size_t param_2,char *param_3,undefined8 param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  if (param_2 != 0) {
    puStack_50 = auStack_90;
    ppuStack_58 = &local_60;
    uStack_48 = 0xffffff80ffffffd8;
    local_88 = param_4;
    local_80 = param_5;
    uStack_78 = param_6;
    local_70 = param_7;
    uStack_68 = param_8;
    local_60 = (undefined1 *)register0x00000008;
    iVar1 = vsnprintf(param_1,param_2,param_3,&local_60);
    if ((int)param_2 <= iVar1) {
      iVar1 = (int)param_2;
    }
                    /* catch() { ... } // from try @ 01043460 with catch @ 0104351c */
    return iVar1;
  }
  return 0;
}

