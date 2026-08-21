
void FUN_00c09498(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  FUN_00c08060();
  uVar5 = param_2[2];
  if (2 < uVar5 - 2) {
    if (uVar5 == 10) {
      lVar4 = (ulong)(*param_2 - 1) * 8;
      *(byte *)(*(long *)(param_1 + 0x48) + lVar4) =
           (byte)*(undefined4 *)(*(long *)(param_1 + 0x48) + lVar4) ^ 1;
      iVar3 = *param_2;
    }
    else if (uVar5 < 2) {
      FUN_00c08290(param_1,param_2,0xff);
      iVar3 = FUN_00c0899c(param_1);
    }
    else {
      iVar3 = FUN_00c09288(param_1,param_2,0);
    }
    if (iVar3 != -1) {
      uVar5 = param_2[4];
      uVar6 = (ulong)uVar5;
      if (uVar5 == 0xffffffff) {
        param_2[4] = iVar3;
      }
      else {
        lVar7 = *(long *)(param_1 + 0x48);
        lVar4 = uVar6 * 8;
        uVar2 = *(uint *)(lVar7 + lVar4);
        while( true ) {
          if (uVar2 >> 0x10 == 0x7fff) break;
          uVar5 = (uint)uVar6;
          uVar1 = ((uVar2 >> 0x10) - 0x7fff) + uVar5;
          if (uVar1 == 0xffffffff) break;
          uVar6 = (ulong)uVar1;
          lVar4 = uVar6 * 8;
          uVar2 = *(uint *)(lVar7 + lVar4);
          uVar5 = uVar1;
        }
        uVar5 = (iVar3 + 0x7fff) - uVar5;
        if (0xffff < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00c07bc4(*(undefined8 *)(param_1 + 8),0x91a);
        }
        *(short *)(lVar7 + lVar4 + 2) = (short)uVar5;
      }
    }
  }
  iVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
  FUN_00c07bd8(param_1,param_1 + 0x30,iVar3);
  param_2[3] = -1;
  return;
}

