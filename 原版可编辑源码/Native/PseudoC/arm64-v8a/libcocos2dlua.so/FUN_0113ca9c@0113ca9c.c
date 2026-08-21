
ulong FUN_0113ca9c(ulong param_1,FILE *param_2,undefined8 param_3)

{
  uint uVar1;
  char *__ptr;
  ulong uVar2;
  size_t __size;
  uint *puVar3;
  
  puVar3 = *(uint **)(param_1 + 0x350);
  uVar2 = param_1;
  if ((*(byte *)(param_1 + 0x48) >> 2 & 1) == 0) goto LAB_0113cb48;
  fwrite("  Predictor: ",0xd,1,param_2);
  uVar1 = *puVar3;
  if (uVar1 == 3) {
    __ptr = "floating point predictor ";
    __size = 0x19;
LAB_0113cb24:
    fwrite(__ptr,__size,1,param_2);
  }
  else {
    if (uVar1 == 2) {
      __ptr = "horizontal differencing ";
      __size = 0x18;
      goto LAB_0113cb24;
    }
    if (uVar1 == 1) {
                    /* catch() { ... } // from try @ 0113ca88 with catch @ 0113cafc */
      __ptr = "none ";
      __size = 5;
      goto LAB_0113cb24;
    }
  }
  uVar1 = fprintf(param_2,"%u (0x%x)\n",(ulong)*puVar3,(ulong)*puVar3);
  uVar2 = (ulong)uVar1;
LAB_0113cb48:
  if (*(code **)(puVar3 + 0x1a) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0113cb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(puVar3 + 0x1a))(param_1,param_2,param_3);
    return uVar2;
  }
  return uVar2;
}

