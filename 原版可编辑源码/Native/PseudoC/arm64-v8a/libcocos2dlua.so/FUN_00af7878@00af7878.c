
undefined8 FUN_00af7878(char *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (param_2 == -1) {
    param_2 = -1;
    uVar6 = *(ulong *)(param_3 + 0x24);
  }
  else {
    if (*param_1 == '-') {
      uVar3 = 0;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
      uVar6 = *(ulong *)(param_3 + 0x24);
      goto joined_r0x00af78fc;
    }
    if (*param_1 == '+') {
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    }
    uVar6 = *(ulong *)(param_3 + 0x24);
  }
  uVar3 = 1;
joined_r0x00af78fc:
  if (uVar6 != 0) {
    uVar1 = *param_3;
    puVar5 = *(undefined8 **)(param_3 + 0x22);
    if (param_2 == -1) {
      uVar8 = 0;
      do {
        uVar7 = *(uint *)((long)puVar5 + 0xc);
        if (((uVar1 & 0xc & uVar7) != 0) && (iVar2 = strcmp((char *)*puVar5,param_1), iVar2 == 0))
        goto LAB_00af79ac;
        uVar8 = uVar8 + 1;
        puVar5 = puVar5 + 3;
      } while (uVar8 < uVar6);
    }
    else {
      uVar8 = 0;
      do {
        uVar7 = *(uint *)((long)puVar5 + 0xc);
        if ((((uVar1 & 0xc & uVar7) != 0) && (*(int *)(puVar5 + 1) == param_2)) &&
           (iVar2 = strncasecmp((char *)*puVar5,param_1,(long)param_2), iVar2 == 0)) {
LAB_00af79ac:
          puVar4 = param_3 + 10;
          if (*(long *)puVar4 != 0) {
            uVar1 = uVar7 & 0xf00;
            if (uVar1 != 0) {
              if (uVar1 == 0x200) {
                puVar4 = param_3 + 0x1c;
              }
              else {
                if (uVar1 != 0x100) {
                  return 1;
                }
                puVar4 = param_3 + 0x1a;
              }
            }
            puVar4 = *(uint **)puVar4;
            if ((uVar7 & 1) == uVar3) {
              uVar3 = *puVar4 & ((uint)puVar5[2] ^ 0xffffffff);
            }
            else {
              uVar3 = (uint)puVar5[2] | *puVar4;
            }
            *puVar4 = uVar3;
          }
          return 1;
        }
        uVar8 = uVar8 + 1;
        puVar5 = puVar5 + 3;
      } while (uVar8 < uVar6);
    }
  }
  return 0;
}

