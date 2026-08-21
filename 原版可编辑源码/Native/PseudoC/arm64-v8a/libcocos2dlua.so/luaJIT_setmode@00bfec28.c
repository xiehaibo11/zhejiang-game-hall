
bool luaJIT_setmode(long param_1,int param_2,uint param_3)

{
  bool bVar1;
  ulong *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar3 + 0xc1) >> 6 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb3a0(param_1,0x381);
  }
  switch(param_3 & 0xff) {
  case 0:
  case 2:
  case 3:
  case 4:
    bVar1 = (param_3 & 0x100) == 0;
    break;
  default:
    return false;
  case 0x10:
    if ((param_3 >> 8 & 1) == 0) {
      *(undefined4 *)(lVar3 + 0x154) = 0x5f;
      return true;
    }
    bVar1 = false;
    if (param_2 != 0) {
      if (param_2 < 1) {
        puVar2 = (ulong *)(*(long *)(param_1 + 0x28) + (long)param_2 * 8);
      }
      else {
        puVar2 = (ulong *)(*(long *)(param_1 + 0x20) + (long)param_2 * 8 + -8);
      }
      bVar1 = false;
      if ((int)((long)*puVar2 >> 0x2f) == -4) {
        bVar1 = true;
        *(ulong *)(lVar3 + 0x140) = *puVar2 & 0x7fffffffffff;
        *(undefined4 *)(lVar3 + 0x154) = 0x60;
      }
    }
  }
  return bVar1;
}

