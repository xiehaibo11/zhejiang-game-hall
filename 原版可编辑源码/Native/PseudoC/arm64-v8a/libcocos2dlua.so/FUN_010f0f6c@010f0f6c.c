
void FUN_010f0f6c(long *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  if (param_2 != 1) {
    puVar1 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar1 + 5) = 0xf;
    *(int *)((long)puVar1 + 0x2c) = param_2;
    (*(code *)*puVar1)(param_1);
  }
  puVar1 = (undefined8 *)FUN_010f0a10(param_1,param_2,0x98);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = param_5;
  *(undefined4 *)((long)puVar1 + 0xc) = param_4;
  *(undefined4 *)(puVar1 + 2) = param_6;
  *(undefined4 *)((long)puVar1 + 0x24) = param_3;
  *(undefined4 *)((long)puVar1 + 0x2c) = 0;
                    /* try { // try from 010f0fe8 to 011f0ff3 has its CatchHandler @ 010f102c */
  puVar1[6] = *(undefined8 *)(lVar2 + 0x90);
  *(undefined8 **)(lVar2 + 0x90) = puVar1;
                    /* try { // try from 010f0ff4 to 011f1057 has its CatchHandler @ 010f0e6c */
  return;
}

