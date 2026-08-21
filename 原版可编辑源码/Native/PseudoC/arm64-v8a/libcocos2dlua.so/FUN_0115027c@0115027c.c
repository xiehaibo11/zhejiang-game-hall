
int FUN_0115027c(uint param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = ((param_2[1] ^ param_1) >> 1 & 0x7f7f7f7f) + (param_2[1] & param_1);
  return ((uVar1 ^ *param_2) >> 1 & 0x7f7f7f7f) + (uVar1 & *param_2);
}

