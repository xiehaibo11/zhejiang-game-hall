
int ENGINE_ctrl_cmd(ENGINE *e,char *cmd_name,long i,void *p,f *f,int cmd_optional)

{
  int iVar1;
  int line;
  
  if ((e == (ENGINE *)0x0) || (cmd_name == (char *)0x0)) {
    iVar1 = 0x43;
    line = 0xcf;
  }
  else {
    if ((*(long *)(e + 0x70) != 0) && (iVar1 = ENGINE_ctrl(e,0xd,0,cmd_name,(f *)0x0), 0 < iVar1)) {
      iVar1 = ENGINE_ctrl(e,iVar1,i,p,f);
      return (uint)(0 < iVar1);
    }
    if (cmd_optional != 0) {
      ERR_clear_error();
      return 1;
    }
    iVar1 = 0x89;
    line = 0xe1;
  }
  ERR_put_error(0x26,0xb2,iVar1,"crypto/engine/eng_ctrl.c",line);
  return 0;
}

