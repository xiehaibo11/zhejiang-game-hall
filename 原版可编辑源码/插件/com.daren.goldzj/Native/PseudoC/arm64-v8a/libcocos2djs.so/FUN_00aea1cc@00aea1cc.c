
undefined4
FUN_00aea1cc(ulong param_1,uint param_2,undefined1 *param_3,code *param_4,undefined8 param_5)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  char acStack_44 [20];
  undefined1 local_24 [4];
  
  if (param_1 >> 0x20 != 0) {
    return 0xffffffff;
  }
  if (param_1 < 0x10000) {
    if (param_1 < 0x100) {
      local_24[0] = (undefined1)param_1;
      if ((param_1 & 0x80) < 0x80) {
        uVar4 = *(ushort *)(&DAT_018a8944 + (param_1 & 0xff) * 2) & param_2 & 0xff;
      }
      else {
        uVar4 = param_2 & 4;
      }
      if ((uVar4 & 0x61) != 0) {
        if ((uVar4 >> 3 & 1) == 0) {
          iVar1 = (*param_4)(param_5,&DAT_01889e25,1);
          if (iVar1 == 0) {
            return 0xffffffff;
          }
          iVar1 = (*param_4)(param_5,local_24,1);
          if (iVar1 == 0) {
            return 0xffffffff;
          }
          return 2;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 1;
        }
LAB_00aea330:
        iVar1 = (*param_4)(param_5,local_24,1);
        if (iVar1 == 0) {
          return 0xffffffff;
        }
        return 1;
      }
      if ((uVar4 & 6) == 0) {
        if (((param_2 & 0xf) == 0) || (((uint)param_1 & 0xff) != 0x5c)) goto LAB_00aea330;
        pcVar2 = "\\\\";
        uVar3 = 2;
        uVar5 = 2;
      }
      else {
        BIO_snprintf(acStack_44,0xb,"\\%02X",(ulong)((uint)param_1 & 0xff));
        pcVar2 = acStack_44;
        uVar3 = 3;
        uVar5 = 3;
      }
    }
    else {
      BIO_snprintf(acStack_44,0x13,"\\U%04lX",param_1);
      pcVar2 = acStack_44;
      uVar3 = 6;
      uVar5 = 6;
    }
  }
  else {
    BIO_snprintf(acStack_44,0x13,"\\W%08lX",param_1);
    pcVar2 = acStack_44;
    uVar3 = 10;
    uVar5 = 10;
  }
  iVar1 = (*param_4)(param_5,pcVar2,uVar3);
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

