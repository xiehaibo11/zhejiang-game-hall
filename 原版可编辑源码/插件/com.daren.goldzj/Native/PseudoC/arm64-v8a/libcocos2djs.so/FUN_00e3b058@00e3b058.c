
void FUN_00e3b058(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  int local_2bc;
  undefined1 local_2b8 [8];
  long alStack_2b0 [59];
  int local_d4;
  long local_d0 [12];
  int local_6c [3];
  
  local_6c[0] = 0;
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  (*(code *)param_2[0xf])(param_2,local_d0,4,&local_d4);
  if (local_d4 < 0) {
    local_6c[0] = 0xa2;
  }
  else if ((local_d4 == 0) || (4 < local_d4)) {
LAB_00e3b210:
    local_6c[0] = 3;
  }
  else {
    lVar5 = *param_2;
    lVar8 = param_2[2];
    local_6c[0] = FUN_00e3b4e8(param_1,0);
    if (local_6c[0] == 0) {
      if (local_d4 < 1) {
        local_6c[0] = 0;
      }
      else {
        lVar4 = *(long *)(param_1 + 0x350);
        lVar9 = 0;
        do {
          lVar1 = local_d0[lVar9 * 3 + 1];
          *param_2 = local_d0[lVar9 * 3];
          param_2[2] = lVar1;
          (*(code *)param_2[0xf])(param_2,local_2b8,0x14,&local_2bc);
          if ((0x13 < local_2bc - 1U) ||
             (plVar11 = (long *)(lVar4 + lVar9 * 0x18 + 0xb0), *plVar11 != 0)) goto LAB_00e3b210;
          lVar1 = FUN_00e13bcc(uVar3,8,0,(long)local_2bc << 1,0,local_6c);
          *plVar11 = lVar1;
          if (local_6c[0] != 0) goto LAB_00e3b218;
          lVar6 = lVar4 + lVar9 * 0x18;
          plVar7 = (long *)(lVar6 + 0xb8);
          *plVar7 = lVar1 + (long)local_2bc * 8;
          *(char *)(lVar6 + 0xa8) = (char)local_2bc;
          if (0 < local_2bc) {
            lVar1 = 0;
            plVar10 = alStack_2b0;
            do {
              *param_2 = plVar10[-1] + 1;
              param_2[2] = *plVar10 + -1;
              uVar2 = (*(code *)param_2[9])(param_2);
              lVar6 = lVar1 * 8;
              *(undefined8 *)(*plVar11 + lVar6) = uVar2;
              uVar2 = (*(code *)param_2[10])(param_2,0);
              lVar1 = lVar1 + 1;
              *(undefined8 *)(*plVar7 + lVar6) = uVar2;
              plVar10 = plVar10 + 3;
            } while (lVar1 < local_2bc);
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < local_d4);
      }
      *param_2 = lVar5;
      param_2[2] = lVar8;
    }
  }
LAB_00e3b218:
  *(int *)(param_2 + 3) = local_6c[0];
  return;
}

