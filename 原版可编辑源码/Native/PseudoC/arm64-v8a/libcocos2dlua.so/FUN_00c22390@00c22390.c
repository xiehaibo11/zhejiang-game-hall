
void FUN_00c22390(long *param_1,uint *param_2,ushort param_3,long param_4,long param_5,uint *param_6
                 ,undefined4 param_7)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar7 = (ulong)param_3;
  while( true ) {
    do {
      while( true ) {
        if (param_3 == 0) {
          return;
        }
        lVar8 = *param_1;
        lVar2 = uVar7 * 0x18;
        lVar1 = lVar8 + lVar2;
        uVar6 = *(uint *)(lVar8 + lVar2);
        param_3 = *(ushort *)(lVar1 + 8);
        uVar7 = (ulong)param_3;
        if ((uVar6 >> 0x1c) - 9 < 2) break;
        if ((uVar6 & 0xf0ff0000) == 0x80030000) {
          do {
            lVar4 = ((ulong)uVar6 & 0xffff) * 0x18;
            lVar2 = lVar8 + lVar4;
            uVar6 = *(uint *)(lVar8 + lVar4);
          } while (uVar6 >> 0x1c == 8);
          FUN_00c22390(param_1,lVar2,*(undefined2 *)(lVar2 + 8),
                       param_4 + (ulong)*(uint *)(lVar1 + 4),param_5,param_6,param_7);
        }
      }
      lVar4 = *(long *)(lVar1 + 0x10);
      uVar6 = *param_6;
    } while (lVar4 == 0);
    if (-1 < (int)uVar6) break;
LAB_00c224f8:
    plVar3 = (long *)FUN_00c1bc28(param_5,lVar4);
    if ((plVar3 != (long *)0x0) && (*plVar3 != -1)) {
LAB_00c22514:
      uVar6 = *(uint *)(lVar8 + lVar2);
      if (uVar6 >> 0x1c == 9) {
        do {
          lVar2 = (ulong)(ushort)uVar6 * 0x18;
          uVar6 = *(uint *)(*param_1 + lVar2);
        } while (uVar6 >> 0x1c == 8);
        FUN_00c22594(param_1,*param_1 + lVar2,param_4 + (ulong)*(uint *)(lVar1 + 4),plVar3,param_7);
      }
      else {
        FUN_00c22274(param_1,lVar1,param_4 + (ulong)*(uint *)(lVar1 + 4),plVar3);
      }
      if ((*param_2 >> 0x17 & 1) != 0) {
        return;
      }
    }
  }
  uVar5 = uVar6;
  if (*(uint *)(param_5 + 0x30) <= uVar6) goto LAB_00c224c4;
  do {
    plVar3 = (long *)(*(long *)(param_5 + 0x10) + (long)(int)uVar5 * 8);
    while( true ) {
      if ((plVar3 != (long *)0x0) && (*plVar3 != -1)) {
        *param_6 = uVar5 + 1;
        goto LAB_00c22514;
      }
      if (uVar5 != 0) {
        if (uVar6 != 0) {
          return;
        }
        lVar4 = *(long *)(lVar1 + 0x10);
        *param_6 = 0xffffffff;
        goto LAB_00c224f8;
      }
      uVar5 = 1;
      if (1 < *(uint *)(param_5 + 0x30)) break;
LAB_00c224c4:
      plVar3 = (long *)FUN_00c1bbc0(param_5,uVar5);
    }
  } while( true );
}

