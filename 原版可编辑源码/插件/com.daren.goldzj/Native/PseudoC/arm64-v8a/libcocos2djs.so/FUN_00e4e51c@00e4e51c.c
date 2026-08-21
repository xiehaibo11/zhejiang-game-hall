
int FUN_00e4e51c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  uint local_44;
  
  if (*(ulong *)(param_2 + 0x168) != 0) {
    plVar7 = *(long **)(param_2 + 0x170);
    uVar8 = 0;
    do {
      if (*plVar7 == param_3) {
        if (((ulong)plVar7[3] < *(ulong *)(param_1 + 0x10)) ||
           (iVar3 = FUN_00e1bc6c(param_1,plVar7[3] - *(ulong *)(param_1 + 0x10)), iVar3 != 0)) {
          return 0x53;
        }
        local_44 = 0;
        uVar4 = FUN_00e1dcb4(param_1,&local_44);
        if (local_44 != 0) {
          return local_44;
        }
        if ((uVar4 & 0xffffff00 | 0x100) != 0x100) {
          return 0;
        }
        if ((uVar4 >> 2 & 1) == 0) {
          puVar5 = &DAT_01977768;
        }
        else {
          puVar5 = &DAT_01977734;
        }
        local_44 = FUN_00e1dd74(param_1,puVar5,param_2 + 0x178);
        if (local_44 != 0) {
          return local_44;
        }
        lVar6 = *(long *)(param_2 + 0x180);
        lVar2 = -lVar6;
        if (-1 < lVar6) {
          lVar2 = lVar6;
        }
        if (0x7fff < lVar2) {
          uVar1 = 0x7fff;
          if (lVar6 < 0) {
            uVar1 = 0xffffffffffff8001;
          }
          *(undefined8 *)(param_2 + 0x180) = uVar1;
        }
        lVar6 = *(long *)(param_2 + 0x188);
        lVar2 = -lVar6;
        if (-1 < lVar6) {
          lVar2 = lVar6;
        }
        if (0x7fff < lVar2) {
          uVar1 = 0x7fff;
          if (lVar6 < 0) {
            uVar1 = 0xffffffffffff8001;
          }
          *(undefined8 *)(param_2 + 0x188) = uVar1;
        }
        puVar5 = &DAT_019777bc;
        if ((uVar4 & 4) != 0) {
          puVar5 = &DAT_0197779c;
        }
        local_44 = FUN_00e1dd74(param_1,puVar5,(undefined8 *)(param_2 + 0x198));
        if (local_44 != 0) {
          return local_44;
        }
        local_44 = FUN_00e1dd74(param_1,puVar5,(undefined8 *)(param_2 + 0x1b0));
        if (local_44 != 0) {
          return local_44;
        }
        if ((uVar4 & 0xffffff00) == 0x100) {
          local_44 = FUN_00e1dd74(param_1,puVar5);
          if (local_44 != 0) {
            return local_44;
          }
          iVar3 = FUN_00e1dd74(param_1,puVar5,param_2 + 0x1e0);
          return iVar3;
        }
        *(undefined8 *)(param_2 + 0x1d8) = *(undefined8 *)(param_2 + 0x1a8);
        *(undefined8 *)(param_2 + 0x1d0) = *(undefined8 *)(param_2 + 0x1a0);
        *(undefined8 *)(param_2 + 0x1c8) = *(undefined8 *)(param_2 + 0x198);
        *(undefined8 *)(param_2 + 0x1f0) = *(undefined8 *)(param_2 + 0x1c0);
        *(undefined8 *)(param_2 + 0x1e8) = *(undefined8 *)(param_2 + 0x1b8);
        *(undefined8 *)(param_2 + 0x1e0) = *(undefined8 *)(param_2 + 0x1b0);
        return 0;
      }
      uVar8 = uVar8 + 1;
      plVar7 = plVar7 + 4;
    } while (uVar8 < *(ulong *)(param_2 + 0x168));
  }
  return 3;
}

