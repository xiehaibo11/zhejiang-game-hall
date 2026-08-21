
void FUN_00e8345c(long *param_1,long param_2,ulong param_3)

{
  long *__src;
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
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
    uVar10 = param_1[0x92d];
    uVar9 = param_1[0x92e];
    if ((char)param_1[0x91d] == '\0') {
      bVar1 = true;
    }
    else {
      *(undefined1 *)((long)param_1 + 0x48e9) = 1;
      FUN_00e81e48(param_1,uVar10 & 0xffffffff,uVar9 & 0xffffffff);
      if ((char)param_1[0x92f] != '\0') {
        FUN_00e8368c(param_1,__src,param_1 + 0x925,param_1[0x927],param_1[0x928],1);
      }
      *(undefined1 *)((long)param_1 + 0x48eb) = 1;
      *(undefined2 *)(param_1 + 0x91d) = 0;
      *(undefined1 *)(param_1 + 0x92f) = 0;
      bVar1 = (char)param_1[5] == '\0';
    }
    lVar7 = (long)(int)uVar10;
    lVar8 = (long)(int)uVar9;
    param_1[0x92d] = lVar7;
    param_1[0x929] = lVar7;
    param_1[0x92e] = lVar8;
    param_1[0x92a] = lVar8;
    *(undefined1 *)((long)param_1 + 0x48eb) = 1;
    if ((bVar1) || (*(char *)(param_1[0x920] + 9) != '\0')) {
      FUN_00e8259c(__src,param_1[0x91e],param_1[0x91f],param_1[0x920],(int)param_1[0x921],0);
    }
    memcpy(param_1 + 0x307,__src,0x1828);
  }
  iVar2 = FT_MulFix((long)(int)param_1[0x919],(long)(int)param_2);
  iVar3 = FT_MulFix((long)*(int *)((long)param_1 + 0x48cc),(long)(int)param_3);
  iVar4 = FUN_00e83f08(__src,param_3 & 0xffffffff);
  iVar5 = FT_MulFix((long)*(int *)(*param_1 + 0x44),(long)(iVar3 + iVar2));
  iVar6 = FT_MulFix((long)*(int *)(*param_1 + 0x4c),(long)iVar4);
  local_a0 = (long)(iVar6 + iVar5 + (int)param_1[0x91b]);
  iVar2 = FT_MulFix((long)*(int *)(*param_1 + 0x48),(long)(iVar3 + iVar2));
  iVar3 = FT_MulFix((long)*(int *)(*param_1 + 0x50),(long)iVar4);
  lStack_98 = (long)(iVar3 + iVar2 + (int)param_1[0x91c]);
  (**(code **)param_1[1])((undefined8 *)param_1[1],&local_b0);
  param_1[0x92c] = lStack_98;
  param_1[0x92b] = local_a0;
  param_1[0x925] = param_2;
  param_1[0x926] = param_3;
  return;
}

