
int UI_ctrl(UI *ui,int cmd,long i,void *p,f *f)

{
  uint uVar1;
  uint uVar2;
  int reason;
  int line;
  
  if (ui == (UI *)0x0) {
    reason = 0x43;
    line = 0x1e3;
  }
  else {
    if (cmd == 2) {
      return *(uint *)(ui + 0x20) & 1;
    }
    if (cmd == 1) {
      uVar2 = *(uint *)(ui + 0x20);
      uVar1 = uVar2 | 0x100;
      if (i == 0) {
        uVar1 = uVar2 & 0xfffffeff;
      }
      *(uint *)(ui + 0x20) = uVar1;
      return uVar2 >> 8 & 1;
    }
    reason = 0x6a;
    line = 0x1f5;
  }
  ERR_put_error(0x28,0x6f,reason,"crypto/ui/ui_lib.c",line);
  return -1;
}

