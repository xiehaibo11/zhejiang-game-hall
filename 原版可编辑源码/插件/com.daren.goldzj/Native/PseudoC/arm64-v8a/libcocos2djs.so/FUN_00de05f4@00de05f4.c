
ulong FUN_00de05f4(ulong param_1,FILE *param_2,undefined8 param_3)

{
  uint uVar1;
  char *__ptr;
  ulong uVar2;
  size_t __size;
  uint *puVar3;
  
  puVar3 = *(uint **)(param_1 + 0x350);
  uVar2 = param_1;
  if ((*(byte *)(param_1 + 0x48) >> 2 & 1) == 0) goto LAB_00de06a0;
  fwrite("  Predictor: ",0xd,1,param_2);
  uVar1 = *puVar3;
  if (uVar1 == 3) {
    __ptr = "floating point predictor ";
    __size = 0x19;
LAB_00de067c:
    fwrite(__ptr,__size,1,param_2);
  }
  else {
    if (uVar1 == 2) {
      __ptr = "horizontal differencing ";
      __size = 0x18;
      goto LAB_00de067c;
    }
    if (uVar1 == 1) {
      __ptr = "none ";
      __size = 5;
      goto LAB_00de067c;
    }
  }
  uVar1 = fprintf(param_2,"%u (0x%x)\n",(ulong)*puVar3,(ulong)*puVar3);
  uVar2 = (ulong)uVar1;
LAB_00de06a0:
  if (*(code **)(puVar3 + 0x1a) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00de06c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(puVar3 + 0x1a))(param_1,param_2,param_3);
    return uVar2;
  }
  return uVar2;
}

