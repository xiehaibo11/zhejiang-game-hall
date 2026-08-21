
undefined8
FUN_0012e2b4(long param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,char *param_7
            ,int param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  undefined4 uVar10;
  
  if (param_7 == (char *)0x0) {
    uVar6 = 0xfffffffa;
  }
  else {
    uVar6 = 0xfffffffa;
    if ((*param_7 == '1') && (param_8 == 0x70)) {
      if (param_1 == 0) {
        uVar6 = 0xfffffffe;
      }
      else {
        pcVar9 = *(code **)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x30) = 0;
        if (pcVar9 == (code *)0x0) {
          pcVar9 = FUN_001327f0;
          *(undefined8 *)(param_1 + 0x50) = 0;
          *(code **)(param_1 + 0x40) = FUN_001327f0;
        }
        if (*(long *)(param_1 + 0x48) == 0) {
          *(code **)(param_1 + 0x48) = FUN_001327f8;
        }
        iVar1 = 6;
        if (param_2 != -1) {
          iVar1 = param_2;
        }
        if ((int)param_4 < 0) {
          uVar10 = 0;
          param_4 = -param_4;
          bVar5 = 1;
        }
        else if ((int)param_4 < 0x10) {
          bVar5 = 0;
          uVar10 = 1;
        }
        else {
          uVar10 = 2;
          bVar5 = 1;
          param_4 = param_4 - 0x10;
        }
        uVar6 = 0xfffffffe;
        if (((((param_5 - 1U < 9) && (param_3 == 8)) && (7 < (int)param_4)) &&
            ((((int)param_4 < 0x10 && (-1 < iVar1)) &&
             ((iVar1 < 10 && ((-1 < param_6 && (param_6 < 5)))))))) &&
           (!(bool)(param_4 == 8 & bVar5))) {
          uVar2 = 9;
          if (param_4 != 8) {
            uVar2 = param_4;
          }
          plVar7 = (long *)(*pcVar9)(*(undefined8 *)(param_1 + 0x50),1,0x1740);
          if (plVar7 != (long *)0x0) {
            iVar3 = 1 << (ulong)(uVar2 & 0x1f);
            iVar4 = 1 << (ulong)(param_5 + 7U & 0x1f);
            *(undefined4 *)(plVar7 + 1) = 0x2a;
            *(int *)((long)plVar7 + 0x84) = iVar4;
            *(uint *)(plVar7 + 0x11) = param_5 + 7U;
            *(long **)(param_1 + 0x38) = plVar7;
            *plVar7 = param_1;
            *(undefined4 *)(plVar7 + 6) = uVar10;
            *(int *)(plVar7 + 0xb) = iVar3 + -1;
            pcVar9 = *(code **)(param_1 + 0x40);
            *(int *)((long)plVar7 + 0x8c) = iVar4 + -1;
            *(uint *)(plVar7 + 0x12) = (param_5 + 9U & 0xff) / 3;
            uVar6 = *(undefined8 *)(param_1 + 0x50);
            plVar7[7] = 0;
            *(int *)(plVar7 + 10) = iVar3;
            *(uint *)((long)plVar7 + 0x54) = uVar2;
            lVar8 = (*pcVar9)(uVar6,iVar3,2);
            uVar6 = *(undefined8 *)(param_1 + 0x50);
            pcVar9 = *(code **)(param_1 + 0x40);
            plVar7[0xc] = lVar8;
            lVar8 = (*pcVar9)(uVar6,(int)plVar7[10],2);
            uVar6 = *(undefined8 *)(param_1 + 0x50);
            pcVar9 = *(code **)(param_1 + 0x40);
            plVar7[0xe] = lVar8;
            lVar8 = (*pcVar9)(uVar6,*(undefined4 *)((long)plVar7 + 0x84),2);
            plVar7[0xf] = lVar8;
            pcVar9 = *(code **)(param_1 + 0x40);
            uVar6 = *(undefined8 *)(param_1 + 0x50);
            iVar3 = 1 << (ulong)(param_5 + 6U & 0x1f);
            plVar7[0x2e7] = 0;
            *(int *)(plVar7 + 0x2e1) = iVar3;
            lVar8 = (*pcVar9)(uVar6,iVar3,4);
            uVar2 = *(uint *)(plVar7 + 0x2e1);
            plVar7[2] = lVar8;
            plVar7[3] = (ulong)uVar2 << 2;
            if ((((plVar7[0xc] != 0) && (plVar7[0xe] != 0)) && (plVar7[0xf] != 0)) && (lVar8 != 0))
            {
              *(int *)((long)plVar7 + 0xc4) = iVar1;
              *(int *)(plVar7 + 0x19) = param_6;
              plVar7[0x2e2] = lVar8 + (ulong)(uVar2 & 0xfffffffe);
              plVar7[0x2e0] = lVar8 + (ulong)uVar2 * 3;
              *(undefined1 *)(plVar7 + 9) = 8;
              uVar6 = FUN_0012e5fc(param_1);
              return uVar6;
            }
            *(undefined4 *)(plVar7 + 1) = 0x29a;
            *(char **)(param_1 + 0x30) = "insufficient memory";
            FUN_0012e550(param_1);
          }
          uVar6 = 0xfffffffc;
        }
      }
    }
  }
  return uVar6;
}

