
void FUN_009fb3f4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *__dest;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[4];
  uVar1 = param_2[5];
  if (uVar2 < uVar1) {
    __dest = (void *)param_2[3];
  }
  else {
    puVar3 = (undefined8 *)0x0;
    if ((undefined8 *)param_2[3] != param_2 + 6) {
      puVar3 = (undefined8 *)param_2[3];
    }
    __dest = realloc(puVar3,uVar1 * 0x30);
    if (__dest == (void *)0x0) {
      luaL_error(param_1,"out of memory");
      return;
    }
    if (puVar3 == (undefined8 *)0x0) {
      memcpy(__dest,(void *)param_2[3],param_2[4] * 0x18);
    }
    uVar2 = param_2[4];
    param_2[3] = __dest;
    param_2[5] = uVar1 * 2;
  }
  uVar5 = param_2[1];
  uVar4 = *param_2;
  puVar3 = (undefined8 *)((long)__dest + uVar2 * 0x18);
  param_2[4] = uVar2 + 1;
  puVar3[2] = param_2[2];
  puVar3[1] = uVar5;
  *puVar3 = uVar4;
  uVar5 = param_3[1];
  uVar4 = *param_3;
  param_2[2] = param_3[2];
  param_2[1] = uVar5;
  *param_2 = uVar4;
  return;
}

