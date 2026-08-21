
uint FUN_00c132c0(long param_1,undefined8 param_2,ulong *param_3)

{
  ushort uVar1;
  int iVar2;
  ulong *puVar3;
  undefined1 auStack_80 [12];
  uint local_74;
  long local_60;
  long local_38;
  undefined8 local_30;
  ulong *local_28;
  long local_20;
  undefined4 local_c;
  
  puVar3 = *(ulong **)(param_1 + 0x20);
  if (puVar3 < *(ulong **)(param_1 + 0x28)) {
    iVar2 = (int)((long)*puVar3 >> 0x2f);
    if (iVar2 == -5) {
      local_60 = (*puVar3 & 0x7fffffffffff) + 0x18;
      local_c = 0x12;
      local_38 = param_1;
      local_30 = param_2;
      local_28 = param_3;
      local_20 = local_60;
      iVar2 = FUN_00c29398(auStack_80);
      if (iVar2 == 0) {
        return local_74;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00bfa980(param_1,iVar2);
    }
    if (iVar2 == -0xb) {
      if ((param_3 != (ulong *)0x0) && (param_3 < *(ulong **)(param_1 + 0x28))) {
                    /* WARNING: Subroutine does not return */
        FUN_00bfb458(param_1,1,0xc23);
      }
      uVar1 = *(ushort *)((*puVar3 & 0x7fffffffffff) + 10);
      if (uVar1 != 0x15) {
        return (uint)uVar1;
      }
      return *(uint *)((*puVar3 & 0x7fffffffffff) + 0x10);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb470(param_1,1,"C type");
}

