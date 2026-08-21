
undefined8
deflateInit2_(long param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
             char *param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  uint uVar8;
  long lVar9;
  undefined4 uVar10;
  
  if (param_7 == (char *)0x0) {
    uVar5 = 0xfffffffa;
  }
  else {
    uVar5 = 0xfffffffa;
    if ((param_8 == 0x70) && (*param_7 == '1')) {
      if (param_1 == 0) {
        uVar5 = 0xfffffffe;
      }
      else {
        pcVar7 = *(code **)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x30) = 0;
        if (pcVar7 == (code *)0x0) {
          pcVar7 = FUN_0117dcf4;
          *(code **)(param_1 + 0x40) = FUN_0117dcf4;
          *(undefined8 *)(param_1 + 0x50) = 0;
          lVar9 = *(long *)(param_1 + 0x48);
        }
        else {
          lVar9 = *(long *)(param_1 + 0x48);
        }
        if (lVar9 == 0) {
          *(code **)(param_1 + 0x48) = FUN_0117dcfc;
        }
        uVar1 = 6;
        if (param_2 != 0xffffffff) {
          uVar1 = param_2;
        }
        if ((int)param_4 < 0) {
          uVar10 = 0;
          uVar8 = -param_4;
        }
        else {
          uVar8 = param_4 - 0x10;
          if ((int)param_4 < 0x10) {
            uVar8 = param_4;
          }
          uVar10 = 1;
          if (0xf < (int)param_4) {
            uVar10 = 2;
          }
        }
        uVar5 = 0xfffffffe;
        if ((((param_6 < 5) && (uVar1 < 10)) && (param_3 == 8)) &&
           ((param_5 - 1U < 9 && ((uVar8 & 0xfffffff8) == 8)))) {
          uVar2 = 9;
          if (uVar8 != 8) {
            uVar2 = uVar8;
          }
          plVar6 = (long *)(*pcVar7)(*(undefined8 *)(param_1 + 0x50),1,0x1730);
          if (plVar6 != (long *)0x0) {
            iVar3 = 1 << (ulong)(uVar2 & 0x1f);
            *(long **)(param_1 + 0x38) = plVar6;
            *(int *)((long)plVar6 + 0x4c) = iVar3 + -1;
            iVar4 = 1 << (ulong)(param_5 + 7U & 0x1f);
            *(int *)((long)plVar6 + 0x74) = iVar4;
            *(uint *)(plVar6 + 0xf) = param_5 + 7U;
            *(undefined4 *)((long)plVar6 + 0x2c) = uVar10;
            *(int *)((long)plVar6 + 0x44) = iVar3;
            *(uint *)(plVar6 + 9) = uVar2;
            *plVar6 = param_1;
            plVar6[6] = 0;
            *(int *)((long)plVar6 + 0x7c) = iVar4 + -1;
            *(uint *)(plVar6 + 0x10) = (param_5 + 9U) / 3;
            lVar9 = (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x50),iVar3,2);
            plVar6[10] = lVar9;
            lVar9 = (**(code **)(param_1 + 0x40))
                              (*(undefined8 *)(param_1 + 0x50),*(undefined4 *)((long)plVar6 + 0x44),
                               2);
            plVar6[0xc] = lVar9;
            lVar9 = (**(code **)(param_1 + 0x40))
                              (*(undefined8 *)(param_1 + 0x50),*(undefined4 *)((long)plVar6 + 0x74),
                               2);
            iVar3 = 1 << (ulong)(param_5 + 6U & 0x1f);
            plVar6[0xd] = lVar9;
            plVar6[0x2e5] = 0;
            *(int *)(plVar6 + 0x2df) = iVar3;
            lVar9 = (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x50),iVar3,4);
            uVar8 = *(uint *)(plVar6 + 0x2df);
            plVar6[2] = lVar9;
            plVar6[3] = (ulong)uVar8 << 2;
            if (((plVar6[10] != 0) && (plVar6[0xc] != 0)) && ((plVar6[0xd] != 0 && (lVar9 != 0)))) {
              *(uint *)((long)plVar6 + 0xb4) = uVar1;
              *(uint *)(plVar6 + 0x17) = param_6;
              plVar6[0x2e0] = lVar9 + (ulong)(uVar8 & 0xfffffffe);
              plVar6[0x2de] = lVar9 + (ulong)uVar8 * 3;
              *(undefined1 *)((long)plVar6 + 0x3c) = 8;
              uVar5 = deflateReset(param_1);
              return uVar5;
            }
            *(undefined4 *)(plVar6 + 1) = 0x29a;
            lVar9 = *(long *)(param_1 + 0x38);
            *(undefined8 *)(param_1 + 0x30) = 0x1472ce4;
            if (lVar9 != 0) {
              iVar3 = *(int *)(lVar9 + 8);
              if ((((iVar3 - 0x45U < 0x2d) &&
                   ((1L << ((ulong)(iVar3 - 0x45U) & 0x3f) & 0x100400400011U) != 0)) ||
                  (iVar3 == 0x29a)) || (iVar3 == 0x2a)) {
                if (*(long *)(lVar9 + 0x10) != 0) {
                  (**(code **)(param_1 + 0x48))
                            (*(undefined8 *)(param_1 + 0x50),*(long *)(lVar9 + 0x10));
                  lVar9 = *(long *)(param_1 + 0x38);
                }
                if (*(long *)(lVar9 + 0x68) != 0) {
                  (**(code **)(param_1 + 0x48))
                            (*(undefined8 *)(param_1 + 0x50),*(long *)(lVar9 + 0x68));
                  lVar9 = *(long *)(param_1 + 0x38);
                }
                if (*(long *)(lVar9 + 0x60) != 0) {
                  (**(code **)(param_1 + 0x48))
                            (*(undefined8 *)(param_1 + 0x50),*(long *)(lVar9 + 0x60));
                  lVar9 = *(long *)(param_1 + 0x38);
                }
                if (*(long *)(lVar9 + 0x50) != 0) {
                  (**(code **)(param_1 + 0x48))
                            (*(undefined8 *)(param_1 + 0x50),*(long *)(lVar9 + 0x50));
                  lVar9 = *(long *)(param_1 + 0x38);
                }
                (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),lVar9);
                *(undefined8 *)(param_1 + 0x38) = 0;
              }
            }
          }
          uVar5 = 0xfffffffc;
        }
      }
    }
  }
  return uVar5;
}

