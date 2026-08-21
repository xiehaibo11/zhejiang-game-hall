
void FUN_00bfb0d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar2 = (uint)((long)*param_2 >> 0x2f);
  uVar4 = 0xd;
  uVar1 = uVar4;
  if (0xfffffff2 < uVar2) {
    uVar1 = ~uVar2;
  }
  uVar2 = (uint)((long)*param_3 >> 0x2f);
  if (0xfffffff2 < uVar2) {
    uVar4 = ~uVar2;
  }
  uVar3 = 0x14b;
  if ((&PTR_DAT_01697110)[uVar1] != (&PTR_DAT_01697110)[uVar4]) {
    uVar3 = 0x12d;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfae80(param_1,uVar3,(&PTR_DAT_01697110)[uVar1]);
}

