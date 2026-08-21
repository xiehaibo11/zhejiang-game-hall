
void FUN_00135f08(undefined8 *param_1,ulong *param_2,long param_3,long *param_4,long *param_5,
                 undefined4 *param_6)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *param_4;
  lVar5 = *param_5;
  uVar6 = *param_2;
  *param_6 = 0;
  uVar3 = lVar5 - lVar7;
  if ((0x27 < uVar3) && (*(long *)(uVar6 + 8) + param_3 * 0x1000 + 0x28U <= uVar3)) {
    iVar1 = (**(code **)(uVar6 + 0x10))(uVar6,0,lVar5 - *(long *)(uVar6 + 8),lVar5);
    if (iVar1 == 0) {
      *param_6 = 1;
    }
    else {
      lVar4 = *(long *)(uVar6 + 8);
      plVar2 = (long *)(lVar7 + 7U & 0xfffffffffffffff8);
      *plVar2 = lVar5 - lVar4;
      plVar2[1] = lVar4;
      lVar7 = *(long *)(uVar6 + 8);
      plVar2[2] = (long)FUN_00135798;
      *param_1 = 0;
      *param_2 = (ulong)plVar2;
      *param_4 = (long)(plVar2 + 4);
      *param_5 = lVar5 - lVar7;
    }
  }
  return;
}

