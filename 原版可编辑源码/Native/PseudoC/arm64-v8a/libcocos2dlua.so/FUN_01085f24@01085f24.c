
void FUN_01085f24(long *param_1,long param_2,ulong param_3)

{
  long *__src;
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  undefined4 local_70;
  
  local_70 = 1;
  lStack_a8 = param_1[0x92c];
  local_b0 = param_1[0x92b];
  __src = param_1 + 2;
  if ((char)param_1[5] == '\0') {
    uVar7 = param_1[0x92d];
    uVar8 = param_1[0x92e];
    if ((char)param_1[0x91d] == '\0') {
      bVar1 = true;
    }
    else {
      *(undefined1 *)((long)param_1 + 0x48e9) = 1;
      FUN_01084968(param_1,uVar7 & 0xffffffff,uVar8 & 0xffffffff);
      if ((char)param_1[0x92f] != '\0') {
        FUN_01086160(param_1,__src,param_1 + 0x925,param_1[0x927],param_1[0x928],1);
      }
      *(undefined1 *)((long)param_1 + 0x48eb) = 1;
      *(char *)(param_1 + 0x91d) = '\0';
      *(undefined1 *)((long)param_1 + 0x48e9) = 0;
      *(char *)(param_1 + 0x92f) = '\0';
      bVar1 = (char)param_1[5] == '\0';
    }
    lVar5 = (long)(int)uVar7;
    lVar6 = (long)(int)uVar8;
    param_1[0x92d] = lVar5;
    param_1[0x929] = lVar5;
    param_1[0x92e] = lVar6;
    param_1[0x92a] = lVar6;
    *(undefined1 *)((long)param_1 + 0x48eb) = 1;
    if ((bVar1) || (*(char *)(param_1[0x920] + 9) != '\0')) {
      FUN_010850c0(__src,param_1[0x91e],param_1[0x91f],param_1[0x920],(int)param_1[0x921],0);
    }
    memcpy(param_1 + 0x307,__src,0x1828);
  }
  lVar5 = FT_MulFix((long)(int)param_1[0x919],(long)(int)param_2);
  lVar6 = FT_MulFix((long)*(int *)((long)param_1 + 0x48cc),(long)(int)param_3);
  iVar2 = FUN_010868b0(__src,param_3 & 0xffffffff);
  lVar3 = FT_MulFix((long)*(int *)(*param_1 + 0x40),lVar6 + lVar5);
  lVar4 = FT_MulFix((long)*(int *)(*param_1 + 0x48),(long)iVar2);
  local_a0 = lVar4 + lVar3 + param_1[0x91b];
  lVar5 = FT_MulFix((long)*(int *)(*param_1 + 0x44),lVar6 + lVar5);
  lVar6 = FT_MulFix((long)*(int *)(*param_1 + 0x4c),(long)iVar2);
  lStack_98 = lVar6 + lVar5 + param_1[0x91c];
  (**(code **)param_1[1])((undefined8 *)param_1[1],&local_b0);
  param_1[0x92c] = lStack_98;
  param_1[0x92b] = local_a0;
  param_1[0x925] = param_2;
  param_1[0x926] = param_3;
  return;
}

