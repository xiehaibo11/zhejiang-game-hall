
int ENGINE_ctrl_cmd_string(ENGINE *e,char *cmd_name,char *arg,int cmd_optional)

{
  int iVar1;
  uint uVar2;
  long i;
  int line;
  char *local_38;
  
  if ((e == (ENGINE *)0x0) || (cmd_name == (char *)0x0)) {
    iVar1 = 0x43;
    line = 0xf5;
  }
  else {
    if ((*(long *)(e + 0x70) == 0) || (iVar1 = ENGINE_ctrl(e,0xd,0,cmd_name,(f *)0x0), iVar1 < 1)) {
      if (cmd_optional != 0) {
        ERR_clear_error();
        return 1;
      }
      iVar1 = 0x89;
      line = 0x107;
      goto LAB_00b28e00;
    }
    uVar2 = ENGINE_ctrl(e,0x12,(long)iVar1,(void *)0x0,(f *)0x0);
    if ((int)uVar2 < 0) {
      ERR_put_error(0x26,0xaa,0x8a,"crypto/engine/eng_ctrl.c",0xbf);
    }
    else if ((uVar2 & 7) != 0) {
      uVar2 = ENGINE_ctrl(e,0x12,(long)iVar1,(void *)0x0,(f *)0x0);
      if ((int)uVar2 < 0) {
        iVar1 = 0x6e;
        line = 0x117;
        goto LAB_00b28e00;
      }
      if ((uVar2 >> 2 & 1) == 0) {
        if (arg == (char *)0x0) {
          iVar1 = 0x87;
          line = 0x130;
          goto LAB_00b28e00;
        }
        if ((uVar2 >> 1 & 1) != 0) {
          i = 0;
          goto LAB_00b28efc;
        }
        if ((uVar2 & 1) == 0) {
          iVar1 = 0x6e;
          line = 0x142;
          goto LAB_00b28e00;
        }
        i = strtol(arg,&local_38,10);
        if ((local_38 == arg) || (*local_38 != '\0')) {
          iVar1 = 0x85;
          line = 0x148;
          goto LAB_00b28e00;
        }
      }
      else {
        if (arg != (char *)0x0) {
          iVar1 = 0x88;
          line = 0x120;
          goto LAB_00b28e00;
        }
        i = 0;
      }
      arg = (char *)0x0;
LAB_00b28efc:
      iVar1 = ENGINE_ctrl(e,iVar1,i,arg,(f *)0x0);
      return (uint)(0 < iVar1);
    }
    iVar1 = 0x86;
    line = 0x10c;
  }
LAB_00b28e00:
  ERR_put_error(0x26,0xab,iVar1,"crypto/engine/eng_ctrl.c",line);
  return 0;
}

