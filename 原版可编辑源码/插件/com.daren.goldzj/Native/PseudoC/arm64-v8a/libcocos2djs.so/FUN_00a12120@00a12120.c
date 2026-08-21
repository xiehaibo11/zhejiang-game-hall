
void FUN_00a12120(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  int local_68;
  int local_64;
  
  local_70 = 0xffffffff;
  local_80 = 0xffffffffffffffff;
  uStack_78 = 0xffffffffffffffff;
  uVar5 = FUN_00a128fc(param_2,&local_80);
  lVar2 = param_1 + 0x88;
  uVar7 = 0;
  do {
    uVar8 = 1 << (ulong)((uint)uVar7 & 0x1f);
    uVar4 = 1 << (ulong)((uint)uVar7 + 0x10 & 0x1f);
    if (((uVar4 | uVar8) & uVar5) == 0) {
      uVar13 = uVar7 & 0xffffffff;
      break;
    }
    iVar12 = *(int *)((long)&local_80 + uVar7 * 4);
    local_64 = iVar12;
    if (iVar12 == -1) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)FUN_00a34664(lVar2,&local_64,4);
    }
    uVar8 = (uint)((uVar8 & uVar5) != 0);
    if ((uVar4 & uVar5) != 0) {
      uVar8 = uVar8 | 2;
    }
    if (plVar6 == (long *)0x0) {
      local_68 = iVar12;
      local_64 = iVar12;
      if ((iVar12 == -1) ||
         (plVar6 = (long *)FUN_00a34664(lVar2,&local_64,4), plVar6 == (long *)0x0)) {
        plVar6 = (long *)(*(code *)PTR_calloc_01d1b760)(1,0x18);
        if (plVar6 == (long *)0x0) {
          return;
        }
        *plVar6 = param_2;
        *(int *)((long)plVar6 + 0xc) = local_68;
        lVar14 = FUN_00a3447c(lVar2,&local_68,4,plVar6);
        if (lVar14 == 0) {
          (*(code *)PTR_free_01d1b748)(plVar6);
          return;
        }
      }
LAB_00a12264:
      if (*(code **)(param_1 + 0x30) != (code *)0x0) {
        (**(code **)(param_1 + 0x30))
                  (param_2,iVar12,uVar8,*(undefined8 *)(param_1 + 0x38),plVar6[2]);
      }
      *(uint *)(plVar6 + 1) = uVar8;
    }
    else if (*(uint *)(plVar6 + 1) != uVar8) goto LAB_00a12264;
    uVar13 = uVar7 + 1;
    bVar1 = (long)uVar7 < 4;
    uVar7 = uVar13;
  } while (bVar1);
  iVar12 = (int)uVar13;
  if (0 < *(int *)(param_2 + 0x4c)) {
    if (iVar12 < 1) {
      lVar14 = 0xe;
      do {
        iVar3 = *(int *)(param_2 + lVar14 * 4);
        local_64 = iVar3;
        if ((iVar3 != -1) &&
           (plVar6 = (long *)FUN_00a34664(lVar2,&local_64,4), plVar6 != (long *)0x0)) {
          lVar10 = *(long *)(param_2 + 0x10);
          if (lVar10 == 0) {
LAB_00a12500:
            if (*(code **)(param_1 + 0x30) != (code *)0x0) {
              (**(code **)(param_1 + 0x30))
                        (param_2,iVar3,4,*(undefined8 *)(param_1 + 0x38),plVar6[2]);
            }
            local_64 = iVar3;
            FUN_00a345c4(lVar2,&local_64,4);
          }
          else {
            if ((*(long *)(lVar10 + 0x480) == 0) ||
               (*(ulong *)(*(long *)(lVar10 + 0x480) + 0x18) < 2)) {
              bVar1 = true;
              lVar11 = *(long *)(lVar10 + 0x478);
            }
            else if (*plVar6 == param_2) {
              uVar7 = FUN_00a177c8(param_2,lVar10);
              plVar9 = (long *)**(undefined8 **)(lVar10 + 0x480);
              if ((uVar7 & 1) != 0) {
                plVar9 = (long *)plVar9[2];
              }
              bVar1 = false;
              *plVar6 = *plVar9;
              lVar11 = *(long *)(lVar10 + 0x478);
            }
            else {
              bVar1 = false;
              lVar11 = *(long *)(lVar10 + 0x478);
            }
            if ((lVar11 == 0) || (*(ulong *)(lVar11 + 0x18) < 2)) {
              if (bVar1) goto LAB_00a12500;
            }
            else if (*plVar6 == param_2) {
              uVar7 = FUN_00a177f8(param_2,lVar10);
              plVar9 = (long *)**(undefined8 **)(lVar10 + 0x478);
              if ((uVar7 & 1) != 0) {
                plVar9 = (long *)plVar9[2];
              }
              *plVar6 = *plVar9;
            }
          }
        }
        lVar10 = lVar14 + -0xd;
        lVar14 = lVar14 + 1;
      } while (lVar10 < *(int *)(param_2 + 0x4c));
    }
    else {
      lVar14 = 0;
      do {
        iVar3 = *(int *)(param_2 + lVar14 * 4 + 0x38);
        lVar10 = 0;
        do {
          if (iVar3 == *(int *)((long)&local_80 + lVar10 * 4)) {
            local_64 = -1;
            goto LAB_00a12408;
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < iVar12);
        local_64 = iVar3;
        if ((iVar3 != -1) &&
           (plVar6 = (long *)FUN_00a34664(lVar2,&local_64,4), plVar6 != (long *)0x0)) {
          lVar10 = *(long *)(param_2 + 0x10);
          if (lVar10 == 0) {
LAB_00a12348:
            if (*(code **)(param_1 + 0x30) != (code *)0x0) {
              (**(code **)(param_1 + 0x30))
                        (param_2,iVar3,4,*(undefined8 *)(param_1 + 0x38),plVar6[2]);
            }
            local_64 = iVar3;
            FUN_00a345c4(lVar2,&local_64,4);
          }
          else {
            if ((*(long *)(lVar10 + 0x480) == 0) ||
               (*(ulong *)(*(long *)(lVar10 + 0x480) + 0x18) < 2)) {
              bVar1 = true;
              lVar11 = *(long *)(lVar10 + 0x478);
            }
            else if (*plVar6 == param_2) {
              uVar7 = FUN_00a177c8(param_2,lVar10);
              plVar9 = (long *)**(undefined8 **)(lVar10 + 0x480);
              if ((uVar7 & 1) != 0) {
                plVar9 = (long *)plVar9[2];
              }
              bVar1 = false;
              *plVar6 = *plVar9;
              lVar11 = *(long *)(lVar10 + 0x478);
            }
            else {
              bVar1 = false;
              lVar11 = *(long *)(lVar10 + 0x478);
            }
            if ((lVar11 == 0) || (*(ulong *)(lVar11 + 0x18) < 2)) {
              if (bVar1) goto LAB_00a12348;
            }
            else if (*plVar6 == param_2) {
              uVar7 = FUN_00a177f8(param_2,lVar10);
              plVar9 = (long *)**(undefined8 **)(lVar10 + 0x478);
              if ((uVar7 & 1) != 0) {
                plVar9 = (long *)plVar9[2];
              }
              *plVar6 = *plVar9;
            }
          }
        }
LAB_00a12408:
        lVar14 = lVar14 + 1;
      } while (lVar14 < *(int *)(param_2 + 0x4c));
    }
  }
  memcpy((void *)(param_2 + 0x38),&local_80,
         -(uVar13 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar13 & 0xffffffff) << 2);
  *(int *)(param_2 + 0x4c) = iVar12;
  return;
}

