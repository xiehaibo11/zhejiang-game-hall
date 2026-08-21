
undefined8 unzGoToFilePos(long param_1,undefined1 (*param_2) [16])

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xffffff9a;
  if ((param_1 != 0) && (param_2 != (undefined1 (*) [16])0x0)) {
                    /* try { // try from 00a0bc40 to 00b0bd23 has its CatchHandler @ 00a0bb28 */
    auVar2 = NEON_ext(*param_2,*param_2,8,1);
    *(long *)(param_1 + 0x68) = auVar2._8_8_;
    *(long *)(param_1 + 0x60) = auVar2._0_8_;
    uVar1 = FUN_00a0aff0(param_1,param_1 + 0x90,param_1 + 0x118,0,0,0,0,0,0);
    *(ulong *)(param_1 + 0x70) = (ulong)((int)uVar1 == 0);
  }
  return uVar1;
}

