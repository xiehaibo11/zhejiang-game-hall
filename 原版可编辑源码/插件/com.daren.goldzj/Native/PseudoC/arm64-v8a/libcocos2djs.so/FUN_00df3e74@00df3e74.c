
int FUN_00df3e74(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((param_2[-1] ^ param_1) >> 1 & 0x7f7f7f7f) + (param_2[-1] & param_1);
  uVar2 = ((param_2[1] ^ *param_2) >> 1 & 0x7f7f7f7f) + (param_2[1] & *param_2);
  return ((uVar2 ^ uVar1) >> 1 & 0x7f7f7f7f) + (uVar2 & uVar1);
}

