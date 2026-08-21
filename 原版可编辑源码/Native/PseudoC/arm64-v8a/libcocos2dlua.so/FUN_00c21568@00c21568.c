
void FUN_00c21568(long *param_1,uint *param_2,undefined8 *param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *param_2;
  if (uVar1 >> 0x1c != 0xb) {
    if (uVar1 >> 0x1c == 10) {
      if (((param_5 | uVar1) >> 0x19 & 1) == 0) {
        FUN_00c22274();
        return;
      }
    }
    else {
      lVar4 = *param_1;
      lVar3 = (ulong)(ushort)uVar1 * 0x18;
      uVar1 = *(uint *)(lVar4 + lVar3);
      if ((uVar1 & 0xf0800000) == 0x20800000) {
        uVar2 = (ushort)uVar1;
        param_3 = (undefined8 *)*param_3;
        goto LAB_00c215dc;
      }
      while (uVar1 >> 0x1c == 8) {
        if ((uVar1 >> 0x10 & 0xff) == 1) {
          param_5 = param_5 | *(uint *)(lVar4 + lVar3 + 4);
        }
        uVar2 = (ushort)uVar1;
LAB_00c215dc:
        lVar3 = (ulong)uVar2 * 0x18;
        uVar1 = *(uint *)(lVar4 + lVar3);
      }
      if (((uVar1 | param_5) >> 0x19 & 1) == 0) {
        FUN_00c22594(param_1,lVar4 + lVar3,param_3,param_4,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb3a0(param_1[2],0xdc5);
}

