
int FUN_01150300(undefined8 param_1,uint *param_2)

{
  return ((param_2[1] ^ *param_2) >> 1 & 0x7f7f7f7f) + (param_2[1] & *param_2);
}

