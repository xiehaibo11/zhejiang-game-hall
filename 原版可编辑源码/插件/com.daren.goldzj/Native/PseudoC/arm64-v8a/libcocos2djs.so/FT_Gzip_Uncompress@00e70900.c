
undefined4
FT_Gzip_Uncompress(long param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 local_90;
  undefined4 local_88;
  long local_78;
  undefined4 local_70;
  undefined8 local_68;
  code *local_50;
  code *pcStack_48;
  long local_40;
  
  if (((param_2 != 0) && (param_1 != 0)) && (param_3 != (undefined8 *)0x0)) {
    local_70 = (undefined4)*param_3;
    local_50 = FUN_00e70a08;
    pcStack_48 = thunk_FUN_00e139fc;
    local_90 = param_4;
    local_88 = param_5;
    local_78 = param_2;
    local_40 = param_1;
    iVar1 = inflateInit2_(&local_90,0xf,"1.2.8",0x70);
    if (iVar1 == 0) {
      iVar1 = inflate(&local_90,4);
      if (iVar1 == 1) {
        *param_3 = local_68;
        iVar2 = inflateEnd(&local_90);
      }
      else {
        inflateEnd(&local_90);
        iVar2 = -5;
        if (iVar1 != 0) {
          iVar2 = iVar1;
        }
      }
      if (iVar2 + 5U < 3) {
        return (&DAT_0197b550)[(int)(iVar2 + 5U)];
      }
      return 0;
    }
  }
  return 6;
}

