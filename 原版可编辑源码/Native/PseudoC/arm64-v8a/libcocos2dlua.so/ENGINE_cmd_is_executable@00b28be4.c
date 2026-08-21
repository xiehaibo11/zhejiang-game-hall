
int ENGINE_cmd_is_executable(ENGINE *e,int cmd)

{
  uint uVar1;
  
  uVar1 = ENGINE_ctrl(e,0x12,(long)cmd,(void *)0x0,(f *)0x0);
  if (-1 < (int)uVar1) {
    return (int)((uVar1 & 7) != 0);
  }
  ERR_put_error(0x26,0xaa,0x8a,"crypto/engine/eng_ctrl.c",0xbf);
  return 0;
}

