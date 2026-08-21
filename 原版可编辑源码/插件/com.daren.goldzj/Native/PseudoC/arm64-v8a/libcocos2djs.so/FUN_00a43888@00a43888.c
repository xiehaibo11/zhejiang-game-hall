
ulong FUN_00a43888(ulong *param_1)

{
  ulong uVar1;
  
                    /* try { // try from 00a43888 to 00b439af has its CatchHandler @ 00a43a3c */
  uVar1 = (*param_1 & 0xff00ff00ff00ff00) >> 8 | (*param_1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return uVar1 >> 0x20 | uVar1 << 0x20;
}

