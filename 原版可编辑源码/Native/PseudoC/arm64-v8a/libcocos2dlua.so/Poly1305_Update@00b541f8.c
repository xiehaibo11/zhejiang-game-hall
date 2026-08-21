
void Poly1305_Update(long param_1,void *param_2,ulong param_3)

{
  void *__dest;
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 0xe0);
  pcVar2 = *(code **)(param_1 + 0xe8);
  if (lVar1 != 0) {
    uVar3 = 0x10 - lVar1;
    __dest = (void *)(param_1 + lVar1 + 0xd0);
    if (param_3 < uVar3) {
      memcpy(__dest,param_2,param_3);
      uVar3 = lVar1 + param_3;
      goto LAB_00b542b4;
    }
    memcpy(__dest,param_2,uVar3);
    (*pcVar2)(param_1,param_1 + 0xd0,0x10,1);
    param_2 = (void *)((long)param_2 + uVar3);
    param_3 = param_3 - uVar3;
  }
  uVar3 = param_3 & 0xf;
  param_3 = param_3 - uVar3;
  if (0xf < param_3) {
    (*pcVar2)(param_1,param_2,param_3,1);
    param_2 = (void *)((long)param_2 + param_3);
  }
  if (uVar3 != 0) {
    memcpy((void *)(param_1 + 0xd0),param_2,uVar3);
  }
LAB_00b542b4:
  *(ulong *)(param_1 + 0xe0) = uVar3;
  return;
}

